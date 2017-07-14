#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (EARLY ACCESS v2.2.33) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Engine.TickFunction
// 0x0050
struct FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) MISSED OFFSET
	TEnumAsByte<enum class ETickingGroup>              TickGroup;                                        		// 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class ETickingGroup>              EndTickGroup;                                     		// 0x0009(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                               		// 0x000A(0x0002) MISSED OFFSET
	unsigned char                                      bTickEvenWhenPaused : 1;                          		// 0x000C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bCanEverTick : 1;                                 		// 0x000C(0x0001)
	unsigned char                                      bStartWithTickEnabled : 1;                        		// 0x000C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bAllowTickOnDedicatedServer : 1;                  		// 0x000C(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData02[0x33];                              		// 0x000D(0x0033) MISSED OFFSET
	float                                              TickInterval;                                     		// 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                               		// 0x0044(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.ActorTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FActorTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RepMovement
// 0x0034
struct FRepMovement
{
	struct FVector                                     LinearVelocity;                                   		// 0x0000(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     AngularVelocity;                                  		// 0x000C(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Location;                                         		// 0x0018(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                         		// 0x0024(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bSimulatedPhysicSleep : 1;                        		// 0x0030(0x0001) (CPF_Transient)
	unsigned char                                      bRepPhysics : 1;                                  		// 0x0030(0x0001) (CPF_Transient)
	TEnumAsByte<enum class EVectorQuantization>        LocationQuantizationLevel;                        		// 0x0031(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class EVectorQuantization>        VelocityQuantizationLevel;                        		// 0x0032(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class ERotatorQuantization>       RotationQuantizationLevel;                        		// 0x0033(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize100
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize100 : public FVector
{

};

// ScriptStruct Engine.RepAttachment
// 0x0040
struct FRepAttachment
{
	class AActor*                                      AttachParent;                                     		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize100                      LocationOffset;                                   		// 0x0008(0x000C)
	struct FVector_NetQuantize100                      RelativeScale3D;                                  		// 0x0014(0x000C)
	struct FRotator                                    RotationOffset;                                   		// 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x002C(0x0004) MISSED OFFSET
	struct FName                                       AttachSocket;                                     		// 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             AttachComponent;                                  		// 0x0038(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DebugTextInfo
// 0x0060
struct FDebugTextInfo
{
	class AActor*                                      SrcActor;                                         		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SrcActorOffset;                                   		// 0x0008(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SrcActorDesiredOffset;                            		// 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     DebugText;                                        		// 0x0020(0x0010) (CPF_ZeroConstructor)
	float                                              TimeRemaining;                                    		// 0x0030(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              Duration;                                         		// 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      TextColor;                                        		// 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAbsoluteLocation : 1;                            		// 0x003C(0x0001)
	unsigned char                                      bKeepAttachedToActor : 1;                         		// 0x003C(0x0001)
	unsigned char                                      bDrawShadow : 1;                                  		// 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x003D(0x0003) MISSED OFFSET
	struct FVector                                     OrigActorLocation;                                		// 0x0040(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x004C(0x0004) MISSED OFFSET
	class UFont*                                       Font;                                             		// 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FontScale;                                        		// 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ActorComponentTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FActorComponentTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SimpleMemberReference
// 0x0020
struct FSimpleMemberReference
{
	class UObject*                                     MemberParent;                                     		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       MemberName;                                       		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       MemberGuid;                                       		// 0x0010(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.LightingChannels
// 0x0003
struct FLightingChannels
{
	unsigned char                                      bChannel0 : 1;                                    		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bChannel1 : 1;                                    		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bChannel2 : 1;                                    		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CollisionResponseContainer
// 0x0020
struct FCollisionResponseContainer
{
	TEnumAsByte<enum class ECollisionResponse>         WorldStatic;                                      		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         WorldDynamic;                                     		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         Pawn;                                             		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         Visibility;                                       		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         Camera;                                           		// 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         PhysicsBody;                                      		// 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         Vehicle;                                          		// 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         Destructible;                                     		// 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         EngineTraceChannel1;                              		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         EngineTraceChannel2;                              		// 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         EngineTraceChannel3;                              		// 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         EngineTraceChannel4;                              		// 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         EngineTraceChannel5;                              		// 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         EngineTraceChannel6;                              		// 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel1;                                		// 0x000E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel2;                                		// 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel3;                                		// 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel4;                                		// 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel5;                                		// 0x0012(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel6;                                		// 0x0013(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel7;                                		// 0x0014(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel8;                                		// 0x0015(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel9;                                		// 0x0016(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel10;                               		// 0x0017(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel11;                               		// 0x0018(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel12;                               		// 0x0019(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel13;                               		// 0x001A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel14;                               		// 0x001B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel15;                               		// 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel16;                               		// 0x001D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel17;                               		// 0x001E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         GameTraceChannel18;                               		// 0x001F(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ResponseChannel
// 0x0010
struct FResponseChannel
{
	struct FName                                       Channel;                                          		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         Response;                                         		// 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CollisionResponse
// 0x0030
struct FCollisionResponse
{
	struct FCollisionResponseContainer                 ResponseToChannels;                               		// 0x0000(0x0020) (CPF_Transient)
	TArray<struct FResponseChannel>                    ResponseArray;                                    		// 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.WalkableSlopeOverride
// 0x0008
struct FWalkableSlopeOverride
{
	TEnumAsByte<enum class EWalkableSlopeBehavior>     WalkableSlopeBehavior;                            		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              WalkableSlopeAngle;                               		// 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BodyInstance
// 0x01B0
struct FBodyInstance
{
	unsigned char                                      UnknownData00[0x14];                              		// 0x0000(0x0014) MISSED OFFSET
	struct FCollisionResponseContainer                 ResponseToChannels;                               		// 0x0014(0x0020) (CPF_Deprecated)
	unsigned char                                      UnknownData01[0x4];                               		// 0x0034(0x0004) MISSED OFFSET
	struct FName                                       CollisionProfileName;                             		// 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FCollisionResponse                          CollisionResponses;                               		// 0x0040(0x0030) (CPF_Edit)
	unsigned char                                      UnknownData02[0x4];                               		// 0x0070(0x0004) MISSED OFFSET
	unsigned char                                      bUseCCD : 1;                                      		// 0x0074(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bNotifyRigidBodyCollision : 1;                    		// 0x0074(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bSimulatePhysics : 1;                             		// 0x0074(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverrideMass : 1;                                		// 0x0074(0x0001) (CPF_Edit)
	unsigned char                                      bEnableGravity : 1;                               		// 0x0074(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bAutoWeld : 1;                                    		// 0x0074(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bStartAwake : 1;                                  		// 0x0074(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bGenerateWakeEvents : 1;                          		// 0x0075(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bUpdateMassWhenScaleChanges : 1;                  		// 0x0075(0x0001)
	unsigned char                                      bLockTranslation : 1;                             		// 0x0075(0x0001) (CPF_Edit)
	unsigned char                                      bLockRotation : 1;                                		// 0x0075(0x0001) (CPF_Edit)
	unsigned char                                      bLockXTranslation : 1;                            		// 0x0075(0x0001) (CPF_Edit)
	unsigned char                                      bLockYTranslation : 1;                            		// 0x0075(0x0001) (CPF_Edit)
	unsigned char                                      bLockZTranslation : 1;                            		// 0x0075(0x0001) (CPF_Edit)
	unsigned char                                      bLockXRotation : 1;                               		// 0x0075(0x0001) (CPF_Edit)
	unsigned char                                      bLockYRotation : 1;                               		// 0x0076(0x0001) (CPF_Edit)
	unsigned char                                      bLockZRotation : 1;                               		// 0x0076(0x0001) (CPF_Edit)
	unsigned char                                      bOverrideMaxAngularVelocity : 1;                  		// 0x0076(0x0001) (CPF_Edit)
	unsigned char                                      bUseAsyncScene : 1;                               		// 0x0076(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverrideMaxDepenetrationVelocity : 1;            		// 0x0076(0x0001) (CPF_Edit)
	unsigned char                                      bOverrideWalkableSlopeOnInstance : 1;             		// 0x0076(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData03[0x1];                               		// 0x0077(0x0001) MISSED OFFSET
	float                                              MaxDepenetrationVelocity;                         		// 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                               		// 0x007C(0x0008) MISSED OFFSET
	float                                              MassInKgOverride;                                 		// 0x0084(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LinearDamping;                                    		// 0x0088(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularDamping;                                   		// 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     CustomDOFPlaneNormal;                             		// 0x0090(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     COMNudge;                                         		// 0x009C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MassScale;                                        		// 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x14];                              		// 0x00AC(0x0014) MISSED OFFSET
	struct FWalkableSlopeOverride                      WalkableSlopeOverride;                            		// 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UPhysicalMaterial*                           PhysMaterialOverride;                             		// 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAngularVelocity;                               		// 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CustomSleepThresholdMultiplier;                   		// 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PhysicsBlendWeight;                               		// 0x00D8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PositionSolverIterationCount;                     		// 0x00DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x28];                              		// 0x00E0(0x0028) MISSED OFFSET
	uint64_t                                           RigidActorSyncId;                                 		// 0x0108(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint64_t                                           RigidActorAsyncId;                                		// 0x0110(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                VelocitySolverIterationCount;                     		// 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x90];                              		// 0x011C(0x0090) MISSED OFFSET
	TEnumAsByte<enum class ESleepFamily>               SleepFamily;                                      		// 0x01AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EDOFMode>                   DOFMode;                                          		// 0x01AD(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionEnabled>          CollisionEnabled;                                 		// 0x01AE(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionChannel>          ObjectType;                                       		// 0x01AF(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PrimitiveComponentPostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FPrimitiveComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PaintedVertex
// 0x0014
struct FPaintedVertex
{
	struct FVector                                     Position;                                         		// 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FPackedNormal                               Normal;                                           		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color;                                            		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// 0x00B0
struct FStaticMeshComponentLODInfo
{
	unsigned char                                      UnknownData00[0x20];                              		// 0x0000(0x0020) MISSED OFFSET
	TArray<struct FPaintedVertex>                      PaintedVertices;                                  		// 0x0020(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x80];                              		// 0x0030(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.StreamingTextureBuildInfo
// 0x000C
struct FStreamingTextureBuildInfo
{
	uint32_t                                           PackedRelativeBox;                                		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TextureLevelIndex;                                		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TexelFactor;                                      		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// 0x0018
struct FLightmassPrimitiveSettings
{
	unsigned char                                      bUseTwoSidedLighting : 1;                         		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bShadowIndirectOnly : 1;                          		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bUseEmissiveForStaticLighting : 1;                		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bUseVertexNormalForHemisphereGather : 1;          		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              EmissiveLightFalloffExponent;                     		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EmissiveLightExplicitInfluenceRadius;             		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EmissiveBoost;                                    		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DiffuseBoost;                                     		// 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FullyOccludedSamplesFraction;                     		// 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BasedMovementInfo
// 0x0030
struct FBasedMovementInfo
{
	class UPrimitiveComponent*                         MovementBase;                                     		// 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                         		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                         		// 0x0010(0x000C)
	struct FRotator                                    Rotation;                                         		// 0x001C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bServerHasBaseComponent : 1;                      		// 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRelativeRotation : 1;                            		// 0x0029(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bServerHasVelocity : 1;                           		// 0x002A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.Vector_NetQuantize10
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize10 : public FVector
{

};

// ScriptStruct Engine.RootMotionSourceSettings
// 0x0001
struct FRootMotionSourceSettings
{
	unsigned char                                      Flags;                                            		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSourceGroup
// 0x0100
struct alignas(8) FRootMotionSourceGroup
{
	unsigned char                                      UnknownData00[0xE8];                              		// 0x0000(0x00E8) MISSED OFFSET
	unsigned char                                      bHasAdditiveSources : 1;                          		// 0x00E8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bHasOverrideSources : 1;                          		// 0x00E9(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                               		// 0x00EA(0x0002) MISSED OFFSET
	struct FVector_NetQuantize10                       LastPreAdditiveVelocity;                          		// 0x00EC(0x000C)
	unsigned char                                      bIsAdditiveVelocityApplied : 1;                   		// 0x00F8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRootMotionSourceSettings                   LastAccumulatedSettings;                          		// 0x00F9(0x0001)
};

// ScriptStruct Engine.RootMotionMovementParams
// 0x0040
struct FRootMotionMovementParams
{
	unsigned char                                      bHasRootMotion : 1;                               		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              BlendWeight;                                      		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  RootMotionTransform;                              		// 0x0010(0x0030) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.RepRootMotionMontage
// 0x0160
struct FRepRootMotionMontage
{
	unsigned char                                      bIsActive : 1;                                    		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0001(0x0007) MISSED OFFSET
	class UAnimMontage*                                AnimMontage;                                      		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Position;                                         		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize100                      Location;                                         		// 0x0014(0x000C)
	struct FRotator                                    Rotation;                                         		// 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x002C(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         MovementBase;                                     		// 0x0030(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       MovementBaseBoneName;                             		// 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRelativePosition : 1;                            		// 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRelativeRotation : 1;                            		// 0x0041(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                               		// 0x0042(0x0006) MISSED OFFSET
	struct FRootMotionSourceGroup                      AuthoritativeRootMotion;                          		// 0x0048(0x0100)
	struct FVector_NetQuantize10                       Acceleration;                                     		// 0x0148(0x000C)
	struct FVector_NetQuantize10                       LinearVelocity;                                   		// 0x0154(0x000C)
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// 0x0168
struct FSimulatedRootMotionReplicatedMove
{
	float                                              Time;                                             		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	struct FRepRootMotionMontage                       RootMotion;                                       		// 0x0008(0x0160)
};

// ScriptStruct Engine.MovementProperties
// 0x0004
struct FMovementProperties
{
	unsigned char                                      bCanCrouch : 1;                                   		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCanJump : 1;                                     		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCanWalk : 1;                                     		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCanSwim : 1;                                     		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCanFly : 1;                                      		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.NavAgentProperties
// 0x001C (0x0020 - 0x0004)
struct FNavAgentProperties : public FMovementProperties
{
	float                                              AgentRadius;                                      		// 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AgentHeight;                                      		// 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AgentStepHeight;                                  		// 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NavWalkingSearchHeightScale;                      		// 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      PreferredNavData;                                 		// 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.GeomSelection
// 0x000C
struct FGeomSelection
{
	int                                                Type;                                             		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Index;                                            		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SelectionIndex;                                   		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimLinkableElement
// 0x0030
struct FAnimLinkableElement
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) MISSED OFFSET
	class UAnimMontage*                                LinkedMontage;                                    		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SlotIndex;                                        		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SegmentIndex;                                     		// 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAnimLinkMethod>            LinkMethod;                                       		// 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAnimLinkMethod>            CachedLinkMethod;                                 		// 0x0019(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                               		// 0x001A(0x0002) MISSED OFFSET
	float                                              SegmentBeginTime;                                 		// 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SegmentLength;                                    		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LinkValue;                                        		// 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           LinkedSequence;                                   		// 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimNotifyEvent
// 0x0078 (0x00A8 - 0x0030)
struct FAnimNotifyEvent : public FAnimLinkableElement
{
	float                                              DisplayTime;                                      		// 0x0030(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              TriggerTimeOffset;                                		// 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndTriggerTimeOffset;                             		// 0x0038(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TriggerWeightThreshold;                           		// 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NotifyName;                                       		// 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimNotify*                                 Notify;                                           		// 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAnimNotifyState*                            NotifyStateClass;                                 		// 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Duration;                                         		// 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x005C(0x0004) MISSED OFFSET
	struct FAnimLinkableElement                        EndLink;                                          		// 0x0060(0x0030)
	unsigned char                                      bConvertedFromBranchingPoint : 1;                 		// 0x0090(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EMontageNotifyTickType>     MontageTickType;                                  		// 0x0091(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                               		// 0x0092(0x0002) MISSED OFFSET
	float                                              NotifyTriggerChance;                              		// 0x0094(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ENotifyFilterType>          NotifyFilterType;                                 		// 0x0098(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                               		// 0x0099(0x0003) MISSED OFFSET
	int                                                NotifyFilterLOD;                                  		// 0x009C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTriggerOnDedicatedServer : 1;                    		// 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                               		// 0x00A1(0x0003) MISSED OFFSET
	int                                                TrackIndex;                                       		// 0x00A4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// 0x0018
struct FActiveForceFeedbackEffect
{
	class UForceFeedbackEffect*                        ForceFeedbackEffect;                              		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                              		// 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.WeightedBlendable
// 0x0010
struct FWeightedBlendable
{
	float                                              Weight;                                           		// 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	class UObject*                                     Object;                                           		// 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.WeightedBlendables
// 0x0010
struct FWeightedBlendables
{
	TArray<struct FWeightedBlendable>                  Array;                                            		// 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct Engine.PostProcessSettings
// 0x04C0
struct FPostProcessSettings
{
	unsigned char                                      bOverride_WhiteTemp : 1;                          		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_WhiteTint : 1;                          		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturation : 1;                    		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorContrast : 1;                      		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGamma : 1;                         		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGain : 1;                          		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorOffset : 1;                        		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationShadows : 1;             		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastShadows : 1;               		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaShadows : 1;                  		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGainShadows : 1;                   		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetShadows : 1;                 		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationMidtones : 1;            		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastMidtones : 1;              		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaMidtones : 1;                 		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGainMidtones : 1;                  		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetMidtones : 1;                		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorSaturationHighlights : 1;          		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorContrastHighlights : 1;            		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGammaHighlights : 1;               		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGainHighlights : 1;                		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorOffsetHighlights : 1;              		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorCorrectionShadowsMax : 1;          		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorCorrectionHighlightsMin : 1;       		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmWhitePoint : 1;                     		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmSaturation : 1;                     		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerRed : 1;                		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerGreen : 1;              		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmChannelMixerBlue : 1;               		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmContrast : 1;                       		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmDynamicRange : 1;                   		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmHealAmount : 1;                     		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmToeAmount : 1;                      		// 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTint : 1;                     		// 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTintBlend : 1;                		// 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmShadowTintAmount : 1;               		// 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmSlope : 1;                          		// 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmToe : 1;                            		// 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmShoulder : 1;                       		// 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmBlackClip : 1;                      		// 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_FilmWhiteClip : 1;                      		// 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_SceneColorTint : 1;                     		// 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_SceneFringeIntensity : 1;               		// 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapTint : 1;                 		// 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientCubemapIntensity : 1;            		// 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomIntensity : 1;                     		// 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomThreshold : 1;                     		// 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom1Tint : 1;                         		// 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom1Size : 1;                         		// 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Size : 1;                         		// 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom2Tint : 1;                         		// 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Tint : 1;                         		// 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom3Size : 1;                         		// 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom4Tint : 1;                         		// 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom4Size : 1;                         		// 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Tint : 1;                         		// 0x0006(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom5Size : 1;                         		// 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Tint : 1;                         		// 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_Bloom6Size : 1;                         		// 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomSizeScale : 1;                     		// 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskIntensity : 1;             		// 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMaskTint : 1;                  		// 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_BloomDirtMask : 1;                      		// 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMethod : 1;                 		// 0x0007(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureLowPercent : 1;             		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureHighPercent : 1;            		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMinBrightness : 1;          		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureMaxBrightness : 1;          		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureSpeedUp : 1;                		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureSpeedDown : 1;              		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AutoExposureBias : 1;                   		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_HistogramLogMin : 1;                    		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_HistogramLogMax : 1;                    		// 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LensFlareIntensity : 1;                 		// 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTint : 1;                      		// 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LensFlareTints : 1;                     		// 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehSize : 1;                 		// 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LensFlareBokehShape : 1;                		// 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LensFlareThreshold : 1;                 		// 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_VignetteIntensity : 1;                  		// 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_GrainIntensity : 1;                     		// 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_GrainJitter : 1;                        		// 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionIntensity : 1;          		// 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionStaticFraction : 1;     		// 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionRadius : 1;             		// 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeDistance : 1;       		// 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionFadeRadius : 1;         		// 0x000A(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionDistance : 1;           		// 0x000A(0x0001) (CPF_Deprecated)
	unsigned char                                      bOverride_AmbientOcclusionRadiusInWS : 1;         		// 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionPower : 1;              		// 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionBias : 1;               		// 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionQuality : 1;            		// 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipBlend : 1;           		// 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipScale : 1;           		// 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_AmbientOcclusionMipThreshold : 1;       		// 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVIntensity : 1;                       		// 0x000B(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVDirectionalOcclusionIntensity : 1;   		// 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_LPVDirectionalOcclusionRadius : 1;      		// 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_LPVDiffuseOcclusionExponent : 1;        		// 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_LPVSpecularOcclusionExponent : 1;       		// 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_LPVDiffuseOcclusionIntensity : 1;       		// 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_LPVSpecularOcclusionIntensity : 1;      		// 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      bOverride_LPVSize : 1;                            		// 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryOcclusionIntensity : 1;     		// 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVSecondaryBounceIntensity : 1;        		// 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVGeometryVolumeBias : 1;              		// 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVVplInjectionBias : 1;                		// 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_LPVEmissiveInjectionIntensity : 1;      		// 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_IndirectLightingColor : 1;              		// 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_IndirectLightingIntensity : 1;          		// 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGradingIntensity : 1;              		// 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ColorGradingLUT : 1;                    		// 0x000D(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFocalDistance : 1;          		// 0x000E(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFstop : 1;                  		// 0x000E(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSensorWidth : 1;            		// 0x000E(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurRadius : 1;        		// 0x000E(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldDepthBlurAmount : 1;        		// 0x000E(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFocalRegion : 1;            		// 0x000E(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldNearTransitionRegion : 1;   		// 0x000E(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFarTransitionRegion : 1;    		// 0x000E(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldScale : 1;                  		// 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldMaxBokehSize : 1;           		// 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldNearBlurSize : 1;           		// 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldFarBlurSize : 1;            		// 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldMethod : 1;                 		// 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_MobileHQGaussian : 1;                   		// 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldBokehShape : 1;             		// 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldOcclusion : 1;              		// 0x000F(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldColorThreshold : 1;         		// 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSizeThreshold : 1;          		// 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldSkyFocusDistance : 1;       		// 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_DepthOfFieldVignetteSize : 1;           		// 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurAmount : 1;                   		// 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurMax : 1;                      		// 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_MotionBlurPerObjectSize : 1;            		// 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ScreenPercentage : 1;                   		// 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionIntensity : 1;     		// 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionQuality : 1;       		// 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionMaxRoughness : 1;  		// 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOverride_ScreenSpaceReflectionRoughnessScale : 1;		// 0x0011(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x2];                               		// 0x0012(0x0002) MISSED OFFSET
	float                                              WhiteTemp;                                        		// 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WhiteTint;                                        		// 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x001C(0x0004) MISSED OFFSET
	struct FVector4                                    ColorSaturation;                                  		// 0x0020(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorContrast;                                    		// 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorGamma;                                       		// 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorGain;                                        		// 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorOffset;                                      		// 0x0060(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorSaturationShadows;                           		// 0x0070(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorContrastShadows;                             		// 0x0080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorGammaShadows;                                		// 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorGainShadows;                                 		// 0x00A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorOffsetShadows;                               		// 0x00B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ColorCorrectionShadowsMax;                        		// 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                               		// 0x00C4(0x000C) MISSED OFFSET
	struct FVector4                                    ColorSaturationMidtones;                          		// 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorContrastMidtones;                            		// 0x00E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorGammaMidtones;                               		// 0x00F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorGainMidtones;                                		// 0x0100(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorOffsetMidtones;                              		// 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorSaturationHighlights;                        		// 0x0120(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorContrastHighlights;                          		// 0x0130(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorGammaHighlights;                             		// 0x0140(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorGainHighlights;                              		// 0x0150(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorOffsetHighlights;                            		// 0x0160(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ColorCorrectionHighlightsMin;                     		// 0x0170(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                FilmWhitePoint;                                   		// 0x0174(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                FilmShadowTint;                                   		// 0x0184(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmShadowTintBlend;                              		// 0x0194(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmShadowTintAmount;                             		// 0x0198(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmSaturation;                                   		// 0x019C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerRed;                              		// 0x01A0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerGreen;                            		// 0x01B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                FilmChannelMixerBlue;                             		// 0x01C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmContrast;                                     		// 0x01D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmToeAmount;                                    		// 0x01D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmHealAmount;                                   		// 0x01D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmDynamicRange;                                 		// 0x01DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmSlope;                                        		// 0x01E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmToe;                                          		// 0x01E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmShoulder;                                     		// 0x01E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmBlackClip;                                    		// 0x01EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FilmWhiteClip;                                    		// 0x01F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                SceneColorTint;                                   		// 0x01F4(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SceneFringeIntensity;                             		// 0x0204(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BloomIntensity;                                   		// 0x0208(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BloomThreshold;                                   		// 0x020C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BloomSizeScale;                                   		// 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bloom1Size;                                       		// 0x0214(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bloom2Size;                                       		// 0x0218(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bloom3Size;                                       		// 0x021C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bloom4Size;                                       		// 0x0220(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bloom5Size;                                       		// 0x0224(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bloom6Size;                                       		// 0x0228(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Bloom1Tint;                                       		// 0x022C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Bloom2Tint;                                       		// 0x023C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Bloom3Tint;                                       		// 0x024C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Bloom4Tint;                                       		// 0x025C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Bloom5Tint;                                       		// 0x026C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Bloom6Tint;                                       		// 0x027C(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BloomDirtMaskIntensity;                           		// 0x028C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                BloomDirtMaskTint;                                		// 0x0290(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    BloomDirtMask;                                    		// 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVIntensity;                                     		// 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVVplInjectionBias;                              		// 0x02AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVSize;                                          		// 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVSecondaryOcclusionIntensity;                   		// 0x02B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVSecondaryBounceIntensity;                      		// 0x02B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVGeometryVolumeBias;                            		// 0x02BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVEmissiveInjectionIntensity;                    		// 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVDirectionalOcclusionIntensity;                 		// 0x02C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVDirectionalOcclusionRadius;                    		// 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVDiffuseOcclusionExponent;                      		// 0x02CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVSpecularOcclusionExponent;                     		// 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVDiffuseOcclusionIntensity;                     		// 0x02D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPVSpecularOcclusionIntensity;                    		// 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                AmbientCubemapTint;                               		// 0x02DC(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientCubemapIntensity;                          		// 0x02EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTextureCube*                                AmbientCubemap;                                   		// 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAutoExposureMethod>        AutoExposureMethod;                               		// 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                               		// 0x02F9(0x0003) MISSED OFFSET
	float                                              AutoExposureLowPercent;                           		// 0x02FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoExposureHighPercent;                          		// 0x0300(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoExposureMinBrightness;                        		// 0x0304(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoExposureMaxBrightness;                        		// 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoExposureSpeedUp;                              		// 0x030C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoExposureSpeedDown;                            		// 0x0310(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoExposureBias;                                 		// 0x0314(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HistogramLogMin;                                  		// 0x0318(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HistogramLogMax;                                  		// 0x031C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LensFlareIntensity;                               		// 0x0320(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                LensFlareTint;                                    		// 0x0324(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LensFlareBokehSize;                               		// 0x0334(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LensFlareThreshold;                               		// 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                               		// 0x033C(0x0004) MISSED OFFSET
	class UTexture*                                    LensFlareBokehShape;                              		// 0x0340(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                LensFlareTints[0x8];                              		// 0x0348(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VignetteIntensity;                                		// 0x03C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GrainJitter;                                      		// 0x03CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GrainIntensity;                                   		// 0x03D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionIntensity;                        		// 0x03D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionStaticFraction;                   		// 0x03D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionRadius;                           		// 0x03DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AmbientOcclusionRadiusInWS : 1;                   		// 0x03E0(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData05[0x3];                               		// 0x03E1(0x0003) MISSED OFFSET
	float                                              AmbientOcclusionFadeDistance;                     		// 0x03E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionFadeRadius;                       		// 0x03E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionDistance;                         		// 0x03EC(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              AmbientOcclusionPower;                            		// 0x03F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionBias;                             		// 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionQuality;                          		// 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionMipBlend;                         		// 0x03FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionMipScale;                         		// 0x0400(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AmbientOcclusionMipThreshold;                     		// 0x0404(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                IndirectLightingColor;                            		// 0x0408(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IndirectLightingIntensity;                        		// 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ColorGradingIntensity;                            		// 0x041C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    ColorGradingLUT;                                  		// 0x0420(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EDepthOfFieldMethod>        DepthOfFieldMethod;                               		// 0x0428(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                               		// 0x0429(0x0003) MISSED OFFSET
	unsigned char                                      bMobileHQGaussian : 1;                            		// 0x042C(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData07[0x3];                               		// 0x042D(0x0003) MISSED OFFSET
	float                                              DepthOfFieldFstop;                                		// 0x0430(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldSensorWidth;                          		// 0x0434(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldFocalDistance;                        		// 0x0438(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldDepthBlurAmount;                      		// 0x043C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldDepthBlurRadius;                      		// 0x0440(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldFocalRegion;                          		// 0x0444(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldNearTransitionRegion;                 		// 0x0448(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldFarTransitionRegion;                  		// 0x044C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldScale;                                		// 0x0450(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldMaxBokehSize;                         		// 0x0454(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldNearBlurSize;                         		// 0x0458(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldFarBlurSize;                          		// 0x045C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    DepthOfFieldBokehShape;                           		// 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldOcclusion;                            		// 0x0468(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldColorThreshold;                       		// 0x046C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldSizeThreshold;                        		// 0x0470(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldSkyFocusDistance;                     		// 0x0474(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DepthOfFieldVignetteSize;                         		// 0x0478(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MotionBlurAmount;                                 		// 0x047C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MotionBlurMax;                                    		// 0x0480(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MotionBlurPerObjectSize;                          		// 0x0484(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScreenPercentage;                                 		// 0x0488(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScreenSpaceReflectionIntensity;                   		// 0x048C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScreenSpaceReflectionQuality;                     		// 0x0490(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScreenSpaceReflectionMaxRoughness;                		// 0x0494(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWeightedBlendables                         WeightedBlendables;                               		// 0x0498(0x0010) (CPF_Edit)
	TArray<class UObject*>                             Blendables;                                       		// 0x04A8(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	unsigned char                                      UnknownData08[0x8];                               		// 0x04B8(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.Vector_NetQuantize
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantize : public FVector
{

};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// 0x0000 (0x000C - 0x000C)
struct FVector_NetQuantizeNormal : public FVector
{

};

// ScriptStruct Engine.HitResult
// 0x0088
struct FHitResult
{
	unsigned char                                      bBlockingHit : 1;                                 		// 0x0000(0x0001)
	unsigned char                                      bStartPenetrating : 1;                            		// 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              Time;                                             		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Distance;                                         		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize                         Location;                                         		// 0x000C(0x000C)
	struct FVector_NetQuantize                         ImpactPoint;                                      		// 0x0018(0x000C)
	struct FVector_NetQuantizeNormal                   Normal;                                           		// 0x0024(0x000C)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                     		// 0x0030(0x000C)
	struct FVector_NetQuantize                         TraceStart;                                       		// 0x003C(0x000C)
	struct FVector_NetQuantize                         TraceEnd;                                         		// 0x0048(0x000C)
	float                                              PenetrationDepth;                                 		// 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Item;                                             		// 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;                                     		// 0x005C(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Actor;                                            		// 0x0064(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                        		// 0x006C(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x0074(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                         		// 0x0078(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FaceIndex;                                        		// 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.FindFloorResult
// 0x0098
struct FFindFloorResult
{
	unsigned char                                      bBlockingHit : 1;                                 		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_EditConst)
	unsigned char                                      bWalkableFloor : 1;                               		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_EditConst)
	unsigned char                                      bLineTrace : 1;                                   		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_EditConst)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              FloorDist;                                        		// 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	float                                              LineDist;                                         		// 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x000C(0x0004) MISSED OFFSET
	struct FHitResult                                  HitResult;                                        		// 0x0010(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnTemplate, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NavAvoidanceMask
// 0x0004
struct FNavAvoidanceMask
{
	unsigned char                                      bGroup0 : 1;                                      		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup1 : 1;                                      		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup2 : 1;                                      		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup3 : 1;                                      		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup4 : 1;                                      		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup5 : 1;                                      		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup6 : 1;                                      		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup7 : 1;                                      		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup8 : 1;                                      		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup9 : 1;                                      		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup10 : 1;                                     		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup11 : 1;                                     		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup12 : 1;                                     		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup13 : 1;                                     		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup14 : 1;                                     		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup15 : 1;                                     		// 0x0001(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup16 : 1;                                     		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup17 : 1;                                     		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup18 : 1;                                     		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup19 : 1;                                     		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup20 : 1;                                     		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup21 : 1;                                     		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup22 : 1;                                     		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup23 : 1;                                     		// 0x0002(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup24 : 1;                                     		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup25 : 1;                                     		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup26 : 1;                                     		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup27 : 1;                                     		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup28 : 1;                                     		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup29 : 1;                                     		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup30 : 1;                                     		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGroup31 : 1;                                     		// 0x0003(0x0001) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FCharacterMovementComponentPostPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StatColorMapEntry
// 0x0008
struct FStatColorMapEntry
{
	float                                              In;                                               		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
	struct FColor                                      Out;                                              		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig, CPF_IsPlainOldData)
};

// ScriptStruct Engine.StatColorMapping
// 0x0028
struct FStatColorMapping
{
	struct FString                                     StatName;                                         		// 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	TArray<struct FStatColorMapEntry>                  ColorMap;                                         		// 0x0010(0x0010) (CPF_ZeroConstructor, CPF_Config, CPF_GlobalConfig)
	unsigned char                                      DisableBlend : 1;                                 		// 0x0020(0x0001) (CPF_Config, CPF_GlobalConfig)
};

// ScriptStruct Engine.GameNameRedirect
// 0x0010
struct FGameNameRedirect
{
	struct FName                                       OldGameName;                                      		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NewGameName;                                      		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ClassRedirect
// 0x0040
struct FClassRedirect
{
	struct FName                                       ObjectName;                                       		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       OldClassName;                                     		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NewClassName;                                     		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       OldSubobjName;                                    		// 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NewSubobjName;                                    		// 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NewClassClass;                                    		// 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NewClassPackage;                                  		// 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      InstanceOnly : 1;                                 		// 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PluginRedirect
// 0x0020
struct FPluginRedirect
{
	struct FString                                     OldPluginName;                                    		// 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     NewPluginName;                                    		// 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.StructRedirect
// 0x0010
struct FStructRedirect
{
	struct FName                                       OldStructName;                                    		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NewStructName;                                    		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DropNoteInfo
// 0x0028
struct FDropNoteInfo
{
	struct FVector                                     Location;                                         		// 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                         		// 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Comment;                                          		// 0x0018(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// 0x001C
struct FRigidBodyErrorCorrection
{
	float                                              LinearDeltaThresholdSq;                           		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LinearInterpAlpha;                                		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LinearRecipFixTime;                               		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularDeltaThreshold;                            		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularInterpAlpha;                               		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularRecipFixTime;                              		// 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BodySpeedThresholdSq;                             		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NetDriverDefinition
// 0x0018
struct FNetDriverDefinition
{
	struct FName                                       DefName;                                          		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DriverClassName;                                  		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DriverClassNameFallback;                          		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DebugDisplayProperty
// 0x0020
struct FDebugDisplayProperty
{
	class UObject*                                     Obj;                                              		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      WithinClass;                                      		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                              		// 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// 0x0010
struct FSkelMeshComponentLODInfo
{
	TArray<unsigned char>                              HiddenMaterials;                                  		// 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.FractureEffect
// 0x0010
struct FFractureEffect
{
	class UParticleSystem*                             ParticleSystem;                                   		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundBase*                                  Sound;                                            		// 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// 0x0050
struct FInstancedStaticMeshInstanceData
{
	struct FMatrix                                     Transform;                                        		// 0x0000(0x0040) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   LightmapUVBias;                                   		// 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FVector2D                                   ShadowmapUVBias;                                  		// 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// 0x0008
struct FInstancedStaticMeshMappingInfo
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.MinimalViewInfo
// 0x0510
struct FMinimalViewInfo
{
	struct FVector                                     Location;                                         		// 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                         		// 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FOV;                                              		// 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OrthoWidth;                                       		// 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OrthoNearClipPlane;                               		// 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OrthoFarClipPlane;                                		// 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AspectRatio;                                      		// 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bConstrainAspectRatio : 1;                        		// 0x002C(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bUseFieldOfViewForLOD : 1;                        		// 0x002C(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                               		// 0x002D(0x0003) MISSED OFFSET
	TEnumAsByte<enum class ECameraProjectionMode>      ProjectionMode;                                   		// 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0031(0x0003) MISSED OFFSET
	float                                              PostProcessBlendWeight;                           		// 0x0034(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                               		// 0x0038(0x0008) MISSED OFFSET
	struct FPostProcessSettings                        PostProcessSettings;                              		// 0x0040(0x04C0) (CPF_BlueprintVisible)
	struct FVector2D                                   OffCenterProjectionOffset;                        		// 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                               		// 0x0508(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CameraCacheEntry
// 0x0520
struct FCameraCacheEntry
{
	float                                              TimeStamp;                                        		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                               		// 0x0004(0x000C) MISSED OFFSET
	struct FMinimalViewInfo                            POV;                                              		// 0x0010(0x0510)
};

// ScriptStruct Engine.TViewTarget
// 0x0530
struct FTViewTarget
{
	class AActor*                                      Target;                                           		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0008(0x0008) MISSED OFFSET
	struct FMinimalViewInfo                            POV;                                              		// 0x0010(0x0510) (CPF_Edit, CPF_BlueprintVisible)
	class APlayerState*                                PlayerState;                                      		// 0x0520(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0528(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.UniqueNetIdRepl
// 0x0017 (0x0018 - 0x0001)
struct FUniqueNetIdRepl : public FUniqueNetIdWrapper
{
	unsigned char                                      UnknownData00[0x17];                              		// 0x0001(0x0017) MISSED OFFSET
};

// ScriptStruct Engine.EngineShowFlagsSetting
// 0x0018
struct FEngineShowFlagsSetting
{
	struct FString                                     ShowFlagName;                                     		// 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      Enabled : 1;                                      		// 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.WheelSetup
// 0x0028
struct FWheelSetup
{
	class UClass*                                      WheelClass;                                       		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      PuncturedWheelClass;                              		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                         		// 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AdditionalOffset;                                 		// 0x0018(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ReplicatedVehicleState
// 0x0014
struct FReplicatedVehicleState
{
	float                                              SteeringInput;                                    		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThrottleInput;                                    		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BrakeInput;                                       		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HandbrakeInput;                                   		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentGear;                                      		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.VehicleInputRate
// 0x0008
struct FVehicleInputRate
{
	float                                              RiseRate;                                         		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FallRate;                                         		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.KeyHandleMap
// 0x0050
struct FKeyHandleMap
{
	unsigned char                                      UnknownData00[0x50];                              		// 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.IndexedCurve
// 0x0058
struct FIndexedCurve
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) MISSED OFFSET
	struct FKeyHandleMap                               KeyHandlesToIndices;                              		// 0x0008(0x0050) (CPF_Transient)
};

// ScriptStruct Engine.RichCurveKey
// 0x001C
struct FRichCurveKey
{
	TEnumAsByte<enum class ERichCurveInterpMode>       InterpMode;                                       		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ERichCurveTangentMode>      TangentMode;                                      		// 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ERichCurveTangentWeightMode> TangentWeightMode;                                		// 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                               		// 0x0003(0x0001) MISSED OFFSET
	float                                              Time;                                             		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                            		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ArriveTangent;                                    		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ArriveTangentWeight;                              		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeaveTangent;                                     		// 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeaveTangentWeight;                               		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RichCurve
// 0x0020 (0x0078 - 0x0058)
struct FRichCurve : public FIndexedCurve
{
	TEnumAsByte<enum class ERichCurveExtrapolation>    PreInfinityExtrap;                                		// 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ERichCurveExtrapolation>    PostInfinityExtrap;                               		// 0x0059(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                               		// 0x005A(0x0006) MISSED OFFSET
	TArray<struct FRichCurveKey>                       Keys;                                             		// 0x0060(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	float                                              DefaultValue;                                     		// 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RuntimeFloatCurve
// 0x0080
struct FRuntimeFloatCurve
{
	struct FRichCurve                                  EditorCurveData;                                  		// 0x0000(0x0078)
	class UCurveFloat*                                 ExternalCurve;                                    		// 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.VehicleEngineData
// 0x0098
struct FVehicleEngineData
{
	struct FRuntimeFloatCurve                          TorqueCurve;                                      		// 0x0000(0x0080) (CPF_Edit)
	float                                              MaxRPM;                                           		// 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MOI;                                              		// 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRateFullThrottle;                          		// 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRateZeroThrottleClutchEngaged;             		// 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRateZeroThrottleClutchDisengaged;          		// 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.VehicleDifferential4WData
// 0x001C
struct FVehicleDifferential4WData
{
	TEnumAsByte<enum class EVehicleDifferential4W>     DifferentialType;                                 		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              FrontRearSplit;                                   		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrontLeftRightSplit;                              		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RearLeftRightSplit;                               		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CentreBias;                                       		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrontBias;                                        		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RearBias;                                         		// 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.VehicleGearData
// 0x000C
struct FVehicleGearData
{
	float                                              Ratio;                                            		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DownRatio;                                        		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpRatio;                                          		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.VehicleTransmissionData
// 0x0030
struct FVehicleTransmissionData
{
	unsigned char                                      bUseGearAutoBox : 1;                              		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              GearSwitchTime;                                   		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GearAutoBoxLatency;                               		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalRatio;                                       		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FVehicleGearData>                    ForwardGears;                                     		// 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              ReverseGearRatio;                                 		// 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NeutralGearUpRatio;                               		// 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClutchStrength;                                   		// 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// 0x0014
struct FLightmassMaterialInterfaceSettings
{
	unsigned char                                      bCastShadowAsMasked : 1;                          		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              EmissiveBoost;                                    		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DiffuseBoost;                                     		// 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExportResolutionScale;                            		// 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverrideCastShadowAsMasked : 1;                  		// 0x0010(0x0001)
	unsigned char                                      bOverrideEmissiveBoost : 1;                       		// 0x0010(0x0001)
	unsigned char                                      bOverrideDiffuseBoost : 1;                        		// 0x0010(0x0001)
	unsigned char                                      bOverrideExportResolutionScale : 1;               		// 0x0010(0x0001)
};

// ScriptStruct Engine.MaterialTextureInfo
// 0x0010
struct FMaterialTextureInfo
{
	float                                              SamplingScale;                                    		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                UVChannelIndex;                                   		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TextureName;                                      		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.FontParameterValue
// 0x0028
struct FFontParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFont*                                       FontValue;                                        		// 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FontPage;                                         		// 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                   		// 0x0014(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ScalarParameterValue
// 0x0020
struct FScalarParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ParameterValue;                                   		// 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                   		// 0x000C(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TextureParameterValue
// 0x0020
struct FTextureParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    ParameterValue;                                   		// 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                   		// 0x0010(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.VectorParameterValue
// 0x0028
struct FVectorParameterValue
{
	struct FName                                       ParameterName;                                    		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ParameterValue;                                   		// 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                   		// 0x0018(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// 0x0014
struct FMaterialInstanceBasePropertyOverrides
{
	unsigned char                                      bOverride_OpacityMaskClipValue : 1;               		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverride_BlendMode : 1;                          		// 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverride_ShadingModel : 1;                       		// 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverride_DitheredLODTransition : 1;              		// 0x0003(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverride_TwoSided : 1;                           		// 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0005(0x0003) MISSED OFFSET
	float                                              OpacityMaskClipValue;                             		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EBlendMode>                 BlendMode;                                        		// 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EMaterialShadingModel>      ShadingModel;                                     		// 0x000D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                               		// 0x000E(0x0002) MISSED OFFSET
	unsigned char                                      TwoSided : 1;                                     		// 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      DitheredLODTransition : 1;                        		// 0x0010(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.ExpressionOutput
// 0x0028
struct FExpressionOutput
{
	struct FString                                     OutputName;                                       		// 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                Mask;                                             		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskR;                                            		// 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskG;                                            		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskB;                                            		// 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskA;                                            		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.EventGraphFastCallPair
// 0x0010
struct FEventGraphFastCallPair
{
	class UFunction*                                   FunctionToPatch;                                  		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EventGraphCallOffset;                             		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// 0x0018
struct FBlueprintComponentChangedPropertyInfo
{
	struct FName                                       PropertyName;                                     		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ArrayIndex;                                       		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x000C(0x0004) MISSED OFFSET
	class UStruct*                                     PropertyScope;                                    		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// 0x0050
struct FBlueprintCookedComponentInstancingData
{
	unsigned char                                      bIsValid : 1;                                     		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0001(0x0007) MISSED OFFSET
	TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList;                              		// 0x0008(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x38];                              		// 0x0018(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.NavigationFilterArea
// 0x0018
struct FNavigationFilterArea
{
	class UClass*                                      AreaClass;                                        		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TravelCostOverride;                               		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnteringCostOverride;                             		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsExcluded : 1;                                  		// 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      bOverrideTravelCost : 1;                          		// 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      bOverrideEnteringCost : 1;                        		// 0x0010(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.NavigationFilterFlags
// 0x0004
struct FNavigationFilterFlags
{
	unsigned char                                      bNavFlag0 : 1;                                    		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag1 : 1;                                    		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag2 : 1;                                    		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag3 : 1;                                    		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag4 : 1;                                    		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag5 : 1;                                    		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag6 : 1;                                    		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag7 : 1;                                    		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag8 : 1;                                    		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag9 : 1;                                    		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag10 : 1;                                   		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag11 : 1;                                   		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag12 : 1;                                   		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag13 : 1;                                   		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag14 : 1;                                   		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bNavFlag15 : 1;                                   		// 0x0001(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.EdGraphTerminalType
// 0x0030
struct FEdGraphTerminalType
{
	struct FString                                     TerminalCategory;                                 		// 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     TerminalSubCategory;                              		// 0x0010(0x0010) (CPF_ZeroConstructor)
	TWeakObjectPtr<class UObject>                      TerminalSubCategoryObject;                        		// 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTerminalIsConst : 1;                             		// 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTerminalIsWeakPointer : 1;                       		// 0x0029(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.EdGraphPinType
// 0x0080
struct FEdGraphPinType
{
	struct FString                                     PinCategory;                                      		// 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     PinSubCategory;                                   		// 0x0010(0x0010) (CPF_ZeroConstructor)
	TWeakObjectPtr<class UObject>                      PinSubCategoryObject;                             		// 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSimpleMemberReference                      PinSubCategoryMemberReference;                    		// 0x0028(0x0020)
	struct FEdGraphTerminalType                        PinValueType;                                     		// 0x0048(0x0030)
	unsigned char                                      bIsMap : 1;                                       		// 0x0078(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsSet : 1;                                       		// 0x0079(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsArray : 1;                                     		// 0x007A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsReference : 1;                                 		// 0x007B(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsConst : 1;                                     		// 0x007C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsWeakPointer : 1;                               		// 0x007D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ReverbSettings
// 0x0018
struct FReverbSettings
{
	unsigned char                                      bApplyReverb : 1;                                 		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	TEnumAsByte<enum class ReverbPreset>               ReverbType;                                       		// 0x0004(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0005(0x0003) MISSED OFFSET
	class UReverbEffect*                               ReverbEffect;                                     		// 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Volume;                                           		// 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeTime;                                         		// 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.InteriorSettings
// 0x0024
struct FInteriorSettings
{
	unsigned char                                      bIsWorldSettings : 1;                             		// 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              ExteriorVolume;                                   		// 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExteriorTime;                                     		// 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExteriorLPF;                                      		// 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExteriorLPFTime;                                  		// 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InteriorVolume;                                   		// 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InteriorTime;                                     		// 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InteriorLPF;                                      		// 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InteriorLPFTime;                                  		// 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CullDistanceSizePair
// 0x0008
struct FCullDistanceSizePair
{
	float                                              Size;                                             		// 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CullDistance;                                     		// 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NavAgentSelector
// 0x0004
struct FNavAgentSelector
{
	unsigned char                                      bSupportsAgent0 : 1;                              		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent1 : 1;                              		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent2 : 1;                              		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent3 : 1;                              		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent4 : 1;                              		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent5 : 1;                              		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent6 : 1;                              		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent7 : 1;                              		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent8 : 1;                              		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent9 : 1;                              		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent10 : 1;                             		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent11 : 1;                             		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent12 : 1;                             		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent13 : 1;                             		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent14 : 1;                             		// 0x0001(0x0001) (CPF_Edit)
	unsigned char                                      bSupportsAgent15 : 1;                             		// 0x0001(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.FOscillator
// 0x000C
struct FFOscillator
{
	float                                              Amplitude;                                        		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Frequency;                                        		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EInitialOscillatorOffset>   InitialOffset;                                    		// 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ROscillator
// 0x0024
struct FROscillator
{
	struct FFOscillator                                Pitch;                                            		// 0x0000(0x000C) (CPF_Edit)
	struct FFOscillator                                Yaw;                                              		// 0x000C(0x000C) (CPF_Edit)
	struct FFOscillator                                Roll;                                             		// 0x0018(0x000C) (CPF_Edit)
};

// ScriptStruct Engine.VOscillator
// 0x0024
struct FVOscillator
{
	struct FFOscillator                                X;                                                		// 0x0000(0x000C) (CPF_Edit)
	struct FFOscillator                                Y;                                                		// 0x000C(0x000C) (CPF_Edit)
	struct FFOscillator                                Z;                                                		// 0x0018(0x000C) (CPF_Edit)
};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// 0x0088
struct FForceFeedbackChannelDetails
{
	unsigned char                                      bAffectsLeftLarge : 1;                            		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bAffectsLeftSmall : 1;                            		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bAffectsRightLarge : 1;                           		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bAffectsRightSmall : 1;                           		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0001(0x0007) MISSED OFFSET
	struct FRuntimeFloatCurve                          Curve;                                            		// 0x0008(0x0080) (CPF_Edit)
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// 0x0044
struct FLightmassWorldInfoSettings
{
	float                                              StaticLightingLevelScale;                         		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumIndirectLightingBounces;                       		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IndirectLightingQuality;                          		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IndirectLightingSmoothness;                       		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      EnvironmentColor;                                 		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnvironmentIntensity;                             		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EmissiveBoost;                                    		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DiffuseBoost;                                     		// 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseAmbientOcclusion : 1;                         		// 0x0020(0x0001) (CPF_Edit)
	unsigned char                                      bGenerateAmbientOcclusionMaterialMask : 1;        		// 0x0020(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0021(0x0003) MISSED OFFSET
	float                                              DirectIlluminationOcclusionFraction;              		// 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IndirectIlluminationOcclusionFraction;            		// 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OcclusionExponent;                                		// 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FullyOccludedSamplesFraction;                     		// 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxOcclusionDistance;                             		// 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bVisualizeMaterialDiffuse : 1;                    		// 0x0038(0x0001) (CPF_Edit)
	unsigned char                                      bVisualizeAmbientOcclusion : 1;                   		// 0x0038(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0039(0x0003) MISSED OFFSET
	float                                              VolumeLightSamplePlacementScale;                  		// 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCompressLightmaps : 1;                           		// 0x0040(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.NetViewer
// 0x0030
struct FNetViewer
{
	class UNetConnection*                              Connection;                                       		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      InViewer;                                         		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      ViewTarget;                                       		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ViewLocation;                                     		// 0x0018(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ViewDir;                                          		// 0x0024(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.InterpGroupActorInfo
// 0x0018
struct FInterpGroupActorInfo
{
	struct FName                                       ObjectName;                                       		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AActor*>                              Actors;                                           		// 0x0008(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct Engine.CameraCutInfo
// 0x0010
struct FCameraCutInfo
{
	struct FVector                                     Location;                                         		// 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeStamp;                                        		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NavDataConfig
// 0x0030 (0x0050 - 0x0020)
struct FNavDataConfig : public FNavAgentProperties
{
	struct FName                                       Name;                                             		// 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color;                                            		// 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     DefaultQueryExtent;                               		// 0x002C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      NavigationDataClass;                              		// 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FStringClassReference                       NavigationDataClassName;                          		// 0x0040(0x0010) (CPF_ZeroConstructor, CPF_Config)
};

// ScriptStruct Engine.SupportedAreaData
// 0x0020
struct FSupportedAreaData
{
	struct FString                                     AreaClassName;                                    		// 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                AreaID;                                           		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0014(0x0004) MISSED OFFSET
	class UClass*                                      AreaClass;                                        		// 0x0018(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NavigationLinkBase
// 0x0038
struct FNavigationLinkBase
{
	float                                              LeftProjectHeight;                                		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxFallDownLength;                                		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ENavLinkDirection>          Direction;                                        		// 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0009(0x0007) MISSED OFFSET
	float                                              SnapRadius;                                       		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SnapHeight;                                       		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FNavAgentSelector                           SupportedAgents;                                  		// 0x0018(0x0004) (CPF_Edit)
	unsigned char                                      bSupportsAgent0 : 1;                              		// 0x001C(0x0001)
	unsigned char                                      bSupportsAgent1 : 1;                              		// 0x001C(0x0001)
	unsigned char                                      bSupportsAgent2 : 1;                              		// 0x001C(0x0001)
	unsigned char                                      bSupportsAgent3 : 1;                              		// 0x001C(0x0001)
	unsigned char                                      bSupportsAgent4 : 1;                              		// 0x001C(0x0001)
	unsigned char                                      bSupportsAgent5 : 1;                              		// 0x001C(0x0001)
	unsigned char                                      bSupportsAgent6 : 1;                              		// 0x001C(0x0001)
	unsigned char                                      bSupportsAgent7 : 1;                              		// 0x001C(0x0001)
	unsigned char                                      bSupportsAgent8 : 1;                              		// 0x001D(0x0001)
	unsigned char                                      bSupportsAgent9 : 1;                              		// 0x001D(0x0001)
	unsigned char                                      bSupportsAgent10 : 1;                             		// 0x001D(0x0001)
	unsigned char                                      bSupportsAgent11 : 1;                             		// 0x001D(0x0001)
	unsigned char                                      bSupportsAgent12 : 1;                             		// 0x001D(0x0001)
	unsigned char                                      bSupportsAgent13 : 1;                             		// 0x001D(0x0001)
	unsigned char                                      bSupportsAgent14 : 1;                             		// 0x001D(0x0001)
	unsigned char                                      bSupportsAgent15 : 1;                             		// 0x001D(0x0001)
	unsigned char                                      UnknownData01[0x2];                               		// 0x001E(0x0002) MISSED OFFSET
	unsigned char                                      bUseSnapHeight : 1;                               		// 0x0020(0x0001) (CPF_Edit)
	unsigned char                                      bSnapToCheapestArea : 1;                          		// 0x0020(0x0001) (CPF_Edit)
	unsigned char                                      bCustomFlag0 : 1;                                 		// 0x0020(0x0001)
	unsigned char                                      bCustomFlag1 : 1;                                 		// 0x0020(0x0001)
	unsigned char                                      bCustomFlag2 : 1;                                 		// 0x0020(0x0001)
	unsigned char                                      bCustomFlag3 : 1;                                 		// 0x0020(0x0001)
	unsigned char                                      bCustomFlag4 : 1;                                 		// 0x0020(0x0001)
	unsigned char                                      bCustomFlag5 : 1;                                 		// 0x0020(0x0001)
	unsigned char                                      bCustomFlag6 : 1;                                 		// 0x0021(0x0001)
	unsigned char                                      bCustomFlag7 : 1;                                 		// 0x0021(0x0001)
	unsigned char                                      UnknownData02[0x6];                               		// 0x0022(0x0006) MISSED OFFSET
	class UClass*                                      AreaClass;                                        		// 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                               		// 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.NavigationLink
// 0x0018 (0x0050 - 0x0038)
struct FNavigationLink : public FNavigationLinkBase
{
	struct FVector                                     Left;                                             		// 0x0038(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Right;                                            		// 0x0044(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NavigationSegmentLink
// 0x0030 (0x0068 - 0x0038)
struct FNavigationSegmentLink : public FNavigationLinkBase
{
	struct FVector                                     LeftStart;                                        		// 0x0038(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LeftEnd;                                          		// 0x0044(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     RightStart;                                       		// 0x0050(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     RightEnd;                                         		// 0x005C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BoneNode
// 0x0010
struct FBoneNode
{
	struct FName                                       Name;                                             		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                ParentIndex;                                      		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	TEnumAsByte<enum class EBoneTranslationRetargetingMode> TranslationRetargetingMode;                       		// 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.VirtualBone
// 0x0018
struct FVirtualBone
{
	struct FName                                       SourceBoneName;                                   		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TargetBoneName;                                   		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       VirtualBoneName;                                  		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// 0x0020
struct FSkeletonToMeshLinkup
{
	TArray<int>                                        SkeletonToMeshTable;                              		// 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<int>                                        MeshToSkeletonTable;                              		// 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.SmartNameContainer
// 0x0050
struct FSmartNameContainer
{
	unsigned char                                      UnknownData00[0x50];                              		// 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.AnimSlotGroup
// 0x0018
struct FAnimSlotGroup
{
	struct FName                                       GroupName;                                        		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FName>                               SlotNames;                                        		// 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.MeshUVChannelInfo
// 0x0014
struct FMeshUVChannelInfo
{
	unsigned char                                      bInitialized : 1;                                 		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverrideDensities : 1;                           		// 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                               		// 0x0002(0x0002) MISSED OFFSET
	float                                              LocalUVDensities[0x4];                            		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMaterial
// 0x0030
struct FSkeletalMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bEnableShadowCasting : 1;                         		// 0x0008(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bRecomputeTangent : 1;                            		// 0x0009(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                               		// 0x000A(0x0006) MISSED OFFSET
	struct FName                                       MaterialSlotName;                                 		// 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMeshUVChannelInfo                          UVChannelData;                                    		// 0x0018(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
};

// ScriptStruct Engine.BoneMirrorInfo
// 0x0008
struct FBoneMirrorInfo
{
	int                                                SourceIndex;                                      		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAxis>                      BoneFlipAxis;                                     		// 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TriangleSortSettings
// 0x0010
struct FTriangleSortSettings
{
	TEnumAsByte<enum class ETriangleSortOption>        TriangleSorting;                                  		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ETriangleSortAxis>          CustomLeftRightAxis;                              		// 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                               		// 0x0002(0x0006) MISSED OFFSET
	struct FName                                       CustomLeftRightBoneName;                          		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BoneReference
// 0x0010
struct FBoneReference
{
	struct FName                                       BoneName;                                         		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SimplygonChannelCastingSettings
// 0x0010
struct FSimplygonChannelCastingSettings
{
	TEnumAsByte<enum class ESimplygonMaterialChannel>  MaterialChannel;                                  		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ESimplygonCasterType>       Caster;                                           		// 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bActive : 1;                                      		// 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ESimplygonColorChannels>    ColorChannels;                                    		// 0x0003(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BitsPerChannel;                                   		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseSRGB : 1;                                     		// 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bBakeVertexColors : 1;                            		// 0x0009(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bFlipBackfacingNormals : 1;                       		// 0x000A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseTangentSpaceNormals : 1;                      		// 0x000B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bFlipGreenChannel : 1;                            		// 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SimplygonMaterialLODSettings
// 0x0028
struct FSimplygonMaterialLODSettings
{
	unsigned char                                      bActive : 1;                                      		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EMaterialLODType>           MaterialLODType;                                  		// 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseAutomaticSizes : 1;                           		// 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ESimplygonTextureResolution> TextureWidth;                                     		// 0x0003(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ESimplygonTextureResolution> TextureHeight;                                    		// 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ESimplygonTextureSamplingQuality> SamplingQuality;                                  		// 0x0005(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                               		// 0x0006(0x0002) MISSED OFFSET
	int                                                GutterSpace;                                      		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ESimplygonTextureStrech>    TextureStrech;                                    		// 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReuseExistingCharts : 1;                         		// 0x000D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                               		// 0x000E(0x0002) MISSED OFFSET
	TArray<struct FSimplygonChannelCastingSettings>    ChannelsToCast;                                   		// 0x0010(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bBakeVertexData : 1;                              		// 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bBakeActorData : 1;                               		// 0x0021(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAllowMultiMaterial : 1;                          		// 0x0022(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPreferTwoSideMaterials : 1;                      		// 0x0023(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MaterialProxySettings
// 0x0094
struct FMaterialProxySettings
{
	struct FIntPoint                                   TextureSize;                                      		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ETextureSizingType>         TextureSizingType;                                		// 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	float                                              GutterSpace;                                      		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EMaterialProxySmaplingQuality> SamplingQuality;                                  		// 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EUVStrech>                  UVStrech;                                         		// 0x0011(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSplitProxyMaterialBasedOnType : 1;               		// 0x0012(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseTangentSpace : 1;                             		// 0x0013(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bNormalMap : 1;                                   		// 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bMetallicMap : 1;                                 		// 0x0015(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                               		// 0x0016(0x0002) MISSED OFFSET
	float                                              MetallicConstant;                                 		// 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRoughnessMap : 1;                                		// 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                               		// 0x001D(0x0003) MISSED OFFSET
	float                                              RoughnessConstant;                                		// 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSpecularMap : 1;                                 		// 0x0024(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                               		// 0x0025(0x0003) MISSED OFFSET
	float                                              SpecularConstant;                                 		// 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEmissiveMap : 1;                                 		// 0x002C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOpacityMap : 1;                                  		// 0x002D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                               		// 0x002E(0x0002) MISSED OFFSET
	float                                              OpacityConstant;                                  		// 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAmbientOcclusionMap : 1;                         		// 0x0034(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                               		// 0x0035(0x0003) MISSED OFFSET
	float                                              AOConstant;                                       		// 0x0038(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              AmbientOcclusionConstant;                         		// 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOpacityMaskMap : 1;                              		// 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                               		// 0x0041(0x0003) MISSED OFFSET
	float                                              OpacityMaskConstant;                              		// 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FIntPoint                                   DiffuseTextureSize;                               		// 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FIntPoint                                   NormalTextureSize;                                		// 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FIntPoint                                   MetallicTextureSize;                              		// 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FIntPoint                                   RoughnessTextureSize;                             		// 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FIntPoint                                   SpecularTextureSize;                              		// 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FIntPoint                                   EmissiveTextureSize;                              		// 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FIntPoint                                   OpacityTextureSize;                               		// 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FIntPoint                                   AmbientOcclusionTextureSize;                      		// 0x0080(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FIntPoint                                   OpacityMaskTextureSize;                           		// 0x0088(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EMaterialMergeType>         MaterialMergeType;                                		// 0x0090(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// 0x0110
struct FSkeletalMeshOptimizationSettings
{
	TEnumAsByte<enum class SkeletalMeshOptimizationType> ReductionMethod;                                  		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                         		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDeviationPercentage;                           		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ScreenSize;                                       		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeldingThreshold;                                 		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRecalcNormals : 1;                               		// 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0015(0x0003) MISSED OFFSET
	float                                              NormalsThreshold;                                 		// 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class SkeletalMeshOptimizationImportance> SilhouetteImportance;                             		// 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class SkeletalMeshOptimizationImportance> TextureImportance;                                		// 0x001D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class SkeletalMeshOptimizationImportance> ShadingImportance;                                		// 0x001E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class SkeletalMeshOptimizationImportance> SkinningImportance;                               		// 0x001F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BoneReductionRatio;                               		// 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxBonesPerVertex;                                		// 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTransferMorphTarget : 1;                         		// 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                               		// 0x0029(0x0007) MISSED OFFSET
	TArray<struct FBoneReference>                      BonesToRemove;                                    		// 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	int                                                BaseLOD;                                          		// 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LODChainLastIndex;                                		// 0x0044(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSimplifyMaterials : 1;                           		// 0x0048(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                               		// 0x0049(0x0007) MISSED OFFSET
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                              		// 0x0050(0x0028) (CPF_Deprecated)
	struct FMaterialProxySettings                      MaterialSettings;                                 		// 0x0078(0x0094) (CPF_Edit)
	unsigned char                                      bForceRebuild : 1;                                		// 0x010C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SimplygonRemeshingSettings
// 0x0050
struct FSimplygonRemeshingSettings
{
	unsigned char                                      bActive : 1;                                      		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	int                                                ScreenSize;                                       		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRecalculateNormals : 1;                          		// 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	float                                              HardAngleThreshold;                               		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MergeDistance;                                    		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseClippingPlane : 1;                            		// 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                               		// 0x0015(0x0003) MISSED OFFSET
	float                                              ClippingLevel;                                    		// 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AxisIndex;                                        		// 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPlaneNegativeHalfspace : 1;                      		// 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseMassiveLOD : 1;                               		// 0x0021(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseAggregateLOD : 1;                             		// 0x0022(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                               		// 0x0023(0x0005) MISSED OFFSET
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                              		// 0x0028(0x0028) (CPF_Edit)
};

// ScriptStruct Engine.MaterialSimplificationSettings
// 0x0044
struct FMaterialSimplificationSettings
{
	struct FIntPoint                                   BaseColorMapSize;                                 		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bNormalMap : 1;                                   		// 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	struct FIntPoint                                   NormalMapSize;                                    		// 0x000C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MetallicConstant;                                 		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bMetallicMap : 1;                                 		// 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0019(0x0003) MISSED OFFSET
	struct FIntPoint                                   MetallicMapSize;                                  		// 0x001C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RoughnessConstant;                                		// 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRoughnessMap : 1;                                		// 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                               		// 0x0029(0x0003) MISSED OFFSET
	struct FIntPoint                                   RoughnessMapSize;                                 		// 0x002C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpecularConstant;                                 		// 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSpecularMap : 1;                                 		// 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                               		// 0x0039(0x0003) MISSED OFFSET
	struct FIntPoint                                   SpecularMapSize;                                  		// 0x003C(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MeshProxySettings
// 0x0114
struct FMeshProxySettings
{
	int                                                ScreenSize;                                       		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMaterialProxySettings                      MaterialSettings;                                 		// 0x0004(0x0094) (CPF_Edit)
	int                                                TextureWidth;                                     		// 0x0098(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                TextureHeight;                                    		// 0x009C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bExportNormalMap : 1;                             		// 0x00A0(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bExportMetallicMap : 1;                           		// 0x00A1(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bExportRoughnessMap : 1;                          		// 0x00A2(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bExportSpecularMap : 1;                           		// 0x00A3(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FMaterialSimplificationSettings             Material;                                         		// 0x00A4(0x0044) (CPF_Deprecated)
	unsigned char                                      bCalculateCorrectLODModel : 1;                    		// 0x00E8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x00E9(0x0003) MISSED OFFSET
	float                                              OverrideDistanceForLevelLOD;                      		// 0x00EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MergeDistance;                                    		// 0x00F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HardAngleThreshold;                               		// 0x00F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LightMapResolution;                               		// 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRecalculateNormals : 1;                          		// 0x00FC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bBakeVertexData : 1;                              		// 0x00FD(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bUseLandscapeCulling : 1;                         		// 0x00FE(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ELandscapeCullingPrecision> LandscapeCullingPrecision;                        		// 0x00FF(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAssignLODGroup : 1;                              		// 0x0100(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0101(0x0003) MISSED OFFSET
	int                                                LODGroupIndex;                                    		// 0x0104(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAggregateMeshes : 1;                             		// 0x0108(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EChartAggregationMode>      AggregatorMode;                                   		// 0x0109(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EPhysXAggregationMode>      PhysXAggregationMode;                             		// 0x010A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseCustomHemisphere : 1;                         		// 0x010B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MergeBoldness;                                    		// 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxTriangleSize;                                  		// 0x0110(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.GroupedSkeletalOptimizationSettings
// 0x0230
struct FGroupedSkeletalOptimizationSettings
{
	unsigned char                                      bAutoComputeLODDistance : 1;                      		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ESkeletalMeshLODType>       LevelOfDetailType;                                		// 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                               		// 0x0002(0x0006) MISSED OFFSET
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                		// 0x0008(0x0110) (CPF_Edit)
	struct FMeshProxySettings                          ProxySettings;                                    		// 0x0118(0x0114) (CPF_Edit)
	unsigned char                                      bForceLODRebuild : 1;                             		// 0x022C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// 0x03E0
struct FSkeletalMeshLODInfo
{
	float                                              ScreenSize;                                       		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LODHysteresis;                                    		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        LODMaterialMap;                                   		// 0x0008(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<unsigned char>                              bEnableShadowCasting;                             		// 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	TArray<struct FTriangleSortSettings>               TriangleSortSettings;                             		// 0x0028(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	unsigned char                                      bHasBeenSimplified : 1;                           		// 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0039(0x0007) MISSED OFFSET
	struct FSkeletalMeshOptimizationSettings           ReductionSettings;                                		// 0x0040(0x0110) (CPF_Edit)
	struct FSimplygonRemeshingSettings                 RemeshingSettings;                                		// 0x0150(0x0050) (CPF_Deprecated)
	struct FGroupedSkeletalOptimizationSettings        OptimizationSettings;                             		// 0x01A0(0x0230) (CPF_Edit)
	TArray<struct FName>                               RemovedBones;                                     		// 0x03D0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.ClothPhysicsProperties
// 0x0050
struct FClothPhysicsProperties
{
	float                                              VerticalResistance;                               		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HorizontalResistance;                             		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BendResistance;                                   		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShearResistance;                                  		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Friction;                                         		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damping;                                          		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TetherStiffness;                                  		// 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TetherLimit;                                      		// 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Drag;                                             		// 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StiffnessFrequency;                               		// 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GravityScale;                                     		// 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MassScale;                                        		// 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InertiaBlend;                                     		// 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SelfCollisionThickness;                           		// 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SelfCollisionSquashScale;                         		// 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SelfCollisionStiffness;                           		// 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SolverFrequency;                                  		// 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FiberCompression;                                 		// 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FiberExpansion;                                   		// 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FiberResistance;                                  		// 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ClothingAssetData
// 0x00F0
struct FClothingAssetData
{
	struct FName                                       AssetName;                                        		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ApexFileName;                                     		// 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bClothPropertiesChanged : 1;                      		// 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0019(0x0003) MISSED OFFSET
	struct FClothPhysicsProperties                     PhysicsProperties;                                		// 0x001C(0x0050) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x006C(0x0004) MISSED OFFSET
	TArray<int>                                        ApexToUnrealBoneMapping;                          		// 0x0070(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData02[0x70];                              		// 0x0080(0x0070) MISSED OFFSET
};

// ScriptStruct Engine.AssetMapping
// 0x0010
struct FAssetMapping
{
	class UAnimationAsset*                             SourceAsset;                                      		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimationAsset*                             TargetAsset;                                      		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SingleAnimationPlayData
// 0x0018
struct FSingleAnimationPlayData
{
	class UAnimationAsset*                             AnimToPlay;                                       		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSavedLooping : 1;                                		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bSavedPlaying : 1;                                		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	float                                              SavedPosition;                                    		// 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SavedPlayRate;                                    		// 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SplineCurves
// 0x0060
struct FSplineCurves
{
	struct FInterpCurveVector                          Position;                                         		// 0x0000(0x0018) (CPF_ZeroConstructor)
	struct FInterpCurveQuat                            Rotation;                                         		// 0x0018(0x0018) (CPF_ZeroConstructor)
	struct FInterpCurveVector                          Scale;                                            		// 0x0030(0x0018) (CPF_ZeroConstructor)
	struct FInterpCurveFloat                           ReparamTable;                                     		// 0x0048(0x0018) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.InterpControlPoint
// 0x001C
struct FInterpControlPoint
{
	struct FVector                                     PositionControlPoint;                             		// 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bPositionIsRelative : 1;                          		// 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                               		// 0x000D(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.LevelCollection
// 0x0080
struct FLevelCollection
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) MISSED OFFSET
	class AGameStateBase*                              GameState;                                        		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UNetDriver*                                  NetDriver;                                        		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDemoNetDriver*                              DemoNetDriver;                                    		// 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULevel*                                      PersistentLevel;                                  		// 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                              		// 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty Engine.LevelCollection.Levels
	unsigned char                                      UnknownData02[0x8];                               		// 0x0078(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.FogHeightDensityPair
// 0x0008
struct FFogHeightDensityPair
{
	float                                              Height;                                           		// 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Density;                                          		// 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// 0x002C
struct FAtmospherePrecomputeParameters
{
	float                                              DensityHeight;                                    		// 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecayHeight;                                      		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                MaxScatteringOrder;                               		// 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TransmittanceTexWidth;                            		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TransmittanceTexHeight;                           		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                IrradianceTexWidth;                               		// 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                IrradianceTexHeight;                              		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InscatterAltitudeSampleNum;                       		// 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InscatterMuNum;                                   		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InscatterMuSNum;                                  		// 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InscatterNuNum;                                   		// 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AttenuationSettings
// 0x00F8
struct FAttenuationSettings
{
	unsigned char                                      bAttenuate : 1;                                   		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bSpatialize : 1;                                  		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bAttenuateWithLPF : 1;                            		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bEnableListenerFocus : 1;                         		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bEnableOcclusion : 1;                             		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bUseComplexCollisionForOcclusion : 1;             		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	TEnumAsByte<enum class ESoundDistanceModel>        DistanceAlgorithm;                                		// 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0005(0x0003) MISSED OFFSET
	struct FRuntimeFloatCurve                          CustomAttenuationCurve;                           		// 0x0008(0x0080) (CPF_Edit, CPF_BlueprintVisible)
	TEnumAsByte<enum class ESoundDistanceCalc>         DistanceType;                                     		// 0x0088(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAttenuationShape>          AttenuationShape;                                 		// 0x0089(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                               		// 0x008A(0x0002) MISSED OFFSET
	float                                              dBAttenuationAtMax;                               		// 0x008C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OmniRadius;                                       		// 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StereoSpread;                                     		// 0x0094(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ESoundSpatializationAlgorithm> SpatializationAlgorithm;                          		// 0x0098(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                               		// 0x0099(0x0003) MISSED OFFSET
	float                                              RadiusMin;                                        		// 0x009C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              RadiusMax;                                        		// 0x00A0(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FVector                                     AttenuationShapeExtents;                          		// 0x00A4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConeOffset;                                       		// 0x00B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FalloffDistance;                                  		// 0x00B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPFRadiusMin;                                     		// 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPFRadiusMax;                                     		// 0x00BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPFFrequencyAtMin;                                		// 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LPFFrequencyAtMax;                                		// 0x00C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FocusAzimuth;                                     		// 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NonFocusAzimuth;                                  		// 0x00CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FocusDistanceScale;                               		// 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NonFocusDistanceScale;                            		// 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FocusPriorityScale;                               		// 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NonFocusPriorityScale;                            		// 0x00DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FocusVolumeAttenuation;                           		// 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NonFocusVolumeAttenuation;                        		// 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionChannel>          OcclusionTraceChannel;                            		// 0x00E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                               		// 0x00E9(0x0003) MISSED OFFSET
	float                                              OcclusionLowPassFilterFrequency;                  		// 0x00EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OcclusionVolumeAttenuation;                       		// 0x00F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OcclusionInterpolationTime;                       		// 0x00F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AudioComponentParam
// 0x0020
struct FAudioComponentParam
{
	struct FName                                       ParamName;                                        		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FloatParam;                                       		// 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      BoolParam : 1;                                    		// 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x000D(0x0003) MISSED OFFSET
	int                                                IntParam;                                         		// 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x0014(0x0004) MISSED OFFSET
	class USoundWave*                                  SoundWaveParam;                                   		// 0x0018(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.FogHeightDensityPair2
// 0x0008
struct FFogHeightDensityPair2
{
	float                                              Height;                                           		// 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Density;                                          		// 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.LightmassLightSettings
// 0x000C
struct FLightmassLightSettings
{
	float                                              IndirectLightingSaturation;                       		// 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShadowExponent;                                   		// 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseAreaShadowsForStationaryLight : 1;            		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// 0x0004 (0x0010 - 0x000C)
struct FLightmassDirectionalLightSettings : public FLightmassLightSettings
{
	float                                              LightSourceAngle;                                 		// 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.LightmassPointLightSettings
// 0x0000 (0x000C - 0x000C)
struct FLightmassPointLightSettings : public FLightmassLightSettings
{

};

// ScriptStruct Engine.NavGraphNode
// 0x0018
struct FNavGraphNode
{
	class UObject*                                     Owner;                                            		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                              		// 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ConstrainComponentPropName
// 0x0008
struct FConstrainComponentPropName
{
	struct FName                                       ComponentName;                                    		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ConstraintBaseParams
// 0x0014
struct FConstraintBaseParams
{
	float                                              Stiffness;                                        		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damping;                                          		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Restitution;                                      		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ContactDistance;                                  		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSoftConstraint : 1;                              		// 0x0010(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.LinearConstraint
// 0x0008 (0x001C - 0x0014)
struct FLinearConstraint : public FConstraintBaseParams
{
	float                                              Limit;                                            		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ELinearConstraintMotion>    XMotion;                                          		// 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ELinearConstraintMotion>    YMotion;                                          		// 0x0019(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ELinearConstraintMotion>    ZMotion;                                          		// 0x001A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ConeConstraint
// 0x000C (0x0020 - 0x0014)
struct FConeConstraint : public FConstraintBaseParams
{
	float                                              Swing1LimitDegrees;                               		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Swing2LimitDegrees;                               		// 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAngularConstraintMotion>   Swing1Motion;                                     		// 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAngularConstraintMotion>   Swing2Motion;                                     		// 0x001D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TwistConstraint
// 0x0008 (0x001C - 0x0014)
struct FTwistConstraint : public FConstraintBaseParams
{
	float                                              TwistLimitDegrees;                                		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAngularConstraintMotion>   TwistMotion;                                      		// 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ConstraintDrive
// 0x0010
struct FConstraintDrive
{
	float                                              Stiffness;                                        		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damping;                                          		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxForce;                                         		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnablePositionDrive : 1;                         		// 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      bEnableVelocityDrive : 1;                         		// 0x000C(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.LinearDriveConstraint
// 0x004C
struct FLinearDriveConstraint
{
	struct FVector                                     PositionTarget;                                   		// 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     VelocityTarget;                                   		// 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FConstraintDrive                            XDrive;                                           		// 0x0018(0x0010) (CPF_Edit)
	struct FConstraintDrive                            YDrive;                                           		// 0x0028(0x0010) (CPF_Edit)
	struct FConstraintDrive                            ZDrive;                                           		// 0x0038(0x0010) (CPF_Edit)
	unsigned char                                      bEnablePositionDrive : 1;                         		// 0x0048(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.AngularDriveConstraint
// 0x004C
struct FAngularDriveConstraint
{
	struct FConstraintDrive                            TwistDrive;                                       		// 0x0000(0x0010) (CPF_Edit)
	struct FConstraintDrive                            SwingDrive;                                       		// 0x0010(0x0010) (CPF_Edit)
	struct FConstraintDrive                            SlerpDrive;                                       		// 0x0020(0x0010) (CPF_Edit)
	struct FRotator                                    OrientationTarget;                                		// 0x0030(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AngularVelocityTarget;                            		// 0x003C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAngularDriveMode>          AngularDriveMode;                                 		// 0x0048(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ConstraintProfileProperties
// 0x0104
struct FConstraintProfileProperties
{
	float                                              ProjectionLinearTolerance;                        		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProjectionAngularTolerance;                       		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LinearBreakThreshold;                             		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularBreakThreshold;                            		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearConstraint                           LinearLimit;                                      		// 0x0010(0x001C) (CPF_Edit)
	struct FConeConstraint                             ConeLimit;                                        		// 0x002C(0x0020) (CPF_Edit)
	struct FTwistConstraint                            TwistLimit;                                       		// 0x004C(0x001C) (CPF_Edit)
	struct FLinearDriveConstraint                      LinearDrive;                                      		// 0x0068(0x004C) (CPF_Edit)
	struct FAngularDriveConstraint                     AngularDrive;                                     		// 0x00B4(0x004C) (CPF_Edit)
	unsigned char                                      bDisableCollision : 1;                            		// 0x0100(0x0001) (CPF_Edit)
	unsigned char                                      bEnableProjection : 1;                            		// 0x0100(0x0001) (CPF_Edit)
	unsigned char                                      bAngularBreakable : 1;                            		// 0x0100(0x0001) (CPF_Edit)
	unsigned char                                      bLinearBreakable : 1;                             		// 0x0100(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.ConstraintInstance
// 0x01F0
struct FConstraintInstance
{
	unsigned char                                      UnknownData00[0x18];                              		// 0x0000(0x0018) MISSED OFFSET
	struct FName                                       JointName;                                        		// 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FName                                       ConstraintBone1;                                  		// 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ConstraintBone2;                                  		// 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Pos1;                                             		// 0x0030(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     PriAxis1;                                         		// 0x003C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SecAxis1;                                         		// 0x0048(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Pos2;                                             		// 0x0054(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     PriAxis2;                                         		// 0x0060(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SecAxis2;                                         		// 0x006C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    AngularRotationOffset;                            		// 0x0078(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bScaleLinearLimits : 1;                           		// 0x0084(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x7];                               		// 0x0085(0x0007) MISSED OFFSET
	struct FConstraintProfileProperties                ProfileInstance;                                  		// 0x008C(0x0104) (CPF_Edit)
	unsigned char                                      UnknownData02[0x60];                              		// 0x0190(0x0060) MISSED OFFSET
};

// ScriptStruct Engine.MaterialSpriteElement
// 0x0028
struct FMaterialSpriteElement
{
	class UMaterialInterface*                          Material;                                         		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 DistanceToOpacityCurve;                           		// 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSizeIsInScreenSpace : 1;                         		// 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0011(0x0003) MISSED OFFSET
	float                                              BaseSizeX;                                        		// 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BaseSizeY;                                        		// 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x001C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DistanceToSizeCurve;                              		// 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SplineMeshParams
// 0x0058
struct FSplineMeshParams
{
	struct FVector                                     StartPos;                                         		// 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     StartTangent;                                     		// 0x000C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   StartScale;                                       		// 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartRoll;                                        		// 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   StartOffset;                                      		// 0x0024(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     EndPos;                                           		// 0x002C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     EndTangent;                                       		// 0x0038(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   EndScale;                                         		// 0x0044(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndRoll;                                          		// 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   EndOffset;                                        		// 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ParticleSystemLOD
// 0x0001
struct FParticleSystemLOD
{

};

// ScriptStruct Engine.LODSoloTrack
// 0x0010
struct FLODSoloTrack
{
	TArray<unsigned char>                              SoloEnableSetting;                                		// 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
};

// ScriptStruct Engine.NamedEmitterMaterial
// 0x0010
struct FNamedEmitterMaterial
{
	struct FName                                       Name;                                             		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          Material;                                         		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ParticleSysParam
// 0x0080
struct FParticleSysParam
{
	struct FName                                       Name;                                             		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EParticleSysParamType>      ParamType;                                        		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	float                                              Scalar;                                           		// 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Scalar_Low;                                       		// 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Vector;                                           		// 0x0014(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Vector_Low;                                       		// 0x0020(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      Color;                                            		// 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Actor;                                            		// 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          Material;                                         		// 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                              		// 0x0040(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.TimelineEventEntry
// 0x0018
struct FTimelineEventEntry
{
	float                                              Time;                                             		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	struct FScriptDelegate                             EventFunc;                                        		// 0x0008(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
};

// ScriptStruct Engine.TimelineVectorTrack
// 0x0070
struct FTimelineVectorTrack
{
	class UCurveVector*                                VectorCurve;                                      		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                       		// 0x0008(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FName                                       TrackName;                                        		// 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       VectorPropertyName;                               		// 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStructProperty*                             VectorProperty;                                   		// 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                              		// 0x0030(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.TimelineFloatTrack
// 0x0070
struct FTimelineFloatTrack
{
	class UCurveFloat*                                 FloatCurve;                                       		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                       		// 0x0008(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FName                                       TrackName;                                        		// 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FloatPropertyName;                                		// 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFloatProperty*                              FloatProperty;                                    		// 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                              		// 0x0030(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.TimelineLinearColorTrack
// 0x0070
struct FTimelineLinearColorTrack
{
	class UCurveLinearColor*                           LinearColorCurve;                                 		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptDelegate                             InterpFunc;                                       		// 0x0008(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference)
	struct FName                                       TrackName;                                        		// 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       LinearColorPropertyName;                          		// 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStructProperty*                             LinearColorProperty;                              		// 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                              		// 0x0030(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.Timeline
// 0x00E0
struct FTimeline
{
	TEnumAsByte<enum class ETimelineLengthMode>        LengthMode;                                       		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              Length;                                           		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      bLooping : 1;                                     		// 0x0008(0x0001)
	unsigned char                                      bReversePlayback : 1;                             		// 0x0008(0x0001)
	unsigned char                                      bPlaying : 1;                                     		// 0x0008(0x0001)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	float                                              PlayRate;                                         		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Position;                                         		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                               		// 0x0014(0x0004) MISSED OFFSET
	TArray<struct FTimelineEventEntry>                 Events;                                           		// 0x0018(0x0010) (CPF_ZeroConstructor, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FTimelineVectorTrack>                InterpVectors;                                    		// 0x0028(0x0010) (CPF_ZeroConstructor, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FTimelineFloatTrack>                 InterpFloats;                                     		// 0x0038(0x0010) (CPF_ZeroConstructor, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	TArray<struct FTimelineLinearColorTrack>           InterpLinearColors;                               		// 0x0048(0x0010) (CPF_ZeroConstructor, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelinePostUpdateFunc;                           		// 0x0058(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FScriptDelegate                             TimelineFinishedFunc;                             		// 0x0068(0x0014) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData03[0x48];                              		// 0x0078(0x0048) MISSED OFFSET
	TWeakObjectPtr<class UObject>                      PropertySetObject;                                		// 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FName                                       DirectionPropertyName;                            		// 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UByteProperty*                               DirectionProperty;                                		// 0x00D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData04[0x8];                               		// 0x00D8(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SmartName
// 0x0010
struct FSmartName
{
	struct FName                                       DisplayName;                                      		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveBase
// 0x0020
struct FAnimCurveBase
{
	struct FName                                       LastObservedName;                                 		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FSmartName                                  Name;                                             		// 0x0008(0x0010)
	int                                                CurveTypeFlags;                                   		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.FloatCurve
// 0x0078 (0x0098 - 0x0020)
struct FFloatCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurve;                                       		// 0x0020(0x0078)
};

// ScriptStruct Engine.RawCurveTracks
// 0x0010
struct FRawCurveTracks
{
	TArray<struct FFloatCurve>                         FloatCurves;                                      		// 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.AnimSegment
// 0x0020
struct FAnimSegment
{
	class UAnimSequenceBase*                           AnimReference;                                    		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartPos;                                         		// 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              AnimStartTime;                                    		// 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimEndTime;                                      		// 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimPlayRate;                                     		// 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LoopingCount;                                     		// 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimTrack
// 0x0010
struct FAnimTrack
{
	TArray<struct FAnimSegment>                        AnimSegments;                                     		// 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_EditFixedSize, CPF_ZeroConstructor)
};

// ScriptStruct Engine.AlphaBlend
// 0x0038
struct FAlphaBlend
{
	TEnumAsByte<enum class EAlphaBlendOption>          BlendOption;                                      		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0001(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                      		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendTime;                                        		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                              		// 0x0014(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.AnimSyncMarker
// 0x0010
struct FAnimSyncMarker
{
	struct FName                                       MarkerName;                                       		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Time;                                             		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MarkerSyncData
// 0x0020
struct FMarkerSyncData
{
	TArray<struct FAnimSyncMarker>                     AuthoredSyncMarkers;                              		// 0x0000(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                              		// 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.CompositeSection
// 0x0028 (0x0058 - 0x0030)
struct FCompositeSection : public FAnimLinkableElement
{
	struct FName                                       SectionName;                                      		// 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartTime;                                        		// 0x0038(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x003C(0x0004) MISSED OFFSET
	struct FName                                       NextSectionName;                                  		// 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UAnimMetaData*>                       MetaData;                                         		// 0x0048(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor)
};

// ScriptStruct Engine.SlotAnimationTrack
// 0x0018
struct FSlotAnimationTrack
{
	struct FName                                       SlotName;                                         		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAnimTrack                                  AnimTrack;                                        		// 0x0008(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.BranchingPoint
// 0x0010 (0x0040 - 0x0030)
struct FBranchingPoint : public FAnimLinkableElement
{
	struct FName                                       EventName;                                        		// 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DisplayTime;                                      		// 0x0038(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              TriggerTimeOffset;                                		// 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BranchingPointMarker
// 0x000C
struct FBranchingPointMarker
{
	int                                                NotifyIndex;                                      		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TriggerTime;                                      		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAnimNotifyEventType>       NotifyEventType;                                  		// 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TrackToSkeletonMap
// 0x0004
struct FTrackToSkeletonMap
{
	int                                                BoneTreeIndex;                                    		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlendParameter
// 0x0020
struct FBlendParameter
{
	struct FString                                     DisplayName;                                      		// 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              Min;                                              		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Max;                                              		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GridNum;                                          		// 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.InterpolationParameter
// 0x0008
struct FInterpolationParameter
{
	float                                              InterpolationTime;                                		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EFilterInterpolationType>   InterpolationType;                                		// 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PerBoneInterpolation
// 0x0018
struct FPerBoneInterpolation
{
	struct FBoneReference                              BoneReference;                                    		// 0x0000(0x0010) (CPF_Edit)
	float                                              InterpolationSpeedPerSec;                         		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlendSample
// 0x0018
struct FBlendSample
{
	class UAnimSequence*                               Animation;                                        		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SampleValue;                                      		// 0x0008(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.EditorElement
// 0x0018
struct FEditorElement
{
	int                                                Indices[0x3];                                     		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Weights[0x3];                                     		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PoseData
// 0x0030
struct FPoseData
{
	TArray<struct FTransform>                          LocalSpacePose;                                   		// 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<unsigned char>                              LocalSpacePoseMask;                               		// 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      CurveData;                                        		// 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.PoseDataContainer
// 0x0090
struct FPoseDataContainer
{
	TArray<struct FSmartName>                          PoseNames;                                        		// 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FPoseData>                           Poses;                                            		// 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FName>                               Tracks;                                           		// 0x0020(0x0010) (CPF_ZeroConstructor)
	TMap<struct FName, int>                            TrackMap;                                         		// 0x0030(0x0050) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FAnimCurveBase>                      Curves;                                           		// 0x0080(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.BakedStateExitTransition
// 0x0020
struct FBakedStateExitTransition
{
	int                                                CanTakeDelegateIndex;                             		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CustomResultNodeIndex;                            		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TransitionIndex;                                  		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDesiredTransitionReturnValue : 1;                		// 0x000C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAutomaticRemainingTimeRule : 1;                  		// 0x000D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                               		// 0x000E(0x0002) MISSED OFFSET
	TArray<int>                                        PoseEvaluatorLinks;                               		// 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.BakedAnimationState
// 0x0048
struct FBakedAnimationState
{
	struct FName                                       StateName;                                        		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FBakedStateExitTransition>           Transitions;                                      		// 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                StateRootNodeIndex;                               		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StartNotify;                                      		// 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EndNotify;                                        		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FullyBlendedNotify;                               		// 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsAConduit : 1;                                  		// 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0029(0x0003) MISSED OFFSET
	int                                                EntryRuleNodeIndex;                               		// 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        PlayerNodeIndices;                                		// 0x0030(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bAlwaysResetOnEntry : 1;                          		// 0x0040(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimationStateBase
// 0x0008
struct FAnimationStateBase
{
	struct FName                                       StateName;                                        		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// 0x0038 (0x0040 - 0x0008)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase
{
	int                                                PreviousState;                                    		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NextState;                                        		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CrossfadeDuration;                                		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StartNotify;                                      		// 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EndNotify;                                        		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InterruptNotify;                                  		// 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAlphaBlendOption>          BlendMode;                                        		// 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0021(0x0007) MISSED OFFSET
	class UCurveFloat*                                 CustomCurve;                                      		// 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendProfile*                               BlendProfile;                                     		// 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ETransitionLogicType>       LogicType;                                        		// 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BakedAnimationStateMachine
// 0x0030
struct FBakedAnimationStateMachine
{
	struct FName                                       MachineName;                                      		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InitialState;                                     		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x000C(0x0004) MISSED OFFSET
	TArray<struct FBakedAnimationState>                States;                                           		// 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FAnimationTransitionBetweenStates>   Transitions;                                      		// 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.AnimGroupInfo
// 0x0018
struct FAnimGroupInfo
{
	struct FName                                       Name;                                             		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                            		// 0x0008(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimSetMeshLinkup
// 0x0010
struct FAnimSetMeshLinkup
{
	TArray<int>                                        BoneToTrackTable;                                 		// 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.FilePath
// 0x0010
struct FFilePath
{
	struct FString                                     FilePath;                                         		// 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// 0x0018
struct FEditorMapPerformanceTestDefinition
{
	struct FFilePath                                   PerformanceTestmap;                               		// 0x0000(0x0010) (CPF_Edit, CPF_Config)
	int                                                TestTimer;                                        		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ImportFactorySettingValues
// 0x0020
struct FImportFactorySettingValues
{
	struct FString                                     SettingName;                                      		// 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     Value;                                            		// 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// 0x0020
struct FEditorImportWorkflowDefinition
{
	struct FFilePath                                   ImportFilePath;                                   		// 0x0000(0x0010) (CPF_Edit, CPF_Config)
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                  		// 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// 0x0150
struct FBuildPromotionImportWorkflowSettings
{
	struct FEditorImportWorkflowDefinition             Diffuse;                                          		// 0x0000(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             Normal;                                           		// 0x0020(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             StaticMesh;                                       		// 0x0040(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             ReimportStaticMesh;                               		// 0x0060(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             BlendShapeMesh;                                   		// 0x0080(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             MorphMesh;                                        		// 0x00A0(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             SkeletalMesh;                                     		// 0x00C0(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             Animation;                                        		// 0x00E0(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             Sound;                                            		// 0x0100(0x0020) (CPF_Edit, CPF_Config)
	struct FEditorImportWorkflowDefinition             SurroundSound;                                    		// 0x0120(0x0020) (CPF_Edit, CPF_Config)
	TArray<struct FEditorImportWorkflowDefinition>     OtherAssetsToImport;                              		// 0x0140(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// 0x0060
struct FBuildPromotionOpenAssetSettings
{
	struct FFilePath                                   BlueprintAsset;                                   		// 0x0000(0x0010) (CPF_Edit, CPF_Config)
	struct FFilePath                                   MaterialAsset;                                    		// 0x0010(0x0010) (CPF_Edit, CPF_Config)
	struct FFilePath                                   ParticleSystemAsset;                              		// 0x0020(0x0010) (CPF_Edit, CPF_Config)
	struct FFilePath                                   SkeletalMeshAsset;                                		// 0x0030(0x0010) (CPF_Edit, CPF_Config)
	struct FFilePath                                   StaticMeshAsset;                                  		// 0x0040(0x0010) (CPF_Edit, CPF_Config)
	struct FFilePath                                   TextureAsset;                                     		// 0x0050(0x0010) (CPF_Edit, CPF_Config)
};

// ScriptStruct Engine.DirectoryPath
// 0x0010
struct FDirectoryPath
{
	struct FString                                     path;                                             		// 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// 0x0020
struct FBuildPromotionNewProjectSettings
{
	struct FDirectoryPath                              NewProjectFolderOverride;                         		// 0x0000(0x0010) (CPF_Edit)
	struct FString                                     NewProjectNameOverride;                           		// 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// 0x01F0
struct FBuildPromotionTestSettings
{
	struct FFilePath                                   DefaultStaticMeshAsset;                           		// 0x0000(0x0010) (CPF_Edit)
	struct FBuildPromotionImportWorkflowSettings       ImportWorkflow;                                   		// 0x0010(0x0150) (CPF_Edit)
	struct FBuildPromotionOpenAssetSettings            OpenAssets;                                       		// 0x0160(0x0060) (CPF_Edit)
	struct FBuildPromotionNewProjectSettings           NewProjectSettings;                               		// 0x01C0(0x0020) (CPF_Edit)
	struct FFilePath                                   SourceControlMaterial;                            		// 0x01E0(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// 0x0030
struct FMaterialEditorPromotionSettings
{
	struct FFilePath                                   DefaultMaterialAsset;                             		// 0x0000(0x0010) (CPF_Edit)
	struct FFilePath                                   DefaultDiffuseTexture;                            		// 0x0010(0x0010) (CPF_Edit)
	struct FFilePath                                   DefaultNormalTexture;                             		// 0x0020(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// 0x0010
struct FParticleEditorPromotionSettings
{
	struct FFilePath                                   DefaultParticleAsset;                             		// 0x0000(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// 0x0030
struct FBlueprintEditorPromotionSettings
{
	struct FFilePath                                   FirstMeshPath;                                    		// 0x0000(0x0010) (CPF_Edit)
	struct FFilePath                                   SecondMeshPath;                                   		// 0x0010(0x0010) (CPF_Edit)
	struct FFilePath                                   DefaultParticleAsset;                             		// 0x0020(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.OpenTestAsset
// 0x0018
struct FOpenTestAsset
{
	struct FFilePath                                   AssetToOpen;                                      		// 0x0000(0x0010) (CPF_Edit)
	unsigned char                                      bSkipTestWhenUnAttended : 1;                      		// 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ExternalToolDefinition
// 0x0060
struct FExternalToolDefinition
{
	struct FString                                     ToolName;                                         		// 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FFilePath                                   ExecutablePath;                                   		// 0x0010(0x0010) (CPF_Edit, CPF_Config)
	struct FString                                     CommandLineOptions;                               		// 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FDirectoryPath                              WorkingDirectory;                                 		// 0x0030(0x0010) (CPF_Edit, CPF_Config)
	struct FString                                     ScriptExtension;                                  		// 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FDirectoryPath                              ScriptDirectory;                                  		// 0x0050(0x0010) (CPF_Edit, CPF_Config)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// 0x0038
struct FEditorImportExportTestDefinition
{
	struct FFilePath                                   ImportFilePath;                                   		// 0x0000(0x0010) (CPF_Edit, CPF_Config)
	struct FString                                     ExportFileExtension;                              		// 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      bSkipExport : 1;                                  		// 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0021(0x0007) MISSED OFFSET
	TArray<struct FImportFactorySettingValues>         FactorySettings;                                  		// 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
};

// ScriptStruct Engine.LaunchOnTestSettings
// 0x0020
struct FLaunchOnTestSettings
{
	struct FFilePath                                   LaunchOnTestmap;                                  		// 0x0000(0x0010) (CPF_Edit, CPF_Config)
	struct FString                                     DeviceID;                                         		// 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
};

// ScriptStruct Engine.BlendProfileBoneEntry
// 0x0018
struct FBlendProfileBoneEntry
{
	struct FBoneReference                              BoneReference;                                    		// 0x0000(0x0010) (CPF_Edit)
	float                                              BlendScale;                                       		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CollisionResponseTemplate
// 0x0060
struct FCollisionResponseTemplate
{
	struct FName                                       Name;                                             		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionEnabled>          CollisionEnabled;                                 		// 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0009(0x0007) MISSED OFFSET
	struct FName                                       ObjectTypeName;                                   		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FResponseChannel>                    CustomResponses;                                  		// 0x0018(0x0010) (CPF_ZeroConstructor)
	struct FString                                     HelpMessage;                                      		// 0x0028(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bCanModify : 1;                                   		// 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                              		// 0x0039(0x0027) MISSED OFFSET
};

// ScriptStruct Engine.CustomChannelSetup
// 0x0018
struct FCustomChannelSetup
{
	TEnumAsByte<enum class ECollisionChannel>          Channel;                                          		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Name;                                             		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionResponse>         DefaultResponse;                                  		// 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bTraceType : 1;                                   		// 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bStaticObject : 1;                                		// 0x0012(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CustomProfile
// 0x0018
struct FCustomProfile
{
	struct FName                                       Name;                                             		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FResponseChannel>                    CustomResponses;                                  		// 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.Redirector
// 0x0010
struct FRedirector
{
	struct FName                                       OldName;                                          		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NewName;                                          		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.KShapeElem
// 0x0020
struct FKShapeElem
{
	unsigned char                                      UnknownData00[0x20];                              		// 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.KSphereElem
// 0x0050 (0x0070 - 0x0020)
struct FKSphereElem : public FKShapeElem
{
	struct FMatrix                                     TM;                                               		// 0x0020(0x0040) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FVector                                     Center;                                           		// 0x0060(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                           		// 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.KBoxElem
// 0x0070 (0x0090 - 0x0020)
struct FKBoxElem : public FKShapeElem
{
	struct FMatrix                                     TM;                                               		// 0x0020(0x0040) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FVector                                     Center;                                           		// 0x0060(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x006C(0x0004) MISSED OFFSET
	struct FQuat                                       Orientation;                                      		// 0x0070(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	float                                              X;                                                		// 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Y;                                                		// 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Z;                                                		// 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.KSphylElem
// 0x0070 (0x0090 - 0x0020)
struct FKSphylElem : public FKShapeElem
{
	struct FMatrix                                     TM;                                               		// 0x0020(0x0040) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FVector                                     Center;                                           		// 0x0060(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x006C(0x0004) MISSED OFFSET
	struct FQuat                                       Orientation;                                      		// 0x0070(0x0010) (CPF_Edit, CPF_IsPlainOldData)
	float                                              Radius;                                           		// 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Length;                                           		// 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0088(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.KConvexElem
// 0x0070 (0x0090 - 0x0020)
struct FKConvexElem : public FKShapeElem
{
	TArray<struct FVector>                             VertexData;                                       		// 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FBox                                        ElemBox;                                          		// 0x0030(0x001C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x004C(0x0004) MISSED OFFSET
	struct FTransform                                  Transform;                                        		// 0x0050(0x0030) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                              		// 0x0080(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.KAggregateGeom
// 0x0048
struct FKAggregateGeom
{
	TArray<struct FKSphereElem>                        SphereElems;                                      		// 0x0000(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FKBoxElem>                           BoxElems;                                         		// 0x0010(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FKSphylElem>                         SphylElems;                                       		// 0x0020(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FKConvexElem>                        ConvexElems;                                      		// 0x0030(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.CircleElement2D
// 0x000C
struct FCircleElement2D
{
	struct FVector2D                                   Center;                                           		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              Radius;                                           		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BoxElement2D
// 0x0014
struct FBoxElement2D
{
	struct FVector2D                                   Center;                                           		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              Width;                                            		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              Height;                                           		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              Angle;                                            		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ConvexElement2D
// 0x0010
struct FConvexElement2D
{
	TArray<struct FVector2D>                           VertexData;                                       		// 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.AggregateGeometry2D
// 0x0030
struct FAggregateGeometry2D
{
	TArray<struct FCircleElement2D>                    CircleElements;                                   		// 0x0000(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FBoxElement2D>                       BoxElements;                                      		// 0x0010(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	TArray<struct FConvexElement2D>                    ConvexElements;                                   		// 0x0020(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
};

// ScriptStruct Engine.PhysicalAnimationData
// 0x0028
struct FPhysicalAnimationData
{
	struct FName                                       BodyName;                                         		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsLocalSimulation : 1;                           		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	float                                              OrientationStrength;                              		// 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AngularVelocityStrength;                          		// 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PositionStrength;                                 		// 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VelocityStrength;                                 		// 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxLinearForce;                                   		// 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAngularForce;                                  		// 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PhysicalAnimationProfile
// 0x0030
struct FPhysicalAnimationProfile
{
	struct FName                                       ProfileName;                                      		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FPhysicalAnimationData                      PhysicalAnimationData;                            		// 0x0008(0x0028) (CPF_Edit)
};

// ScriptStruct Engine.BranchFilter
// 0x0010
struct FBranchFilter
{
	struct FName                                       BoneName;                                         		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BlendDepth;                                       		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.InputBlendPose
// 0x0010
struct FInputBlendPose
{
	TArray<struct FBranchFilter>                       BranchFilters;                                    		// 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.BuilderPoly
// 0x0028
struct FBuilderPoly
{
	TArray<int>                                        VertexIndices;                                    		// 0x0000(0x0010) (CPF_ZeroConstructor)
	int                                                Direction;                                        		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0014(0x0004) MISSED OFFSET
	struct FName                                       ItemName;                                         		// 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PolyFlags;                                        		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// 0x0020
struct FPreviewMeshCollectionEntry
{
	TAssetPtr<class USkeletalMesh>                     SkeletalMesh;                                     		// 0x0000(0x0020) (CPF_Edit)
};

// ScriptStruct Engine.FractureMaterial
// 0x0024
struct FFractureMaterial
{
	struct FVector2D                                   UVScale;                                          		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   UVOffset;                                         		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Tangent;                                          		// 0x0010(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UAngle;                                           		// 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InteriorElementIndex;                             		// 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DestructibleChunkParameters
// 0x0004
struct FDestructibleChunkParameters
{
	unsigned char                                      bIsSupportChunk : 1;                              		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDoNotFracture : 1;                               		// 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDoNotDamage : 1;                                 		// 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDoNotCrumble : 1;                                		// 0x0003(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AudioQualitySettings
// 0x0020
struct FAudioQualitySettings
{
	struct FText                                       DisplayName;                                      		// 0x0000(0x0018) (CPF_Edit)
	int                                                MaxChannels;                                      		// 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PhysicalSurfaceName
// 0x0010
struct FPhysicalSurfaceName
{
	TEnumAsByte<enum class EPhysicalSurface>           Type;                                             		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0001(0x0007) MISSED OFFSET
	struct FName                                       Name;                                             		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TextureLODGroup
// 0x0038
struct FTextureLODGroup
{
	TEnumAsByte<enum class TextureGroup>               Group;                                            		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                               		// 0x0001(0x000B) MISSED OFFSET
	int                                                LODBias;                                          		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x0010(0x0004) MISSED OFFSET
	int                                                NumStreamedMips;                                  		// 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class TextureMipGenSettings>      MipGenSettings;                                   		// 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                               		// 0x0019(0x0003) MISSED OFFSET
	int                                                MinLODSize;                                       		// 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxLODSize;                                       		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                               		// 0x0024(0x0004) MISSED OFFSET
	struct FName                                       MinMagFilter;                                     		// 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       MipFilter;                                        		// 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DialogueContext
// 0x0018
struct FDialogueContext
{
	class UDialogueVoice*                              Speaker;                                          		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UDialogueVoice*>                      Targets;                                          		// 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.DialogueContextMapping
// 0x0038
struct FDialogueContextMapping
{
	struct FDialogueContext                            Context;                                          		// 0x0000(0x0018) (CPF_Edit)
	class USoundWave*                                  SoundWave;                                        		// 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     LocalizationKeyFormat;                            		// 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UDialogueSoundWaveProxy*                     Proxy;                                            		// 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// 0x0018
struct FBlueprintComponentDelegateBinding
{
	struct FName                                       ComponentPropertyName;                            		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DelegatePropertyName;                             		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FunctionNameToBind;                               		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// 0x0004
struct FBlueprintInputDelegateBinding
{
	unsigned char                                      bConsumeInput : 1;                                		// 0x0000(0x0001)
	unsigned char                                      bExecuteWhenPaused : 1;                           		// 0x0000(0x0001)
	unsigned char                                      bOverrideParentBinding : 1;                       		// 0x0000(0x0001)
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// 0x001C (0x0020 - 0x0004)
struct FBlueprintInputActionDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	struct FName                                       InputActionName;                                  		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EInputEvent>                InputKeyEvent;                                    		// 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                               		// 0x0011(0x0007) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                               		// 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// 0x0014 (0x0018 - 0x0004)
struct FBlueprintInputAxisDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	struct FName                                       InputAxisName;                                    		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FunctionNameToBind;                               		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// 0x0024 (0x0028 - 0x0004)
struct FBlueprintInputAxisKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	struct FKey                                        AxisKey;                                          		// 0x0008(0x0018)
	struct FName                                       FunctionNameToBind;                               		// 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// 0x0034 (0x0038 - 0x0004)
struct FBlueprintInputKeyDelegateBinding : public FBlueprintInputDelegateBinding
{
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	struct FInputChord                                 InputChord;                                       		// 0x0008(0x0020)
	TEnumAsByte<enum class EInputEvent>                InputKeyEvent;                                    		// 0x0028(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                               		// 0x0029(0x0007) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                               		// 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// 0x000C (0x0010 - 0x0004)
struct FBlueprintInputTouchDelegateBinding : public FBlueprintInputDelegateBinding
{
	TEnumAsByte<enum class EInputEvent>                InputKeyEvent;                                    		// 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0005(0x0003) MISSED OFFSET
	struct FName                                       FunctionNameToBind;                               		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ExtendedReflectionSharedCubemap
// 0x0030
struct FExtendedReflectionSharedCubemap
{
	int                                                CubemapSize;                                      		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	class UTextureCube*                                SourceCube;                                       		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FGuid                                       SourceId;                                         		// 0x0010(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<unsigned char>                              UncompressedFullHDR;                              		// 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.FontImportOptionsData
// 0x00B0
struct FFontImportOptionsData
{
	struct FString                                     FontName;                                         		// 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              Height;                                           		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableAntialiasing : 1;                          		// 0x0014(0x0001) (CPF_Edit)
	unsigned char                                      bEnableBold : 1;                                  		// 0x0014(0x0001) (CPF_Edit)
	unsigned char                                      bEnableItalic : 1;                                		// 0x0014(0x0001) (CPF_Edit)
	unsigned char                                      bEnableUnderline : 1;                             		// 0x0014(0x0001) (CPF_Edit)
	unsigned char                                      bAlphaOnly : 1;                                   		// 0x0014(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0015(0x0003) MISSED OFFSET
	TEnumAsByte<enum class EFontImportCharacterSet>    CharacterSet;                                     		// 0x0018(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                               		// 0x0019(0x0007) MISSED OFFSET
	struct FString                                     Chars;                                            		// 0x0020(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     UnicodeRange;                                     		// 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     CharsFilePath;                                    		// 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     CharsFileWildcard;                                		// 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bCreatePrintableOnly : 1;                         		// 0x0060(0x0001) (CPF_Edit)
	unsigned char                                      bIncludeASCIIRange : 1;                           		// 0x0060(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData02[0x3];                               		// 0x0061(0x0003) MISSED OFFSET
	struct FLinearColor                                ForegroundColor;                                  		// 0x0064(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableDropShadow : 1;                            		// 0x0074(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData03[0x3];                               		// 0x0075(0x0003) MISSED OFFSET
	int                                                TexturePageWidth;                                 		// 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TexturePageMaxHeight;                             		// 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                XPadding;                                         		// 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                YPadding;                                         		// 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ExtendBoxTop;                                     		// 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ExtendBoxBottom;                                  		// 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ExtendBoxRight;                                   		// 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ExtendBoxLeft;                                    		// 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableLegacyMode : 1;                            		// 0x0098(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData04[0x3];                               		// 0x0099(0x0003) MISSED OFFSET
	int                                                Kerning;                                          		// 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseDistanceFieldAlpha : 1;                       		// 0x00A0(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData05[0x3];                               		// 0x00A1(0x0003) MISSED OFFSET
	int                                                DistanceFieldScaleFactor;                         		// 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceFieldScanRadiusScale;                     		// 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.FontCharacter
// 0x0018
struct FFontCharacter
{
	int                                                StartU;                                           		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StartV;                                           		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                USize;                                            		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                VSize;                                            		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      TextureIndex;                                     		// 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0011(0x0003) MISSED OFFSET
	int                                                VerticalOffset;                                   		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// 0x0100
struct FHapticFeedbackDetails_Curve
{
	struct FRuntimeFloatCurve                          Frequency;                                        		// 0x0000(0x0080) (CPF_Edit)
	struct FRuntimeFloatCurve                          Amplitude;                                        		// 0x0080(0x0080) (CPF_Edit)
};

// ScriptStruct Engine.SoundConcurrencySettings
// 0x0010
struct FSoundConcurrencySettings
{
	int                                                MaxCount;                                         		// 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLimitToOwner : 1;                                		// 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0005(0x0003) MISSED OFFSET
	TEnumAsByte<enum class EMaxConcurrentResolutionRule> ResolutionRule;                                   		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	float                                              VolumeScale;                                      		// 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SoundGroup
// 0x0020
struct FSoundGroup
{
	TEnumAsByte<enum class ESoundGroup>                SoundGroup;                                       		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0001(0x0007) MISSED OFFSET
	struct FString                                     DisplayName;                                      		// 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      bAlwaysDecompressOnLoad : 1;                      		// 0x0018(0x0001) (CPF_Config)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0019(0x0003) MISSED OFFSET
	float                                              DecompressedDuration;                             		// 0x001C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SubtitleCue
// 0x0020
struct FSubtitleCue
{
	struct FText                                       Text;                                             		// 0x0000(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Time;                                             		// 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.LocalizedSubtitle
// 0x0028
struct FLocalizedSubtitle
{
	struct FString                                     LanguageExt;                                      		// 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FSubtitleCue>                        Subtitles;                                        		// 0x0010(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bMature : 1;                                      		// 0x0020(0x0001)
	unsigned char                                      bManualWordWrap : 1;                              		// 0x0020(0x0001)
	unsigned char                                      bSingleLine : 1;                                  		// 0x0020(0x0001)
};

// ScriptStruct Engine.ComponentKey
// 0x0020
struct FComponentKey
{
	class UBlueprintGeneratedClass*                    OwnerClass;                                       		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SCSVariableName;                                  		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       AssociatedGuid;                                   		// 0x0010(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ComponentOverrideRecord
// 0x0080
struct FComponentOverrideRecord
{
	class UClass*                                      ComponentClass;                                   		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UActorComponent*                             ComponentTemplate;                                		// 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FComponentKey                               ComponentKey;                                     		// 0x0010(0x0020)
	struct FBlueprintCookedComponentInstancingData     CookedComponentInstancingData;                    		// 0x0030(0x0050)
};

// ScriptStruct Engine.KeyBind
// 0x0030
struct FKeyBind
{
	struct FKey                                        Key;                                              		// 0x0000(0x0018) (CPF_Config)
	struct FString                                     Command;                                          		// 0x0018(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      Control : 1;                                      		// 0x0028(0x0001) (CPF_Config)
	unsigned char                                      Shift : 1;                                        		// 0x0028(0x0001) (CPF_Config)
	unsigned char                                      Alt : 1;                                          		// 0x0028(0x0001) (CPF_Config)
	unsigned char                                      Cmd : 1;                                          		// 0x0028(0x0001) (CPF_Config)
	unsigned char                                      bIgnoreCtrl : 1;                                  		// 0x0028(0x0001) (CPF_Config)
	unsigned char                                      bIgnoreShift : 1;                                 		// 0x0028(0x0001) (CPF_Config)
	unsigned char                                      bIgnoreAlt : 1;                                   		// 0x0028(0x0001) (CPF_Config)
	unsigned char                                      bIgnoreCmd : 1;                                   		// 0x0028(0x0001) (CPF_Config)
	unsigned char                                      bDisabled : 1;                                    		// 0x0029(0x0001) (CPF_Transient)
};

// ScriptStruct Engine.InputAxisProperties
// 0x0010
struct FInputAxisProperties
{
	float                                              DeadZone;                                         		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Sensitivity;                                      		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Exponent;                                         		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bInvert : 1;                                      		// 0x000C(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.InputAxisConfigEntry
// 0x0018
struct FInputAxisConfigEntry
{
	struct FName                                       AxisKeyName;                                      		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FInputAxisProperties                        AxisProperties;                                   		// 0x0008(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.InputActionKeyMapping
// 0x0028
struct FInputActionKeyMapping
{
	struct FName                                       ActionName;                                       		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FKey                                        Key;                                              		// 0x0008(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bShift : 1;                                       		// 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCtrl : 1;                                        		// 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bAlt : 1;                                         		// 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bCmd : 1;                                         		// 0x0020(0x0001) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.InputAxisKeyMapping
// 0x0028
struct FInputAxisKeyMapping
{
	struct FName                                       AxisName;                                         		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FKey                                        Key;                                              		// 0x0008(0x0018) (CPF_Edit)
	float                                              Scale;                                            		// 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CurveEdEntry
// 0x0038
struct FCurveEdEntry
{
	class UObject*                                     CurveObject;                                      		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      CurveColor;                                       		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x000C(0x0004) MISSED OFFSET
	struct FString                                     CurveName;                                        		// 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                bHideCurve;                                       		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                bColorCurve;                                      		// 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                bFloatingPointColorCurve;                         		// 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                bClamp;                                           		// 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClampLow;                                         		// 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClampHigh;                                        		// 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CurveEdTab
// 0x0030
struct FCurveEdTab
{
	struct FString                                     TabName;                                          		// 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FCurveEdEntry>                       Curves;                                           		// 0x0010(0x0010) (CPF_ZeroConstructor)
	float                                              ViewStartInput;                                   		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewEndInput;                                     		// 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewStartOutput;                                  		// 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewEndOutput;                                    		// 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BoolTrackKey
// 0x0008
struct FBoolTrackKey
{
	float                                              Time;                                             		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Value : 1;                                        		// 0x0004(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.DirectorTrackCut
// 0x0018
struct FDirectorTrackCut
{
	float                                              Time;                                             		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TransitionTime;                                   		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       TargetCamGroup;                                   		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ShotNumber;                                       		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.EventTrackKey
// 0x0010
struct FEventTrackKey
{
	float                                              Time;                                             		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	struct FName                                       EventName;                                        		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimControlTrackKey
// 0x0020
struct FAnimControlTrackKey
{
	float                                              StartTime;                                        		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	class UAnimSequence*                               AnimSeq;                                          		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimStartOffset;                                  		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimEndOffset;                                    		// 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimPlayRate;                                     		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLooping : 1;                                     		// 0x001C(0x0001)
	unsigned char                                      bReverse : 1;                                     		// 0x001C(0x0001)
};

// ScriptStruct Engine.InterpLookupPoint
// 0x0010
struct FInterpLookupPoint
{
	struct FName                                       GroupName;                                        		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Time;                                             		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.InterpLookupTrack
// 0x0010
struct FInterpLookupTrack
{
	TArray<struct FInterpLookupPoint>                  Points;                                           		// 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.ParticleReplayTrackKey
// 0x000C
struct FParticleReplayTrackKey
{
	float                                              Time;                                             		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                         		// 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ClipIDNumber;                                     		// 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ToggleTrackKey
// 0x0008
struct FToggleTrackKey
{
	float                                              Time;                                             		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ETrackToggleAction>         ToggleAction;                                     		// 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SoundTrackKey
// 0x0018
struct FSoundTrackKey
{
	float                                              Time;                                             		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Volume;                                           		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Pitch;                                            		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x000C(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound;                                            		// 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.VisibilityTrackKey
// 0x0008
struct FVisibilityTrackKey
{
	float                                              Time;                                             		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EVisibilityTrackAction>     Action;                                           		// 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EVisibilityTrackCondition>  ActiveCondition;                                  		// 0x0005(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PrimitiveMaterialRef
// 0x0018
struct FPrimitiveMaterialRef
{
	class UPrimitiveComponent*                         Primitive;                                        		// 0x0000(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UDecalComponent*                             Decal;                                            		// 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                ElementIndex;                                     		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.LayerActorStats
// 0x0010
struct FLayerActorStats
{
	class UClass*                                      Type;                                             		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Total;                                            		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ExpressionInput
// 0x0038
struct FExpressionInput
{
	int                                                OutputIndex;                                      		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	struct FString                                     InputName;                                        		// 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                Mask;                                             		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskR;                                            		// 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskG;                                            		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskB;                                            		// 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskA;                                            		// 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x002C(0x0004) MISSED OFFSET
	struct FName                                       ExpressionName;                                   		// 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MaterialAttributesInput
// 0x0008 (0x0040 - 0x0038)
struct FMaterialAttributesInput : public FExpressionInput
{
	int                                                PropertyConnectedBitmask;                         		// 0x0038(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CustomInput
// 0x0048
struct FCustomInput
{
	struct FString                                     InputName;                                        		// 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FExpressionInput                            Input;                                            		// 0x0010(0x0038)
};

// ScriptStruct Engine.FunctionExpressionInput
// 0x0050
struct FFunctionExpressionInput
{
	class UMaterialExpressionFunctionInput*            ExpressionInput;                                  		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionInputId;                                		// 0x0008(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FExpressionInput                            Input;                                            		// 0x0018(0x0038)
};

// ScriptStruct Engine.FunctionExpressionOutput
// 0x0040
struct FFunctionExpressionOutput
{
	class UMaterialExpressionFunctionOutput*           ExpressionOutput;                                 		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionOutputId;                               		// 0x0008(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FExpressionOutput                           Output;                                           		// 0x0018(0x0028) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.MaterialInput
// 0x0038
struct FMaterialInput
{
	int                                                OutputIndex;                                      		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	struct FString                                     InputName;                                        		// 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                Mask;                                             		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskR;                                            		// 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskG;                                            		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskB;                                            		// 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaskA;                                            		// 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x002C(0x0004) MISSED OFFSET
	struct FName                                       ExpressionName;                                   		// 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ColorMaterialInput
// 0x0008 (0x0040 - 0x0038)
struct FColorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                  		// 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0039(0x0003) MISSED OFFSET
	struct FColor                                      Constant;                                         		// 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ScalarMaterialInput
// 0x0008 (0x0040 - 0x0038)
struct FScalarMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                  		// 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0039(0x0003) MISSED OFFSET
	float                                              Constant;                                         		// 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.VectorMaterialInput
// 0x0010 (0x0048 - 0x0038)
struct FVectorMaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                  		// 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0039(0x0003) MISSED OFFSET
	struct FVector                                     Constant;                                         		// 0x003C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.Vector2MaterialInput
// 0x0010 (0x0048 - 0x0038)
struct FVector2MaterialInput : public FMaterialInput
{
	unsigned char                                      UseConstant : 1;                                  		// 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0039(0x0003) MISSED OFFSET
	float                                              ConstantX;                                        		// 0x003C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ConstantY;                                        		// 0x0040(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MaterialFunctionInfo
// 0x0018
struct FMaterialFunctionInfo
{
	struct FGuid                                       StateId;                                          		// 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialFunction*                           Function;                                         		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// 0x0018
struct FMaterialParameterCollectionInfo
{
	struct FGuid                                       StateId;                                          		// 0x0000(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialParameterCollection*                ParameterCollection;                              		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CollectionParameterBase
// 0x0018
struct FCollectionParameterBase
{
	struct FName                                       ParameterName;                                    		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ID;                                               		// 0x0008(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CollectionScalarParameter
// 0x0008 (0x0020 - 0x0018)
struct FCollectionScalarParameter : public FCollectionParameterBase
{
	float                                              DefaultValue;                                     		// 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CollectionVectorParameter
// 0x0010 (0x0028 - 0x0018)
struct FCollectionVectorParameter : public FCollectionParameterBase
{
	struct FLinearColor                                DefaultValue;                                     		// 0x0018(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NavCollisionCylinder
// 0x0014
struct FNavCollisionCylinder
{
	struct FVector                                     Offset;                                           		// 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                           		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Height;                                           		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NavCollisionBox
// 0x0018
struct FNavCollisionBox
{
	struct FVector                                     Offset;                                           		// 0x0000(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Extent;                                           		// 0x000C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DistributionLookupTable
// 0x0028
struct FDistributionLookupTable
{
	unsigned char                                      Op;                                               		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      EntryCount;                                       		// 0x0001(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      EntryStride;                                      		// 0x0002(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SubEntryStride;                                   		// 0x0003(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeScale;                                        		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TimeBias;                                         		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x000C(0x0004) MISSED OFFSET
	TArray<float>                                      Values;                                           		// 0x0010(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      LockFlag;                                         		// 0x0020(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RawDistribution
// 0x0028
struct FRawDistribution
{
	struct FDistributionLookupTable                    Table;                                            		// 0x0000(0x0028) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.RawDistributionVector
// 0x0028 (0x0050 - 0x0028)
struct FRawDistributionVector : public FRawDistribution
{
	float                                              MinValue;                                         		// 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxValue;                                         		// 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     MinValueVec;                                      		// 0x0030(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     MaxValueVec;                                      		// 0x003C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDistributionVector*                         Distribution;                                     		// 0x0048(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoClear, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RawDistributionFloat
// 0x0010 (0x0038 - 0x0028)
struct FRawDistributionFloat : public FRawDistribution
{
	float                                              MinValue;                                         		// 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxValue;                                         		// 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDistributionFloat*                          Distribution;                                     		// 0x0030(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_NoClear, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BeamModifierOptions
// 0x0004
struct FBeamModifierOptions
{
	unsigned char                                      bModify : 1;                                      		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bScale : 1;                                       		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bLock : 1;                                        		// 0x0000(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// 0x0020
struct FParticleRandomSeedInfo
{
	struct FName                                       ParameterName;                                    		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bGetSeedFromInstance : 1;                         		// 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bInstanceSeedIsIndex : 1;                         		// 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bResetSeedOnEmitterLooping : 1;                   		// 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bRandomlySelectSeedArray : 1;                     		// 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0009(0x0007) MISSED OFFSET
	TArray<int>                                        RandomSeeds;                                      		// 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// 0x0028
struct FParticleEvent_GenerateInfo
{
	TEnumAsByte<enum class EParticleEventType>         Type;                                             		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	int                                                Frequency;                                        		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ParticleFrequency;                                		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      FirstTimeOnly : 1;                                		// 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      LastTimeOnly : 1;                                 		// 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      UseReflectedImpactVector : 1;                     		// 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      bUseOrbitOffset : 1;                              		// 0x000C(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x3];                               		// 0x000D(0x0003) MISSED OFFSET
	struct FName                                       CustomName;                                       		// 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UParticleModuleEventSendToGame*>      ParticleModuleEventsToSendToGame;                 		// 0x0018(0x0010) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor)
};

// ScriptStruct Engine.LocationBoneSocketInfo
// 0x0018
struct FLocationBoneSocketInfo
{
	struct FName                                       BoneSocketName;                                   		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Offset;                                           		// 0x0008(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.OrbitOptions
// 0x0004
struct FOrbitOptions
{
	unsigned char                                      bProcessDuringSpawn : 1;                          		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bProcessDuringUpdate : 1;                         		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bUseEmitterTime : 1;                              		// 0x0000(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.EmitterDynamicParameter
// 0x0050
struct FEmitterDynamicParameter
{
	struct FName                                       ParamName;                                        		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bUseEmitterTime : 1;                              		// 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      bSpawnTimeOnly : 1;                               		// 0x0008(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	TEnumAsByte<enum class EEmitterDynamicParameterValue> ValueMethod;                                      		// 0x000C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x000D(0x0003) MISSED OFFSET
	unsigned char                                      bScaleVelocityByParamValue : 1;                   		// 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData02[0x7];                               		// 0x0011(0x0007) MISSED OFFSET
	struct FRawDistributionFloat                       ParamValue;                                       		// 0x0018(0x0038) (CPF_Edit)
};

// ScriptStruct Engine.ParticleBurst
// 0x000C
struct FParticleBurst
{
	int                                                Count;                                            		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CountLow;                                         		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Time;                                             		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// 0x0070
struct FGPUSpriteLocalVectorFieldInfo
{
	class UVectorField*                                Field;                                            		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                        		// 0x0010(0x0030) (CPF_IsPlainOldData)
	struct FRotator                                    MinInitialRotation;                               		// 0x0040(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    MaxInitialRotation;                               		// 0x004C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    RotationRate;                                     		// 0x0058(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Intensity;                                        		// 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Tightness;                                        		// 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIgnoreComponentTransform : 1;                    		// 0x006C(0x0001)
	unsigned char                                      bTileX : 1;                                       		// 0x006C(0x0001)
	unsigned char                                      bTileY : 1;                                       		// 0x006C(0x0001)
	unsigned char                                      bTileZ : 1;                                       		// 0x006C(0x0001)
	unsigned char                                      bUseFixDT : 1;                                    		// 0x006C(0x0001)
};

// ScriptStruct Engine.FloatDistribution
// 0x0028
struct FFloatDistribution
{
	struct FDistributionLookupTable                    Table;                                            		// 0x0000(0x0028) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// 0x02C0
struct FGPUSpriteEmitterInfo
{
	class UParticleModuleRequired*                     RequiredModule;                                   		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleModuleSpawn*                        SpawnModule;                                      		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleModuleSpawnPerUnit*                 SpawnPerUnitModule;                               		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UParticleModule*>                     SpawnModules;                                     		// 0x0018(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0028(0x0008) MISSED OFFSET
	struct FGPUSpriteLocalVectorFieldInfo              LocalVectorField;                                 		// 0x0030(0x0070)
	struct FFloatDistribution                          VectorFieldScale;                                 		// 0x00A0(0x0028) (CPF_ZeroConstructor)
	struct FFloatDistribution                          DragCoefficient;                                  		// 0x00C8(0x0028) (CPF_ZeroConstructor)
	struct FFloatDistribution                          PointAttractorStrength;                           		// 0x00F0(0x0028) (CPF_ZeroConstructor)
	struct FFloatDistribution                          Resilience;                                       		// 0x0118(0x0028) (CPF_ZeroConstructor)
	struct FVector                                     ConstantAcceleration;                             		// 0x0140(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     PointAttractorPosition;                           		// 0x014C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PointAttractorRadiusSq;                           		// 0x0158(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     OrbitOffsetBase;                                  		// 0x015C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                 		// 0x0168(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   InvMaxSize;                                       		// 0x0174(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InvRotationRateScale;                             		// 0x017C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxLifetime;                                      		// 0x0180(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxParticleCount;                                 		// 0x0184(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EParticleScreenAlignment>   ScreenAlignment;                                  		// 0x0188(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EParticleAxisLock>          LockAxisFlag;                                     		// 0x0189(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                               		// 0x018A(0x0002) MISSED OFFSET
	unsigned char                                      bEnableCollision : 1;                             		// 0x018C(0x0001)
	unsigned char                                      UnknownData02[0x3];                               		// 0x018D(0x0003) MISSED OFFSET
	TEnumAsByte<enum class EParticleCollisionMode>     CollisionMode;                                    		// 0x0190(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                               		// 0x0191(0x0003) MISSED OFFSET
	unsigned char                                      bRemoveHMDRoll : 1;                               		// 0x0194(0x0001)
	unsigned char                                      UnknownData04[0x3];                               		// 0x0195(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                     		// 0x0198(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                     		// 0x019C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRawDistributionVector                      DynamicColor;                                     		// 0x01A0(0x0050)
	struct FRawDistributionFloat                       DynamicAlpha;                                     		// 0x01F0(0x0038)
	struct FRawDistributionVector                      DynamicColorScale;                                		// 0x0228(0x0050)
	struct FRawDistributionFloat                       DynamicAlphaScale;                                		// 0x0278(0x0038)
	unsigned char                                      UnknownData05[0x10];                              		// 0x02B0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.GPUSpriteResourceData
// 0x0160
struct FGPUSpriteResourceData
{
	TArray<struct FColor>                              QuantizedColorSamples;                            		// 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FColor>                              QuantizedMiscSamples;                             		// 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FColor>                              QuantizedSimulationAttrSamples;                   		// 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FVector4                                    ColorScale;                                       		// 0x0030(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    ColorBias;                                        		// 0x0040(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    MiscScale;                                        		// 0x0050(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    MiscBias;                                         		// 0x0060(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveScale;                         		// 0x0070(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    SimulationAttrCurveBias;                          		// 0x0080(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    SubImageSize;                                     		// 0x0090(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector4                                    SizeBySpeed;                                      		// 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ConstantAcceleration;                             		// 0x00B0(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     OrbitOffsetBase;                                  		// 0x00BC(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     OrbitOffsetRange;                                 		// 0x00C8(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     OrbitFrequencyBase;                               		// 0x00D4(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     OrbitFrequencyRange;                              		// 0x00E0(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     OrbitPhaseBase;                                   		// 0x00EC(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     OrbitPhaseRange;                                  		// 0x00F8(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GlobalVectorFieldScale;                           		// 0x0104(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GlobalVectorFieldTightness;                       		// 0x0108(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PerParticleVectorFieldScale;                      		// 0x010C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PerParticleVectorFieldBias;                       		// 0x0110(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DragCoefficientScale;                             		// 0x0114(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DragCoefficientBias;                              		// 0x0118(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ResilienceScale;                                  		// 0x011C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ResilienceBias;                                   		// 0x0120(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionRadiusScale;                             		// 0x0124(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionRadiusBias;                              		// 0x0128(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionTimeBias;                                		// 0x012C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OneMinusFriction;                                 		// 0x0130(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationRateScale;                                		// 0x0134(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CameraMotionBlurAmount;                           		// 0x0138(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EParticleScreenAlignment>   ScreenAlignment;                                  		// 0x013C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EParticleAxisLock>          LockAxisFlag;                                     		// 0x013D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                               		// 0x013E(0x0002) MISSED OFFSET
	struct FVector2D                                   PivotOffset;                                      		// 0x0140(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRemoveHMDRoll : 1;                               		// 0x0148(0x0001)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0149(0x0003) MISSED OFFSET
	float                                              MinFacingCameraBlendDistance;                     		// 0x014C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxFacingCameraBlendDistance;                     		// 0x0150(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                               		// 0x0154(0x000C) MISSED OFFSET
};

// ScriptStruct Engine.TireFrictionScalePair
// 0x0010
struct FTireFrictionScalePair
{
	class UTireType*                                   TireType;                                         		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrictionScale;                                    		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// 0x0110
struct FPhysicsConstraintProfileHandle
{
	struct FConstraintProfileProperties                ProfileProperties;                                		// 0x0000(0x0104)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0104(0x0004) MISSED OFFSET
	struct FName                                       ProfileName;                                      		// 0x0108(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DelegateArray
// 0x0010
struct FDelegateArray
{
	TArray<struct FScriptDelegate>                     Delegates;                                        		// 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.PurchaseInfo
// 0x0040
struct FPurchaseInfo
{
	struct FString                                     Identifier;                                       		// 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DisplayName;                                      		// 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DisplayDescription;                               		// 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FString                                     DisplayPrice;                                     		// 0x0030(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.RigTransformConstraint
// 0x0018
struct FRigTransformConstraint
{
	TEnumAsByte<enum class EConstraintTransform>       TranformType;                                     		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0001(0x0007) MISSED OFFSET
	struct FName                                       ParentSpace;                                      		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Weight;                                           		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TransformBaseConstraint
// 0x0010
struct FTransformBaseConstraint
{
	TArray<struct FRigTransformConstraint>             TransformConstraints;                             		// 0x0000(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.TransformBase
// 0x0028
struct FTransformBase
{
	struct FName                                       Node;                                             		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransformBaseConstraint                    Constraints[0x2];                                 		// 0x0008(0x0010) (CPF_Edit)
};

// ScriptStruct Engine.Node
// 0x0060
struct FNode
{
	struct FName                                       Name;                                             		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FName                                       ParentName;                                       		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FTransform                                  Transform;                                        		// 0x0010(0x0030) (CPF_IsPlainOldData)
	struct FString                                     DisplayName;                                      		// 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bAdvanced : 1;                                    		// 0x0050(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                               		// 0x0051(0x000F) MISSED OFFSET
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// 0x0018
struct FBPVariableMetaDataEntry
{
	struct FName                                       DataKey;                                          		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     DataValue;                                        		// 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.DestructibleDamageParameters
// 0x001C
struct FDestructibleDamageParameters
{
	float                                              DamageThreshold;                                  		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageSpread;                                     		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableImpactDamage : 1;                          		// 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	float                                              ImpactDamage;                                     		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DefaultImpactDamageDepth;                         		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCustomImpactResistance : 1;                      		// 0x0014(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0015(0x0003) MISSED OFFSET
	float                                              ImpactResistance;                                 		// 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DestructibleDebrisParameters
// 0x002C
struct FDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                                		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebrisLifetimeMax;                                		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebrisMaxSeparationMin;                           		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebrisMaxSeparationMax;                           		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBox                                        ValidBounds;                                      		// 0x0010(0x001C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DestructibleAdvancedParameters
// 0x0010
struct FDestructibleAdvancedParameters
{
	float                                              DamageCap;                                        		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactVelocityThreshold;                          		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxChunkSpeed;                                    		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FractureImpulseScale;                             		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DestructibleSpecialHierarchyDepths
// 0x0014
struct FDestructibleSpecialHierarchyDepths
{
	int                                                SupportDepth;                                     		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinimumFractureDepth;                             		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableDebris : 1;                                		// 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	int                                                DebrisDepth;                                      		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EssentialDepth;                                   		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DestructibleDepthParameters
// 0x0001
struct FDestructibleDepthParameters
{
	TEnumAsByte<enum class EImpactDamageOverride>      ImpactDamageOverride;                             		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DestructibleParametersFlag
// 0x0004
struct FDestructibleParametersFlag
{
	unsigned char                                      bAccumulateDamage : 1;                            		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bAssetDefinedSupport : 1;                         		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bWorldSupport : 1;                                		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bDebrisTimeout : 1;                               		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bDebrisMaxSeparation : 1;                         		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bCrumbleSmallestChunks : 1;                       		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bAccurateRaycasts : 1;                            		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bUseValidBounds : 1;                              		// 0x0000(0x0001) (CPF_Edit)
	unsigned char                                      bFormExtendedStructures : 1;                      		// 0x0001(0x0001) (CPF_Edit)
};

// ScriptStruct Engine.DestructibleParameters
// 0x0088
struct FDestructibleParameters
{
	struct FDestructibleDamageParameters               DamageParameters;                                 		// 0x0000(0x001C) (CPF_Edit)
	struct FDestructibleDebrisParameters               DebrisParameters;                                 		// 0x001C(0x002C) (CPF_Edit)
	struct FDestructibleAdvancedParameters             AdvancedParameters;                               		// 0x0048(0x0010) (CPF_Edit)
	struct FDestructibleSpecialHierarchyDepths         SpecialHierarchyDepths;                           		// 0x0058(0x0014) (CPF_Edit)
	unsigned char                                      UnknownData00[0x4];                               		// 0x006C(0x0004) MISSED OFFSET
	TArray<struct FDestructibleDepthParameters>        DepthParameters;                                  		// 0x0070(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
	struct FDestructibleParametersFlag                 Flags;                                            		// 0x0080(0x0004) (CPF_Edit)
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// 0x0118
struct FSkeletalMeshLODGroupSettings
{
	float                                              ScreenSize;                                       		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	struct FSkeletalMeshOptimizationSettings           OptimizationSettings;                             		// 0x0008(0x0110) (CPF_Edit)
};

// ScriptStruct Engine.SoundClassProperties
// 0x0024
struct FSoundClassProperties
{
	float                                              Volume;                                           		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Pitch;                                            		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StereoBleed;                                      		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LFEBleed;                                         		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VoiceCenterChannelVolume;                         		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RadioFilterVolume;                                		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RadioFilterVolumeThreshold;                       		// 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bApplyEffects : 1;                                		// 0x001C(0x0001) (CPF_Edit)
	unsigned char                                      bAlwaysPlay : 1;                                  		// 0x001C(0x0001) (CPF_Edit)
	unsigned char                                      bIsUISound : 1;                                   		// 0x001C(0x0001) (CPF_Edit)
	unsigned char                                      bIsMusic : 1;                                     		// 0x001C(0x0001) (CPF_Edit)
	unsigned char                                      bReverb : 1;                                      		// 0x001C(0x0001) (CPF_Edit)
	unsigned char                                      bCenterChannelOnly : 1;                           		// 0x001C(0x0001) (CPF_Edit)
	unsigned char                                      bApplyAmbientVolumes : 1;                         		// 0x001C(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x001D(0x0003) MISSED OFFSET
	TEnumAsByte<enum class EAudioOutputTarget>         OutputTarget;                                     		// 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PassiveSoundMixModifier
// 0x0010
struct FPassiveSoundMixModifier
{
	class USoundMix*                                   SoundMix;                                         		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinVolumeThreshold;                               		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxVolumeThreshold;                               		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AudioEQEffect
// 0x0038
struct FAudioEQEffect
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) MISSED OFFSET
	float                                              FrequencyCenter0;                                 		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Gain0;                                            		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bandwidth0;                                       		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrequencyCenter1;                                 		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Gain1;                                            		// 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bandwidth1;                                       		// 0x001C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrequencyCenter2;                                 		// 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Gain2;                                            		// 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bandwidth2;                                       		// 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrequencyCenter3;                                 		// 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Gain3;                                            		// 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bandwidth3;                                       		// 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SoundClassAdjuster
// 0x0018
struct FSoundClassAdjuster
{
	class USoundClass*                                 SoundClassObject;                                 		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VolumeAdjuster;                                   		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PitchAdjuster;                                    		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bApplyToChildren : 1;                             		// 0x0010(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0011(0x0003) MISSED OFFSET
	float                                              VoiceCenterChannelVolumeAdjuster;                 		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DialogueWaveParameter
// 0x0020
struct FDialogueWaveParameter
{
	class UDialogueWave*                               DialogueWave;                                     		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDialogueContext                            Context;                                          		// 0x0008(0x0018) (CPF_Edit)
};

// ScriptStruct Engine.DistanceDatum
// 0x0014
struct FDistanceDatum
{
	float                                              FadeInDistanceStart;                              		// 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeInDistanceEnd;                                		// 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeOutDistanceStart;                             		// 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FadeOutDistanceEnd;                               		// 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Volume;                                           		// 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ModulatorContinuousParams
// 0x0020
struct FModulatorContinuousParams
{
	struct FName                                       ParameterName;                                    		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Default;                                          		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinInput;                                         		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxInput;                                         		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinOutput;                                        		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxOutput;                                        		// 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ModulationParamMode>        ParamMode;                                        		// 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MeshSectionInfoExt
// 0x000C
struct FMeshSectionInfoExt
{
	int                                                LODIndex;                                         		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SectionIndex;                                     		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverrideIndoorOutdoorMask : 1;                   		// 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IndoorOutdoorMask;                                		// 0x0009(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.StaticMaterial
// 0x0028
struct FStaticMaterial
{
	class UMaterialInterface*                          MaterialInterface;                                		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FName                                       MaterialSlotName;                                 		// 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMeshUVChannelInfo                          UVChannelData;                                    		// 0x0010(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// 0x0024
struct FSubsurfaceProfileStruct
{
	float                                              ScatterRadius;                                    		// 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                SubsurfaceColor;                                  		// 0x0004(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                FalloffColor;                                     		// 0x0014(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TTTrackBase
// 0x0010
struct FTTTrackBase
{
	struct FName                                       TrackName;                                        		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsExternalCurve : 1;                             		// 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TTEventTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTEventTrack : public FTTTrackBase
{
	class UCurveFloat*                                 CurveKeys;                                        		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TTFloatTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTFloatTrack : public FTTTrackBase
{
	class UCurveFloat*                                 CurveFloat;                                       		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TTVectorTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTVectorTrack : public FTTTrackBase
{
	class UCurveVector*                                CurveVector;                                      		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TTLinearColorTrack
// 0x0008 (0x0018 - 0x0010)
struct FTTLinearColorTrack : public FTTTrackBase
{
	class UCurveLinearColor*                           CurveLinearColor;                                 		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TouchInputControl
// 0x0068
struct FTouchInputControl
{
	class UTexture2D*                                  Image1;                                           		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  Image2;                                           		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Center;                                           		// 0x0010(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   VisualSize;                                       		// 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   ThumbSize;                                        		// 0x0020(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   InteractionSize;                                  		// 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   InputScale;                                       		// 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FKey                                        MainInputKey;                                     		// 0x0038(0x0018) (CPF_Edit)
	struct FKey                                        AltInputKey;                                      		// 0x0050(0x0018) (CPF_Edit)
};

// ScriptStruct Engine.VectorDistribution
// 0x0028
struct FVectorDistribution
{
	struct FDistributionLookupTable                    Table;                                            		// 0x0000(0x0028) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.Vector4Distribution
// 0x0028
struct FVector4Distribution
{
	struct FDistributionLookupTable                    Table;                                            		// 0x0000(0x0028) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.FormatArgumentData
// 0x0040
struct FFormatArgumentData
{
	struct FString                                     ArgumentName;                                     		// 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	TEnumAsByte<enum class EFormatArgumentType>        ArgumentValueType;                                		// 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0011(0x0007) MISSED OFFSET
	struct FText                                       ArgumentValue;                                    		// 0x0018(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate)
	int                                                ArgumentValueInt;                                 		// 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              ArgumentValueFloat;                               		// 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	TEnumAsByte<enum class ETextGender>                ArgumentValueGender;                              		// 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PlatformInterfaceData
// 0x0030
struct FPlatformInterfaceData
{
	struct FName                                       DataName;                                         		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EPlatformInterfaceDataType> Type;                                             		// 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	int                                                IntValue;                                         		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FloatValue;                                       		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x0014(0x0004) MISSED OFFSET
	struct FString                                     StringValue;                                      		// 0x0018(0x0010) (CPF_ZeroConstructor)
	class UObject*                                     ObjectValue;                                      		// 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// 0x0038
struct FPlatformInterfaceDelegateResult
{
	unsigned char                                      bSuccessful : 1;                                  		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0001(0x0007) MISSED OFFSET
	struct FPlatformInterfaceData                      Data;                                             		// 0x0008(0x0030)
};

// ScriptStruct Engine.DebugFloatHistory
// 0x0020
struct FDebugFloatHistory
{
	TArray<float>                                      Samples;                                          		// 0x0000(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	float                                              MaxSamples;                                       		// 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinValue;                                         		// 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxValue;                                         		// 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAutoAdjustMinMax : 1;                            		// 0x001C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.LatentActionInfo
// 0x0018
struct FLatentActionInfo
{
	int                                                Linkage;                                          		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                UUID;                                             		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ExecutionFunction;                                		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     CallbackTarget;                                   		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TimerHandle
// 0x0008
struct FTimerHandle
{
	uint64_t                                           Handle;                                           		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CollisionProfileName
// 0x0008
struct FCollisionProfileName
{
	struct FName                                       Name;                                             		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.GenericStruct
// 0x0004
struct FGenericStruct
{
	int                                                Data;                                             		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.UserActivity
// 0x0010
struct FUserActivity
{
	struct FString                                     ActionName;                                       		// 0x0000(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor)
};

// ScriptStruct Engine.AttackId
// 0x0004
struct FAttackId
{
	int                                                ID;                                               		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DamageEvent
// 0x0018
struct FDamageEvent
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) MISSED OFFSET
	struct FAttackId                                   AttackId;                                         		// 0x0008(0x0004)
	unsigned char                                      UnknownData01[0x4];                               		// 0x000C(0x0004) MISSED OFFSET
	class UClass*                                      DamageTypeClass;                                  		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TableRowBase
// 0x0008
struct FTableRowBase
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.PointDamageEvent
// 0x0098 (0x00B0 - 0x0018)
struct FPointDamageEvent : public FDamageEvent
{
	float                                              Damage;                                           		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShotDirection;                                    		// 0x001C(0x000C)
	struct FHitResult                                  HitInfo;                                          		// 0x0028(0x0088) (CPF_IsPlainOldData)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// 0x0070
struct FExposedValueCopyRecord
{
	class UProperty*                                   SourceProperty;                                   		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FName                                       SourcePropertyName;                               		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SourceSubPropertyName;                            		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SourceArrayIndex;                                 		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x001C(0x0004) MISSED OFFSET
	class UProperty*                                   DestProperty;                                     		// 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DestArrayIndex;                                   		// 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Size;                                             		// 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bInstanceIsTarget : 1;                            		// 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EPostCopyOperation>         PostCopyOperation;                                		// 0x0031(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                               		// 0x0032(0x0006) MISSED OFFSET
	class UBoolProperty*                               CachedBoolSourceProperty;                         		// 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UBoolProperty*                               CachedBoolDestProperty;                           		// 0x0040(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UStructProperty*                             CachedStructDestProperty;                         		// 0x0048(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                              		// 0x0050(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.ExposedValueHandler
// 0x0028
struct FExposedValueHandler
{
	struct FName                                       BoundFunction;                                    		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FExposedValueCopyRecord>             CopyRecords;                                      		// 0x0008(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                              		// 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_Base
// 0x0030
struct FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) MISSED OFFSET
	struct FExposedValueHandler                        EvaluateGraphExposedInputs;                       		// 0x0008(0x0028)
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// 0x0028 (0x0058 - 0x0030)
struct FAnimNode_AssetPlayerBase : public FAnimNode_Base
{
	unsigned char                                      bIgnoreForRelevancyTest : 1;                      		// 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0031(0x0003) MISSED OFFSET
	int                                                GroupIndex;                                       		// 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAnimGroupRole>             GroupRole;                                        		// 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0039(0x0003) MISSED OFFSET
	float                                              BlendWeight;                                      		// 0x003C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              InternalTimeAccumulator;                          		// 0x0040(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                              		// 0x0044(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.BlendSampleData
// 0x0040
struct FBlendSampleData
{
	int                                                SampleDataIndex;                                  		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	class UAnimSequence*                               Animation;                                        		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TotalWeight;                                      		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Time;                                             		// 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreviousTime;                                     		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                              		// 0x001C(0x0024) MISSED OFFSET
};

// ScriptStruct Engine.BlendFilter
// 0x0090
struct FBlendFilter
{
	unsigned char                                      UnknownData00[0x90];                              		// 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.PoseLinkBase
// 0x0018
struct FPoseLinkBase
{
	int                                                LinkID;                                           		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                              		// 0x0004(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.PoseLink
// 0x0000 (0x0018 - 0x0018)
struct FPoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.InputScaleBias
// 0x0008
struct FInputScaleBias
{
	float                                              Scale;                                            		// 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Bias;                                             		// 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ComponentSpacePoseLink
// 0x0000 (0x0018 - 0x0018)
struct FComponentSpacePoseLink : public FPoseLinkBase
{

};

// ScriptStruct Engine.AnimCurveParam
// 0x0010
struct FAnimCurveParam
{
	struct FName                                       Name;                                             		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.ExposureSettings
// 0x0008
struct FExposureSettings
{
	int                                                LogOffset;                                        		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bFixed : 1;                                       		// 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.URL
// 0x0070
struct FURL
{
	struct FString                                     Protocol;                                         		// 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Host;                                             		// 0x0010(0x0010) (CPF_ZeroConstructor)
	int                                                Port;                                             		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0024(0x0004) MISSED OFFSET
	struct FString                                     Map;                                              		// 0x0028(0x0010) (CPF_ZeroConstructor)
	struct FString                                     RedirectURL;                                      		// 0x0038(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             Op;                                               		// 0x0048(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Portal;                                           		// 0x0058(0x0010) (CPF_ZeroConstructor)
	int                                                Valid;                                            		// 0x0068(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TickPrerequisite
// 0x0010
struct FTickPrerequisite
{
	unsigned char                                      UnknownData00[0x10];                              		// 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.FastArraySerializer
// 0x00B0
struct FFastArraySerializer
{
	unsigned char                                      UnknownData00[0xB0];                              		// 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.FastArraySerializerItem
// 0x000C
struct FFastArraySerializerItem
{
	int                                                ReplicationID;                                    		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	int                                                ReplicationKey;                                   		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	int                                                MostRecentArrayReplicationKey;                    		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct Engine.CanvasUVTri
// 0x0060
struct FCanvasUVTri
{
	struct FVector2D                                   V0_Pos;                                           		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   V0_UV;                                            		// 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                V0_Color;                                         		// 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   V1_Pos;                                           		// 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   V1_UV;                                            		// 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                V1_Color;                                         		// 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   V2_Pos;                                           		// 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   V2_UV;                                            		// 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                V2_Color;                                         		// 0x0050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DepthFieldGlowInfo
// 0x0024
struct FDepthFieldGlowInfo
{
	unsigned char                                      bEnableGlow : 1;                                  		// 0x0000(0x0001) (CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	struct FLinearColor                                GlowColor;                                        		// 0x0004(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   GlowOuterRadius;                                  		// 0x0014(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   GlowInnerRadius;                                  		// 0x001C(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.FontRenderInfo
// 0x0028
struct FFontRenderInfo
{
	unsigned char                                      bClipText : 1;                                    		// 0x0000(0x0001) (CPF_BlueprintVisible)
	unsigned char                                      bEnableShadow : 1;                                		// 0x0000(0x0001) (CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	struct FDepthFieldGlowInfo                         GlowInfo;                                         		// 0x0004(0x0024) (CPF_BlueprintVisible)
};

// ScriptStruct Engine.ComponentReference
// 0x0018
struct FComponentReference
{
	class AActor*                                      OtherActor;                                       		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	struct FName                                       ComponentProperty;                                		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RadialDamageParams
// 0x0014
struct FRadialDamageParams
{
	float                                              BaseDamage;                                       		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinimumDamage;                                    		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InnerRadius;                                      		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OuterRadius;                                      		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageFalloff;                                    		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RadialDamageEvent
// 0x0030 (0x0048 - 0x0018)
struct FRadialDamageEvent : public FDamageEvent
{
	struct FRadialDamageParams                         Params;                                           		// 0x0018(0x0014)
	struct FVector                                     Origin;                                           		// 0x002C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FHitResult>                          ComponentHits;                                    		// 0x0038(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.MeshBuildSettings
// 0x0040
struct FMeshBuildSettings
{
	unsigned char                                      bUseMikkTSpace : 1;                               		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRecomputeNormals : 1;                            		// 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRecomputeTangents : 1;                           		// 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRemoveDegenerates : 1;                           		// 0x0003(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bBuildAdjacencyBuffer : 1;                        		// 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bBuildReversedIndexBuffer : 1;                    		// 0x0005(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseHighPrecisionTangentBasis : 1;                		// 0x0006(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseFullPrecisionUVs : 1;                         		// 0x0007(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bGenerateLightmapUVs : 1;                         		// 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	int                                                MinLightmapResolution;                            		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SrcLightmapIndex;                                 		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DstLightmapIndex;                                 		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BuildScale;                                       		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FVector                                     BuildScale3D;                                     		// 0x001C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DistanceFieldResolutionScale;                     		// 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bGenerateDistanceFieldAsIfTwoSided : 1;           		// 0x002C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x002D(0x0003) MISSED OFFSET
	float                                              DistanceFieldBias;                                		// 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                               		// 0x0034(0x0004) MISSED OFFSET
	class UStaticMesh*                                 DistanceFieldReplacementMesh;                     		// 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.POV
// 0x001C
struct FPOV
{
	struct FVector                                     Location;                                         		// 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                         		// 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FOV;                                              		// 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// 0x0088
struct FAnimUpdateRateParameters
{
	unsigned char                                      UnknownData00[0x4];                               		// 0x0000(0x0004) MISSED OFFSET
	int                                                UpdateRate;                                       		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EvaluationRate;                                   		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bInterpolateSkippedFrames : 1;                    		// 0x000C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShouldUseLodMap : 1;                             		// 0x000D(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSkipUpdate : 1;                                  		// 0x000E(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSkipEvaluation : 1;                              		// 0x000F(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TickedPoseOffestTime;                             		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              AdditionalTime;                                   		// 0x0014(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x0018(0x0004) MISSED OFFSET
	int                                                BaseNonRenderedUpdateRate;                        		// 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      BaseVisibleDistanceFactorThesholds;               		// 0x0020(0x0010) (CPF_ZeroConstructor)
	TMap<int, int>                                     LODToFrameSkipMap;                                		// 0x0030(0x0050) (CPF_ZeroConstructor)
	int                                                MaxEvalRateForInterpolation;                      		// 0x0080(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EUpdateRateShiftBucket>     ShiftBucket;                                      		// 0x0084(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimSlotDesc
// 0x0010
struct FAnimSlotDesc
{
	struct FName                                       SlotName;                                         		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumChannels;                                      		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimSlotInfo
// 0x0018
struct FAnimSlotInfo
{
	struct FName                                       SlotName;                                         		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      ChannelWeights;                                   		// 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.MTDResult
// 0x0010
struct FMTDResult
{
	struct FVector                                     Direction;                                        		// 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Distance;                                         		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.OverlapResult
// 0x0018
struct FOverlapResult
{
	TWeakObjectPtr<class AActor>                       Actor;                                            		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                        		// 0x0008(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0010(0x0004) MISSED OFFSET
	unsigned char                                      bBlockingHit : 1;                                 		// 0x0014(0x0001)
};

// ScriptStruct Engine.SwarmDebugOptions
// 0x0004
struct FSwarmDebugOptions
{
	unsigned char                                      bDistributionEnabled : 1;                         		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bForceContentExport : 1;                          		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bInitialized : 1;                                 		// 0x0000(0x0001)
};

// ScriptStruct Engine.LightmassDebugOptions
// 0x0010
struct FLightmassDebugOptions
{
	unsigned char                                      bDebugMode : 1;                                   		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bStatsEnabled : 1;                                		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bGatherBSPSurfacesAcrossComponents : 1;           		// 0x0000(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              CoplanarTolerance;                                		// 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseImmediateImport : 1;                          		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bImmediateProcessMappings : 1;                    		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bSortMappings : 1;                                		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bDumpBinaryFiles : 1;                             		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bDebugMaterials : 1;                              		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bPadMappings : 1;                                 		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bDebugPaddings : 1;                               		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bOnlyCalcDebugTexelMappings : 1;                  		// 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bUseRandomColors : 1;                             		// 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bColorBordersGreen : 1;                           		// 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      bColorByExecutionTime : 1;                        		// 0x0009(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData01[0x2];                               		// 0x000A(0x0002) MISSED OFFSET
	float                                              ExecutionTimeDivisor;                             		// 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BasedPosition
// 0x0038
struct FBasedPosition
{
	class AActor*                                      Base;                                             		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Position;                                         		// 0x0008(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     CachedBaseLocation;                               		// 0x0014(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    CachedBaseRotation;                               		// 0x0020(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     CachedTransPosition;                              		// 0x002C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyContactInfo
// 0x0030
struct FRigidBodyContactInfo
{
	struct FVector                                     ContactPosition;                                  		// 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ContactNormal;                                    		// 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ContactPenetration;                               		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x001C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           PhysMaterial[0x2];                                		// 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CollisionImpactData
// 0x0028
struct FCollisionImpactData
{
	TArray<struct FRigidBodyContactInfo>               ContactInfos;                                     		// 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FVector                                     TotalNormalImpulse;                               		// 0x0010(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     TotalFrictionImpulse;                             		// 0x001C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RigidBodyState
// 0x0040
struct FRigidBodyState
{
	struct FVector_NetQuantize100                      Position;                                         		// 0x0000(0x000C)
	unsigned char                                      UnknownData00[0x4];                               		// 0x000C(0x0004) MISSED OFFSET
	struct FQuat                                       Quaternion;                                       		// 0x0010(0x0010) (CPF_IsPlainOldData)
	struct FVector_NetQuantize100                      LinVel;                                           		// 0x0020(0x000C)
	struct FVector_NetQuantize100                      AngVel;                                           		// 0x002C(0x000C)
	unsigned char                                      Flags;                                            		// 0x0038(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.EdGraphPinReference
// 0x0018
struct FEdGraphPinReference
{
	TWeakObjectPtr<class UEdGraphNode>                 OwningNode;                                       		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       PinId;                                            		// 0x0008(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.EditedDocumentInfo
// 0x0018
struct FEditedDocumentInfo
{
	class UObject*                                     EditedObject;                                     		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   SavedViewOffset;                                  		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SavedZoomAmount;                                  		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BPInterfaceDescription
// 0x0018
struct FBPInterfaceDescription
{
	class UClass*                                      Interface;                                        		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UEdGraph*>                            Graphs;                                           		// 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.BPVariableDescription
// 0x00F8
struct FBPVariableDescription
{
	struct FName                                       VarName;                                          		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       VarGuid;                                          		// 0x0008(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FEdGraphPinType                             VarType;                                          		// 0x0018(0x0080) (CPF_Edit)
	struct FString                                     FriendlyName;                                     		// 0x0098(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FText                                       Category;                                         		// 0x00A8(0x0018) (CPF_Edit)
	uint64_t                                           PropertyFlags;                                    		// 0x00C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RepNotifyFunc;                                    		// 0x00C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ELifetimeCondition>         ReplicationCondition;                             		// 0x00D0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x00D1(0x0007) MISSED OFFSET
	TArray<struct FBPVariableMetaDataEntry>            MetaDataArray;                                    		// 0x00D8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FString                                     DefaultValue;                                     		// 0x00E8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.MemberReference
// 0x0038
struct FMemberReference
{
	class UObject*                                     MemberParent;                                     		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     MemberScope;                                      		// 0x0008(0x0010) (CPF_ZeroConstructor)
	struct FName                                       MemberName;                                       		// 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       MemberGuid;                                       		// 0x0020(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSelfContext : 1;                                 		// 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bWasDeprecated : 1;                               		// 0x0031(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.OverlapInfo
// 0x0090
struct FOverlapInfo
{
	unsigned char                                      UnknownData00[0x90];                              		// 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct Engine.MeshMergingSettings
// 0x00C8
struct FMeshMergingSettings
{
	unsigned char                                      bGenerateLightMapUV : 1;                          		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	int                                                TargetLightMapResolution;                         		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bImportVertexColors : 1;                          		// 0x0008(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bPivotPointAtZero : 1;                            		// 0x0009(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bMergePhysicsData : 1;                            		// 0x000A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAssignLODGroup : 1;                              		// 0x000B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LODGroupIndex;                                    		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bMergeMaterials : 1;                              		// 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0011(0x0003) MISSED OFFSET
	struct FMaterialProxySettings                      MaterialSettings;                                 		// 0x0014(0x0094) (CPF_Edit)
	unsigned char                                      bBakeVertexDataToMesh : 1;                        		// 0x00A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseVertexDataForBakingMaterial : 1;              		// 0x00A9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseTextureBinning : 1;                           		// 0x00AA(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCalculateCorrectLODModel : 1;                    		// 0x00AB(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	TEnumAsByte<enum class EMeshLODSelectionType>      LODSelectionType;                                 		// 0x00AC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                               		// 0x00AD(0x0003) MISSED OFFSET
	int                                                ExportSpecificLOD;                                		// 0x00B0(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                SpecificLOD;                                      		// 0x00B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseLandscapeCulling : 1;                         		// 0x00B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bExportNormalMap : 1;                             		// 0x00B9(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bExportMetallicMap : 1;                           		// 0x00BA(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bExportRoughnessMap : 1;                          		// 0x00BB(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bExportSpecularMap : 1;                           		// 0x00BC(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                               		// 0x00BD(0x0003) MISSED OFFSET
	int                                                MergedMaterialAtlasResolution;                    		// 0x00C0(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MeshReductionSettings
// 0x00F0
struct FMeshReductionSettings
{
	int                                                BaseLODModel;                                     		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EOptimizationMetric>        MetricToUse;                                      		// 0x0004(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0005(0x0003) MISSED OFFSET
	float                                              PercentTriangles;                                 		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScreenSize;                                       		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDeviation;                                     		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PixelError;                                       		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeldingThreshold;                                 		// 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EMeshFeatureImportance>     SilhouetteImportance;                             		// 0x001C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EMeshFeatureImportance>     TextureImportance;                                		// 0x001D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EMeshFeatureImportance>     ShadingImportance;                                		// 0x001E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EMeshFeatureImportance>     VertexColorImportance;                            		// 0x001F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRecalculateNormals : 1;                          		// 0x0020(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0021(0x0003) MISSED OFFSET
	float                                              HardAngleThreshold;                               		// 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bActive : 1;                                      		// 0x0028(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bGenerateUniqueLightmapUVs : 1;                   		// 0x0029(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bKeepSymmetry : 1;                                		// 0x002A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bVisibilityAided : 1;                             		// 0x002B(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCullOccluded : 1;                                		// 0x002C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EMeshFeatureImportance>     VisibilityAggressiveness;                         		// 0x002D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseVertexWeights : 1;                            		// 0x002E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSimplifyMaterials : 1;                           		// 0x002F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSimplygonMaterialLODSettings               MaterialLODSettings;                              		// 0x0030(0x0028) (CPF_Deprecated)
	struct FMaterialProxySettings                      MaterialProxySettings;                            		// 0x0058(0x0094) (CPF_Edit)
};

// ScriptStruct Engine.LevelSimplificationDetails
// 0x01DC
struct FLevelSimplificationDetails
{
	unsigned char                                      bCreatePackagePerAsset : 1;                       		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              DetailsPercentage;                                		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MergeDistance;                                    		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MergeBoldness;                                    		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EPhysXAggregationMode>      PhysXAggregationMode;                             		// 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0011(0x0003) MISSED OFFSET
	float                                              MaxTriangleSize;                                  		// 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMaterialSimplificationSettings             StaticMeshMaterial;                               		// 0x0018(0x0044) (CPF_Deprecated)
	struct FMaterialProxySettings                      StaticMeshMaterialSettings;                       		// 0x005C(0x0094) (CPF_Edit)
	unsigned char                                      bOverrideLandscapeExportLOD : 1;                  		// 0x00F0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                               		// 0x00F1(0x0003) MISSED OFFSET
	int                                                LandscapeExportLOD;                               		// 0x00F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMaterialSimplificationSettings             LandscapeMaterial;                                		// 0x00F8(0x0044) (CPF_Deprecated)
	struct FMaterialProxySettings                      LandscapeMaterialSettings;                        		// 0x013C(0x0094) (CPF_Edit)
	unsigned char                                      bBakeFoliageToLandscape : 1;                      		// 0x01D0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bBakeGrassToLandscape : 1;                        		// 0x01D1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bGenerateMeshNormalMap : 1;                       		// 0x01D2(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bGenerateMeshMetallicMap : 1;                     		// 0x01D3(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bGenerateMeshRoughnessMap : 1;                    		// 0x01D4(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bGenerateMeshSpecularMap : 1;                     		// 0x01D5(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bGenerateLandscapeNormalMap : 1;                  		// 0x01D6(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bGenerateLandscapeMetallicMap : 1;                		// 0x01D7(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bGenerateLandscapeRoughnessMap : 1;               		// 0x01D8(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bGenerateLandscapeSpecularMap : 1;                		// 0x01D9(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      bUseLandscapeCulling : 1;                         		// 0x01DA(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ELandscapeCullingPrecision> LandscapeCullingPrecision;                        		// 0x01DB(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.StreamableTextureInstance
// 0x0028
struct FStreamableTextureInstance
{
	unsigned char                                      UnknownData00[0x28];                              		// 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct Engine.DynamicTextureInstance
// 0x0010 (0x0038 - 0x0028)
struct FDynamicTextureInstance : public FStreamableTextureInstance
{
	class UTexture2D*                                  Texture;                                          		// 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAttached : 1;                                    		// 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0031(0x0003) MISSED OFFSET
	float                                              OriginalRadius;                                   		// 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PlayerMuteList
// 0x0038
struct FPlayerMuteList
{
	unsigned char                                      UnknownData00[0x30];                              		// 0x0000(0x0030) MISSED OFFSET
	unsigned char                                      bHasVoiceHandshakeCompleted : 1;                  		// 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0031(0x0003) MISSED OFFSET
	int                                                VoiceChannelIdx;                                  		// 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ViewTargetTransitionParams
// 0x0010
struct FViewTargetTransitionParams
{
	float                                              BlendTime;                                        		// 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EViewTargetBlendFunction>   BlendFunction;                                    		// 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0005(0x0003) MISSED OFFSET
	float                                              BlendExp;                                         		// 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLockOutgoing : 1;                                		// 0x000C(0x0001) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.LatentActionManager
// 0x00F0
struct FLatentActionManager
{
	unsigned char                                      UnknownData00[0xF0];                              		// 0x0000(0x00F0) MISSED OFFSET
};

// ScriptStruct Engine.HierarchicalSimplification
// 0x01F4
struct FHierarchicalSimplification
{
	unsigned char                                      UnknownData00[0x4];                               		// 0x0000(0x0004) MISSED OFFSET
	float                                              TransitionScreenSize;                             		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSimplifyMesh : 1;                                		// 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	struct FMeshProxySettings                          ProxySetting;                                     		// 0x000C(0x0114) (CPF_Edit)
	struct FMeshMergingSettings                        MergeSetting;                                     		// 0x0120(0x00C8) (CPF_Edit)
	float                                              DesiredBoundRadius;                               		// 0x01E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DesiredFillingPercentage;                         		// 0x01EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinNumberOfActorsToBuild;                         		// 0x01F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NavGraphEdge
// 0x0018
struct FNavGraphEdge
{
	unsigned char                                      UnknownData00[0x18];                              		// 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// 0x0030
struct FPreviewAttachedObjectPair
{
	TAssetPtr<class UObject>                           AttachedObject;                                   		// 0x0000(0x0020)
	class UObject*                                     Object;                                           		// 0x0020(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	struct FName                                       AttachedTo;                                       		// 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// 0x0010
struct FPreviewAssetAttachContainer
{
	TArray<struct FPreviewAttachedObjectPair>          AttachedObjects;                                  		// 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.AnimNotifyTrack
// 0x0038
struct FAnimNotifyTrack
{
	struct FName                                       TrackName;                                        		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                TrackColor;                                       		// 0x0008(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                              		// 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.PerBoneBlendWeight
// 0x0008
struct FPerBoneBlendWeight
{
	int                                                SourceIndex;                                      		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendWeight;                                      		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PerBoneBlendWeights
// 0x0010
struct FPerBoneBlendWeights
{
	TArray<struct FPerBoneBlendWeight>                 BoneBlendWeights;                                 		// 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.SmartNameMapping
// 0x00F8
struct FSmartNameMapping
{
	unsigned char                                      UnknownData00[0xF8];                              		// 0x0000(0x00F8) MISSED OFFSET
};

// ScriptStruct Engine.CurveMetaData
// 0x0018
struct FCurveMetaData
{
	unsigned char                                      UnknownData00[0x18];                              		// 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.AnimCurveType
// 0x0002
struct FAnimCurveType
{

};

// ScriptStruct Engine.NameMapping
// 0x0010
struct FNameMapping
{
	struct FName                                       NodeName;                                         		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                         		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RigConfiguration
// 0x0018
struct FRigConfiguration
{
	class URig*                                        Rig;                                              		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FNameMapping>                        BoneMappingTable;                                 		// 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.BoneReductionSetting
// 0x0010
struct FBoneReductionSetting
{
	TArray<struct FName>                               BonesToRemove;                                    		// 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.ReferencePose
// 0x0018
struct FReferencePose
{
	struct FName                                       PoseName;                                         		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FTransform>                          ReferencePose;                                    		// 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.BoneMirrorExport
// 0x0018
struct FBoneMirrorExport
{
	struct FName                                       BoneName;                                         		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SourceBoneName;                                   		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAxis>                      BoneFlipAxis;                                     		// 0x0010(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimationGroupReference
// 0x0010
struct FAnimationGroupReference
{
	struct FName                                       GroupName;                                        		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAnimGroupRole>             GroupRole;                                        		// 0x0008(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimGroupInstance
// 0x0080
struct FAnimGroupInstance
{
	unsigned char                                      UnknownData00[0x80];                              		// 0x0000(0x0080) MISSED OFFSET
};

// ScriptStruct Engine.AnimTickRecord
// 0x0048
struct FAnimTickRecord
{
	class UAnimationAsset*                             SourceAsset;                                      		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x40];                              		// 0x0008(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.MarkerSyncAnimPosition
// 0x0018
struct FMarkerSyncAnimPosition
{
	struct FName                                       PreviousMarkerName;                               		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NextMarkerName;                                   		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PositionBetweenMarkers;                           		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSourceStatus
// 0x0001
struct FRootMotionSourceStatus
{
	unsigned char                                      Flags;                                            		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RootMotionSource
// 0x0080
struct FRootMotionSource
{
	unsigned char                                      UnknownData00[0x10];                              		// 0x0000(0x0010) MISSED OFFSET
	uint16_t                                           Priority;                                         		// 0x0010(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint16_t                                           LocalID;                                          		// 0x0012(0x0002) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ERootMotionAccumulateMode>  AccumulateMode;                                   		// 0x0014(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0015(0x0003) MISSED OFFSET
	struct FName                                       InstanceName;                                     		// 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartTime;                                        		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentTime;                                      		// 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreviousTime;                                     		// 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                         		// 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRootMotionSourceStatus                     Status;                                           		// 0x0030(0x0001)
	struct FRootMotionSourceSettings                   Settings;                                         		// 0x0031(0x0001)
	unsigned char                                      bInLocalSpace : 1;                                		// 0x0032(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bImpartsVelocityOnRemoval : 1;                    		// 0x0033(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                               		// 0x0034(0x000C) MISSED OFFSET
	struct FRootMotionMovementParams                   RootMotionParams;                                 		// 0x0040(0x0040)
};

// ScriptStruct Engine.RootMotionSource_JumpForce
// 0x0040 (0x00C0 - 0x0080)
struct FRootMotionSource_JumpForce : public FRootMotionSource
{
	struct FRotator                                    Rotation;                                         		// 0x0080(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Distance;                                         		// 0x008C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Height;                                           		// 0x0090(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDisableTimeout : 1;                              		// 0x0094(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0095(0x0003) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                  		// 0x0098(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                 		// 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                              		// 0x00A8(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// 0x0040 (0x00C0 - 0x0080)
struct FRootMotionSource_MoveToDynamicForce : public FRootMotionSource
{
	struct FVector                                     StartLocation;                                    		// 0x0080(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     InitialTargetLocation;                            		// 0x008C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     TargetLocation;                                   		// 0x0098(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRestrictSpeedToExpected : 1;                     		// 0x00A4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x00A5(0x0003) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                  		// 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                 		// 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                               		// 0x00B8(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// 0x0030 (0x00B0 - 0x0080)
struct FRootMotionSource_MoveToForce : public FRootMotionSource
{
	struct FVector                                     StartLocation;                                    		// 0x0080(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     TargetLocation;                                   		// 0x008C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRestrictSpeedToExpected : 1;                     		// 0x0098(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0099(0x0007) MISSED OFFSET
	class UCurveVector*                                PathOffsetCurve;                                  		// 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                               		// 0x00A8(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_RadialForce
// 0x0050 (0x00D0 - 0x0080)
struct FRootMotionSource_RadialForce : public FRootMotionSource
{
	struct FVector                                     Location;                                         		// 0x0080(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x008C(0x0004) MISSED OFFSET
	class AActor*                                      LocationActor;                                    		// 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                           		// 0x0098(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Strength;                                         		// 0x009C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsPush : 1;                                      		// 0x00A0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bNoZForce : 1;                                    		// 0x00A1(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                               		// 0x00A2(0x0006) MISSED OFFSET
	class UCurveFloat*                                 StrengthDistanceFalloff;                          		// 0x00A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 StrengthOverTime;                                 		// 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseFixedWorldDirection : 1;                      		// 0x00B8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                               		// 0x00B9(0x0003) MISSED OFFSET
	struct FRotator                                    FixedWorldDirection;                              		// 0x00BC(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                               		// 0x00C8(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// 0x0020 (0x00A0 - 0x0080)
struct FRootMotionSource_ConstantForce : public FRootMotionSource
{
	struct FVector                                     Force;                                            		// 0x0080(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x008C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 StrengthOverTime;                                 		// 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0098(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StreamingTexturePrimitiveInfo
// 0x0030
struct FStreamingTexturePrimitiveInfo
{
	class UTexture2D*                                  Texture;                                          		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoxSphereBounds                            Bounds;                                           		// 0x0008(0x001C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TexelFactor;                                      		// 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           PackedRelativeBox;                                		// 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SpriteCategoryInfo
// 0x0038
struct FSpriteCategoryInfo
{
	struct FName                                       Category;                                         		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       DisplayName;                                      		// 0x0008(0x0018)
	struct FText                                       Description;                                      		// 0x0020(0x0018)
};

// ScriptStruct Engine.VectorCurve
// 0x0168 (0x0188 - 0x0020)
struct FVectorCurve : public FAnimCurveBase
{
	struct FRichCurve                                  FloatCurves[0x3];                                 		// 0x0020(0x0078)
};

// ScriptStruct Engine.TransformCurve
// 0x0498 (0x04B8 - 0x0020)
struct FTransformCurve : public FAnimCurveBase
{
	struct FVectorCurve                                TranslationCurve;                                 		// 0x0020(0x0188)
	struct FVectorCurve                                RotationCurve;                                    		// 0x01A8(0x0188)
	struct FVectorCurve                                ScaleCurve;                                       		// 0x0330(0x0188)
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FSkeletalMeshComponentClothTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FSkeletalMeshComponentEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SplinePoint
// 0x0044
struct FSplinePoint
{
	float                                              InputKey;                                         		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Position;                                         		// 0x0004(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ArriveTangent;                                    		// 0x0010(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LeaveTangent;                                     		// 0x001C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                         		// 0x0028(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Scale;                                            		// 0x0034(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ESplinePointType>           Type;                                             		// 0x0040(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BatchedPoint
// 0x0028
struct FBatchedPoint
{
	struct FVector                                     Position;                                         		// 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                            		// 0x000C(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PointSize;                                        		// 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemainingLifeTime;                                		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DepthPriority;                                    		// 0x0024(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BatchedLine
// 0x0034
struct FBatchedLine
{
	struct FVector                                     Start;                                            		// 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     End;                                              		// 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                Color;                                            		// 0x0018(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Thickness;                                        		// 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemainingLifeTime;                                		// 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      DepthPriority;                                    		// 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ClusterNode
// 0x0028
struct FClusterNode
{
	struct FVector                                     BoundMin;                                         		// 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FirstChild;                                       		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     BoundMax;                                         		// 0x0010(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LastChild;                                        		// 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FirstInstance;                                    		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LastInstance;                                     		// 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.RootMotionExtractionStep
// 0x0010
struct FRootMotionExtractionStep
{
	class UAnimSequence*                               AnimSequence;                                     		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartPosition;                                    		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndPosition;                                      		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimMontageInstance
// 0x0180
struct FAnimMontageInstance
{
	class UAnimMontage*                                Montage;                                          		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x88];                              		// 0x0008(0x0088) MISSED OFFSET
	unsigned char                                      bPlaying : 1;                                     		// 0x0090(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0091(0x0003) MISSED OFFSET
	float                                              DefaultBlendTimeMultiplier;                       		// 0x0094(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x28];                              		// 0x0098(0x0028) MISSED OFFSET
	TArray<int>                                        NextSections;                                     		// 0x00C0(0x0010) (CPF_ZeroConstructor)
	TArray<int>                                        PrevSections;                                     		// 0x00D0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                              		// 0x00E0(0x0010) MISSED OFFSET
	TArray<struct FAnimNotifyEvent>                    ActiveStateBranchingPoints;                       		// 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	float                                              Position;                                         		// 0x0100(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                         		// 0x0104(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAlphaBlend                                 Blend;                                            		// 0x0108(0x0038) (CPF_Transient)
	unsigned char                                      UnknownData04[0x40];                              		// 0x0140(0x0040) MISSED OFFSET
};

// ScriptStruct Engine.CompressedTrack
// 0x0038
struct FCompressedTrack
{
	TArray<unsigned char>                              ByteStream;                                       		// 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      Times;                                            		// 0x0010(0x0010) (CPF_ZeroConstructor)
	float                                              Mins[0x3];                                        		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Ranges[0x3];                                      		// 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CurveTrack
// 0x0018
struct FCurveTrack
{
	struct FName                                       CurveName;                                        		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      CurveWeights;                                     		// 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.ScaleTrack
// 0x0020
struct FScaleTrack
{
	TArray<struct FVector>                             ScaleKeys;                                        		// 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      Times;                                            		// 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.RotationTrack
// 0x0020
struct FRotationTrack
{
	TArray<struct FQuat>                               RotKeys;                                          		// 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      Times;                                            		// 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.TranslationTrack
// 0x0020
struct FTranslationTrack
{
	TArray<struct FVector>                             PosKeys;                                          		// 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<float>                                      Times;                                            		// 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.RawAnimSequenceTrack
// 0x0030
struct FRawAnimSequenceTrack
{
	TArray<struct FVector>                             PosKeys;                                          		// 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FQuat>                               RotKeys;                                          		// 0x0010(0x0010) (CPF_ZeroConstructor)
	TArray<struct FVector>                             ScaleKeys;                                        		// 0x0020(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// 0x0020
struct FAnimSequenceTrackContainer
{
	TArray<struct FRawAnimSequenceTrack>               AnimationTracks;                                  		// 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<struct FName>                               TrackNames;                                       		// 0x0010(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.GridBlendSample
// 0x001C
struct FGridBlendSample
{
	struct FEditorElement                              GridElement;                                      		// 0x0000(0x0018)
	float                                              BlendWeight;                                      		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimationTransitionRule
// 0x0010
struct FAnimationTransitionRule
{
	struct FName                                       RuleToExecute;                                    		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      TransitionReturnVal : 1;                          		// 0x0008(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	int                                                TransitionIndex;                                  		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimationState
// 0x0020 (0x0028 - 0x0008)
struct FAnimationState : public FAnimationStateBase
{
	TArray<struct FAnimationTransitionRule>            Transitions;                                      		// 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                StateRootNodeIndex;                               		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StartNotify;                                      		// 0x001C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                EndNotify;                                        		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                FullyBlendedNotify;                               		// 0x0024(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SlotEvaluationPose
// 0x0040
struct FSlotEvaluationPose
{
	TEnumAsByte<enum class EAdditiveAnimationType>     AdditiveType;                                     		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              Weight;                                           		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                              		// 0x0008(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.A2Pose
// 0x0010
struct FA2Pose
{
	TArray<struct FTransform>                          Bones;                                            		// 0x0000(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.A2CSPose
// 0x0018 (0x0028 - 0x0010)
struct FA2CSPose : public FA2Pose
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0010(0x0008) MISSED OFFSET
	TArray<unsigned char>                              ComponentSpaceFlags;                              		// 0x0018(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// 0x0018
struct FAnimParentNodeAssetOverride
{
	class UAnimationAsset*                             NewAsset;                                         		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ParentNodeGuid;                                   		// 0x0008(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BlueprintDebugData
// 0x0001
struct FBlueprintDebugData
{

};

// ScriptStruct Engine.PointerToUberGraphFrame
// 0x0008
struct FPointerToUberGraphFrame
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// 0x01E0
struct FDebuggingInfoForSingleFunction
{
	unsigned char                                      UnknownData00[0x1E0];                             		// 0x0000(0x01E0) MISSED OFFSET
};

// ScriptStruct Engine.NodeToCodeAssociation
// 0x0014
struct FNodeToCodeAssociation
{
	unsigned char                                      UnknownData00[0x14];                              		// 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct Engine.AnimBlueprintDebugData
// 0x0001
struct FAnimBlueprintDebugData
{

};

// ScriptStruct Engine.AnimationFrameSnapshot
// 0x0001
struct FAnimationFrameSnapshot
{

};

// ScriptStruct Engine.StateMachineDebugData
// 0x00B0
struct FStateMachineDebugData
{
	unsigned char                                      UnknownData00[0xB0];                              		// 0x0000(0x00B0) MISSED OFFSET
};

// ScriptStruct Engine.AnimInstanceProxy
// 0x03B0
struct FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x3B0];                             		// 0x0000(0x03B0) MISSED OFFSET
};

// ScriptStruct Engine.VehicleAnimInstanceProxy
// 0x0010 (0x03C0 - 0x03B0)
struct FVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x10];                              		// 0x03B0(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.BranchingPointNotifyPayload
// 0x0020
struct FBranchingPointNotifyPayload
{
	unsigned char                                      UnknownData00[0x20];                              		// 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.AssetImportInfo
// 0x0001
struct FAssetImportInfo
{

};

// ScriptStruct Engine.NavAvoidanceData
// 0x003C
struct FNavAvoidanceData
{
	unsigned char                                      UnknownData00[0x3C];                              		// 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Engine.DataTableCategoryHandle
// 0x0018
struct FDataTableCategoryHandle
{
	class UDataTable*                                  DataTable;                                        		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ColumnName;                                       		// 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RowContents;                                      		// 0x0010(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.DataTableRowHandle
// 0x0010
struct FDataTableRowHandle
{
	class UDataTable*                                  DataTable;                                        		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RowName;                                          		// 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.VectorSpringState
// 0x0018
struct FVectorSpringState
{
	unsigned char                                      UnknownData00[0x18];                              		// 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct Engine.FloatSpringState
// 0x0008
struct FFloatSpringState
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.DrawToRenderTargetContext
// 0x0010
struct FDrawToRenderTargetContext
{
	class UTextureRenderTarget2D*                      RenderTarget;                                     		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StartAsyncSimulationFunction
// 0x0008 (0x0058 - 0x0050)
struct FStartAsyncSimulationFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.EndPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FEndPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.StartPhysicsTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FStartPhysicsTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.LevelViewportInfo
// 0x0020
struct FLevelViewportInfo
{
	struct FVector                                     CamPosition;                                      		// 0x0000(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    CamRotation;                                      		// 0x000C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CamOrthoZoom;                                     		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CamUpdated : 1;                                   		// 0x001C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ScreenMessageString
// 0x0030
struct FScreenMessageString
{
	uint64_t                                           Key;                                              		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FString                                     ScreenMessage;                                    		// 0x0008(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	struct FColor                                      DisplayColor;                                     		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              TimeToDisplay;                                    		// 0x001C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              CurrentTimeDisplayed;                             		// 0x0020(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector2D                                   TextScale;                                        		// 0x0024(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// 0x0038
struct FFullyLoadedPackagesInfo
{
	TEnumAsByte<enum class EFullyLoadPackageType>      FullyLoadType;                                    		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0001(0x0007) MISSED OFFSET
	struct FString                                     Tag;                                              		// 0x0008(0x0010) (CPF_ZeroConstructor)
	TArray<struct FName>                               PackagesToLoad;                                   		// 0x0018(0x0010) (CPF_ZeroConstructor)
	TArray<class UObject*>                             LoadedObjects;                                    		// 0x0028(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.LevelStreamingStatus
// 0x0010
struct FLevelStreamingStatus
{
	struct FName                                       PackageName;                                      		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShouldBeLoaded : 1;                              		// 0x0008(0x0001)
	unsigned char                                      bShouldBeVisible : 1;                             		// 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0009(0x0003) MISSED OFFSET
	uint32_t                                           LODIndex;                                         		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NamedNetDriver
// 0x0010
struct FNamedNetDriver
{
	class UNetDriver*                                  NetDriver;                                        		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.WorldContext
// 0x02A0
struct FWorldContext
{
	unsigned char                                      UnknownData00[0xE8];                              		// 0x0000(0x00E8) MISSED OFFSET
	struct FURL                                        LastURL;                                          		// 0x00E8(0x0070)
	struct FURL                                        LastRemoteURL;                                    		// 0x0158(0x0070)
	class UPendingNetGame*                             PendingNetGame;                                   		// 0x01C8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FFullyLoadedPackagesInfo>            PackagesToFullyLoad;                              		// 0x01D0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                              		// 0x01E0(0x0010) MISSED OFFSET
	TArray<class ULevel*>                              LoadedLevelsForPendingMapChange;                  		// 0x01F0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x18];                              		// 0x0200(0x0018) MISSED OFFSET
	TArray<class UObjectReferencer*>                   ObjectReferencers;                                		// 0x0218(0x0010) (CPF_ZeroConstructor)
	TArray<struct FLevelStreamingStatus>               PendingLevelStreamingStatusUpdates;               		// 0x0228(0x0010) (CPF_ZeroConstructor)
	class UGameViewportClient*                         GameViewport;                                     		// 0x0238(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UGameInstance*                               OwningGameInstance;                               		// 0x0240(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FNamedNetDriver>                     ActiveNetDrivers;                                 		// 0x0248(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData03[0x48];                              		// 0x0258(0x0048) MISSED OFFSET
};

// ScriptStruct Engine.WrappedStringElement
// 0x0018
struct FWrappedStringElement
{
	struct FString                                     Value;                                            		// 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FVector2D                                   LineExtent;                                       		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.TextSizingParameters
// 0x0028
struct FTextSizingParameters
{
	float                                              DrawX;                                            		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DrawY;                                            		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DrawXL;                                           		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DrawYL;                                           		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   Scaling;                                          		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFont*                                       DrawFont;                                         		// 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector2D                                   SpacingAdjust;                                    		// 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CanvasIcon
// 0x0018
struct FCanvasIcon
{
	class UTexture*                                    Texture;                                          		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              U;                                                		// 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              V;                                                		// 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UL;                                               		// 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VL;                                               		// 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AutoCompleteNode
// 0x0028
struct FAutoCompleteNode
{
	int                                                IndexChar;                                        		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        AutoCompleteListIndices;                          		// 0x0008(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                              		// 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// 0x01E8
struct FRuntimeCurveLinearColor
{
	struct FRichCurve                                  ColorCurves[0x4];                                 		// 0x0000(0x0078)
	class UCurveLinearColor*                           ExternalCurve;                                    		// 0x01E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CurveTableRowHandle
// 0x0010
struct FCurveTableRowHandle
{
	class UCurveTable*                                 CurveTable;                                       		// 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       RowName;                                          		// 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.GraphReference
// 0x0020
struct FGraphReference
{
	class UEdGraph*                                    MacroGraph;                                       		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlueprint*                                  GraphBlueprint;                                   		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       GraphGuid;                                        		// 0x0010(0x0010) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.EdGraphSchemaAction
// 0x00B8
struct FEdGraphSchemaAction
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) MISSED OFFSET
	struct FText                                       MenuDescription;                                  		// 0x0008(0x0018)
	struct FString                                     TooltipDescription;                               		// 0x0020(0x0010) (CPF_ZeroConstructor)
	struct FText                                       Category;                                         		// 0x0030(0x0018)
	struct FText                                       Keywords;                                         		// 0x0048(0x0018)
	int                                                Grouping;                                         		// 0x0060(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SectionID;                                        		// 0x0064(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FString>                             MenuDescriptionArray;                             		// 0x0068(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             FullSearchTitlesArray;                            		// 0x0078(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             FullSearchKeywordsArray;                          		// 0x0088(0x0010) (CPF_ZeroConstructor)
	TArray<struct FString>                             FullSearchCategoryArray;                          		// 0x0098(0x0010) (CPF_ZeroConstructor)
	struct FString                                     SearchText;                                       		// 0x00A8(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// 0x0008 (0x00C0 - 0x00B8)
struct FEdGraphSchemaAction_NewNode : public FEdGraphSchemaAction
{
	class UEdGraphNode*                                NodeTemplate;                                     		// 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// 0x0018
struct FActiveHapticFeedbackEffect
{
	class UHapticFeedbackEffect_Base*                  HapticEffect;                                     		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                              		// 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.StreamedAudioPlatformData
// 0x0020
struct FStreamedAudioPlatformData
{
	unsigned char                                      UnknownData00[0x20];                              		// 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.InterpEdSelKey
// 0x0018
struct FInterpEdSelKey
{
	class UInterpGroup*                                Group;                                            		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UInterpTrack*                                Track;                                            		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                KeyIndex;                                         		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UnsnappedPosition;                                		// 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.CameraPreviewInfo
// 0x0030
struct FCameraPreviewInfo
{
	class UClass*                                      PawnClass;                                        		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequence*                               AnimSeq;                                          		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                         		// 0x0010(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                         		// 0x001C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class APawn*                                       PawnInst;                                         		// 0x0028(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Engine.SubTrackGroup
// 0x0028
struct FSubTrackGroup
{
	struct FString                                     GroupName;                                        		// 0x0000(0x0010) (CPF_ZeroConstructor)
	TArray<int>                                        TrackIndices;                                     		// 0x0010(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      bIsCollapsed : 1;                                 		// 0x0020(0x0001)
	unsigned char                                      bIsSelected : 1;                                  		// 0x0020(0x0001) (CPF_Transient)
};

// ScriptStruct Engine.SupportedSubTrackInfo
// 0x0020
struct FSupportedSubTrackInfo
{
	class UClass*                                      SupportedClass;                                   		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     SubTrackName;                                     		// 0x0008(0x0010) (CPF_ZeroConstructor)
	int                                                GroupIndex;                                       		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ClientReceiveData
// 0x0040
struct FClientReceiveData
{
	class APlayerController*                           LocalPC;                                          		// 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       MessageType;                                      		// 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MessageIndex;                                     		// 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0014(0x0004) MISSED OFFSET
	struct FString                                     MessageString;                                    		// 0x0018(0x0010) (CPF_ZeroConstructor)
	class APlayerState*                                RelatedPlayerState_2;                             		// 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APlayerState*                                RelatedPlayerState_3;                             		// 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     OptionalObject;                                   		// 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PacketSimulationSettings
// 0x0014
struct FPacketSimulationSettings
{
	int                                                PktLoss;                                          		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PktOrder;                                         		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PktDup;                                           		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PktLag;                                           		// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PktLagVariance;                                   		// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ParticleCurvePair
// 0x0018
struct FParticleCurvePair
{
	struct FString                                     CurveName;                                        		// 0x0000(0x0010) (CPF_ZeroConstructor)
	class UObject*                                     CurveObject;                                      		// 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.BeamTargetData
// 0x0010
struct FBeamTargetData
{
	struct FName                                       TargetName;                                       		// 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetPercentage;                                 		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// 0x0010
struct FParticleSystemReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                              		// 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// 0x0010
struct FParticleEmitterReplayFrame
{
	unsigned char                                      UnknownData00[0x10];                              		// 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct Engine.TexturePlatformData
// 0x0020
struct FTexturePlatformData
{
	unsigned char                                      UnknownData00[0x20];                              		// 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct Engine.TextureSource
// 0x0088
struct FTextureSource
{
	unsigned char                                      UnknownData00[0x88];                              		// 0x0000(0x0088) MISSED OFFSET
};

// ScriptStruct Engine.SoundNodeEditorData
// 0x0008
struct FSoundNodeEditorData
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.SoundClassEditorData
// 0x0008
struct FSoundClassEditorData
{
	unsigned char                                      UnknownData00[0x8];                               		// 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct Engine.MaterialRemapIndex
// 0x0018
struct FMaterialRemapIndex
{
	uint32_t                                           ImportVersionKey;                                 		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	TArray<int>                                        MaterialRemap;                                    		// 0x0008(0x0010) (CPF_ZeroConstructor)
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// 0x0028
struct FAssetEditorOrbitCameraPosition
{
	unsigned char                                      bIsSet : 1;                                       		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     CamOrbitPoint;                                    		// 0x0004(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     CamOrbitZoom;                                     		// 0x0010(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    CamOrbitRotation;                                 		// 0x001C(0x000C) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.MeshSectionInfoMap
// 0x0050
struct FMeshSectionInfoMap
{
	unsigned char                                      UnknownData00[0x50];                              		// 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Engine.MeshSectionInfo
// 0x0008
struct FMeshSectionInfo
{
	int                                                MaterialIndex;                                    		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableCollision : 1;                             		// 0x0004(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCastShadow : 1;                                  		// 0x0005(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverrideIndoorOutdoorMask : 1;                   		// 0x0006(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      IndoorOutdoorMask;                                		// 0x0007(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.GroupedStaticMeshOptimizationSettings
// 0x0210
struct FGroupedStaticMeshOptimizationSettings
{
	TEnumAsByte<enum class EStaticMeshLODType>         LevelOfDetailType;                                		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0001(0x0007) MISSED OFFSET
	struct FMeshReductionSettings                      ReductionSettings;                                		// 0x0008(0x00F0) (CPF_Edit)
	struct FMeshProxySettings                          ProxySettings;                                    		// 0x00F8(0x0114) (CPF_Edit)
};

// ScriptStruct Engine.StaticMeshSourceModel
// 0x03A0
struct FStaticMeshSourceModel
{
	struct FMeshBuildSettings                          BuildSettings;                                    		// 0x0000(0x0040) (CPF_Edit)
	struct FMeshReductionSettings                      ReductionSettings;                                		// 0x0040(0x00F0)
	struct FSimplygonRemeshingSettings                 RemeshingSettings;                                		// 0x0130(0x0050) (CPF_Deprecated)
	unsigned char                                      bHasBeenSimplified : 1;                           		// 0x0180(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0181(0x0007) MISSED OFFSET
	struct FGroupedStaticMeshOptimizationSettings      OptimizationSettings;                             		// 0x0188(0x0210) (CPF_Edit)
	float                                              LODDistance;                                      		// 0x0398(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              ScreenSize;                                       		// 0x039C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// 0x001C
struct FStaticMeshOptimizationSettings
{
	TEnumAsByte<enum class EOptimizationType>          ReductionMethod;                                  		// 0x0000(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0001(0x0003) MISSED OFFSET
	float                                              NumOfTrianglesPercentage;                         		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDeviationPercentage;                           		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WeldingThreshold;                                 		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRecalcNormals : 1;                               		// 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0011(0x0003) MISSED OFFSET
	float                                              NormalsThreshold;                                 		// 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      SilhouetteImportance;                             		// 0x0018(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      TextureImportance;                                		// 0x0019(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ShadingImportance;                                		// 0x001A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.PhysXWheelState
// 0x001C
struct FPhysXWheelState
{
	float                                              LongitudinalSlip;                                 		// 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LateralSlip;                                      		// 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspSpringForce;                                  		// 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TireFriction;                                     		// 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bInAir : 1;                                       		// 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0011(0x0003) MISSED OFFSET
	float                                              RotationSpeed;                                    		// 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                           		// 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimationRecordingSettings
// 0x000C
struct FAnimationRecordingSettings
{
	unsigned char                                      bRecordInWorldSpace : 1;                          		// 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRemoveRootAnimation : 1;                         		// 0x0001(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAutoSaveAsset : 1;                               		// 0x0002(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                               		// 0x0003(0x0001) MISSED OFFSET
	float                                              SampleRate;                                       		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Length;                                           		// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                             		// 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FPoseLink                                   Additive;                                         		// 0x0048(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	float                                              Alpha;                                            		// 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                   		// 0x0064(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	int                                                LODThreshold;                                     		// 0x006C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ActualAlpha;                                      		// 0x0070(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// 0x0078 (0x00A8 - 0x0030)
struct FAnimNode_SaveCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   Pose;                                             		// 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       CachePoseName;                                    		// 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GlobalWeight;                                     		// 0x0050(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                              		// 0x0054(0x0054) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// 0x0018 (0x0070 - 0x0058)
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase
{
	class UAnimSequenceBase*                           Sequence;                                         		// 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bLoopAnimation : 1;                               		// 0x0060(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0061(0x0003) MISSED OFFSET
	float                                              PlayRate;                                         		// 0x0064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartPosition;                                    		// 0x0068(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_StateMachine
// 0x00A8 (0x00D8 - 0x0030)
struct FAnimNode_StateMachine : public FAnimNode_Base
{
	int                                                StateMachineIndexInClass;                         		// 0x0030(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxTransitionsPerFrame;                           		// 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSkipFirstUpdateTransition : 1;                   		// 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                               		// 0x0039(0x000F) MISSED OFFSET
	int                                                CurrentState;                                     		// 0x0048(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ElapsedTime;                                      		// 0x004C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x88];                              		// 0x0050(0x0088) MISSED OFFSET
};

// ScriptStruct Engine.AnimationPotentialTransition
// 0x0030
struct FAnimationPotentialTransition
{
	unsigned char                                      UnknownData00[0x30];                              		// 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// 0x00D0
struct FAnimationActiveTransitionEntry
{
	unsigned char                                      UnknownData00[0x90];                              		// 0x0000(0x0090) MISSED OFFSET
	class UBlendProfile*                               BlendProfile;                                     		// 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                              		// 0x0098(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SubInput
// 0x0038 (0x0068 - 0x0030)
struct FAnimNode_SubInput : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x38];                              		// 0x0030(0x0038) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_SubInstance
// 0x0098 (0x00C8 - 0x0030)
struct FAnimNode_SubInstance : public FAnimNode_Base
{
	struct FPoseLink                                   InPose;                                           		// 0x0030(0x0018)
	class UClass*                                      InstanceClass;                                    		// 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimInstance*                               InstanceToRun;                                    		// 0x0050(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class UProperty*>                           InstanceProperties;                               		// 0x0058(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UProperty*>                           SubInstanceProperties;                            		// 0x0068(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FName>                               SourcePropertyNames;                              		// 0x0078(0x0010) (CPF_ZeroConstructor)
	TArray<struct FName>                               DestPropertyNames;                                		// 0x0088(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                              		// 0x0098(0x0030) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// 0x0048 (0x0078 - 0x0030)
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base
{
	TEnumAsByte<enum class EEvaluatorDataSource>       DataSource;                                       		// 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EEvaluatorMode>             EvaluatorMode;                                    		// 0x0031(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                               		// 0x0032(0x0002) MISSED OFFSET
	int                                                FramesToCachePose;                                		// 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                              		// 0x0038(0x0038) MISSED OFFSET
	int                                                CacheFramesRemaining;                             		// 0x0070(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_TransitionResult
// 0x0050 (0x0080 - 0x0030)
struct FAnimNode_TransitionResult : public FAnimNode_Base
{
	unsigned char                                      bCanEnterTransition : 1;                          		// 0x0030(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4F];                              		// 0x0031(0x004F) MISSED OFFSET
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// 0x0020 (0x0050 - 0x0030)
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
	struct FPoseLink                                   LinkToCachingNode;                                		// 0x0030(0x0018)
	struct FName                                       CachePoseName;                                    		// 0x0048(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_ConvertLocalToComponentSpace : public FAnimNode_Base
{
	struct FPoseLink                                   LocalPose;                                        		// 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// 0x0018 (0x0048 - 0x0030)
struct FAnimNode_ConvertComponentToLocalSpace : public FAnimNode_Base
{
	struct FComponentSpacePoseLink                     ComponentPose;                                    		// 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
};

// ScriptStruct Engine.DummySpacerCameraTypes
// 0x0001
struct FDummySpacerCameraTypes
{

};

// ScriptStruct Engine.IntegralKey
// 0x0008
struct FIntegralKey
{
	float                                              Time;                                             		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Value;                                            		// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.IntegralCurve
// 0x0018 (0x0070 - 0x0058)
struct FIntegralCurve : public FIndexedCurve
{
	TArray<struct FIntegralKey>                        Keys;                                             		// 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	int                                                DefaultValue;                                     		// 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseDefaultValueBeforeFirstKey : 1;               		// 0x006C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NameCurveKey
// 0x0010
struct FNameCurveKey
{
	float                                              Time;                                             		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Value;                                            		// 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct Engine.NameCurve
// 0x0010 (0x0068 - 0x0058)
struct FNameCurve : public FIndexedCurve
{
	TArray<struct FNameCurveKey>                       Keys;                                             		// 0x0058(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
};

// ScriptStruct Engine.StringCurveKey
// 0x0018
struct FStringCurveKey
{
	float                                              Time;                                             		// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Value;                                            		// 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
};

// ScriptStruct Engine.StringCurve
// 0x0020 (0x0078 - 0x0058)
struct FStringCurve : public FIndexedCurve
{
	struct FString                                     DefaultValue;                                     		// 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FStringCurveKey>                     Keys;                                             		// 0x0068(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor)
};

// ScriptStruct Engine.StreamableManager
// 0x00A0
struct FStreamableManager
{
	unsigned char                                      UnknownData00[0xA0];                              		// 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// 0x0130 (0x04E0 - 0x03B0)
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x130];                             		// 0x03B0(0x0130) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
