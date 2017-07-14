#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (EARLY ACCESS v2.2.33) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TslGame.EPopupButtonID
enum class EPopupButtonID
{
	EPopupButtonID__Cancel_Or_No   = 0,
	EPopupButtonID__Yes_Or_OK      = 1,
	EPopupButtonID__EPopupButtonID_MAX = 2
};


// Enum TslGame.ESystemMessageType
enum class ESystemMessageType
{
	ESystemMessageType__Debug      = 0,
	ESystemMessageType__Notify     = 1,
	ESystemMessageType__Warning    = 2,
	ESystemMessageType__Error      = 3,
	ESystemMessageType__Important  = 4,
	ESystemMessageType__ESystemMessageType_MAX = 5
};


// Enum TslGame.EDamageReason
enum class EDamageReason
{
	EDamageReason__None            = 0,
	EDamageReason__HeadShot        = 1,
	EDamageReason__TorsoShot       = 2,
	EDamageReason__StomachShot     = 3,
	EDamageReason__ArmShot         = 4,
	EDamageReason__LegShot         = 5,
	EDamageReason__NonSpecific     = 6,
	EDamageReason__EDamageReason_MAX = 7
};


// Enum TslGame.EPopupStyle
enum class EPopupStyle
{
	EPopupStyle__Ok_Cancel         = 0,
	EPopupStyle__Ok                = 1,
	EPopupStyle__Yes_No            = 2,
	EPopupStyle__EPopupStyle_MAX   = 3
};


// Enum TslGame.EWidgetShowType
enum class EWidgetShowType
{
	EWidgetShowType__Show          = 0,
	EWidgetShowType__Hide          = 1,
	EWidgetShowType__Toggle        = 2,
	EWidgetShowType__EWidgetShowType_MAX = 3
};


// Enum TslGame.EMovementDirection
enum class EMovementDirection
{
	F_Direction                    = 0,
	L_Direction                    = 1,
	R_Direction                    = 2,
	B_Direction                    = 3,
	FL_Direction                   = 4,
	FR_Direction                   = 5,
	BL_Direction                   = 6,
	BR_Direction                   = 7,
	EMovementDirection_MAX         = 8
};


// Enum TslGame.EAnimStanceType
enum class EAnimStanceType
{
	AnimType_Stand                 = 0,
	AnimType_Crouch                = 1,
	AnimType_Prone                 = 2,
	AnimType_MAX                   = 3
};


// Enum TslGame.EBuffOverlapSolveMethod
enum class EBuffOverlapSolveMethod
{
	IgnoreLater                    = 0,
	Overwrite                      = 1,
	RestartTimer                   = 2,
	EBuffOverlapSolveMethod_MAX    = 3
};


// Enum TslGame.ECastLevel
enum class ECastLevel
{
	ECastLevel__None               = 0,
	ECastLevel__NoRestriction      = 1,
	ECastLevel__Restriction        = 2,
	ECastLevel__ECastLevel_MAX     = 3
};


// Enum TslGame.ECastPriority
enum class ECastPriority
{
	ECastPriority__None            = 0,
	ECastPriority__Low             = 1,
	ECastPriority__Normal          = 2,
	ECastPriority__High            = 3,
	ECastPriority__Max             = 4,
	ECastPriority__ECastPriority_MAX = 5
};


// Enum TslGame.ELobbyItemPointSellingType
enum class ELobbyItemPointSellingType
{
	ELobbyItemPointSellingType__Normal = 0,
	ELobbyItemPointSellingType__WeeklyDouble = 1,
	ELobbyItemPointSellingType__ELobbyItemPointSellingType_MAX = 2
};


// Enum TslGame.ELobbyItemQuality
enum class ELobbyItemQuality
{
	ELobbyItemQuality__Junk        = 0,
	ELobbyItemQuality__Common      = 1,
	ELobbyItemQuality__Uncommon    = 2,
	ELobbyItemQuality__Rare        = 3,
	ELobbyItemQuality__Epic        = 4,
	ELobbyItemQuality__ELobbyItemQuality_MAX = 5
};


// Enum TslGame.ELobbyItemCategory
enum class ELobbyItemCategory
{
	ELobbyItemCategory__Belt       = 0,
	ELobbyItemCategory__Body       = 1,
	ELobbyItemCategory__Eyes       = 2,
	ELobbyItemCategory__Feet       = 3,
	ELobbyItemCategory__Head       = 4,
	ELobbyItemCategory__Jacket     = 5,
	ELobbyItemCategory__Legs       = 6,
	ELobbyItemCategory__Mask       = 7,
	ELobbyItemCategory__Hands      = 8,
	ELobbyItemCategory__Box        = 9,
	ELobbyItemCategory__Key        = 10,
	ELobbyItemCategory__ELobbyItemCategory_MAX = 11
};


// Enum TslGame.EItemCategory
enum class EItemCategory
{
	EItemCategory__None            = 0,
	EItemCategory__Equipment       = 1,
	EItemCategory__Weapon          = 2,
	EItemCategory__Attachment      = 3,
	EItemCategory__Ammunition      = 4,
	EItemCategory__Use             = 5,
	EItemCategory__EItemCategory_MAX = 6
};


// Enum TslGame.EForceRefreshDummy
enum class EForceRefreshDummy
{
	EForceRefreshDummy__Refresh1   = 0,
	EForceRefreshDummy__Refresh2   = 1,
	EForceRefreshDummy__EForceRefreshDummy_MAX = 2
};


// Enum TslGame.EInteractionPhase
enum class EInteractionPhase
{
	First                          = 0,
	Second                         = 1,
	EInteractionPhase_MAX          = 2
};


// Enum TslGame.EWeaponGripLeftHand
enum class EWeaponGripLeftHand
{
	EWeaponGripLeftHand__NormalRifle = 0,
	EWeaponGripLeftHand__Foregrip1 = 1,
	EWeaponGripLeftHand__Foregrip2 = 2,
	EWeaponGripLeftHand__Thompson  = 3,
	EWeaponGripLeftHand__EWeaponGripLeftHand_MAX = 4
};


// Enum TslGame.EWeaponAttachmentSlotID
enum class EWeaponAttachmentSlotID
{
	EWeaponAttachmentSlotID__None  = 0,
	EWeaponAttachmentSlotID__Muzzle = 1,
	EWeaponAttachmentSlotID__LowerRail = 2,
	EWeaponAttachmentSlotID__UpperRail = 3,
	EWeaponAttachmentSlotID__Magazine = 4,
	EWeaponAttachmentSlotID__Stock = 5,
	EWeaponAttachmentSlotID__EWeaponAttachmentSlotID_MAX = 6
};


// Enum TslGame.EItemSpotGroupType
enum class EItemSpotGroupType
{
	EItemSpotGroupType__GroupA     = 0,
	EItemSpotGroupType__GroupB     = 1,
	EItemSpotGroupType__GroupC     = 2,
	EItemSpotGroupType__GroupD     = 3,
	EItemSpotGroupType__GroupE     = 4,
	EItemSpotGroupType__GroupF     = 5,
	EItemSpotGroupType__GroupG     = 6,
	EItemSpotGroupType__GroupH     = 7,
	EItemSpotGroupType__GroupI     = 8,
	EItemSpotGroupType__GroupJ     = 9,
	EItemSpotGroupType__EItemSpotGroupType_MAX = 10
};


// Enum TslGame.EItemSpotType
enum class EItemSpotType
{
	EItemSpotType__TypeA           = 0,
	EItemSpotType__TypeB           = 1,
	EItemSpotType__TypeC           = 2,
	EItemSpotType__TypeD           = 3,
	EItemSpotType__TypeE           = 4,
	EItemSpotType__TypeF           = 5,
	EItemSpotType__EItemSpotType_MAX = 6
};


// Enum TslGame.EEquipSlotID
enum class EEquipSlotID
{
	EEquipSlotID__Head             = 0,
	EEquipSlotID__Eyes             = 1,
	EEquipSlotID__Mask             = 2,
	EEquipSlotID__Torso            = 3,
	EEquipSlotID__TorsoArmor       = 4,
	EEquipSlotID__Outer            = 5,
	EEquipSlotID__Backpack         = 6,
	EEquipSlotID__Hands            = 7,
	EEquipSlotID__Legs             = 8,
	EEquipSlotID__Feet             = 9,
	EEquipSlotID__Belt             = 10,
	EEquipSlotID__WeaponPrimary    = 11,
	EEquipSlotID__WeaponSecondary  = 12,
	EEquipSlotID__WeaponMelee      = 13,
	EEquipSlotID__WeaponThrowable  = 14,
	EEquipSlotID__MaxOrNone        = 15,
	EEquipSlotID__EEquipSlotID_MAX = 16
};


// Enum TslGame.EDurabilityConsumeType
enum class EDurabilityConsumeType
{
	EDurabilityConsumeType__TotalDamage = 0,
	EDurabilityConsumeType__AbsorbDamage = 1,
	EDurabilityConsumeType__EDurabilityConsumeType_MAX = 2
};


// Enum TslGame.EAnimStance
enum class EAnimStance
{
	Stand                          = 0,
	Crouch                         = 1,
	Prone                          = 2,
	Groggy                         = 3,
	EAnimStance_MAX                = 4
};


// Enum TslGame.EWeaponClass
enum class EWeaponClass
{
	Class_Pistol                   = 0,
	Class_SMG                      = 1,
	Class_Rifle                    = 2,
	Class_Carbine                  = 3,
	Class_Shotgun                  = 4,
	Class_Sniper                   = 5,
	Class_DMR                      = 6,
	Class_LMG                      = 7,
	Class_Melee                    = 8,
	Class_Throwable                = 9,
	Class_MAX                      = 10
};


// Enum TslGame.EThrownWeaponType
enum class EThrownWeaponType
{
	Thrown_Grenade                 = 0,
	Thrown_Molotov                 = 1,
	Thrown_Other                   = 2,
	Thrown_MAX                     = 3
};


// Enum TslGame.EAttachmentCalculateType
enum class EAttachmentCalculateType
{
	Addition                       = 0,
	Multiply                       = 1,
	EAttachmentCalculateType_MAX   = 2
};


// Enum TslGame.EFiringMode
enum class EFiringMode
{
	Normal                         = 0,
	Burst                          = 1,
	FullAuto                       = 2,
	EFiringMode_MAX                = 3
};


// Enum TslGame.EWeaponHand
enum class EWeaponHand
{
	Left                           = 0,
	Right                          = 1,
	EWeaponHand_MAX                = 2
};


// Enum TslGame.ELobbyLinkState
enum class ELobbyLinkState
{
	ELobbyLinkState__Disconnect    = 0,
	ELobbyLinkState__WaitInitialize = 1,
	ELobbyLinkState__WaitStart     = 2,
	ELobbyLinkState__Gaming        = 3,
	ELobbyLinkState__Finished      = 4,
	ELobbyLinkState__ELobbyLinkState_MAX = 5
};


// Enum TslGame.EObserverCameraMode
enum class EObserverCameraMode
{
	EObserverCameraMode__FixedCamera = 0,
	EObserverCameraMode__FreeCamera = 1,
	EObserverCameraMode__PlayerCamera = 2,
	EObserverCameraMode__FollowCamera = 3,
	EObserverCameraMode__EObserverCameraMode_MAX = 4
};


// Enum TslGame.EObserverAuthorityType
enum class EObserverAuthorityType
{
	EObserverAuthorityType__None   = 0,
	EObserverAuthorityType__FromBeginning = 1,
	EObserverAuthorityType__AfterDeath = 2,
	EObserverAuthorityType__AfterExtermination = 3,
	EObserverAuthorityType__EObserverAuthorityType_MAX = 4
};


// Enum TslGame.EValueType
enum class EValueType
{
	EValueType__Float              = 0,
	EValueType__Int                = 1,
	EValueType__String             = 2,
	EValueType__Bool               = 3,
	EValueType__EValueType_MAX     = 4
};


// Enum TslGame.EQualityType
enum class EQualityType
{
	EQualityType__EMainQuality     = 0,
	EQualityType__EViewDistanceQuality = 1,
	EQualityType__EShadowQuality   = 2,
	EQualityType__EAntiAliasingQuality = 3,
	EQualityType__ETextureQuality  = 4,
	EQualityType__EVisualEffectQuality = 5,
	EQualityType__EPostProcessingQuality = 6,
	EQualityType__EFoliageQuality  = 7,
	EQualityType__EQualityType_MAX = 8
};


// Enum TslGame.ENearClippingLevel
enum class ENearClippingLevel
{
	ENearClippingLevel__Default    = 0,
	ENearClippingLevel__Low        = 1,
	ENearClippingLevel__Middle     = 2,
	ENearClippingLevel__High       = 3,
	ENearClippingLevel__ENearClippingLevel_MAX = 4
};


// Enum TslGame.EThingSpotGroupType
enum class EThingSpotGroupType
{
	EThingSpotGroupType__GroupA    = 0,
	EThingSpotGroupType__GroupB    = 1,
	EThingSpotGroupType__GroupC    = 2,
	EThingSpotGroupType__GroupD    = 3,
	EThingSpotGroupType__GroupE    = 4,
	EThingSpotGroupType__GroupF    = 5,
	EThingSpotGroupType__GroupG    = 6,
	EThingSpotGroupType__GroupH    = 7,
	EThingSpotGroupType__GroupI    = 8,
	EThingSpotGroupType__GroupJ    = 9,
	EThingSpotGroupType__GroupK    = 10,
	EThingSpotGroupType__GroupL    = 11,
	EThingSpotGroupType__GroupM    = 12,
	EThingSpotGroupType__GroupN    = 13,
	EThingSpotGroupType__EThingSpotGroupType_MAX = 14
};


// Enum TslGame.EPhysMaterialType
enum class EPhysMaterialType
{
	EPhysMaterialType__Unknown     = 0,
	EPhysMaterialType__Asphalt     = 1,
	EPhysMaterialType__Dirt        = 2,
	EPhysMaterialType__Water       = 3,
	EPhysMaterialType__Wood        = 4,
	EPhysMaterialType__Stone       = 5,
	EPhysMaterialType__Metal       = 6,
	EPhysMaterialType__EPhysMaterialType_MAX = 7
};


// Enum TslGame.EEquipableItemSoundType
enum class EEquipableItemSoundType
{
	EEquipableItemSoundType__None  = 0,
	EEquipableItemSoundType__Vest  = 1,
	EEquipableItemSoundType__LongCoat = 2,
	EEquipableItemSoundType__HipSack = 3,
	EEquipableItemSoundType__Cloth = 4,
	EEquipableItemSoundType__BackPack = 5,
	EEquipableItemSoundType__MilitaryShoes = 6,
	EEquipableItemSoundType__Sneakers = 7,
	EEquipableItemSoundType__EEquipableItemSoundType_MAX = 8
};


// Enum TslGame.EEquipableItemSoundGroup
enum class EEquipableItemSoundGroup
{
	EEquipableItemSoundGroup__Default = 0,
	EEquipableItemSoundGroup__Shoes = 1,
	EEquipableItemSoundGroup__EEquipableItemSoundGroup_MAX = 2
};


// Enum TslGame.ETslPhysMaterialType
enum class ETslPhysMaterialType
{
	ETslPhysMaterialType__Unknown  = 0,
	ETslPhysMaterialType__Concrete = 1,
	ETslPhysMaterialType__Dirt     = 2,
	ETslPhysMaterialType__Water    = 3,
	ETslPhysMaterialType__Metal    = 4,
	ETslPhysMaterialType__Wood     = 5,
	ETslPhysMaterialType__Grass    = 6,
	ETslPhysMaterialType__Glass    = 7,
	ETslPhysMaterialType__Flesh    = 8,
	ETslPhysMaterialType__ETslPhysMaterialType_MAX = 9
};


// Enum TslGame.EAccessorySlot
enum class EAccessorySlot
{
	Slot_Primary                   = 0,
	Slot_Secondary                 = 1,
	Slot_SideArm                   = 2,
	Slot_Melee                     = 3,
	Slot_Thrown                    = 4,
	Slot_MAX                       = 5
};


// Enum TslGame.EAnimWeaponType
enum class EAnimWeaponType
{
	None                           = 0,
	Rifle                          = 1,
	Pistol                         = 2,
	Throwable                      = 3,
	Melee                          = 4,
	EAnimWeaponType_MAX            = 5
};


// Enum TslGame.ECameraViewBehaviour
enum class ECameraViewBehaviour
{
	ECameraViewBehaviour__FpsAndTps = 0,
	ECameraViewBehaviour__FpsOnly  = 1,
	ECameraViewBehaviour__TpsOnly  = 2,
	ECameraViewBehaviour__ECameraViewBehaviour_MAX = 3
};


// Enum TslGame.EMatchStartType
enum class EMatchStartType
{
	EMatchStartType__Normal        = 0,
	EMatchStartType__Airborne      = 1,
	EMatchStartType__EMatchStartType_MAX = 2
};


// Enum TslGame.EGender
enum class EGender
{
	EGender__Male                  = 0,
	EGender__Female                = 1,
	EGender__EGender_MAX           = 2
};


// Enum TslGame.EWeaponReloadAnimExec
enum class EWeaponReloadAnimExec
{
	Tactical                       = 0,
	Charge                         = 1,
	Single                         = 2,
	Loop                           = 3,
	EWeaponReloadAnimExec_MAX      = 4
};


// Enum TslGame.EWeaponReloadMethod
enum class EWeaponReloadMethod
{
	Magazine                       = 0,
	OneByOne                       = 1,
	OneByOneAndClip                = 2,
	EWeaponReloadMethod_MAX        = 3
};


// Enum TslGame.EVehicleAnimType
enum class EVehicleAnimType
{
	DefaultDriver                  = 0,
	DefaultPassenger               = 1,
	BuggyDriver                    = 2,
	BuggyPassenger                 = 3,
	DaciaDriver                    = 4,
	DaciaPassengerFR               = 5,
	DaciaPassengerBL               = 6,
	DaciaPassengerBC               = 7,
	DaciaPassengerBR               = 8,
	UazDriver                      = 9,
	UazPassengerFR                 = 10,
	UazPassengerBL                 = 11,
	UazPassengerBC                 = 12,
	UazPassengerBR                 = 13,
	BoatDriver                     = 14,
	BoatPassengerFR                = 15,
	BoatPassengerBL                = 16,
	BoatPassengerBC                = 17,
	BoatPassengerBR                = 18,
	MotoDriver                     = 19,
	MotoPassenger                  = 20,
	MotoSidecar                    = 21,
	MotoDriverSidecar              = 22,
	MotoPassengerSidecar           = 23,
	EVehicleAnimType_MAX           = 24
};


// Enum TslGame.ERiderType
enum class ERiderType
{
	ERiderType__Driver             = 0,
	ERiderType__Passenger          = 1,
	ERiderType__ERiderType_MAX     = 2
};


// Enum TslGame.EAttackType
enum class EAttackType
{
	EAttackType__None              = 0,
	EAttackType__Weapon            = 1,
	EAttackType__VehicleCrash      = 2,
	EAttackType__VehicleExplosion  = 3,
	EAttackType__Fall              = 4,
	EAttackType__BlueZone          = 5,
	EAttackType__RedZone           = 6,
	EAttackType__EAttackType_MAX   = 7
};


// Enum TslGame.EPlayerMoveType
enum class EPlayerMoveType
{
	EPlayerMoveType__OnFoot        = 0,
	EPlayerMoveType__OnVehicle     = 1,
	EPlayerMoveType__EPlayerMoveType_MAX = 2
};


// Enum TslGame.ETargetingType
enum class ETargetingType
{
	Targeting_None                 = 0,
	Targeting_Aiming               = 1,
	Targeting_Scoping              = 2,
	Targeting_MAX                  = 3
};


// Enum TslGame.EMovementType
enum class EMovementType
{
	M_StandWalk                    = 0,
	M_StandRun                     = 1,
	M_StandSprint                  = 2,
	M_CrouchWalk                   = 3,
	M_CrouchRun                    = 4,
	M_CrouchSprint                 = 5,
	M_ProneWalk                    = 6,
	M_ProneRun                     = 7,
	M_ProneSprint                  = 8,
	M_StandScope                   = 9,
	M_CrouchScope                  = 10,
	M_ProneScope                   = 11,
	M_StandAim                     = 12,
	M_CrouchAim                    = 13,
	M_ProneAim                     = 14,
	M_Swim                         = 15,
	M_UnderwaterSwim               = 16,
	M_DBNO                         = 17,
	M_MAX                          = 18
};


// Enum TslGame.EThingGroupSpawnType
enum class EThingGroupSpawnType
{
	EThingGroupSpawnType__None     = 0,
	EThingGroupSpawnType__Probability = 1,
	EThingGroupSpawnType__TotalCount = 2,
	EThingGroupSpawnType__EThingGroupSpawnType_MAX = 3
};


// Enum TslGame.ETeamVehicleType
enum class ETeamVehicleType
{
	ETeamVehicleType__Team_None    = 0,
	ETeamVehicleType__Team_Vehicle = 1,
	ETeamVehicleType__Team_Parachute = 2,
	ETeamVehicleType__Team_MAX     = 3
};


// Enum TslGame.EMarkPosition
enum class EMarkPosition
{
	EMarkPosition__Mid             = 0,
	EMarkPosition__Top             = 1,
	EMarkPosition__Right           = 2,
	EMarkPosition__Left            = 3,
	EMarkPosition__Bottom          = 4,
	EMarkPosition__TopRight        = 5,
	EMarkPosition__TopLeft         = 6,
	EMarkPosition__BottomLeft      = 7,
	EMarkPosition__BottomRight     = 8,
	EMarkPosition__EMarkPosition_MAX = 9
};


// Enum TslGame.EDamageVictimActorType
enum class EDamageVictimActorType
{
	Character                      = 0,
	Vehicle                        = 1,
	Wheel                          = 2,
	DestructibleActor              = 3,
	EDamageVictimActorType_MAX     = 4
};


// Enum TslGame.EDamageTypeCategory
enum class EDamageTypeCategory
{
	Damage_None                    = 0,
	Damage_Instant                 = 1,
	Damage_Gun                     = 2,
	Damage_Melee                   = 3,
	Damage_Groggy                  = 4,
	Damage_BlueZone                = 5,
	Damage_VehicleHit              = 6,
	Damage_Molotov                 = 7,
	Damage_Explosion               = 8,
	Damage_Explosion_Grenade       = 9,
	Damage_Explosion_RedZone       = 10,
	Damage_Explosion_Vehicle       = 11,
	Damage_Instant_Fall            = 12,
	Damage_Drown                   = 13,
	Damage_MAX                     = 14
};


// Enum TslGame.ETslFenceSelector
enum class ETslFenceSelector
{
	ETslFenceSelector__None        = 0,
	ETslFenceSelector__Use         = 1,
	ETslFenceSelector__Use01       = 2,
	ETslFenceSelector__Use02       = 3,
	ETslFenceSelector__Use03       = 4,
	ETslFenceSelector__ETslFenceSelector_MAX = 5
};


// Enum TslGame.EReactionType
enum class EReactionType
{
	Reaciton_None                  = 0,
	Reaction_Physics               = 1,
	Reaction_Destructible          = 2,
	EReactionType_MAX              = 3
};


// Enum TslGame.EPlayerAuthState
enum class EPlayerAuthState
{
	EPlayerAuthState__None         = 0,
	EPlayerAuthState__Login        = 1,
	EPlayerAuthState__Logout       = 2,
	EPlayerAuthState__EPlayerAuthState_MAX = 3
};


// Enum TslGame.EAttachParent
enum class EAttachParent
{
	EAttachParent__None            = 0,
	EAttachParent__Character       = 1,
	EAttachParent__WeaponGun       = 2,
	EAttachParent__EAttachParent_MAX = 3
};


// Enum TslGame.EProjectileExplodeState
enum class EProjectileExplodeState
{
	NotExplode                     = 0,
	ImpactExplode                  = 1,
	TimerExplode                   = 2,
	EProjectileExplodeState_MAX    = 3
};


// Enum TslGame.EProjectileExplosionRotationType
enum class EProjectileExplosionRotationType
{
	ProjectileUpVector             = 0,
	WorldUpVector                  = 1,
	EProjectileExplosionRotationType_MAX = 2
};


// Enum TslGame.EMolotovSimulationType
enum class EMolotovSimulationType
{
	Molotov_SimulationImpact       = 0,
	Molotov_SimulationProjectile   = 1,
	Molotov_SimulationFragment     = 2,
	Molotov_MAX                    = 3
};


// Enum TslGame.EHitCheckType
enum class EHitCheckType
{
	HitCheck_Once                  = 0,
	HitCheck_Multi                 = 1,
	HitCheck_MAX                   = 2
};


// Enum TslGame.EThrowableState
enum class EThrowableState
{
	Idle                           = 0,
	PinOff                         = 1,
	Ready                          = 2,
	Throw                          = 3,
	Destroy                        = 4,
	EThrowableState_MAX            = 5
};


// Enum TslGame.EProjectileExplosionStartType
enum class EProjectileExplosionStartType
{
	NotStart                       = 0,
	Impact                         = 1,
	Delay                          = 2,
	ImpactOrDelay                  = 3,
	EProjectileExplosionStartType_MAX = 4
};


// Enum TslGame.EVivoxResponseState
enum class EVivoxResponseState
{
	EVivoxResponseState__NotRequested = 0,
	EVivoxResponseState__Requested = 1,
	EVivoxResponseState__Fail      = 2,
	EVivoxResponseState__Success   = 3,
	EVivoxResponseState__EVivoxResponseState_MAX = 4
};


// Enum TslGame.EVivoxChannelType
enum class EVivoxChannelType
{
	EVivoxChannelType__None        = 0,
	EVivoxChannelType__All         = 1,
	EVivoxChannelType__GlobalOnly  = 2,
	EVivoxChannelType__TeamOnly    = 3,
	EVivoxChannelType__EVivoxChannelType_MAX = 4
};


// Enum TslGame.EVivoxChannelJoinState
enum class EVivoxChannelJoinState
{
	EVivoxChannelJoinState__NotJoined = 0,
	EVivoxChannelJoinState__Joining = 1,
	EVivoxChannelJoinState__Joined = 2,
	EVivoxChannelJoinState__EVivoxChannelJoinState_MAX = 3
};


// Enum TslGame.EVivoxLoginState
enum class EVivoxLoginState
{
	EVivoxLoginState__NotLoggedin  = 0,
	EVivoxLoginState__Loggingin    = 1,
	EVivoxLoginState__Loggedin     = 2,
	EVivoxLoginState__EVivoxLoginState_MAX = 3
};


// Enum TslGame.EVivoxConnectionState
enum class EVivoxConnectionState
{
	EVivoxConnectionState__NotConnected = 0,
	EVivoxConnectionState__Connecting = 1,
	EVivoxConnectionState__Connected = 2,
	EVivoxConnectionState__EVivoxConnectionState_MAX = 3
};



//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TslGame.TslPopupInterface
// 0x0000 (0x0028 - 0x0028)
class UTslPopupInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPopupInterface");
		return ptr;
	}


	void SetPopup(TEnumAsByte<enum class EPopupStyle> PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate);
};


// Class TslGame.ActionInputEventHolder
// 0x0028 (0x0050 - 0x0028)
class UActionInputEventHolder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                              		// 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ActionInputEventHolder");
		return ptr;
	}

};


// Class TslGame.TslBaseHUD
// 0x0088 (0x04F8 - 0x0470)
class ATslBaseHUD : public AHUD
{
public:
	class UClass*                                      MainUMGHudClass;                                  		// 0x0470(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0478(0x0008) MISSED OFFSET
	TArray<class UActionInputEventHolder*>             ActionInputEventHolderArray;                      		// 0x0480(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TMap<struct FString, struct FTslWidgetState>       WidgetStateMap;                                   		// 0x0490(0x0050) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FString>                             UseMouseWidgetStack;                              		// 0x04E0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	class UUserWidget*                                 MainUMGHud;                                       		// 0x04F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBaseHUD");
		return ptr;
	}


	void WidgetToggle(const struct FString& WidgetName);
	void WidgetShow(const struct FString& WidgetName, TEnumAsByte<enum class EWidgetShowType> ShowType, class UObject* OptionalParam);
	void WidgetCreate(const struct FString& WidgetName, const struct FTslWidgetConfig& Config);
	void UnbindActionKeyDelegateEvent(const struct FName& ActionName, TEnumAsByte<enum class EInputEvent> InputEvent);
	void ShowPopupDialog(const struct FString& PopupWidgetName, TEnumAsByte<enum class EPopupStyle> PopupStyle, const struct FText& Message, const struct FScriptDelegate& PressedDelegate);
	bool IsWidgetShow(const struct FString& WidgetName);
	bool HideWidgetByEscape();
	void HidePopupDialog(const struct FString& PopupWidgetName);
	class UUserWidget* GetWidget(const struct FString& WidgetName);
	class UUserWidget* GetMainUMGHud();
	void BindActionKeyDelegateEvent(const struct FName& ActionName, TEnumAsByte<enum class EInputEvent> InputEvent, const struct FScriptDelegate& ActionKeyDelegate);
};


// Class TslGame.AirborneEjectionArea
// 0x0010 (0x0398 - 0x0388)
class AAirborneEjectionArea : public AActor
{
public:
	class USphereComponent*                            SphereComponent;                                  		// 0x0388(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Radius;                                           		// 0x0390(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AirborneEjectionArea");
		return ptr;
	}

};


// Class TslGame.AnimDB
// 0x0100 (0x0128 - 0x0028)
class UAnimDB : public UDataAsset
{
public:
	struct FAnimInfo                                   Stand_Info;                                       		// 0x0028(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FAnimInfo                                   Crouch_Info;                                      		// 0x0078(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FAnimInfo                                   Prone_Info;                                       		// 0x00C8(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BlendSpaceSpeed_Walk;                             		// 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BlendSpaceSpeed_Run;                              		// 0x011C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BlendSpaceSpeed_Sprint;                           		// 0x0120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AnimDB");
		return ptr;
	}


	class UBlendSpace* GetBlendSpace(TEnumAsByte<enum class EAnimStanceType> AnimStance);
	float GetAnimSpeed(TEnumAsByte<enum class EAnimStanceType> AnimStance, float Direction, float InSpeed, float* PlayRate, float* SprintAlpha);
};


// Class TslGame.AnimNotify_CharacterAnimationNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_CharacterAnimationNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                       		// 0x0038(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AnimNotify_CharacterAnimationNotify");
		return ptr;
	}

};


// Class TslGame.AnimNotify_UnarmedAttack
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_UnarmedAttack : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                       		// 0x0038(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AnimNotify_UnarmedAttack");
		return ptr;
	}

};


// Class TslGame.AnimNotify_WeaponAnimationNotify
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_WeaponAnimationNotify : public UAnimNotify
{
public:
	struct FName                                       NotifyName;                                       		// 0x0038(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AnimNotify_WeaponAnimationNotify");
		return ptr;
	}

};


// Class TslGame.AsyncStaticMeshComponent
// 0x0070 (0x0850 - 0x07E0)
class UAsyncStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x07E0(0x0008) MISSED OFFSET
	TAssetPtr<class UStaticMesh>                       StaticMeshAsset;                                  		// 0x07E8(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0808(0x0008) MISSED OFFSET
	class UStaticMesh*                                 ErrorStaticMesh;                                  		// 0x0810(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ClientCollisionProfileNameOverride;               		// 0x0818(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UStaticMesh>                       PendingStaticMeshAsset;                           		// 0x0820(0x0020) (CPF_Transient)
	unsigned char                                      UnknownData02[0x10];                              		// 0x0840(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AsyncStaticMeshComponent");
		return ptr;
	}


	void SetStaticMeshAsset(TAssetPtr<class UStaticMesh> Asset);
	bool IsSameMesh(TAssetPtr<class UStaticMesh> Asset);
	TAssetPtr<class UStaticMesh> GetStaticMeshAsset();
	void ClearStaticMeshAsset();
};


// Class TslGame.BTDecorator_HasLoSTo
// 0x0028 (0x0090 - 0x0068)
class UBTDecorator_HasLoSTo : public UBTDecorator
{
public:
	struct FBlackboardKeySelector                      EnemyKey;                                         		// 0x0068(0x0028) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BTDecorator_HasLoSTo");
		return ptr;
	}

};


// Class TslGame.BTTask_FindPointNearEnemy
// 0x0000 (0x0098 - 0x0098)
class UBTTask_FindPointNearEnemy : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BTTask_FindPointNearEnemy");
		return ptr;
	}

};


// Class TslGame.TslBuff
// 0x0060 (0x03E8 - 0x0388)
class ATslBuff : public AActor
{
public:
	struct FName                                       OverlapId;                                        		// 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class EBuffOverlapSolveMethod>    OverlapSolveMethod;                               		// 0x0390(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0391(0x0003) MISSED OFFSET
	float                                              BuffTickInterval;                                 		// 0x0394(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BuffTickFirstDelay;                               		// 0x0398(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BuffDuration;                                     		// 0x039C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Infinite : 1;                                     		// 0x03A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                               		// 0x03A1(0x0007) MISSED OFFSET
	struct FName                                       AttachSocket;                                     		// 0x03A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      AttachServerPaticleClass;                         		// 0x03B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsDebuff : 1;                                     		// 0x03B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                               		// 0x03B9(0x0007) MISSED OFFSET
	class UBuffComponet*                               OwnerBuffComponent;                               		// 0x03C0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                              		// 0x03C8(0x0010) MISSED OFFSET
	class ATslServerParticle*                          AttachedServerPaticle;                            		// 0x03D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                               		// 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBuff");
		return ptr;
	}


	void TickBuff();
	void StopBuffBlueprint(bool bCanceled);
	void StartBuffBlueprint();
	class APawn* GetOwnerPawn();
	struct FAttackId GetAttackId();
	bool CanApplyBuff();
};


// Class TslGame.BuffComponet
// 0x0010 (0x0100 - 0x00F0)
class UBuffComponet : public UActorComponent
{
public:
	TArray<class ATslBuff*>                            Buffs;                                            		// 0x00F0(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BuffComponet");
		return ptr;
	}


	void RemoveBuff(const struct FName& OverlapId);
	class ATslBuff* FindBuffWithOverlapId(const struct FName& BuffOverlapId);
	class ATslBuff* AddBuff(class UClass* TslBuffClass);
};


// Class TslGame.CameraSettings
// 0x0068 (0x0090 - 0x0028)
class UCameraSettings : public UObject
{
public:
	float                                              CameraPitchMinStand;                              		// 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraPitchMaxStand;                              		// 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMinStand;                                		// 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMaxStand;                                		// 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraPitchMinProne;                              		// 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraPitchMaxProne;                              		// 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMinProne;                                		// 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMaxProne;                                		// 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraPitchMinInVehicle;                          		// 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraPitchMaxInVehicle;                          		// 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMinInVehicle;                            		// 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CameraYawMaxInVehicle;                            		// 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FName                                       HeadBoneName;                                     		// 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FString>                             HideMaterialsWhenCameraIsInHead;                  		// 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             HideMaterialsOnScopeMode;                         		// 0x0070(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             HideMaterialsOnHighScopeMode;                     		// 0x0080(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CameraSettings");
		return ptr;
	}

};


// Class TslGame.CastableInterface
// 0x0000 (0x0028 - 0x0028)
class UCastableInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CastableInterface");
		return ptr;
	}


	bool IsCastable(class ATslCharacter* Character);
	struct FText GetCastFailMessage(class ATslCharacter* Character);
	struct FCastConfig GetCastConfig();
};


// Class TslGame.CastComponent
// 0x0028 (0x0118 - 0x00F0)
class UCastComponent : public UActorComponent
{
public:
	struct FScriptDelegate                             OnFinishCast;                                     		// 0x00F0(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptDelegate                             OnCancelCast;                                     		// 0x0100(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0110(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CastComponent");
		return ptr;
	}


	bool StartCast(const TScriptInterface<class UCastableInterface>& CastableInterface);
	float GetTotalCastTime();
	float GetElapsedCastTime();
	TEnumAsByte<enum class ECastPriority> GetCastPriority();
	class UObject* GetCastObject();
	struct FText GetCastName();
	TEnumAsByte<enum class ECastLevel> GetCastLevel();
	bool CancelCast();
};


// Class TslGame.CharacterBreathComponent
// 0x0090 (0x0180 - 0x00F0)
class UCharacterBreathComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x00F0(0x0010) MISSED OFFSET
	float                                              Breath;                                           		// 0x0100(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              BreathMax;                                        		// 0x0104(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     BreathPointOffsetAtStand;                         		// 0x0108(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     BreathPointOffsetAtCrouch;                        		// 0x0114(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     BreathPointOffsetAtProne;                         		// 0x0120(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x012C(0x0004) MISSED OFFSET
	class UClass*                                      RestorationBuff;                                  		// 0x0130(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ApneaDebuff;                                      		// 0x0138(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      HoldBreathDebuff;                                 		// 0x0140(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumBreathStartHoldingBreath;                  		// 0x0148(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                               		// 0x014C(0x0004) MISSED OFFSET
	class UClass*                                      SprintDebuff;                                     		// 0x0150(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumBreathStartSprinting;                      		// 0x0158(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x24];                              		// 0x015C(0x0024) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CharacterBreathComponent");
		return ptr;
	}


	void OnRep_Breath(float LastBreath);
	bool IsInApnea();
	bool IsConsuming();
	float GetBreathRatio();
	float GetBreathMax();
	float GetBreath();
	bool CanStartSprinting();
	bool CanStartHoldingBreath();
	void AddBreath(float Value);
};


// Class TslGame.CharacterStudio
// 0x0078 (0x0400 - 0x0388)
class ACharacterStudio : public AActor
{
public:
	class USpringArmComponent*                         SpringArmComponent;                               		// 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCameraComponent*                            CameraComponent;                                  		// 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent;                            		// 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTextureRenderTarget2D*                      TextureTarget;                                    		// 0x03A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxViewDistance;                                  		// 0x03A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x03AC(0x0004) MISSED OFFSET
	class UClass*                                      MaleCharacterProxyClass;                          		// 0x03B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FemaleCharacterProxyClass;                        		// 0x03B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  CharacterInitialTransform;                        		// 0x03C0(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslCharacterProxy*                          CharacterProxy;                                   		// 0x03F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class USceneComponent*                             CharacterRotationPivot;                           		// 0x03F8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CharacterStudio");
		return ptr;
	}


	void Update();
	void SetCharacter(class ATslCharacter* Character);
	bool IsCharacterValid();
	void AddYaw(float Yaw);
};


// Class TslGame.CoherentCommonBinder
// 0x0078 (0x00A0 - 0x0028)
class UCoherentCommonBinder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                              		// 0x0028(0x0060) MISSED OFFSET
	struct FString                                     DefaultLobbyUrl;                                  		// 0x0088(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CoherentCommonBinder");
		return ptr;
	}


	void BindUI();
};


// Class TslGame.CoherentWidgetBinder
// 0x0000 (0x00A0 - 0x00A0)
class UCoherentWidgetBinder : public UCoherentCommonBinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CoherentWidgetBinder");
		return ptr;
	}

};


// Class TslGame.LobbyCoherentWidgetBinder
// 0x0000 (0x00A0 - 0x00A0)
class ULobbyCoherentWidgetBinder : public UCoherentWidgetBinder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyCoherentWidgetBinder");
		return ptr;
	}

};


// Class TslGame.DeployedItem
// 0x0018 (0x03A0 - 0x0388)
class ADeployedItem : public AActor
{
public:
	class UClass*                                      ItemType;                                         		// 0x0388(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StackCount;                                       		// 0x0390(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0394(0x0004) MISSED OFFSET
	class USceneComponent*                             SceneComponent;                                   		// 0x0398(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DeployedItem");
		return ptr;
	}

};


// Class TslGame.SubActor
// 0x0008 (0x0390 - 0x0388)
class ASubActor : public AActor
{
public:
	class ATslCharacter*                               NetOwnerCharacter;                                		// 0x0388(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SubActor");
		return ptr;
	}

};


// Class TslGame.SlotInterface
// 0x0000 (0x0028 - 0x0028)
class USlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SlotInterface");
		return ptr;
	}


	bool IsWeapon();
	bool IsStackable();
	bool IsPackageItem();
	bool IsEquipable();
	bool IsCastableItem();
	bool IsAttachment();
	float GetUnitSpace();
	class UTexture* GetToolTipIconTexture();
	float GetToolTipIconSizeRatio();
	int GetStackCountMax();
	int GetStackCount();
	float GetSpace();
	int GetSortPriority();
	struct FText GetSlotName();
	struct FText GetSlotDetailedName();
	struct FText GetSlotDescription();
	struct FText GetSlotCategory();
	class UTexture* GetIconTexture();
	float GetIconSizeRatio();
	class UAkAudioEvent* GetDropSound();
};


// Class TslGame.SlotContainerInterface
// 0x0000 (0x0028 - 0x0028)
class USlotContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SlotContainerInterface");
		return ptr;
	}


	void ShowSlotContextMenu(const TScriptInterface<class USlotInterface>& Slot);
	bool IsEnableAction(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer, const struct FString& Options);
	void HideSlotContextMenu();
	TScriptInterface<class USlotInterface> GetSlotContext();
	class AActor* GetSlotContainerOwner();
	struct FName GetSlotContainerName();
	struct FName GetDefaultActionName(const TScriptInterface<class USlotInterface>& Slot);
	TArray<struct FName> GetAvailableSlotActions(const TScriptInterface<class USlotInterface>& Slot);
	TArray<TScriptInterface<class USlotInterface>> GetAllSlots();
	struct FName GetActionName(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer, const struct FString& Options);
	void DropSlotOnOtherContainer(const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer, const struct FString& Options);
	void DoSlotActionDefault(const TScriptInterface<class USlotInterface>& Slot);
	void DoSlotAction(const struct FName& ActionName, const struct FString& Options);
	void DoActionWithSlot(const TScriptInterface<class USlotInterface>& Slot, const struct FName& ActionName, const struct FString& Options);
};


// Class TslGame.ItemSlotContainer
// 0x0030 (0x03C0 - 0x0390)
class AItemSlotContainer : public ASubActor
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x0390(0x0008) MISSED OFFSET
	struct FScriptDelegate                             OnCreateAndShowContextMenuWidget;                 		// 0x0398(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptDelegate                             OnDestroyContextMenuWidget;                       		// 0x03A8(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x8];                               		// 0x03B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemSlotContainer");
		return ptr;
	}

};


// Class TslGame.ItemExplorerInterface
// 0x0000 (0x0028 - 0x0028)
class UItemExplorerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemExplorerInterface");
		return ptr;
	}


	void UpdateItemList();
	TArray<TScriptInterface<class USlotInterface>> GetExplorableItemSlotList();
};


// Class TslGame.ItemExplorer
// 0x0030 (0x03F0 - 0x03C0)
class AItemExplorer : public AItemSlotContainer
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x03C0(0x0008) MISSED OFFSET
	struct FScriptDelegate                             OnUpdateItemList;                                 		// 0x03C8(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptDelegate                             OnClearItemList;                                  		// 0x03D8(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData01[0x8];                               		// 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemExplorer");
		return ptr;
	}

};


// Class TslGame.ExplorableItemInterface
// 0x0000 (0x0028 - 0x0028)
class UExplorableItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ExplorableItemInterface");
		return ptr;
	}


	bool IsValidExplorableItem();
	struct FName GetInteractiveActionName();
	float GetExplorationDistance();
};


// Class TslGame.Item
// 0x0160 (0x0188 - 0x0028)
class UItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x0028(0x0010) MISSED OFFSET
	unsigned char                                      bStackable : 1;                                   		// 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      bUsable : 1;                                      		// 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      bDisableSpawnInGame : 1;                          		// 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0039(0x0003) MISSED OFFSET
	int                                                StackCount;                                       		// 0x003C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ItemName;                                         		// 0x0040(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       ItemCategory;                                     		// 0x0058(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       ItemDetailedName;                                 		// 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       ItemDescription;                                  		// 0x0088(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              ItemMaxInteractableDistance;                      		// 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                StackCountMax;                                    		// 0x00A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpacePerItem;                                     		// 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                               		// 0x00AC(0x0004) MISSED OFFSET
	TAssetPtr<class UStaticMesh>                       DroppedMesh;                                      		// 0x00B0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              DroppedMeshScale;                                 		// 0x00D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                               		// 0x00D4(0x0004) MISSED OFFSET
	TAssetPtr<class UTexture>                          Icon;                                             		// 0x00D8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TAssetPtr<class UTexture>                          ToolTipIcon;                                      		// 0x00F8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	float                                              IconSizeRatio;                                    		// 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ToolTipIconSizeRatio;                             		// 0x011C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               DropSoundAk;                                      		// 0x0120(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               PickUpSoundAk;                                    		// 0x0128(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               InventoryPutSoundAk;                              		// 0x0130(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SortPriority;                                     		// 0x0138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                LobbyItemID;                                      		// 0x013C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLobbyItemDesc                              LobbyItemDesc;                                    		// 0x0140(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TEnumAsByte<enum class EItemCategory>              Category;                                         		// 0x0170(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                               		// 0x0171(0x0007) MISSED OFFSET
	struct FName                                       SubCategory;                                      		// 0x0178(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsToy : 1;                                       		// 0x0180(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.Item");
		return ptr;
	}


	bool UseBy(class ATslCharacter* Character);
	bool PickUpBy(class ATslCharacter* Character, const struct FName& TargetContainer, const struct FString& Options);
	bool IsWeapon();
	bool IsToy();
	bool IsPackageItem();
	bool IsEquipable();
	bool IsCastableItem();
	bool IsAttachment();
	class UTexture* GetIconTexture();
};


// Class TslGame.ItemPackage
// 0x00F8 (0x04E8 - 0x03F0)
class AItemPackage : public AItemExplorer
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x03F0(0x0010) MISSED OFFSET
	struct FText                                       PackageName;                                      		// 0x0400(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FText                                       PackageCategory;                                  		// 0x0418(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FText                                       PackageDetailedName;                              		// 0x0430(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FText                                       PackageDescription;                               		// 0x0448(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	class UTexture*                                    PackageIcon;                                      		// 0x0460(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PackageIconSizeRatio;                             		// 0x0468(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x046C(0x0004) MISSED OFFSET
	class UTexture*                                    PackageToolTipIcon;                               		// 0x0470(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PackageToolTipIconSizeRatio;                      		// 0x0478(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                               		// 0x047C(0x0004) MISSED OFFSET
	TAssetPtr<class UStaticMesh>                       PackageMesh;                                      		// 0x0480(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	class UBoxComponent*                               BoxComponent;                                     		// 0x04A0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UOnceInteractionComponent*                   InteractionComponent;                             		// 0x04A8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      DestroyByEmptyItem : 1;                           		// 0x04B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                               		// 0x04B1(0x0007) MISSED OFFSET
	TArray<class UItem*>                               Items;                                            		// 0x04B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst)
	struct FString                                     CreatorName;                                      		// 0x04C8(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor)
	int                                                SortPriority;                                     		// 0x04D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                               		// 0x04DC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemPackage");
		return ptr;
	}


	void Items_RepNotify();
	bool IsOpenedBy(class ATslCharacter* Character);
	void ClientOnInteractBy(class ATslCharacter* OtherCharacter);
};


// Class TslGame.DeployedItemPackage
// 0x0018 (0x03A0 - 0x0388)
class ADeployedItemPackage : public AActor
{
public:
	class UClass*                                      ItemPackageType;                                  		// 0x0388(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FPackagedItemInfo>                   ItemInfos;                                        		// 0x0390(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DeployedItemPackage");
		return ptr;
	}

};


// Class TslGame.DroppedItemInterface
// 0x0000 (0x0028 - 0x0028)
class UDroppedItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItemInterface");
		return ptr;
	}


	class UItem* GetDroppedItem();
};


// Class TslGame.DroppedItem
// 0x0020 (0x03A8 - 0x0388)
class ADroppedItem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                              		// 0x0388(0x0018) MISSED OFFSET
	class UItem*                                       Item;                                             		// 0x03A0(0x0008) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItem");
		return ptr;
	}


	void OnInteractBy(class ATslCharacter* OtherCharacter);
	void Item_RepNotify();
};


// Class TslGame.DroppedItemGridManager
// 0x0058 (0x03E0 - 0x0388)
class ADroppedItemGridManager : public AInfo
{
public:
	float                                              GridSize;                                         		// 0x0388(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x038C(0x0004) MISSED OFFSET
	TMap<struct FString, class ADroppedItemGroup*>     DroppedItemGroupMap;                              		// 0x0390(0x0050) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItemGridManager");
		return ptr;
	}

};


// Class TslGame.DroppedItemGroup
// 0x0000 (0x0388 - 0x0388)
class ADroppedItemGroup : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItemGroup");
		return ptr;
	}


	bool AddItem(class UItem* NewItem, const struct FVector& NewWorldLocation, const struct FRotator& NewWorldRotation);
};


// Class TslGame.ExportableDataAsset
// 0x0020 (0x0048 - 0x0028)
class UExportableDataAsset : public UDataAsset
{
public:
	struct FDirectoryPath                              JsonSaveDirectory;                                		// 0x0028(0x0010) (CPF_Edit)
	struct FString                                     JsonSaveFileName;                                 		// 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ExportableDataAsset");
		return ptr;
	}

};


// Class TslGame.LobbyCustomizableData
// 0x0020 (0x0068 - 0x0048)
class ULobbyCustomizableData : public UExportableDataAsset
{
public:
	TArray<struct FLobbyFaceElement>                   Faces;                                            		// 0x0048(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FLobbyHairElement>                   Hairs;                                            		// 0x0058(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyCustomizableData");
		return ptr;
	}

};


// Class TslGame.LobbyItemExporter
// 0x0000 (0x0048 - 0x0048)
class ULobbyItemExporter : public UExportableDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyItemExporter");
		return ptr;
	}

};


// Class TslGame.FlashBangCaptureActor
// 0x0030 (0x03B8 - 0x0388)
class AFlashBangCaptureActor : public AActor
{
public:
	class USceneComponent*                             SceneRootComponent;                               		// 0x0388(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCapture;                                     		// 0x0390(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class APawn*                                       PlayerPawnReference;                              		// 0x0398(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	class UTextureRenderTarget2D*                      CaptureTexture;                                   		// 0x03A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                              		// 0x03A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.FlashBangCaptureActor");
		return ptr;
	}


	void CaptureScreen();
	void CaptureINIT(bool bDoDelay, float CaptureDelay, class APawn* PlayerRef, class UTextureRenderTarget2D* RenderTexture, const struct FPostProcessSettings& PP_Settings, bool bHidePawn);
};


// Class TslGame.GameStateListenerComponent
// 0x0020 (0x0110 - 0x00F0)
class UGameStateListenerComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnMatchStateChange;                               		// 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameModeEvent;                                  		// 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.GameStateListenerComponent");
		return ptr;
	}

};


// Class TslGame.GeneralItemSpawner
// 0x0000 (0x0028 - 0x0028)
class UGeneralItemSpawner : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.GeneralItemSpawner");
		return ptr;
	}


	TArray<class UItem*> CreateItems();
	TArray<struct FItemInitiator> CreateItemInitiators();
};


// Class TslGame.TableGeneralItemSpawner
// 0x00C0 (0x00E8 - 0x0028)
class UTableGeneralItemSpawner : public UGeneralItemSpawner
{
public:
	class UDataTable*                                  RawItemSpawnDataTable;                            		// 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UDataTable*                                  RawItemSpawnTogetherDataTable;                    		// 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FGeneralItemSpawnProb>               SpawnProbArray;                                   		// 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0xA0];                              		// 0x0048(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TableGeneralItemSpawner");
		return ptr;
	}

};


// Class TslGame.HackReporterComponent
// 0x0018 (0x0108 - 0x00F0)
class UHackReporterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                              		// 0x00F0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.HackReporterComponent");
		return ptr;
	}

};


// Class TslGame.InteractionComponent
// 0x0100 (0x01F0 - 0x00F0)
class UInteractionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x00F0(0x0008) MISSED OFFSET
	float                                              MaxInteractableDistance;                          		// 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x00FC(0x0004) MISSED OFFSET
	struct FText                                       InteractionVerb;                                  		// 0x0100(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       InteractiveObjectName;                            		// 0x0118(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FCastConfig                                 CastConfig;                                       		// 0x0130(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      bUseTraceCheck : 1;                               		// 0x0160(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                               		// 0x0161(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInteractBy;                                     		// 0x0168(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientOnInteractBy;                               		// 0x0178(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData03[0x68];                              		// 0x0188(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.InteractionComponent");
		return ptr;
	}


	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.DoublePhaseInteractionComponent
// 0x00D0 (0x02C0 - 0x01F0)
class UDoublePhaseInteractionComponent : public UInteractionComponent
{
public:
	struct FText                                       FirstInteractionVerb;                             		// 0x01F0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       FirstInteractiveObjectName;                       		// 0x0208(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       SecondInteractionVerb;                            		// 0x0220(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       SecondInteractiveObjectName;                      		// 0x0238(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnSecondInteractBy;                               		// 0x0250(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientOnSecondInteractBy;                         		// 0x0260(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x50];                              		// 0x0270(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DoublePhaseInteractionComponent");
		return ptr;
	}

};


// Class TslGame.OnceInteractionComponent
// 0x0010 (0x0200 - 0x01F0)
class UOnceInteractionComponent : public UInteractionComponent
{
public:
	TArray<struct FName>                               CharacterHistory;                                 		// 0x01F0(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.OnceInteractionComponent");
		return ptr;
	}

};


// Class TslGame.SeperatedInteractionComponent
// 0x0020 (0x0210 - 0x01F0)
class USeperatedInteractionComponent : public UInteractionComponent
{
public:
	struct FComponentReference                         LinkedComponentReference;                         		// 0x01F0(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SeperatedInteractionComponent");
		return ptr;
	}


	void SetInteractiveObjectName(const struct FText& NewInteractiveObjectName);
	void SetInteractionVerb(const struct FText& NewInteractionVerb);
};


// Class TslGame.DroppedItemInteractionComponent
// 0x0040 (0x0250 - 0x0210)
class UDroppedItemInteractionComponent : public USeperatedInteractionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x0210(0x0010) MISSED OFFSET
	class UItem*                                       Item;                                             		// 0x0220(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0228(0x0008) MISSED OFFSET
	struct FVector                                     ItemRelativeLocation;                             		// 0x0230(0x000C) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    ItemRelativeRotation;                             		// 0x023C(0x000C) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                               		// 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.DroppedItemInteractionComponent");
		return ptr;
	}


	void OnRep_Item();
};


// Class TslGame.InteractionHubComponent
// 0x0068 (0x0158 - 0x00F0)
class UInteractionHubComponent : public UActorComponent
{
public:
	struct FInteractionComponentConfig                 InteractionComponentConfig;                       		// 0x00F0(0x0068) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.InteractionHubComponent");
		return ptr;
	}


	class USeperatedInteractionComponent* GetInteractionComponent(class UPrimitiveComponent* TargetLinkedComponent);
	class USeperatedInteractionComponent* CreateInteractionComponent(class UClass* TargetClass, class UPrimitiveComponent* LinkedComponent);
};


// Class TslGame.InteractorComponent
// 0x0000 (0x00F0 - 0x00F0)
class UInteractorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.InteractorComponent");
		return ptr;
	}

};


// Class TslGame.AmmoItem
// 0x0010 (0x0198 - 0x0188)
class UAmmoItem : public UItem
{
public:
	class UTexture*                                    AmmoIcon;                                         		// 0x0188(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AmmoIconRatio;                                    		// 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AmmoItem");
		return ptr;
	}

};


// Class TslGame.AttachableItem
// 0x00D8 (0x0260 - 0x0188)
class UAttachableItem : public UItem
{
public:
	struct FWeaponAttachmentData                       AttachmentData;                                   		// 0x0188(0x0098) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TAssetPtr<class UStaticMesh>                       AttachmentMeshAsset;                              		// 0x0220(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	TArray<struct FWeaponAttachmentWeaponTagData>      AttachmentWeaponTagData;                          		// 0x0240(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      EquipOnPickUp : 1;                                		// 0x0250(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0251(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               AttachedSoundAk;                                  		// 0x0258(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AttachableItem");
		return ptr;
	}


	TEnumAsByte<enum class EWeaponAttachmentSlotID> GetAttachmentSlotID(const struct FName& WeaponTag);
	struct FWeaponAttachmentData GetAttachmentData(const struct FName& WeaponTag);
};


// Class TslGame.CastableItem
// 0x0038 (0x01C0 - 0x0188)
class UCastableItem : public UItem
{
public:
	struct FCastConfig                                 CastConfig;                                       		// 0x0188(0x0030) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bCanUseInWater : 1;                               		// 0x01B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CastableItem");
		return ptr;
	}

};


// Class TslGame.EquipableItem
// 0x0090 (0x0218 - 0x0188)
class UEquipableItem : public UItem
{
public:
	TEnumAsByte<enum class EEquipSlotID>               EquipSlotID;                                      		// 0x0188(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0189(0x0003) MISSED OFFSET
	float                                              SpaceExtension;                                   		// 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamageReductionRate;                              		// 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DurabilityMax;                                    		// 0x0194(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      DestroyByDurability : 1;                          		// 0x0198(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0199(0x0003) MISSED OFFSET
	float                                              Durability;                                       		// 0x019C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EDurabilityConsumeType>     DurabilityConsumeType;                            		// 0x01A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                               		// 0x01A1(0x0007) MISSED OFFSET
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForMale;              		// 0x01A8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FCustomizableObjectIdentifier               CustomizableObjectIdentifierForFemale;            		// 0x01D8(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UAkAudioEvent*                               EquipedSoundAk;                                   		// 0x0208(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class EEquipableItemSoundGroup>   SoundGroup;                                       		// 0x0210(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class EEquipableItemSoundType>    SoundType;                                        		// 0x0211(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsUnequipable : 1;                               		// 0x0212(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.EquipableItem");
		return ptr;
	}


	void UnequipBy(class ATslCharacter* Character);
	bool EquipBy(class ATslCharacter* Character, const struct FEquipPosition& Position);
	bool CanEquipTo(class ATslCharacter* Character);
};


// Class TslGame.CustomEquipableItem
// 0x00F8 (0x0310 - 0x0218)
class UCustomEquipableItem : public UEquipableItem
{
public:
	int                                                ItemLevel;                                        		// 0x0218(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x021C(0x0004) MISSED OFFSET
	struct FTransform                                  SlotOffset_Primary;                               		// 0x0220(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SlotOffset_Secondary;                             		// 0x0250(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SlotOffset_SideArm;                               		// 0x0280(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SlotOffset_Melee;                                 		// 0x02B0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  SlotOffset_Thrown;                                		// 0x02E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CustomEquipableItem");
		return ptr;
	}


	struct FTransform GetOffset_Thrown();
	struct FTransform GetOffset_SideArm();
	struct FTransform GetOffset_Secondary();
	struct FTransform GetOffset_Primary();
	struct FTransform GetOffset_Melee();
	int GetItemLevel();
};


// Class TslGame.ParachuteItem
// 0x0008 (0x0220 - 0x0218)
class UParachuteItem : public UEquipableItem
{
public:
	class UClass*                                      ParachuteType;                                    		// 0x0218(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParachuteItem");
		return ptr;
	}

};


// Class TslGame.ThrowableItem
// 0x0018 (0x0230 - 0x0218)
class UThrowableItem : public UEquipableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x0218(0x0008) MISSED OFFSET
	class UClass*                                      WeaponType;                                       		// 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslWeapon*                                  EquippedWeapon;                                   		// 0x0228(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThrowableItem");
		return ptr;
	}


	class ATslWeapon* GetEquippedWeapon();
	class ATslWeapon* GetDefaultWeaponObject();
};


// Class TslGame.TslWeapon
// 0x03F0 (0x0778 - 0x0388)
class ATslWeapon : public AActor
{
public:
	class UTexture*                                    WeaponIcon;                                       		// 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponIconRatio;                                  		// 0x0390(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0394(0x0004) MISSED OFFSET
	struct FCanvasIcon                                 PrimaryIcon;                                      		// 0x0398(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCanvasIcon                                 SecondaryIcon;                                    		// 0x03B0(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCanvasIcon                                 PrimaryClipIcon;                                  		// 0x03C8(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCanvasIcon                                 SecondaryClipIcon;                                		// 0x03E0(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              AmmoIconsCount;                                   		// 0x03F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                PrimaryClipIconOffset;                            		// 0x03FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                SecondaryClipIconOffset;                          		// 0x0400(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x0404(0x0004) MISSED OFFSET
	struct FCanvasIcon                                 Crosshair[0x5];                                   		// 0x0408(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FCanvasIcon                                 AimingCrosshair[0x5];                             		// 0x0480(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UseLaserDot : 1;                                  		// 0x04F8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UseCustomCrosshair : 1;                           		// 0x04F9(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UseCustomAimingCrosshair : 1;                     		// 0x04FA(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bHideCrosshairWhileNotAiming : 1;                 		// 0x04FB(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                               		// 0x04FC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnUpdatedAttachment;                              		// 0x0500(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class ATslCharacter*                               MyPawn;                                           		// 0x0510(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FWeaponData                                 WeaponConfig;                                     		// 0x0518(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	TEnumAsByte<enum class EWeaponHand>                WeaponHand;                                       		// 0x05A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                               		// 0x05A9(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      Mesh3P;                                           		// 0x05B0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             RootScene;                                        		// 0x05B8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             HandIK_Left;                                      		// 0x05C0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneComponent*                             HandIK_Right;                                     		// 0x05C8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                               		// 0x05D0(0x0001) MISSED OFFSET
	TEnumAsByte<enum class EAttachmentCalculateType>   AttachmentAniRateCalculateType;                   		// 0x05D1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAttachmentCalculateType>   AttachmentRecoilPatternScaleCalculateType;        		// 0x05D2(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                               		// 0x05D3(0x0005) MISSED OFFSET
	TArray<struct FWeaponAttachmentPositionData>       AttachmentPositionData;                           		// 0x05D8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FWeaponAttachmentAssetData>          DefaultAttachedItemAssets;                        		// 0x05E8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FWeaponAttachmentData>               AttachedItemData;                                 		// 0x05F8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FWeaponAttachmentAssetDataReplicate> AttachedItemAssets;                               		// 0x0608(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData06[0x20];                              		// 0x0618(0x0020) MISSED OFFSET
	TMap<TEnumAsByte<enum class EWeaponAttachmentSlotID>, class UAsyncStaticMeshComponent*> AttachedStaticComponentMap;                       		// 0x0638(0x0050) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient)
	class UAkComponent*                                AkComponent;                                      		// 0x0688(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       MuzzleAttachPoint;                                		// 0x0690(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       FiringAttachPoint;                                		// 0x0698(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ScopingAttachPoint;                               		// 0x06A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             MuzzleFx;                                         		// 0x06A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ShellFxAttachPoint;                               		// 0x06B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ShellFxClass;                                     		// 0x06B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    MuzzlePSC;                                        		// 0x06C0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    MuzzlePSCSecondary;                               		// 0x06C8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UClass*                                      FireCameraShake;                                  		// 0x06D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        FireForceFeedback;                                		// 0x06D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FireSoundAk;                                      		// 0x06E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FireLoopSoundAk;                                  		// 0x06E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FireFinishSoundAk;                                		// 0x06F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               OutOfAmmoSoundAk;                                 		// 0x06F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ReloadSoundAk;                                    		// 0x0700(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               EquipSoundAk;                                     		// 0x0708(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAnimWeaponType>            AnimWeaponType;                                   		// 0x0710(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                               		// 0x0711(0x0007) MISSED OFFSET
	struct FWeaponBasicAnim                            WeaponAnim;                                       		// 0x0718(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FWeaponRollAnim                             ProneRollAnim;                                    		// 0x0730(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HipDuration;                                      		// 0x0740(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bLoopedMuzzleFX : 1;                              		// 0x0744(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bLoopedFireSound : 1;                             		// 0x0744(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData08[0x33];                              		// 0x0745(0x0033) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon");
		return ptr;
	}


	void Weapon_AttachShoulder();
	void Weapon_AttachHand();
	void UpdateAttachedItemClient(const struct FWeaponAttachmentData& NewAttachmentData, const struct FWeaponAttachmentData& PastAttachmentData);
	void SimulatePhysicalBodyHit(const struct FHitResult& Impact, const struct FVector& ShotDirection);
	void SetCurrentWeaponZero(float newZero);
	void ServerLogFireWeapon(const struct FAttackId& AttackId);
	void OnRep_MyPawn();
	void OnRep_AttachedItemData();
	void OnRep_AttachedItemAssets();
	void OnAnimationNotify(const struct FName& NotifyName);
	bool IsWeaponAttachedToShoulder();
	bool IsCustomSightAttached(TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID);
	float GetWeaponReadyDuration();
	class USkeletalMeshComponent* GetWeaponMesh();
	TEnumAsByte<enum class EWeaponGripLeftHand> GetWeaponGripTypeLeft();
	float GetWeaponEquipDuration();
	float GetWeaponDamage();
	struct FWeaponData GetWeaponConfig();
	TEnumAsByte<enum class EWeaponClass> GetWeaponClassEnum();
	struct FName GetWeaponAttachmentPoint(TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID, const struct FName& Tag);
	struct FWeaponAttachmentData GetWeaponAttachmentData(TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID);
	struct FWeaponAttachmentAssetDataReplicate GetWeaponAttachmentAsset(TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID);
	float GetWeaponAnimationKick();
	TEnumAsByte<enum class EThrownWeaponType> GetThrownType();
	struct FVector GetSwayModifier();
	float GetStanceSwayModifier(TEnumAsByte<enum class EAnimStance> Stance);
	class UAnimMontage* GetRecoilMontage();
	class ATslCharacter* GetPawnOwner();
	struct FVector GetLowerRailOffset();
	struct FText GetItemName();
	class USceneComponent* GetHandIK_Right();
	class USceneComponent* GetHandIK_Left();
	bool GetDoGripPose();
	float GetCurrentWeaponZero();
	TArray<class UAsyncStaticMeshComponent*> GetAttachedMesh();
	TEnumAsByte<enum class EAnimWeaponType> GetAnimWeaponType();
	TArray<struct FWeaponAttachmentData> GetAllWeaponAttachmentData();
	TArray<struct FWeaponAttachmentAssetDataReplicate> GetAllWeaponAttachmentAssets();
	void ClientOnUnArmed();
	void AttachWeaponToSlot(int SlotIndex);
	void AttachWeaponToMesh();
};


// Class TslGame.WeaponItem
// 0x0048 (0x0260 - 0x0218)
class UWeaponItem : public UEquipableItem
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x0218(0x0008) MISSED OFFSET
	class UClass*                                      WeaponType;                                       		// 0x0220(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AmmoCount;                                        		// 0x0228(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AmmoPerClip;                                      		// 0x022C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FWeaponAttachmentTagData>            AttachmentTagData;                                		// 0x0230(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FName                                       WeaponTag;                                        		// 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UAttachableItem*>                     AttachedItems;                                    		// 0x0248(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	class ATslWeapon*                                  EquippedWeapon;                                   		// 0x0258(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponItem");
		return ptr;
	}


	bool IsAttachable(class UAttachableItem* Item);
	bool HasAttachmentSlot(TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID);
	class ATslWeapon* GetEquippedWeapon();
	class ATslWeapon* GetDefaultWeaponObject();
	class UAttachableItem* GetAttachedItem(TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID);
	int GetAttachableItemCount();
	TArray<class UAttachableItem*> GetAllAttachedItems();
	class UAttachableItem* DetachItem(TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID);
	bool AttachItem(class UAttachableItem* Item);
};


// Class TslGame.RandomlyGeneratableItem
// 0x0050 (0x01D8 - 0x0188)
class URandomlyGeneratableItem : public UItem
{
public:
	struct FString                                     RandomExpression;                                 		// 0x0188(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bOpenByKey : 1;                                   		// 0x0198(0x0001) (CPF_Edit)
	unsigned char                                      bOpenByPoint : 1;                                 		// 0x0198(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0199(0x0007) MISSED OFFSET
	TAssetPtr<class UClass>                            OpenKeyItem;                                      		// 0x01A0(0x0020) (CPF_Edit)
	int                                                OpenKeyItemCount;                                 		// 0x01C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PointOpenPrice;                                   		// 0x01C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<TAssetPtr<class UClass>>                    ReferenceItems;                                   		// 0x01C8(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.RandomlyGeneratableItem");
		return ptr;
	}

};


// Class TslGame.UseByPickupItem
// 0x0000 (0x0188 - 0x0188)
class UUseByPickupItem : public UItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.UseByPickupItem");
		return ptr;
	}

};


// Class TslGame.ItemSpawnProcessor
// 0x0010 (0x0038 - 0x0028)
class UItemSpawnProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemSpawnProcessor");
		return ptr;
	}


	void ProcessSpawnItem(class UItemSpotGroupComponent* Spawner);
	void ProcessGroup(class UItemSpotGroupComponent* SpotGroup, TArray<class UItemSpotComponent*> Spots);
	bool CheckItemGroup(class UItemSpotGroupComponent* SpotGroup);
};


// Class TslGame.SpawnTableItemSpawnProcessor
// 0x0EE0 (0x0F18 - 0x0038)
class USpawnTableItemSpawnProcessor : public UItemSpawnProcessor
{
public:
	TArray<struct FItemSpotGroupTypeProperty>          RawSpotGroupProperties;                           		// 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UDataTable*                                  RawItemSpawnDataTable;                            		// 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UDataTable*                                  RawItemSpawnTogetherDataTable;                    		// 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RandomSpawnRadius;                                		// 0x0058(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xEB4];                             		// 0x005C(0x0EB4) MISSED OFFSET
	unsigned char                                      bUseActorSpawn : 1;                               		// 0x0F10(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SpawnTableItemSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.ItemSpot
// 0x0008 (0x0390 - 0x0388)
class AItemSpot : public AActor
{
public:
	class UItemSpotGroupComponent*                     SpotGroupComponent;                               		// 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemSpot");
		return ptr;
	}

};


// Class TslGame.ItemSpotComponent
// 0x0010 (0x0310 - 0x0300)
class UItemSpotComponent : public USceneComponent
{
public:
	TEnumAsByte<enum class EItemSpotType>              ItemSpotType;                                     		// 0x0300(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                               		// 0x0301(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemSpotComponent");
		return ptr;
	}

};


// Class TslGame.ItemSpotGroupComponent
// 0x0010 (0x0310 - 0x0300)
class UItemSpotGroupComponent : public USceneComponent
{
public:
	TEnumAsByte<enum class EItemSpotGroupType>         SpotGroupType;                                    		// 0x0300(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                               		// 0x0301(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemSpotGroupComponent");
		return ptr;
	}

};


// Class TslGame.ItemStudio
// 0x0058 (0x03E0 - 0x0388)
class AItemStudio : public AActor
{
public:
	struct FName                                       CameraSocketName;                                 		// 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTextureRenderTarget2D*                      TextureTarget;                                    		// 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxViewDistance;                                  		// 0x0398(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x039C(0x0004) MISSED OFFSET
	class UCameraComponent*                            CameraComponent;                                  		// 0x03A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent;                            		// 0x03A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FTransform                                  DefaultCameraSocketTransform;                     		// 0x03B0(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemStudio");
		return ptr;
	}


	void UpdateComponentToWorld(class UMeshComponent* Mesh);
	void SetTextureRenderTarget(class UTextureRenderTarget2D* NewTextureTarget);
	void SetItem(class UItem* Item);
	void AddYaw(float Value);
};


// Class TslGame.ItemToolTipWidget
// 0x0000 (0x0240 - 0x0240)
class UItemToolTipWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemToolTipWidget");
		return ptr;
	}


	void UpdateVicinityOrInventorySlotItemToolTip(class UEquipableItem* EquipableItem, class UEquipableItem* EquipmentSlotItem);
	void UpdateToolTipBySlotInterface(const TScriptInterface<class USlotInterface>& SlotInterface, const TScriptInterface<class USlotContainerInterface>& Container);
	void UpdateSlotInfo(const TScriptInterface<class USlotInterface>& SlotInterface);
	void UpdateEquipmentSlotItemToolTip(class UEquipableItem* EquipableItem);
};


// Class TslGame.LevelAttribute
// 0x0018 (0x03A0 - 0x0388)
class ALevelAttribute : public AInfo
{
public:
	int                                                NumMapBlock;                                      		// 0x0388(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBox2D                                      MapRect2D;                                        		// 0x038C(0x0014) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LevelAttribute");
		return ptr;
	}

};


// Class TslGame.LobbyLink
// 0x00A8 (0x00D0 - 0x0028)
class ULobbyLink : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA8];                              		// 0x0028(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyLink");
		return ptr;
	}

};


// Class TslGame.LobbyWidget
// 0x0000 (0x0240 - 0x0240)
class ULobbyWidget : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyWidget");
		return ptr;
	}


	void GameStateChanging(const struct FName& NewState, const struct FName& OldState);
};


// Class TslGame.MatchPreparer
// 0x0030 (0x0058 - 0x0028)
class UMatchPreparer : public UObject
{
public:
	int                                                WarmupTime;                                       		// 0x0028(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                WarmupTimeInPIE;                                  		// 0x002C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                              		// 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MatchPreparer");
		return ptr;
	}


	void TimerGameStartCountDown();
};


// Class TslGame.AirborneMatchPreparer
// 0x0048 (0x00A0 - 0x0058)
class UAirborneMatchPreparer : public UMatchPreparer
{
public:
	class UClass*                                      AircraftClass;                                    		// 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class ATransportAircraftVehicle*>           Aircrafts;                                        		// 0x0060(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	int                                                AircraftCount;                                    		// 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                AircraftCapacityOverride;                         		// 0x0074(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              AircraftAltitude;                                 		// 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              EndThetaDegree;                                   		// 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AircraftIntervalDistance;                         		// 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                              		// 0x0084(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AirborneMatchPreparer");
		return ptr;
	}


	void AllowDealDamage();
};


// Class TslGame.NormalMatchPreparer
// 0x0018 (0x0070 - 0x0058)
class UNormalMatchPreparer : public UMatchPreparer
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x0058(0x0010) MISSED OFFSET
	int                                                AvailablePlayerStartCount;                        		// 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.NormalMatchPreparer");
		return ptr;
	}

};


// Class TslGame.ModeController
// 0x0000 (0x0480 - 0x0480)
class AModeController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ModeController");
		return ptr;
	}


	void SendSystemMessageToAll(TEnumAsByte<enum class ESystemMessageType> MessageType, const struct FText& Message, float MessageDuration);
	bool IsPlayInEditor();
	bool HandleServerAdminBlueprint(const struct FString& AdminCommand);
	class ATslGameState* GetGameState();
	class ATslGameMode* GetGameMode();
	bool CanDealDamage(class ATslPlayerState* DamageInstigator, class ATslPlayerState* DamagedPlayer);
};


// Class TslGame.BattleRoyaleModeController
// 0x0070 (0x04F0 - 0x0480)
class ABattleRoyaleModeController : public AModeController
{
public:
	TArray<struct FBattleRoyalePoisionGasData>         NormalPoisonGasDataArray;                         		// 0x0480(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FBattleRoyalePoisionGasData>         FastPoisonGasDataArray;                           		// 0x0490(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                FastZonePlayerCount;                              		// 0x04A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BattleRoyaleZoneTypeCheckTime;                    		// 0x04A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<float>                                      PoisonWarningTime;                                		// 0x04A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              WaterVolumeRayHeight;                             		// 0x04B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                               		// 0x04BC(0x000C) MISSED OFFSET
	TArray<class ATslPhysicsVolume*>                   OceanPhysicsVolume;                               		// 0x04C8(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0x18];                              		// 0x04D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BattleRoyaleModeController");
		return ptr;
	}


	bool SetNextGasInBlackboard();
	void InitRadius();
	float GetPoisonGasDamagePerSecond();
};


// Class TslGame.CarePackageController
// 0x0030 (0x04B0 - 0x0480)
class ACarePackageController : public AModeController
{
public:
	class UClass*                                      AircraftCarePackageClass;                         		// 0x0480(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   StartDelay;                                       		// 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   SpawnInterval;                                    		// 0x0490(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FlyingHeight;                                     		// 0x0498(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CarePackageLifeTime;                              		// 0x049C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WhiteZoneSpawnInnerRate;                          		// 0x04A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DropAreaRate;                                     		// 0x04A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x04A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CarePackageController");
		return ptr;
	}


	struct FVector SpawnAircraftCarePackage(bool CopyIntersectionInfo);
	bool SetNextCarePackageInBlackboard();
	void InitCarePackageSetting();
	float GetSpawnInterval();
};


// Class TslGame.RedZoneController
// 0x0078 (0x04F8 - 0x0480)
class ARedZoneController : public AModeController
{
public:
	class UClass*                                      BombTemplateClass;                                		// 0x0480(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StartDelay;                                       		// 0x0488(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   NextCreateRedZoneInterval;                        		// 0x048C(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BombingDelay;                                     		// 0x0494(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              OuterRadius;                                      		// 0x0498(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              InnerRadius;                                      		// 0x049C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RedZoneDuration;                                  		// 0x04A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   BombingInterval;                                  		// 0x04A4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RedZoneLifeTime;                                  		// 0x04AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReyStartHeight;                                   		// 0x04B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RedZoneRadiusOffsetRate;                          		// 0x04B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       RedZoneStartText;                                 		// 0x04B8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	int                                                RedZoneProjectileCount;                           		// 0x04D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                              		// 0x04D4(0x0014) MISSED OFFSET
	TArray<class ATslPhysicsVolume*>                   OceanPhysicsVolume;                               		// 0x04E8(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.RedZoneController");
		return ptr;
	}


	void SpawnBombProjectile();
	bool SetNextRedZoneInBlackboard();
	void InitRedZoneSetting();
	float GetRandomBombingInterval();
};


// Class TslGame.MutableCharacter
// 0x0050 (0x0800 - 0x07B0)
class AMutableCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x20];                              		// 0x07B0(0x0020) MISSED OFFSET
	TEnumAsByte<enum class EGender>                    Gender;                                           		// 0x07D0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                               		// 0x07D1(0x0007) MISSED OFFSET
	class UCustomizableObjectInstance*                 CustomizableObjectInstance;                       		// 0x07D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslCustomizableSkeletalComponent*           CustomizableSkeletalComponent;                    		// 0x07E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<unsigned char>                              InstanceDescriptor;                               		// 0x07E8(0x0010) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst)
	unsigned char                                      UnknownData02[0x8];                               		// 0x07F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MutableCharacter");
		return ptr;
	}


	void OnRep_InstanceDescriptor();
	TEnumAsByte<enum class EGender> GetGender();
};


// Class TslGame.LobbyCharacter
// 0x0010 (0x0810 - 0x0800)
class ALobbyCharacter : public AMutableCharacter
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x0800(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyCharacter");
		return ptr;
	}

};


// Class TslGame.TestMutableCharacter
// 0x0000 (0x0800 - 0x0800)
class ATestMutableCharacter : public AMutableCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TestMutableCharacter");
		return ptr;
	}

};


// Class TslGame.TslWeapon_Gun
// 0x0218 (0x0990 - 0x0778)
class ATslWeapon_Gun : public ATslWeapon
{
public:
	unsigned char                                      bSpawnBulletFromBarrel : 1;                       		// 0x0778(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0779(0x0007) MISSED OFFSET
	int                                                AmmoPerClip;                                      		// 0x0780(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                CurrentAmmoInClip;                                		// 0x0784(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsHipped : 1;                                    		// 0x0788(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData01[0x6F];                              		// 0x0789(0x006F) MISSED OFFSET
	struct FWeaponGunData                              WeaponGunConfig;                                  		// 0x07F8(0x0080) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FWeaponDeviationData                        WeaponDeviationConfig;                            		// 0x0878(0x0040) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FWeaponGunAnim                              WeaponGunAnim;                                    		// 0x08B8(0x00D8) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Gun");
		return ptr;
	}


	bool WeaponCycleDone();
	void UpdateAttachedItemClient(const struct FWeaponAttachmentData& NewAttachmentData, const struct FWeaponAttachmentData& PastAttachmentData);
	void StopReloadAnimByOne();
	void StartManualFireCycle();
	void SimulateWeaponReload(TEnumAsByte<enum class EWeaponReloadAnimExec> ReloadAnimExec);
	void SetWeaponReloadInterrupted(bool bIsInterrupted);
	void SetSpawnBulletFromBarrel(bool DoSpawnBulletFromBarrel);
	void ServerStopReload();
	void ServerStopFire();
	void ServerStartReload();
	void ServerStartFire();
	void ServerSetHip(bool bNewIsHipped);
	void ServerHandleFiring();
	void ServerCancelReload();
	void Server_StartManualFireCycle();
	void PlayWeaponCycleCameraAnim();
	void PlayLongTailSound();
	void OnRep_AttachedItemAssets();
	void OnRep_AmmoCount();
	void OnAttachmentScopeLoaded();
	void ManualFireCycleFinished();
	bool IsWeaponCycleInProgress();
	bool IsReloadInterrupted();
	bool IsReloading();
	struct FVector GetWeaponHandOffset();
	struct FWeaponGunData GetWeaponGunConfig();
	struct FWeaponGunAnim GetWeaponGunAnimConfig();
	float GetWeaponFullReloadTime();
	float GetWeaponFullRealoadTimeWithAttachments();
	float GetWeaponCurrentRecoilValue();
	float GetWeaponCurrentDeviationValue();
	float GetReloadAnimationPlayRate();
	int GetNumOfFiringMode();
	float GetMovementModifierScope();
	float GetMovementModifierAim();
	int GetMaxAmmo();
	float GetMagOutDuration();
	struct FVector GetMagDropLinearVelocity();
	struct FVector GetMagDropAngularVelocity();
	int GetGripTypeIndex();
	TEnumAsByte<enum class EFiringMode> GetFiringMode();
	class UAmmoItem* GetDefaultAmmoObject();
	float GetCurrentDeviation();
	int GetCurrentAmmoInInventory();
	int GetCurrentAmmoInClip();
	int GetCurrentAmmo();
	class UAnimMontage* GetCharacterReloadTacticalMontage();
	class UAnimMontage* GetCharacterReloadChargeMontage();
	class UAnimMontage* GetCharacterReloadByOneStopMontage();
	class UAnimMontage* GetCharacterReloadByOneStartMontage();
	class UAnimMontage* GetCharacterReloadByOneSingleMontage();
	class UBlendSpaceBase* GetCharacterLHGripBlendspace();
	class UBlendSpace1D* GetCharacterGripBlendspace();
	class UAnimMontage* GetCharacterFireSelectorMontage();
	class UAnimMontage* GetCharacterFireMontage();
	class UAnimMontage* GetCharacterFireCycle();
	int GetAmmoPerClip();
	class UClass* GetAmmoItemClass();
	float GetADSRecoilKick();
	void ClientStopSimulatingWeaponFire();
	void ClientSimulateWeaponFire();
	void ClientNotifyStopReloadByOne();
	void ClientCancelReload();
	void Client_StartManualFireCycle();
	bool CheckMiddlePointCollision();
	void CancelReloadImpl();
	void AnimCall_ToggleFireMode();
	void AnimCall_ReloadTacticalWeapon();
	void AnimCall_ReloadChargeWeapon();
	void AnimCall_FireWeaponCycle();
	void AnimCall_FireWeapon();
};


// Class TslGame.VehicleSeatActor
// 0x0080 (0x0408 - 0x0388)
class AVehicleSeatActor : public AActor
{
public:
	float                                              ViewPitchMin;                                     		// 0x0388(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewPitchMax;                                     		// 0x038C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewYawMin;                                       		// 0x0390(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ViewYawMax;                                       		// 0x0394(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 CurvePitchMax;                                    		// 0x0398(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CurvePitchMin;                                    		// 0x03A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bCanOnlyFireWhileAiming : 1;                      		// 0x03A8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x03A9(0x0007) MISSED OFFSET
	class UBlendSpaceBase*                             SeatBlendspaceAiming;                             		// 0x03B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimSequenceBase*                           SeatAnimationIdle;                                		// 0x03B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAimOffsetBlendSpace*                        SeatIdleAO;                                       		// 0x03C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             TransitionOutBlendspace;                          		// 0x03C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlendSpaceBase*                             TransitionInBlendspace;                           		// 0x03D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRestricWeaponUse : 1;                            		// 0x03D8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                               		// 0x03D9(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<enum class EWeaponClass>>       AllowedWeaponClasses;                             		// 0x03E0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class ATslCharacter*                               Rider;                                            		// 0x03F0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                               		// 0x03F8(0x000C) MISSED OFFSET
	TEnumAsByte<enum class EVehicleAnimType>           SeatAnimationType;                                		// 0x0404(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleSeatActor");
		return ptr;
	}


	void OnRep_Rider();
	bool IsWeaponClassAllowed(TEnumAsByte<enum class EWeaponClass> InClass);
	class UTslVehicleSeatComponent* GetVehicleSeatComponent();
	class APawn* GetVehiclePawn();
	TScriptInterface<class UTslVehicleInterface> GetVehicleInterface();
	TEnumAsByte<enum class EVehicleAnimType> GetVehicleAnimType();
	class UBlendSpaceBase* GetTransitionOutBlendspace();
	class UBlendSpaceBase* GetTransitionInBlendspace();
	class UAimOffsetBlendSpace* GetSeatIdleAO();
	class UAnimSequenceBase* GetSeatIdleAnimation();
	class UBlendSpaceBase* GetSeatAimingBlendspace();
	class ATslCharacter* GetRider();
	float GetMinPitchByYaw(float CurrentYaw);
	float GetMaxPitchByYaw(float CurrentYaw);
	bool GetCanFireOnlyWhileAimed();
};


// Class TslGame.WeaponProcessor
// 0x0078 (0x0400 - 0x0388)
class AWeaponProcessor : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnWeaponProcessorArmed;                           		// 0x0388(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TArray<class ATslWeapon*>                          EquippedWeapons;                                  		// 0x0398(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	int                                                CurrentWeaponIndex;                               		// 0x03A8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                              		// 0x03AC(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponProcessor");
		return ptr;
	}


	void SimulateArmWeapon(int WeaponIndex, bool bNeedAnimation);
	void ServerUnarmCurrentWeapon();
	void ServerArmWeapon(int WeaponIndex, bool bNeedAnimation);
	void OnRep_EquippedWeapons(TArray<class ATslWeapon*> LastEquippedWeapons);
	void OnRep_CurrentWeaponIndex(int LastWeaponIndex);
	bool IsUnarmedWeapon(int WeaponIndex);
	bool IsUnarmed();
	int GetWeaponIndex();
	class ATslWeapon_Gun* GetWeaponGun();
	class ATslWeapon* GetWeaponByIndex(int Index);
	class ATslWeapon* GetWeapon();
	int GetUnarmedWeaponIndex();
	class ATslWeapon* GetCurrentWeapon();
	class ATslWeapon* FindWeapon(class UClass* WeaponClass);
	void ClientSetWeaponIndex(int WeaponIndex);
	void ClientForceRemoveWeapon(int WeaponIndex);
};


// Class TslGame.TslCharacter
// 0x08F0 (0x10F0 - 0x0800)
class ATslCharacter : public AMutableCharacter
{
public:
	unsigned char                                      UnknownData00[0x70];                              		// 0x0800(0x0070) MISSED OFFSET
	class UBuffComponet*                               BuffComponent;                                    		// 0x0870(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                              		// 0x0878(0x0028) MISSED OFFSET
	class ATslCharacter*                               RevivingCharacter;                                		// 0x08A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerState*                             GroggyPlayerInstigator;                           		// 0x08A8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x78];                              		// 0x08B0(0x0078) MISSED OFFSET
	float                                              BuffFinalSpreadFactor;                            		// 0x0928(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                               		// 0x092C(0x0004) MISSED OFFSET
	class AInventoryFacade*                            InventoryFacade;                                  		// 0x0930(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AWeaponProcessor*                            WeaponProcessor;                                  		// 0x0938(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      CharacterState;                                   		// 0x0940(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1F];                              		// 0x0941(0x001F) MISSED OFFSET
	class UClass*                                      DropPackageType;                                  		// 0x0960(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               SoundClearAk;                                     		// 0x0968(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RemoteVolumeControlOn;                            		// 0x0970(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               RemoteVolumeControlOff;                           		// 0x0978(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CameraFovRatioCurve;                              		// 0x0980(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HeavyFallVerticalVelocityThreshold;               		// 0x0988(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExtremeFallVerticalVelocityThreshold;             		// 0x098C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProneFallVerticalVelocityThreshold;               		// 0x0990(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              HeavyFallMovementStopTime;                        		// 0x0994(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExtremeFallMovementStopTime;                      		// 0x0998(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                               		// 0x099C(0x0004) MISSED OFFSET
	float                                              Punch_Damage;                                     		// 0x09A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PunchHeavy_Damage;                                		// 0x09A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      UnarmedDamageType;                                		// 0x09A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Punch_Distance;                                   		// 0x09B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PunchHeavy_Distance;                              		// 0x09B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Punch_Radius;                                     		// 0x09B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PunchHeavy_Radius;                                		// 0x09BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Punch_InitialLocation;                            		// 0x09C0(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Punch_AllowedHitRangeLeeway;                      		// 0x09CC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                               		// 0x09D0(0x0004) MISSED OFFSET
	struct FVector                                     LeanLeftTraceOffset;                              		// 0x09D4(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     LeanRightTraceOffset;                             		// 0x09E0(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                               		// 0x09EC(0x0008) MISSED OFFSET
	float                                              LeanOffset_Stand;                                 		// 0x09F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LeanOffset_Crouch;                                		// 0x09F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LeanOffset_Prone;                                 		// 0x09FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Sprint_MaxSpeed;                                  		// 0x0A00(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Sprint_MinSpeed;                                  		// 0x0A04(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SprintingFOV;                                     		// 0x0A08(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                               		// 0x0A0C(0x0004) MISSED OFFSET
	float                                              MinimumBreathToHold;                              		// 0x0A10(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                               		// 0x0A14(0x0004) MISSED OFFSET
	struct FName                                       SwimPoint;                                        		// 0x0A18(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwimableWaterDepth;                               		// 0x0A20(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CrouchWaterDepth;                                 		// 0x0A24(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ProneWaterDepth;                                  		// 0x0A28(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WaterFloorDetectionLength;                        		// 0x0A2C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SwimMaxControllerPitch;                           		// 0x0A30(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              UnderwaterSwimGapFromSurface;                     		// 0x0A34(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SwimTrailEffectClass;                             		// 0x0A38(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslParticle*                                SwimTrailEffect;                                  		// 0x0A40(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UCharacterBreathComponent*                   BreathComponent;                                  		// 0x0A48(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       BreathPoint;                                      		// 0x0A50(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      UnderwaterChokeEffectClass;                       		// 0x0A58(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslParticle*                                UnderwaterChokeEffect;                            		// 0x0A60(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              IndoorCheckDistance;                              		// 0x0A68(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              IndoorCheckTime;                                  		// 0x0A6C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                               		// 0x0A70(0x0004) MISSED OFFSET
	float                                              FootSoundObstructionCheckInterval;                		// 0x0A74(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FootSoundObstructionCheckMaxDistance;             		// 0x0A78(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                               		// 0x0A7C(0x0004) MISSED OFFSET
	struct FName                                       ParachuteAttachPoint;                             		// 0x0A80(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ReleasingParachuteAltitude;                       		// 0x0A88(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceReleasingParachuteAltitude;                  		// 0x0A8C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumParachuteAltitude;                         		// 0x0A90(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                               		// 0x0A94(0x0004) MISSED OFFSET
	class UClass*                                      ParachuteType;                                    		// 0x0A98(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bParachuteLandingAssist : 1;                      		// 0x0AA0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                               		// 0x0AA1(0x0007) MISSED OFFSET
	class UCastComponent*                              CastComponent;                                    		// 0x0AA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStanceComponent*                            StanceComponent;                                  		// 0x0AB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UHackReporterComponent*                      HackReporterComponent;                            		// 0x0AB8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bAcceptHitsWhileNotAlive : 1;                     		// 0x0AC0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                               		// 0x0AC1(0x0003) MISSED OFFSET
	float                                              SimulatedHit_Initial;                             		// 0x0AC4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimulatedHit_RecoveryPerSecond;                   		// 0x0AC8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimulatedHit_Value;                               		// 0x0ACC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimulatedHit_ImpulsePower;                        		// 0x0AD0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimlatedHit_PunchLightPower;                      		// 0x0AD4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SimlatedHit_PunchHeavyPower;                      		// 0x0AD8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                               		// 0x0ADC(0x0004) MISSED OFFSET
	class UClass*                                      PunchImpactEffect;                                		// 0x0AE0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData16[0x28];                              		// 0x0AE8(0x0028) MISSED OFFSET
	class UCharacterWeaponAnimInfoComponent*           WeaponAnimInfoComponent;                          		// 0x0B10(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Primary;                       		// 0x0B18(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Secondary;                     		// 0x0B20(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Sidearm;                       		// 0x0B28(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Melee;                         		// 0x0B30(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Thrown;                        		// 0x0B38(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class ATeam*                                       Team;                                             		// 0x0B40(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData17[0x8];                               		// 0x0B48(0x0008) MISSED OFFSET
	struct FName                                       HeadAttachPoint;                                  		// 0x0B50(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CameraHeadHideDistance;                           		// 0x0B58(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     CrouchedCameraMove;                               		// 0x0B5C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     PronedCameraMove;                                 		// 0x0B68(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     GroggyCameraMove;                                 		// 0x0B74(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CrouchedCameraMoveSpeed;                          		// 0x0B80(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PronedCameraMoveSpeed;                            		// 0x0B84(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GroggyCameraMoveSpeed;                            		// 0x0B88(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData18[0x4C];                              		// 0x0B8C(0x004C) MISSED OFFSET
	struct FTakeHitInfo                                LastTakeHitInfo;                                  		// 0x0BD8(0x0040) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData19[0x4];                               		// 0x0C18(0x0004) MISSED OFFSET
	float                                              TargetingSpeedModifier;                           		// 0x0C1C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class ETargetingType>             TargetingType;                                    		// 0x0C20(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                               		// 0x0C21(0x0003) MISSED OFFSET
	float                                              Stand_RunningSpeedModifier;                       		// 0x0C24(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Stand_SprintingSpeedModifier;                     		// 0x0C28(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Stand_SprintingBigGunModifier;                    		// 0x0C2C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Stand_SprintingRifleModifier;                     		// 0x0C30(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Stand_SprintingSmallGunMOdifier;                  		// 0x0C34(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Crouch_RunningSpeedModifier;                      		// 0x0C38(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Crouch_SprintingSpeedModifier;                    		// 0x0C3C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Prone_RunningSpeedModifier;                       		// 0x0C40(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Prone_SprintingSpeedModifier;                     		// 0x0C44(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bWantsToRun : 1;                                  		// 0x0C48(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bWantsToSprint : 1;                               		// 0x0C48(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bWantsToSprintingAuto : 1;                        		// 0x0C48(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bWantsToRollingLeft : 1;                          		// 0x0C48(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bWantsToRollingRight : 1;                         		// 0x0C48(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsPeekLeft : 1;                                  		// 0x0C48(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsPeekRight : 1;                                 		// 0x0C48(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bQuickThrowHigh : 1;                              		// 0x0C48(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      IgnoreRotation : 1;                               		// 0x0C49(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsGroggying : 1;                                 		// 0x0C49(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_EditConst)
	unsigned char                                      bIsThirdPerson : 1;                               		// 0x0C49(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsReviving : 1;                                  		// 0x0C49(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsWeaponObstructed : 1;                          		// 0x0C49(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData21[0x2];                               		// 0x0C4A(0x0002) MISSED OFFSET
	unsigned char                                      bOutSidePlayerArea : 1;                           		// 0x0C4C(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                               		// 0x0C4D(0x0003) MISSED OFFSET
	struct FVector_NetQuantizeNormal                   AimOffsets;                                       		// 0x0C50(0x000C) (CPF_Net, CPF_Transient)
	struct FVector_NetQuantizeNormal                   LastAimOffsets;                                   		// 0x0C5C(0x000C)
	unsigned char                                      UnknownData23[0x20];                              		// 0x0C68(0x0020) MISSED OFFSET
	class UCurveFloat*                                 Curve_JumpCamera;                                 		// 0x0C88(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_StandWalk;                                  		// 0x0C90(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_StandRun;                                   		// 0x0C98(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_StandSprint;                                		// 0x0CA0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchWalk;                                 		// 0x0CA8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchRun;                                  		// 0x0CB0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchSprint;                               		// 0x0CB8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneWalk;                                  		// 0x0CC0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneRun;                                   		// 0x0CC8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneSprint;                                		// 0x0CD0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_Swim;                                       		// 0x0CD8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_UnderwaterSwim;                             		// 0x0CE0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_StandScope;                                 		// 0x0CE8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchScope;                                		// 0x0CF0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneScope;                                 		// 0x0CF8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_StandAim;                                   		// 0x0D00(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_CrouchAim;                                  		// 0x0D08(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_ProneAim;                                   		// 0x0D10(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_DBNO;                                       		// 0x0D18(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_GroundAngle;                                		// 0x0D20(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveVector*                                Curve_WeaponSway;                                 		// 0x0D28(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 Curve_TurningLerp;                                		// 0x0D30(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DirectionalSpeedModifier;                         		// 0x0D38(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PointDamageForceMultiplier;                       		// 0x0D3C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PointDamageForce_MapMin;                          		// 0x0D40(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PointDamageForce_MapMax;                          		// 0x0D44(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RadialDamageForceMultiplier;                      		// 0x0D48(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class ERadialImpulseFalloff>      RadialDamageFalloffType;                          		// 0x0D4C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                               		// 0x0D4D(0x0003) MISSED OFFSET
	class UAnimMontage*                                RollLeftAnim;                                     		// 0x0D50(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAnimMontage*                                RollRightAnim;                                    		// 0x0D58(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FCharacterAnim                              CharacterAnim;                                    		// 0x0D60(0x0010) (CPF_Edit, CPF_DisableEditOnInstance)
	class AController*                                 NetOwnerController;                               		// 0x0D70(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              LeanAlphaSpeed;                                   		// 0x0D78(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnSpeedHip;                                     		// 0x0D7C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnSpeedAimed;                                   		// 0x0D80(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnSpeedOverLimit;                               		// 0x0D84(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinTurnAngleHip;                                  		// 0x0D88(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinTurnAngleAim;                                  		// 0x0D8C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnLinearEndThreshold;                           		// 0x0D90(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bNonLinearTurn : 1;                               		// 0x0D94(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                               		// 0x0D95(0x0003) MISSED OFFSET
	float                                              TurnNonLinearEndThreshold;                        		// 0x0D98(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TurnNonLinearInterpSpeed;                         		// 0x0D9C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedLocomotion;                 		// 0x0DA0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedLocomotionSprint;           		// 0x0DA4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedLocomotionProne;            		// 0x0DA8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CapsuleTurnInterpSpeedStationary;                 		// 0x0DAC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData26[0x14];                              		// 0x0DB0(0x0014) MISSED OFFSET
	float                                              AimStateDefaultTime;                              		// 0x0DC4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimStateReturnTime;                               		// 0x0DC8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AimStateDrawTime;                                 		// 0x0DCC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData27[0x8];                               		// 0x0DD0(0x0008) MISSED OFFSET
	unsigned char                                      bAimStateActive : 1;                              		// 0x0DD8(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                               		// 0x0DD9(0x0003) MISSED OFFSET
	float                                              CanGroggyDamageTime;                              		// 0x0DDC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       GroggyStartText;                                  		// 0x0DE0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       GroggyCancelText;                                 		// 0x0DF8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       GroggyFinishText;                                 		// 0x0E10(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FRotator                                    BlendTargetViewRotation;                          		// 0x0E28(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector2D                                   DesiredDirection;                                 		// 0x0E34(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                               		// 0x0E3C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ComponentsToDestroyOnDedicatedServer;             		// 0x0E40(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      bIsDying : 1;                                     		// 0x0E50(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_EditConst)
	unsigned char                                      UnknownData30[0x3];                               		// 0x0E51(0x0003) MISSED OFFSET
	float                                              Health;                                           		// 0x0E54(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthMax;                                        		// 0x0E58(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroggyHealth;                                     		// 0x0E5C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroggyHealthMax;                                  		// 0x0E60(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecreaseGroggyHealthPerSecond;                    		// 0x0E64(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroggyDamageWeight;                               		// 0x0E68(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                               		// 0x0E6C(0x0004) MISSED OFFSET
	class UClass*                                      GroggyDamageType;                                 		// 0x0E70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthByRevive;                                   		// 0x0E78(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                               		// 0x0E7C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               GroggyToDieAkEvent;                               		// 0x0E80(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BoostGauge;                                       		// 0x0E88(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BoostGaugeMax;                                    		// 0x0E8C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecreaseTimerSecond;                              		// 0x0E90(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecreaseBoostGaugeByTime;                         		// 0x0E94(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FBuffWithBoostGauge>                 BuffWithBoostGauge;                               		// 0x0E98(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UClass*                                      MedKitClass;                                      		// 0x0EA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      FirstAidClass;                                    		// 0x0EB0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      BandageClass;                                     		// 0x0EB8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UClass*>                              BoostItemClasses;                                 		// 0x0EC0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	unsigned char                                      UnknownData33[0x4];                               		// 0x0ED0(0x0004) MISSED OFFSET
	TWeakObjectPtr<class ATslPlayerState>              LaunchInstigator;                                 		// 0x0ED4(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class AActor>                       LaunchCauser;                                     		// 0x0EDC(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                               		// 0x0EE4(0x0004) MISSED OFFSET
	double                                             LastLaunchTime;                                   		// 0x0EE8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APlayerState*                                AuthorizedPlayerState;                            		// 0x0EF0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TEnumAsByte<enum class EEquipableItemSoundType>    ShoesSoundType;                                   		// 0x0EF8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData35[0x7];                               		// 0x0EF9(0x0007) MISSED OFFSET
	class UInteractorComponent*                        InteractorComponent;                              		// 0x0F00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UInteractionComponent*                       InteractionComponent;                             		// 0x0F08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UVehicleRiderComponent*                      VehicleRiderComponent;                            		// 0x0F10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UClass*                                      OutSidePlayerAreaEffectClass;                     		// 0x0F18(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslPostProcessEffect*                       OutSidePlayerAreaEffect;                          		// 0x0F20(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData36[0xF0];                              		// 0x0F28(0x00F0) MISSED OFFSET
	class USkeletalMeshComponent*                      ShadowMesh;                                       		// 0x1018(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              TargetingFOV;                                     		// 0x1020(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              AimingDelay;                                      		// 0x1024(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData37[0x4];                               		// 0x1028(0x0004) MISSED OFFSET
	float                                              AttackStateOffDelayTime;                          		// 0x102C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HitStateOffDelayTime;                             		// 0x1030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData38[0x24];                              		// 0x1034(0x0024) MISSED OFFSET
	float                                              DamageHeadScale;                                  		// 0x1058(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              DamageArmScale;                                   		// 0x105C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              DamageStomachScale;                               		// 0x1060(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              DamageLegScale;                                   		// 0x1064(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FName>                               HeadBoneNames;                                    		// 0x1068(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FName>                               ArmBoneNames;                                     		// 0x1078(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FName>                               TorsoBoneNames;                                   		// 0x1088(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FName>                               StomachBoneNames;                                 		// 0x1098(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FName>                               LegBoneNames;                                     		// 0x10A8(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData39[0x4];                               		// 0x10B8(0x0004) MISSED OFFSET
	float                                              FallDamageFactor;                                 		// 0x10BC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              FallDamageVelocityMin;                            		// 0x10C0(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CorpseLifeSpan;                                   		// 0x10C4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData40[0x28];                              		// 0x10C8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCharacter");
		return ptr;
	}


	void UpdateWeaponAttachPoint();
	void ToggleAnimDynamics();
	void StopAllAnimMontages();
	void SpawnPunchImpact_Reliable(const struct FVector& InLocation, const struct FRotator& InRotation);
	void SpawnPunchImpact(const struct FVector& InLocation, const struct FRotator& InRotation);
	void SpawnBulletPassByEffect(const struct FVector& Location, float BulletVelocity);
	void SimulatePhysicalHitRecovery();
	void SimulateHeadShot(const struct FTransform& SpawnTransform, const struct FTransform& ImpactTransform);
	void ShowDynamicCrosshair(bool bShow);
	void SetWorldTransformIdentity();
	void SetWeaponInertia(const struct FRotator& InInertia);
	void SetupWeaponBlueprint();
	void SetTPPSpringarmOffset(float VerticalOffset);
	void SetSwayDebuffParameters(float SwaySpeed, float SwayVerticalMultiplier, float SwayHorizontalMultiplier);
	void SetQuickThrowHigh(bool NewQuickThrowHigh);
	void SetParachuteLandingAssist(bool bAssistActive);
	void SetOutSidePlayerArea(bool bNewOutSidePlayerArea);
	void SetMovementEnabled(bool IsEnabled);
	void SetLaunchEvent(const struct FAttackId& AttackId, class ATslPlayerState* InPlayerState, class AActor* Causer);
	void SetCanGroggyDamage(bool bInCanGroggyDamage);
	void SetBuffFinalSpreadFactor(float FinalSpreadFactor);
	void SetAnimationAkSwitch(const struct FString& SwitchGroup, const struct FString& SwitchState);
	void SetAnimationAkRTPC(const struct FString& RTPCName, float RTPCValue);
	void SetAimStateActive(bool IsActive);
	void SetADSSocketOffset(const struct FVector& NewOffset);
	void SetAccessorySlot_Thrown(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_SideArm(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_Secondary(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_Primary(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot_Melee(class UTslAccessoryComponent* AccessoryComponent);
	void SetAccessorySlot(class UTslAccessoryComponent* AccessoryComponent, TEnumAsByte<enum class EAccessorySlot> Slot);
	void ServerSetTargeting(TEnumAsByte<enum class ETargetingType> NewTargetingType);
	void ServerSetSprintingAuto(bool bNewSprintingAuto);
	void ServerSetSprinting(bool bNewSprinting);
	void ServerSetRunning(bool bNewRunning);
	void ServerSetRolling(bool bNewRolling, bool bIsLeft);
	void ServerSetPeekRight(bool bNewPeekRight);
	void ServerSetPeekLeft(bool bNewPeekLeft);
	void ServerSetHoldingBreath(bool bNewHoldingBreath);
	void ServerSetAimOffsets(const struct FVector_NetQuantizeNormal& NewAimOffsets);
	void ServerPickUpItemFromPackage(class UItem* Item, class AItemPackage* Package, const struct FName& TargetContainer, const struct FString& Options);
	void ServerPickUpDroppedItem(class UObject* DroppedItemObject, const struct FName& TargetContainer, const struct FString& Options);
	void Server_UnarmedHitNotify(const struct FHitResult& Hit, float Damage, uint32_t HitSeq);
	void Server_SetWeaponObstruction(bool bNewObstruction);
	void Server_SetQuickThrowHigh(bool NewQuickThrowHigh);
	void Server_SetParachuteLandingAssist(bool bAssistActive);
	void Server_SetCanGroggyDamage(bool bInCanGroggyDamage);
	void Server_SetAimState(bool IsActive);
	void Server_PlayUnarmedAttack(int AnimationIndex);
	void SendSystemMessage(TEnumAsByte<enum class ESystemMessageType> MessageType, const struct FText& Message);
	void ResetUnarmedAttack();
	void ResetParachute();
	void PunchStart(float PunchDamage, float PunchDistance, float PunchRadius);
	void PrepareParachute(class UClass* ParachuteType);
	void PlayCameraAnim(class UCameraAnim* CameraAnim);
	bool PickUpItem(class UItem* Item, const struct FName& TargetContainer, const struct FString& Options);
	void OnWeapon_6();
	void OnWeapon_5();
	void OnWeapon_4();
	void OnWeapon_3();
	void OnWeapon_2();
	void OnUnarm();
	void OnStopTargeting();
	void OnStartInteractBy(class ATslCharacter* OtherCharacter);
	void OnRep_ShoesSoundType();
	void OnRep_OutSidePlayerArea(bool bLastOutSidePlayerArea);
	void OnRep_LastTakeHitInfo();
	void OnRep_IsGroggying();
	void OnRep_IsCrouched();
	void OnRep_Health(float LastHealth);
	void OnRep_GroggyHealth(float LastGroggyHealth);
	void OnRep_CharacterState();
	void OnRep_BoostGauge(float LastBoostGauge);
	void OnRep_AimOffsets(const struct FVector_NetQuantizeNormal& PrevAimOffsets);
	void OnInteractBy(class ATslCharacter* OtherCharacter);
	void OnHoldBreathStop();
	void OnHoldBreathStart();
	void OnChangeBreath(float Breath, float LastBreath, float BreathMax);
	void OnCancelInteractBy(class ATslCharacter* OtherCharacter);
	void NotHaveHealItemNotifyMessage(const struct FText& ItemName);
	void NotHaveBoostItemNotifyMessage();
	void LocalMagazineDrop(const struct FVector& InitialVelocity);
	bool IsZooming();
	bool IsVehiclePassenger();
	bool IsVehicleDriver();
	bool IsUsingRightShoulderAiming();
	bool IsUpperCollision();
	bool IsUnderwater();
	bool IsTeamMatch();
	bool IsTargeting();
	bool IsSwimming();
	bool IsSprinting();
	bool IsSpectatingCharacter();
	bool IsSitting();
	bool IsScoping();
	bool IsRunning();
	bool IsRolling();
	bool IsReviving();
	bool IsReadyState();
	bool IsQuitter();
	bool IsQuickThrowHigh();
	bool IsPeekRight();
	bool IsPeekLeft();
	bool IsParachuting();
	bool IsOutSidePlayerArea();
	bool IsMoving();
	bool IsMouseUse();
	bool IsMeleeAttacking();
	bool IsMagazineHandAttached();
	bool IsMagazineGunAttached();
	bool IsLocalOrSpectating();
	bool IsInWaterVolume();
	bool IsInVehicle();
	bool IsInteracting();
	bool IsIndoor();
	bool IsInAircraft();
	bool IsHoldingBreath();
	bool IsHitted();
	bool IsHipped();
	bool IsGroggying();
	bool IsFreelooking();
	bool IsForcingFall();
	bool IsForceRotation();
	bool IsForcedProneAfterFall();
	bool IsFirstPerson();
	bool IsFiring();
	bool IsFallingWithParachute();
	bool IsFallingFromHighAltitude();
	bool IsCycleInProgress();
	bool IsCasting();
	bool IsCameraUnderwater();
	bool IsAudioTestEnabled();
	bool IsAttacked();
	bool IsAnimDynamicsEnabled();
	bool IsAlive();
	void HiddenCrosshair();
	bool HasWeaponLeftHandIKSocket();
	bool HasWeapon(class UClass* WeaponClass);
	void HandleCapsuleCollision();
	void GiveWeapon(class UClass* WeaponClass);
	float GetWeaponReloadPlayRate();
	class AWeaponProcessor* GetWeaponProcessor();
	bool GetWeaponObstructionRemote();
	float GetWeaponMovementModifierScope();
	float GetWeaponMovementModifierAim();
	struct FTransform GetWeaponLeftHandIKTransform();
	struct FRotator GetWeaponInertia();
	struct FTransform GetWeaponHandIK_Right();
	struct FTransform GetWeaponHandIK_Left();
	float GetWeaponGunCollisionAlpha();
	class ATslWeapon_Gun* GetWeaponGun();
	float GetWeaponADSTimeModifier();
	class ATslWeapon* GetWeapon();
	bool GetWantsToJump();
	class UTslVehicleSeatComponent* GetVehicleSeatComponent();
	class AVehicleSeatActor* GetVehicleSeat();
	class UVehicleRiderComponent* GetVehicleRiderComponent();
	class APawn* GetVehiclePawn();
	TScriptInterface<class UTslVehicleInterface> GetVehicleInterface();
	class ATslPlayerState* GetTslPlayerState();
	class ATslPlayerController* GetTslPlayerController();
	float GetTPPSpringarmOffset();
	class UCurveFloat* GetTPPCameraCurve();
	class ATeam* GetTeam();
	float GetTargetingSpeedModifier();
	TEnumAsByte<enum class EStanceMode> GetStance();
	float GetSprintingSpeedModifier_Stand();
	float GetSprintingSpeedModifier_Prone();
	float GetSprintingSpeedModifier_Crouch();
	float GetSprintCurrentValue();
	float GetSpeedModifierByWeaponClass();
	struct FString GetShortPlayerName();
	float GetRunningSpeedModifier_Stand();
	float GetRunningSpeedModifier_Prone();
	float GetRunningSpeedModifier_Crouch();
	struct FName GetReactionBone(const struct FName& BoneName);
	struct FString GetPlayerName();
	bool GetParachuteLandingAssist();
	class AParachuteVehicle* GetParachute();
	float GetMaxSprintSpeed();
	float GetMaxGroundSpeedOnSlope();
	struct FString GetLocationString();
	float GetLeanRightAlpha();
	float GetLeanLeftAlpha();
	struct FRotator GetLastMoveRotation();
	class AInventoryFacade* GetInventoryFacade();
	struct FVector GetInteractObjectLocation();
	struct FString GetInteractionString();
	float GetIndoorFactor();
	bool GetDynamicCrosshairHidden();
	class UClass* GetDropPackageType();
	struct FString GetDirectionString();
	float GetDirectionalSpeedModifier(TEnumAsByte<enum class EMovementType> StanceType);
	struct FRotator GetDesiredRotation();
	class ATslWeapon* GetCurrentWeapon();
	float GetCurrentWaterSurfaceZ();
	float GetCurrentWaterDepth();
	struct FRotator GetCurrentSway();
	class UStaticMesh* GetCurrentMagazineMesh();
	struct FTransform GetCurrentMagazineLocation();
	float GetCurrentHeightFromWaterFloor();
	class USeperatedInteractionComponent* GetComponentCanInteract();
	class UObject* GetCastObject();
	struct FVector GetCameraDOF();
	class UBuffComponet* GetBuffComponent();
	class UCharacterBreathComponent* GetBreathComponent();
	TEnumAsByte<enum class EAnimWeaponType> GetAnimWeaponType();
	TEnumAsByte<enum class EAnimStance> GetAnimStance();
	float GetAimStateTimer();
	float GetAimStateAlpha();
	struct FRotator GetAimOffsets();
	struct FVector GetADSSocketOffset();
	class AActor* GetActorCanInteract();
	class UCameraComponent* GetActiveCamera();
	class UTslAccessoryComponent* GetAccessorySlot(TEnumAsByte<enum class EAccessorySlot> Slot);
	class ATslWeapon* FindWeapon(class UClass* WeaponClass);
	void EnableAudioTest();
	void DisableCollision();
	void DelayedFire();
	void ClientSoundPlay(class UAkAudioEvent* SoundAk);
	void ClientSimulationArmorDestruction(TEnumAsByte<enum class EEquipSlotID> SlotID, const struct FTransform& Impact);
	void ClientSendGroggyMessage(class ATslPlayerState* GroggyCauserPlayerState, class ATslPlayerState* VictimPlayerState, class UDamageType* GroggyCauserDamageType, TEnumAsByte<enum class EDamageReason> DamageReason, const struct FText& DamageCauserName);
	void ClientRevivedCastingWidgetShow(bool bVisible);
	void ClientPlayPickUpAnimation(const struct FVector_NetQuantize& InteractionObject);
	void ClientNotifyCrack(const struct FVector_NetQuantize& LocationRelative, float BulletVelocity);
	void ClientForceInitStance(TEnumAsByte<enum class EStanceMode> ToStance);
	void Client_PlayUnarmedAttack(int AnimationIndex);
	void CheckMuzzleCollision();
	void CheckMuzzleBulletSpawn();
	bool CanSwim();
	void Camera_AimoffsetFix_TppToFpp();
	void Camera_AimoffsetFix_FppToTpp();
	void ApplyRagdollPhysicsForce();
	void Anim_MagazineShow(bool bShow);
	void Anim_MagazineHandAttach(bool bAttach);
	bool Anim_IsMagazineVisible();
	bool AllowInteract(class ATslCharacter* OtherCharacter);
	void AddBuffMoveSpeedFactor(float MoveSpeedFactor);
};


// Class TslGame.TslBot
// 0x0010 (0x1100 - 0x10F0)
class ATslBot : public ATslCharacter
{
public:
	class UBehaviorTree*                               BotBehavior;                                      		// 0x10F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x10F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBot");
		return ptr;
	}

};


// Class TslGame.ObserverTagWidget
// 0x0010 (0x0250 - 0x0240)
class UObserverTagWidget : public UUserWidget
{
public:
	class ATslCharacter*                               Character;                                        		// 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OffsetZ;                                          		// 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Distance;                                         		// 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ObserverTagWidget");
		return ptr;
	}


	void SetCharacterIconPosition_UC(const struct FVector2D& Pos_UC, bool IsHidden);
	bool IsTeamMember();
	bool IsLastSpectatedCharacter();
};


// Class TslGame.TslVehicleInterface
// 0x0000 (0x0028 - 0x0028)
class UTslVehicleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleInterface");
		return ptr;
	}


	class USkeletalMeshComponent* GetVehicleMeshComponent();
	class ATslPlayerController* GetTslPlayerController();
};


// Class TslGame.ParachuteVehicle
// 0x0130 (0x0518 - 0x03E8)
class AParachuteVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x03E8(0x0008) MISSED OFFSET
	struct FScriptDelegate                             OnRelease;                                        		// 0x03F0(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	struct FScriptDelegate                             OnLand;                                           		// 0x0400(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	class UAkAudioEvent*                               ReleaseSound_Local;                               		// 0x0410(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ReleaseSound_Remote;                              		// 0x0418(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LandSound_Local;                                  		// 0x0420(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LandSound_Remote;                                 		// 0x0428(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FallingStartSound_Local;                          		// 0x0430(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               FallingStartSound_Remote;                         		// 0x0438(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkComponent*                                AkSoundCom;                                       		// 0x0440(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                    		// 0x0448(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParachuteVehicleMovement*                   ParachuteMovementComponent;                       		// 0x0450(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UFreeFallMovement*                           FreeFallMovementComponent;                        		// 0x0458(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                             		// 0x0460(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UDoublePhaseInteractionComponent*            InteractionComponent;                             		// 0x0468(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class ATslCharacter>                LastDriver;                                       		// 0x0470(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0478(0x0008) MISSED OFFSET
	struct FName                                       FreeFallFirstPersonCameraName;                    		// 0x0480(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       FreeFallThirdPersonCameraName;                    		// 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FreeFallCameraPitchMin;                           		// 0x0490(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FreeFallCameraPitchMax;                           		// 0x0494(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReleasingAltitude;                                		// 0x0498(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ForceReleasingAltitude;                           		// 0x049C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                               		// 0x04A0(0x0004) MISSED OFFSET
	float                                              SweepMoveHeight;                                  		// 0x04A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingHeight;                                    		// 0x04A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingDuration;                                  		// 0x04AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                               		// 0x04B0(0x0008) MISSED OFFSET
	class UClass*                                      LandingBuff;                                      		// 0x04B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                               		// 0x04C0(0x000C) MISSED OFFSET
	float                                              StuckCheckDistance;                               		// 0x04CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StuckCheckDuration;                               		// 0x04D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                               		// 0x04D4(0x000C) MISSED OFFSET
	unsigned char                                      ForwardInputRepApplied : 1;                       		// 0x04E0(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      ForwardInputRepIsForward : 1;                     		// 0x04E0(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      RightInputRepApplied : 1;                         		// 0x04E0(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      RightInputRepIsRight : 1;                         		// 0x04E0(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsReleased : 1;                                  		// 0x04E0(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsDriven : 1;                                    		// 0x04E0(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData06[0x3];                               		// 0x04E1(0x0003) MISSED OFFSET
	struct FRotator                                    InitialRotation;                                  		// 0x04E4(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     InitialVelocity;                                  		// 0x04F0(0x000C) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     RideSocketOffset;                                 		// 0x04FC(0x000C) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     LeaveSocketOffset;                                		// 0x0508(0x000C) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParachuteVehicle");
		return ptr;
	}


	void ServerRelease();
	void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);
	void OnSecondInteractBy(class ATslCharacter* Character);
	void OnRide(class ATslCharacter* Rider, class AVehicleSeatActor* Seat);
	void OnRep_IsReleased();
	void OnRep_IsDriven();
	void OnPostDriverLeave();
	void OnInteractBy(class ATslCharacter* Character);
	void OnDriverRide();
	void OnDriverLeave();
	void Land();
	bool IsStuck();
	bool IsReleased();
	bool IsDriven();
	float GetAltitudeFromFloor();
	bool CanReleaseByInput();
	bool CanRelease();
	bool AllowSecondInteractBy(class ATslCharacter* Character);
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.ReplicationTrigger
// 0x0030 (0x03B8 - 0x0388)
class AReplicationTrigger : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x0388(0x0008) MISSED OFFSET
	TArray<class AActor*>                              TargetReplicatedActors;                           		// 0x0390(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                               		// 0x03A0(0x0004) MISSED OFFSET
	int                                                ReplicationGroupCount;                            		// 0x03A4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                               		// 0x03A8(0x0004) MISSED OFFSET
	float                                              ReplicationGroupIntervalSeconds;                  		// 0x03AC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                               		// 0x03B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ReplicationTrigger");
		return ptr;
	}


	void EnableReplicationGroup();
};


// Class TslGame.ReplicationTriggerManager
// 0x0028 (0x03B0 - 0x0388)
class AReplicationTriggerManager : public AInfo
{
public:
	TArray<class UClass*>                              TargetReplicatedActorClasses;                     		// 0x0388(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate)
	float                                              TriggerRadius;                                    		// 0x0398(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	float                                              TriggerInterval;                                  		// 0x039C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	TArray<class AReplicationTrigger*>                 Triggers;                                         		// 0x03A0(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ReplicationTriggerManager");
		return ptr;
	}

};


// Class TslGame.RewardData
// 0x0028 (0x0050 - 0x0028)
class URewardData : public UDataAsset
{
public:
	float                                              DefaultScoreMultiplierByDamage;                   		// 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefaultScoreMultiplierByKill;                     		// 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<float>                                      ScoreByReverseRanking;                            		// 0x0030(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<float>                                      ScoreMultiplierByRanking;                         		// 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.RewardData");
		return ptr;
	}

};


// Class TslGame.SimpleInterpolationMovement
// 0x0098 (0x0210 - 0x0178)
class USimpleInterpolationMovement : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                              		// 0x0178(0x0018) MISSED OFFSET
	float                                              LocationInterpTime;                               		// 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x38];                              		// 0x0194(0x0038) MISSED OFFSET
	float                                              RotationInterpTime;                               		// 0x01CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                              		// 0x01D0(0x0038) MISSED OFFSET
	unsigned char                                      bUseOnlyYawRotation : 1;                          		// 0x0208(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseSweepMove : 1;                                		// 0x0209(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseSafeInterpolation : 1;                        		// 0x020A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SimpleInterpolationMovement");
		return ptr;
	}

};


// Class TslGame.FreeFallMovement
// 0x0050 (0x0260 - 0x0210)
class UFreeFallMovement : public USimpleInterpolationMovement
{
public:
	float                                              MinPitch;                                         		// 0x0210(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxPitch;                                         		// 0x0214(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxLateralSpeed;                                  		// 0x0218(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LateralAcceleration;                              		// 0x021C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LateralDeceleration;                              		// 0x0220(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LateralBrakeDeceleration;                         		// 0x0224(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalAcceleration;                             		// 0x0228(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VerticalDeceleration;                             		// 0x022C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TerminalSpeed;                                    		// 0x0230(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinAdditiveTerminalSpeed;                         		// 0x0234(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxAdditiveTerminalSpeed;                         		// 0x0238(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RotationYawRate;                                  		// 0x023C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                              		// 0x0240(0x0010) MISSED OFFSET
	float                                              InputUpdateTime;                                  		// 0x0250(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                               		// 0x0254(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.FreeFallMovement");
		return ptr;
	}


	void ServerUpdateInput(float InForwardInput, float InRightInput, float InDesiredPitchRotation, float InDesiredYawRotation);
	float GetRightInput();
	float GetForwardInput();
};


// Class TslGame.ParachuteVehicleMovement
// 0x0100 (0x0310 - 0x0210)
class UParachuteVehicleMovement : public USimpleInterpolationMovement
{
public:
	unsigned char                                      UnknownData00[0x4];                               		// 0x0210(0x0004) MISSED OFFSET
	float                                              MaxSpeed;                                         		// 0x0214(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Acceleration;                                     		// 0x0218(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Deceleration;                                     		// 0x021C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRotationYawRate;                               		// 0x0220(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationYawAcceleration;                          		// 0x0224(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RotationYawDeceleration;                          		// 0x0228(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TerminalVelocity;                                 		// 0x022C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DecreaseTerminalVelocity;                         		// 0x0230(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0234(0x0008) MISSED OFFSET
	float                                              RotationYawReplicated;                            		// 0x023C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RotationPitchReplicated;                          		// 0x0240(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              InputUpdateTime;                                  		// 0x0244(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2C];                              		// 0x0248(0x002C) MISSED OFFSET
	float                                              ParachuteDeployCoefficient;                       		// 0x0274(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              YawSpeed;                                         		// 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxForwardPitch;                                  		// 0x027C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxBackwardPitch;                                 		// 0x0280(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceForwardScale;                                		// 0x0284(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceForwardStaticSpeed;                          		// 0x0288(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VelocityLERPSpeedMin;                             		// 0x028C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VelocityLERPSpeedMax;                             		// 0x0290(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VelocityLERPValueMin;                             		// 0x0294(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VelocityLERPValueMax;                             		// 0x0298(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingPitchMin;                                  		// 0x029C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingPitchMax;                                  		// 0x02A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingValueMin;                                  		// 0x02A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingValueMax;                                  		// 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceDownAngleMin;                                		// 0x02AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceDownAngleMax;                                		// 0x02B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceGravityMax;                                  		// 0x02B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceGravitySpeedMin;                             		// 0x02B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceGravitySpeedMax;                             		// 0x02BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceGravityValueMin;                             		// 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ForceGravityValueMax;                             		// 0x02C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RollSpeedMin;                                     		// 0x02C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RollSpeedMax;                                     		// 0x02CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RollAngleMin;                                     		// 0x02D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RollAngleMax;                                     		// 0x02D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RollInterpSpeed;                                  		// 0x02D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalVelocitySpeedMin;                            		// 0x02DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalVelocitySpeedMax;                            		// 0x02E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalVelocityDampingMin;                          		// 0x02E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalVelocityDampingMax;                          		// 0x02E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                               		// 0x02EC(0x0004) MISSED OFFSET
	float                                              TraceSphereRadius;                                		// 0x02F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     TraceSphereOffset;                                		// 0x02F4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundTraceStart;                                 		// 0x0300(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundTraceEnd;                                   		// 0x0304(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundTraceDampingMin;                            		// 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GroundTraceDampingMax;                            		// 0x030C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParachuteVehicleMovement");
		return ptr;
	}


	void ServerUpdateInput(float InForwardInput, float InRotationInput);
	float GetRotationYawRate();
	float GetRotationInput();
	float GetForwardInput();
	struct FRotator GetClientRotation();
};


// Class TslGame.TslAircraftVehicleMovement
// 0x0008 (0x0218 - 0x0210)
class UTslAircraftVehicleMovement : public USimpleInterpolationMovement
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x0210(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAircraftVehicleMovement");
		return ptr;
	}

};


// Class TslGame.SpringArmInVehicleComponent
// 0x0000 (0x0390 - 0x0390)
class USpringArmInVehicleComponent : public USpringArmComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SpringArmInVehicleComponent");
		return ptr;
	}

};


// Class TslGame.StanceComponent
// 0x0078 (0x0168 - 0x00F0)
class UStanceComponent : public UActorComponent
{
public:
	struct FStanceTransitionData                       StanceTransitionData;                             		// 0x00F0(0x0060) (CPF_Edit, CPF_DisableEditOnInstance)
	TEnumAsByte<enum class EStanceMode>                CurrentStance;                                    		// 0x0150(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                              		// 0x0151(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.StanceComponent");
		return ptr;
	}


	void ServerForceInitStance();
	void ServerChangeStance(TEnumAsByte<enum class EStanceMode> ToStance);
	void OnRep_CurrentStance();
};


// Class TslGame.TslPlayerStart
// 0x0028 (0x03E0 - 0x03B8)
class ATslPlayerStart : public APlayerStart
{
public:
	TEnumAsByte<enum class EMatchStartType>            MatchStartType;                                   		// 0x03B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x03B9(0x0003) MISSED OFFSET
	float                                              StartRadius;                                      		// 0x03BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRandomRotation : 1;                              		// 0x03C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                               		// 0x03C1(0x0007) MISSED OFFSET
	TArray<class AStartActivationVolume*>              ActivationVolumes;                                		// 0x03C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                               		// 0x03D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerStart");
		return ptr;
	}


	float GetRandomStartYawRotation();
	struct FVector GetRandomStartLocation();
};


// Class TslGame.StartActivationVolume
// 0x0008 (0x03C8 - 0x03C0)
class AStartActivationVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x03C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.StartActivationVolume");
		return ptr;
	}

};


// Class TslGame.ThingActivationVolume
// 0x0000 (0x03C8 - 0x03C8)
class AThingActivationVolume : public AStartActivationVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThingActivationVolume");
		return ptr;
	}

};


// Class TslGame.InventoryFacade
// 0x0020 (0x03B0 - 0x0390)
class AInventoryFacade : public ASubActor
{
public:
	TArray<TEnumAsByte<enum class EEquipSlotID>>       AutoSwapEquipSlotID;                              		// 0x0390(0x0010) (CPF_ZeroConstructor, CPF_Config)
	class AInventory*                                  Inventory;                                        		// 0x03A0(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AEquipment*                                  Equipment;                                        		// 0x03A8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.InventoryFacade");
		return ptr;
	}


	bool IsAutoSwappable(TEnumAsByte<enum class EEquipSlotID> SlotID);
	bool HasItemByClass(class UClass* ItemClass);
	void GiveItem_Admin(class UClass* ItemClass);
	class ATslCharacter* GetOwnerCharacter();
	class AInventory* GetInventory();
	class AEquipment* GetEquipment();
};


// Class TslGame.Equipment
// 0x0050 (0x0410 - 0x03C0)
class AEquipment : public AItemSlotContainer
{
public:
	struct FScriptMulticastDelegate                    OnEquipmentUpdated;                               		// 0x03C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                              		// 0x03D0(0x0030) MISSED OFFSET
	TArray<class UEquipableItem*>                      Items;                                            		// 0x0400(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.Equipment");
		return ptr;
	}


	struct FEquipPosition WeaponIndexToEquipPosition(int WeaponIndex);
	void WeaponAttachmentSwap(const struct FEquipPosition& SourceWeapon, const struct FEquipPosition& TargetWeapon, const struct FName& ItemClassForVerify, TEnumAsByte<enum class EWeaponAttachmentSlotID> AttachmentSlotID, bool bSoundPlay);
	void UnequipItem(const struct FEquipPosition& Position, const struct FName& ItemClassForVerify, bool bSoundPlay);
	bool TryEquipItem(class UItem* Item, bool bSoundPlay);
	void PrimaryWeaponSwap(const struct FEquipPosition& EquipPosition, const struct FString& Options);
	void Items_RepNotify();
	bool IsSwapablePrimaryWeapon(const struct FEquipPosition& EquipPosition, const struct FString& Options);
	bool IsAttachableToWeapon(int WeaponIndex, class UAttachableItem* AttachableItem, bool bOnlyFree);
	class ATslCharacter* GetOwnerCharacter();
	int GetItemCountByClass(class UClass* ItemClass);
	class UEquipableItem* GetItem(const struct FEquipPosition& Position);
	class AInventoryFacade* GetInventoryFacade();
	struct FEquipPosition FindPosition(class UItem* Item);
	struct FEquipPosition FindEquipPosition(TEnumAsByte<enum class EEquipSlotID> SlotID, bool bOnlyFree);
	struct FEquipPosition FindEquipableWeaponPosition(class UEquipableItem* EquipableItem, const struct FString& Options);
	int FindAttachableWeaponIndex(class UAttachableItem* AttachableItem, const struct FString& Options);
	int EquipPositionToWeaponIndex(const struct FEquipPosition& Position);
	bool EquipItem(const struct FEquipPosition& Position, class UEquipableItem* Item, bool bCheckViaCanEquipTo, bool bSoundPlay);
	void DropItem(const struct FEquipPosition& Position, const struct FName& ItemClassForVerify, bool bIsForce, bool bSoundPlay);
	void DropAttachedItem(const struct FEquipPosition& EquipPosition, const struct FName& ItemClassForVerify, TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID, bool bSoundPlay);
	void DetachItem(const struct FEquipPosition& EquipPosition, const struct FName& ItemClassForVerify, TEnumAsByte<enum class EWeaponAttachmentSlotID> SlotID, bool bSoundPlay);
};


// Class TslGame.Inventory
// 0x0028 (0x03E8 - 0x03C0)
class AInventory : public AItemSlotContainer
{
public:
	struct FScriptMulticastDelegate                    OnInventoryUpdated;                               		// 0x03C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TArray<class UItem*>                               Items;                                            		// 0x03D0(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	float                                              MaxSpace;                                         		// 0x03E0(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.Inventory");
		return ptr;
	}


	void UseItem(int Index, const struct FName& ItemClassForVerify);
	void OnFinishUseCast(class UObject* CastObject);
	void Items_RepNotify();
	class ATslCharacter* GetOwnerCharacter();
	float GetMaxSpace();
	int GetItemCountByClass(class UClass* ItemClass);
	int GetItemCount();
	class AInventoryFacade* GetInventoryFacade();
	float GetCurrentSpace();
	TArray<struct FInventoryItem> GetAllItemsByType(class UClass* ItemSuperClass);
	TArray<struct FInventoryItem> GetAllItems();
	int GetAdditionalMaxCount(class UItem* Item);
	int FindItemIndex(class UItem* Item);
	class UItem* FindItemHasMinStack(class UClass* ItemClass);
	class UItem* FindItem(class UClass* ItemClass);
	void EquipOrDropItem(int Index, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void EquipItem(int Index, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void DropItem(int Index, const struct FName& ItemClassForVerify, const struct FString& Options, bool bSoundPlay);
	bool ConsumeItemByClass(class UClass* ItemClass, int Count);
	void AttachOrDropItem(int Index, const struct FName& ItemClassForVerify, bool bSoundPlay);
	void AttachItem(int Index, const struct FName& ItemClassForVerify, const struct FEquipPosition& EquipPosition, bool bSoundPlay);
};


// Class TslGame.ItemExplorerProxy
// 0x0020 (0x0410 - 0x03F0)
class AItemExplorerProxy : public AItemExplorer
{
public:
	struct FScriptDelegate                             OnChangeItemExplorerProxy;                        		// 0x03F0(0x0014) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x10];                              		// 0x0400(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ItemExplorerProxy");
		return ptr;
	}


	void PropagateUpdateItemList();
	void PropagateDestroyContextMenuWidget();
	void PropagateCreateAndShowContextMenuWidget(const TScriptInterface<class USlotContainerInterface>& Param);
	void Pop();
	bool IsBaseExplorer();
};


// Class TslGame.CarePackageItem
// 0x0090 (0x0578 - 0x04E8)
class ACarePackageItem : public AItemPackage
{
public:
	class UClass*                                      ParachuteClass;                                   		// 0x04E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SmokeFxClass;                                     		// 0x04F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SmokeAirFxClass;                                  		// 0x04F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      LightFxClass;                                     		// 0x0500(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SmokeTime;                                        		// 0x0508(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LimitFallSpeed;                                   		// 0x050C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       SmokeSocket;                                      		// 0x0510(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       SmokeAirSocket;                                   		// 0x0518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       LightSocket;                                      		// 0x0520(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       ParachuteSocket;                                  		// 0x0528(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LandSoundAk;                                      		// 0x0530(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslParticle*                                SmokeFx;                                          		// 0x0538(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                SmokeAirFx;                                       		// 0x0540(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                LightFx;                                          		// 0x0548(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AActor*                                      Parachute;                                        		// 0x0550(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0558(0x0008) MISSED OFFSET
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                           		// 0x0560(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AkComponent;                                      		// 0x0568(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0570(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CarePackageItem");
		return ptr;
	}

};


// Class TslGame.FloorSnapItemPackage
// 0x0018 (0x0500 - 0x04E8)
class AFloorSnapItemPackage : public AItemPackage
{
public:
	float                                              RayLength;                                        		// 0x04E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bUseWaterSurface : 1;                             		// 0x04EC(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x04ED(0x0003) MISSED OFFSET
	float                                              WaterSurfaceThreshold;                            		// 0x04F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x04F4(0x0004) MISSED OFFSET
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                           		// 0x04F8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.FloorSnapItemPackage");
		return ptr;
	}

};


// Class TslGame.NearbyInteractiveItemExplorer
// 0x0010 (0x0400 - 0x03F0)
class ANearbyInteractiveItemExplorer : public AItemExplorer
{
public:
	TArray<TWeakObjectPtr<class UObject>>              ExplorableItems;                                  		// 0x03F0(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.NearbyInteractiveItemExplorer");
		return ptr;
	}

};


// Class TslGame.ThingSpawnProcessor
// 0x0010 (0x0038 - 0x0028)
class UThingSpawnProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThingSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.SubThingSpawnProcessor
// 0x0000 (0x0028 - 0x0028)
class USubThingSpawnProcessor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SubThingSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.CombinedThingSpawnProcessor
// 0x0020 (0x0058 - 0x0038)
class UCombinedThingSpawnProcessor : public UThingSpawnProcessor
{
public:
	TArray<class UClass*>                              SubProcessorClasses;                              		// 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class USubThingSpawnProcessor*>             SubProcessors;                                    		// 0x0048(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CombinedThingSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.PackageSubThingSpawnProcessor
// 0x03D0 (0x03F8 - 0x0028)
class UPackageSubThingSpawnProcessor : public USubThingSpawnProcessor
{
public:
	class UDataTable*                                  RawItemSpawnDataTable;                            		// 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UDataTable*                                  RawItemSpawnTogetherDataTable;                    		// 0x0030(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FPackageSpotGroupProperty>           RawSpotGroupProperties;                           		// 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3B0];                             		// 0x0048(0x03B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.PackageSubThingSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.VehicleSubThingSpawnProcessor
// 0x03F0 (0x0418 - 0x0028)
class UVehicleSubThingSpawnProcessor : public USubThingSpawnProcessor
{
public:
	TArray<struct FVehicleSpotGroupProperty>           RawSpotGroupProperties;                           		// 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UDataTable*                                  RawVehicleSpawnDataTable;                         		// 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpawnZOffsetFromFloor;                            		// 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3D4];                             		// 0x0044(0x03D4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleSubThingSpawnProcessor");
		return ptr;
	}

};


// Class TslGame.Team
// 0x0050 (0x03D8 - 0x0388)
class ATeam : public AActor
{
public:
	struct FVector_NetQuantize100                      PlayerLocation;                                   		// 0x0388(0x000C) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0394(0x0004) MISSED OFFSET
	struct FString                                     PlayerName;                                       		// 0x0398(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      Health;                                           		// 0x03A8(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      HealthMax;                                        		// 0x03A9(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      GroggyHealth;                                     		// 0x03AA(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      GroggyHealthMax;                                  		// 0x03AB(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector2D                                   MapMarkerPosition;                                		// 0x03AC(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsDying : 1;                                     		// 0x03B4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bIsGroggying : 1;                                 		// 0x03B4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bQuitter : 1;                                     		// 0x03B4(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bShowMapMarker : 1;                               		// 0x03B4(0x0001) (CPF_Net, CPF_Transient)
	TEnumAsByte<enum class ETeamVehicleType>           TeamVehicleType;                                  		// 0x03B5(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int8_t                                             MemberNumber;                                     		// 0x03B6(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                               		// 0x03B7(0x0001) MISSED OFFSET
	class ATslCharacter*                               TslCharacter;                                     		// 0x03B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                               		// 0x03C0(0x0008) MISSED OFFSET
	struct FString                                     UniqueId;                                         		// 0x03C8(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.Team");
		return ptr;
	}


	void ServerSetShowMapMarker(bool bNewShowMapMarker);
	void ServerSetMapMarkerPosition(const struct FVector2D& NewMapMarkerPosition);
	bool IsShowMapMarker();
	bool IsQuitter();
	bool IsGroggying();
	bool IsDying();
	struct FString GetUniqueId();
	class ATslCharacter* GetTslCharacter();
	TEnumAsByte<enum class ETeamVehicleType> GetRideVehicle();
	struct FString GetPlayerName();
	struct FVector GetPlayerLocation();
	int GetMemberNumber();
	struct FVector2D GetMapMarkerPosition();
	float GetHealthMax();
	float GetHealth();
	float GetGroggyHealthMax();
	float GetGroggyHealth();
};


// Class TslGame.TeamMarkWidget
// 0x0040 (0x0280 - 0x0240)
class UTeamMarkWidget : public UUserWidget
{
public:
	class ATeam*                                       TeamMember;                                       		// 0x0240(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OffsetZ;                                          		// 0x0248(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VehicleOffsetZ;                                   		// 0x024C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImageSize;                                        		// 0x0250(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TopMarkGapDistance;                               		// 0x0254(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BottomMarkGapDistance;                            		// 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LeftRightMarkGapDistance;                         		// 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DiagonalPercent;                                  		// 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeadMarkInvisibleTime;                            		// 0x0264(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeadMarkInvisibleDistance;                        		// 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EMarkPosition>              TeamMarkPosition;                                 		// 0x026C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                              		// 0x026D(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TeamMarkWidget");
		return ptr;
	}


	void SetCharacterIconPosition_UC(const struct FVector2D& Pos_UC, bool OutRange, float Angle, bool IsHidden);
	void InitializeTeamMarkGrid();
};


// Class TslGame.ThingHolder
// 0x00A8 (0x0430 - 0x0388)
class AThingHolder : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                              		// 0x0388(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThingHolder");
		return ptr;
	}

};


// Class TslGame.ThingSpot
// 0x0008 (0x0390 - 0x0388)
class AThingSpot : public AActor
{
public:
	class UThingSpotComponent*                         SpotComponent;                                    		// 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThingSpot");
		return ptr;
	}

};


// Class TslGame.ThingSpotComponent
// 0x0010 (0x0310 - 0x0300)
class UThingSpotComponent : public USceneComponent
{
public:
	TEnumAsByte<enum class EThingSpotGroupType>        SpotGroupType;                                    		// 0x0300(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                               		// 0x0301(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ThingSpotComponent");
		return ptr;
	}

};


// Class TslGame.TslAccessoryComponent
// 0x0040 (0x0340 - 0x0300)
class UTslAccessoryComponent : public USceneComponent
{
public:
	struct FTransform                                  InitialTransformAttachmentScene;                  		// 0x0300(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                              		// 0x0330(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAccessoryComponent");
		return ptr;
	}


	void SetPhysicsSimulation(bool bSimulatePhysics);
	void InitSetupComponent(bool bSimulatePhysics);
};


// Class TslGame.TslAIController
// 0x0020 (0x04A0 - 0x0480)
class ATslAIController : public AAIController
{
public:
	class UBlackboardComponent*                        BlackboardComp;                                   		// 0x0480(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBehaviorTreeComponent*                      BehaviorComp;                                     		// 0x0488(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                              		// 0x0490(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAIController");
		return ptr;
	}


	void ShootEnemy();
	bool FindClosestEnemyWithLOS(class ATslCharacter* ExcludeEnemy);
	void FindClosestEnemy();
};


// Class TslGame.TslAircraftVehicle
// 0x0070 (0x0458 - 0x03E8)
class ATslAircraftVehicle : public APawn
{
public:
	class USkeletalMeshComponent*                      MeshComponent;                                    		// 0x03E8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAircraftVehicleMovement*                 MovementComponent;                                		// 0x03F0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USplineComponent*                            SplineComponent;                                  		// 0x03F8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                              		// 0x0400(0x0048) MISSED OFFSET
	float                                              TotalFlyingTime;                                  		// 0x0448(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                               		// 0x044C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAircraftVehicle");
		return ptr;
	}

};


// Class TslGame.AircraftCarePackage
// 0x0048 (0x04A0 - 0x0458)
class AAircraftCarePackage : public ATslAircraftVehicle
{
public:
	class UClass*                                      CarePackageItemSpawnerClass;                      		// 0x0458(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      CarePackageItemClass;                             		// 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FDropCarePackageTableData>           DropCarePackageTableData;                         		// 0x0468(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	class UGeneralItemSpawner*                         CarePackageItemSpawner;                           		// 0x0478(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                              		// 0x0480(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.AircraftCarePackage");
		return ptr;
	}


	bool IsPlayInEditor();
};


// Class TslGame.TransportAircraftVehicle
// 0x0078 (0x04D0 - 0x0458)
class ATransportAircraftVehicle : public ATslAircraftVehicle
{
public:
	unsigned char                                      UnknownData00[0x28];                              		// 0x0458(0x0028) MISSED OFFSET
	class UAkAudioEvent*                               RideSound;                                        		// 0x0480(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LeaveSound;                                       		// 0x0488(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkComponent*                                AkSoundCom;                                       		// 0x0490(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                             		// 0x0498(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UClass*                                      ParachuteItem;                                    		// 0x04A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UInteractionComponent*                       InteractionComponent;                             		// 0x04A8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bIsEnteredAtEjectionArea : 1;                     		// 0x04B0(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x04B1(0x0003) MISSED OFFSET
	float                                              EjectPredictionTime;                              		// 0x04B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxEjectSpeed;                                    		// 0x04B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                              		// 0x04BC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TransportAircraftVehicle");
		return ptr;
	}


	void OnRide(class ATslCharacter* Rider, class AVehicleSeatActor* Seat);
	void OnLocalPlayerRide();
	void OnLocalPlayerLeave();
	void OnLeave(class ATslCharacter* Rider, class AVehicleSeatActor* Seat);
	void OnInteractBy(class ATslCharacter* Character);
	void EnterAtEjectionArea();
	void EjectAll();
	bool AllowInteractBy(class ATslCharacter* Character);
};


// Class TslGame.TslAnimInstance
// 0x0228 (0x06C0 - 0x0498)
class UTslAnimInstance : public UAnimInstance
{
public:
	struct FScriptMulticastDelegate                    WeaponFire;                                       		// 0x0498(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    WeaponFireCycle;                                  		// 0x04A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipPrimary;                                     		// 0x04B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipSecondary;                                   		// 0x04C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EqupiSidearm;                                     		// 0x04D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipMelee;                                       		// 0x04E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrown;                                      		// 0x04F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipPrimary;                                   		// 0x0508(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipSecondary;                                 		// 0x0518(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEqupiSidearm;                                   		// 0x0528(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipMelee;                                     		// 0x0538(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnEquipThrown;                                    		// 0x0548(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ToggleFireMode;                                   		// 0x0558(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadTactical;                                   		// 0x0568(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadCharge;                                     		// 0x0578(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneStart;                                 		// 0x0588(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneStop;                                  		// 0x0598(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneSingle;                                		// 0x05A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrownGrenade;                               		// 0x05B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrownMolotov;                               		// 0x05C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    EquipThrownOther;                                 		// 0x05D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowHigh;                                        		// 0x05E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowLow;                                         		// 0x05F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowGrenadeReady;                                		// 0x0608(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowGrenadeStart;                                		// 0x0618(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowMolotovReady;                                		// 0x0628(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowMolotovStart;                                		// 0x0638(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowDrop;                                        		// 0x0648(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    LandHeavy;                                        		// 0x0658(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    LandExtreme;                                      		// 0x0668(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadCancel;                                     		// 0x0678(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    CharacterPickup;                                  		// 0x0688(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnarmedAttack;                                    		// 0x0698(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ChangeCharacterAppearance;                        		// 0x06A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                               		// 0x06B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslAnimInstance");
		return ptr;
	}


	float FindPositionFromDistanceCurve(float Distance, class UAnimSequenceBase* InAnimSequence);
};


// Class TslGame.TslHUD
// 0x0378 (0x0870 - 0x04F8)
class ATslHUD : public ATslBaseHUD
{
public:
	struct FScriptMulticastDelegate                    OnPossessPawnChange;                              		// 0x04F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDisplaySystemMessage;                           		// 0x0508(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDisplayKilledMessage;                           		// 0x0518(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnKillCountChanged;                               		// 0x0528(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyHit;                                      		// 0x0538(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamPlayerJoin;                                 		// 0x0548(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTeamPlayerRemove;                               		// 0x0558(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyStartBuff;                                		// 0x0568(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyHealAmount;                               		// 0x0578(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyRestrictingPlayArea;                      		// 0x0588(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyNextGasIn;                                		// 0x0598(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyDisplayMessage;                           		// 0x05A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyWeaponChange;                             		// 0x05B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyWeaponUnarm;                              		// 0x05C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyHeal;                                     		// 0x05D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNotifyDropSlotOnOtherContainer;                 		// 0x05E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                              		// 0x05F8(0x0030) MISSED OFFSET
	struct FCanvasIcon                                 TimePlaceBg;                                      		// 0x0628(0x0018)
	struct FCanvasIcon                                 PrimaryWeapBg;                                    		// 0x0640(0x0018)
	struct FCanvasIcon                                 SecondaryWeapBg;                                  		// 0x0658(0x0018)
	struct FCanvasIcon                                 Crosshair[0x5];                                   		// 0x0670(0x0018)
	unsigned char                                      UnknownData01[0x78];                              		// 0x06E8(0x0078) MISSED OFFSET
	class UTexture2D*                                  HitNotifyTexture;                                 		// 0x0760(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  HUDMainTexture;                                   		// 0x0768(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  HUDAssets02Texture;                               		// 0x0770(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  LowHealthOverlayTexture;                          		// 0x0778(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFont*                                       BigFont;                                          		// 0x0780(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFont*                                       NormalFont;                                       		// 0x0788(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x60];                              		// 0x0790(0x0060) MISSED OFFSET
	class UTslSceneCaptureWorld*                       SceneCaptureWorld;                                		// 0x07F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x60];                              		// 0x07F8(0x0060) MISSED OFFSET
	struct FString                                     SceneCapturePackageName;                          		// 0x0858(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData04[0x8];                               		// 0x0868(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslHUD");
		return ptr;
	}


	void TestSendSystemMessage(const struct FText& Message, float Duration);
	void TestSendImportantMessage(const struct FText& Message, float Duration);
	void TestKillMessage(const struct FString& KillerName, const struct FString& VictimName, bool bKillerIsOwner, bool bVictimIsOwner);
	void SpawnActorInSceneCaptureWorld(class UClass* ActorClass, const struct FTransform& SpawnTransform, const struct FScriptDelegate& DelegateToCall);
	void NotifyDropSlotOnOtherContainer(const TScriptInterface<class USlotContainerInterface>& Container, const TScriptInterface<class USlotInterface>& Slot, const TScriptInterface<class USlotContainerInterface>& OtherContainer);
	bool IsGameEnded();
	void InitCaptureWorld();
	void GoToLobby();
	class APawn* GetPossessPawn();
	class ATslCharacter* GetPossessCharacter();
};


// Class TslGame.LobbyHUD
// 0x00C0 (0x0930 - 0x0870)
class ALobbyHUD : public ATslHUD
{
public:
	struct FString                                     StartURL;                                         		// 0x0870(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<class UCoherentCommonBinder*>               CommonBinders;                                    		// 0x0880(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	class UAkComponent*                                AkSound;                                          		// 0x0890(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class ACameraActor*                                Camera;                                           		// 0x0898(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                              		// 0x08A0(0x0020) MISSED OFFSET
	class UClass*                                      LobbyCharacterMaleClass;                          		// 0x08C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      LobbyCharacterFemaleClass;                        		// 0x08C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                              		// 0x08D0(0x0050) MISSED OFFSET
	struct FViewTargetTransitionParams                 ViewTargetTransitionParams;                       		// 0x0920(0x0010) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LobbyHUD");
		return ptr;
	}


	void SetWidgetForBinding(int ViewIndex, class UCoherentUIGTWidget* Widget);
	struct FString GetStartUrl();
	void ClearAllWidget();
};


// Class TslGame.TslBasePlayerController
// 0x0000 (0x06B8 - 0x06B8)
class ATslBasePlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBasePlayerController");
		return ptr;
	}

};


// Class TslGame.TslEntryPlayerController
// 0x0000 (0x06B8 - 0x06B8)
class ATslEntryPlayerController : public ATslBasePlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslEntryPlayerController");
		return ptr;
	}

};


// Class TslGame.TslPlayerController
// 0x0228 (0x08E0 - 0x06B8)
class ATslPlayerController : public ATslBasePlayerController
{
public:
	unsigned char                                      UnknownData00[0x18];                              		// 0x06B8(0x0018) MISSED OFFSET
	unsigned char                                      bIsSpectated : 1;                                 		// 0x06D0(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData01[0x3];                               		// 0x06D1(0x0003) MISSED OFFSET
	struct FVector                                     CameraPeekLeftMove;                               		// 0x06D4(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     CameraPeekRightMove;                              		// 0x06E0(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                              		// 0x06EC(0x0010) MISSED OFFSET
	TEnumAsByte<enum class ECameraViewBehaviour>       CameraViewBehaviour;                              		// 0x06FC(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x33];                              		// 0x06FD(0x0033) MISSED OFFSET
	struct FVector_NetQuantizeNormal                   SpectatorAccumViewRotation;                       		// 0x0730(0x000C) (CPF_Net, CPF_Transient)
	TEnumAsByte<enum class EObserverAuthorityType>     ObserverAuthorityType;                            		// 0x073C(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x13];                              		// 0x073D(0x0013) MISSED OFFSET
	class ATslCharacter*                               SpectatorViewCharacter;                           		// 0x0750(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                              		// 0x0758(0x0010) MISSED OFFSET
	class UMeshComponent*                              SpectatorScopeMesh;                               		// 0x0768(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x40];                              		// 0x0770(0x0040) MISSED OFFSET
	TArray<struct FNearClippingLevelOverZ>             NearClippingLevelsOverZ;                          		// 0x07B0(0x0010) (CPF_ZeroConstructor, CPF_Config)
	class UVivoxComponent*                             VivoxComponent;                                   		// 0x07C0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class ATeam*>                               Teams;                                            		// 0x07C8(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<TWeakObjectPtr<class ATslCharacter>>        ReplicateTeamMembers;                             		// 0x07D8(0x0010) (CPF_ZeroConstructor)
	TArray<TWeakObjectPtr<class ATslCharacter>>        ReplicateCharacter;                               		// 0x07E8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData07[0x20];                              		// 0x07F8(0x0020) MISSED OFFSET
	float                                              DeathResultDelaySeconds;                          		// 0x0818(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x80];                              		// 0x081C(0x0080) MISSED OFFSET
	struct FPingPongSummary                            PingPongSummary;                                  		// 0x089C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData09[0x38];                              		// 0x08A8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerController");
		return ptr;
	}


	void UnreliablePong(int SeqID, int64_t DateTimeTickFromServer);
	void UnreliablePing(int SeqID, int64_t DateTimeTick);
	void Suicide();
	void SimulateInputKey(const struct FKey& Key, bool bPressed);
	void ShowTeamDeathPopup();
	void ShowPlayerControllerBindActions_Admin();
	void ShowMatchResult();
	void ShowGotoLobbyPopUp(TEnumAsByte<enum class EPopupButtonID> ButtonID);
	void ServerViewTargetReplicateUpdate();
	void ServerTryInteractByComponent(class USeperatedInteractionComponent* TargetComponent);
	void ServerTryInteract(class AActor* TargetObject);
	void ServerSuicide();
	void ServerStartInteractionByComponent(class USeperatedInteractionComponent* InteractionComponent);
	void ServerStartInteraction(class UInteractionComponent* InteractionComponent);
	void ServerSpawnVehicle();
	void ServerSetViewTarget(class AActor* NewViewTarget);
	void ServerSetThirdPerson(bool bNewThirdPerson);
	void ServerSetIsReviving(bool InbIsReviving);
	void ServerSetAccumViewRotation(const struct FVector_NetQuantizeNormal& InAccumViewRotation);
	void ServerSendPacketUnreliable(TArray<unsigned char> Packet);
	void ServerSendPacketReliable(TArray<unsigned char> Packet);
	void ServerSay(const struct FString& Msg);
	void ServerNotifyHitToGlassWindowInst(class UTslInstancedGlassWindowComponent* GlassWindowInstComponent, const struct FHitResult& Hit);
	void ServerNotifyHitToGlassWindow(class UTslGlassWindowComponent* GlassWindowComponent, const struct FHitResult& Hit);
	void ServerNextSetViewTarget(bool bIsPrev);
	void ServerMoveToVehicleSeat(int SeatIndex);
	void ServerMapLoadFinishedOnClient();
	void ServerHoldRotation(bool bEnable);
	void ServerCheat(const struct FString& Msg);
	void ServerCancelInteraction(class UObject* CastObject);
	void ServerBroadCastUsedUpdateCameraMode(const struct FName& InCameraName, bool InbFirstPerson, bool InbIsInVehicle, bool InbIsScoping);
	void ServerBroadCastCastingBar(float CastTime, const struct FText& CastName, bool OnOff);
	void ServerBEServerCommand(const struct FString& Command, const struct FString& Arg0, const struct FString& Arg1, const struct FString& Arg2);
	void ServerAdmin(const struct FString& AdminCommand);
	void SendSystemMessage(TEnumAsByte<enum class ESystemMessageType> MessageType, const struct FText& Message, float MessageDuration);
	void Say(const struct FString& Msg);
	void ReliablePong(int SeqID, int64_t DateTimeTickFromServer);
	void ReliablePing(int SeqID, int64_t DateTimeTick);
	void OnUpdateSpectatorCameraMode(class ATslCharacter* TslCharacter, const struct FName& InCameraName, bool InbFirstPerson, bool InbIsInVehicle, bool InbIsScoping);
	void OnShowCastingBarWidget(float CastTime, const struct FText& CastName, bool OnOff);
	void OnRep_Team();
	void OnRep_CameraViewBehaviour();
	void OnItemStackCountHandlingMode();
	void OnFinishInteractionCast(class UObject* CastObject);
	void OnCancelInteractionCast(class UObject* CastObject);
	void OffItemStackCountHandlingMode();
	void ObserverTeleportTo(const struct FVector& Location);
	void NextSetViewTarget();
	bool IsSpectatorState();
	bool IsSpectating();
	bool IsSameObservingCameraMode(TEnumAsByte<enum class EObserverCameraMode> CameraType);
	bool IsObserving();
	bool IsItemStackCountHandlingMode();
	bool IsGroggying();
	bool IsGameInputAllowed();
	void HideMatchResult();
	class UVivoxComponent* GetVivoxComponent();
	class ATslCharacter* GetViewTargetTslCharacter();
	class ATeam* GetViewTargetTeam();
	TArray<struct FTslPlayerMatchResultInfo> GetTslPlayerMatchResultInfos();
	class ATslCharacter* GetTslCharacter();
	struct FRotator GetTargetViewRotation();
	TArray<class ATslCharacter*> GetReplicateTeamMembers();
	TArray<class ATslCharacter*> GetReplicateCharacters();
	float GetOtherElapsedCastTime();
	float GetOtherCastTime();
	struct FText GetOtherCastingName();
	TEnumAsByte<enum class EObserverCameraMode> GetObserverCameraMode();
	TEnumAsByte<enum class EObserverAuthorityType> GetObserverAuthorityType();
	struct FText GetHudDebugText();
	TArray<class ATeam*> GetClientTeam(bool IncludeSelf);
	bool GetCanAllSpectate();
	int GetAliveTeamMemberCount();
	void DumpActorDetailByRaycast();
	void DropItem(const struct FString& ItemTypeName);
	void ClientUpdateSpectatorCameraMode(const struct FName& InCameraName, bool InbFirstPerson, bool InbIsInVehicle, bool InbIsScoping);
	void ClientStartOnlineGame();
	void ClientShowMatchResult();
	void ClientShowCastingBar(float CastTime, const struct FText& CastName, bool OnOff);
	void ClientSetTslPlayerMatchResultInfos(TArray<struct FTslPlayerMatchResultInfo> InTslPlayerMatchResultInfos);
	void ClientSetSpectatorCamera(const struct FVector& CameraLocation, const struct FRotator& CameraRotation);
	void ClientSetCanAllSpectate(bool InbCanSpectate);
	void ClientSendRoundEndEvent(bool bIsWinner, int ExpendedTimeInSeconds);
	void ClientSendPacketUnreliable(TArray<unsigned char> Packet);
	void ClientSendPacketReliable(TArray<unsigned char> Packet);
	void ClientOnCharacterRestart();
	void ClientOnCharacterDeath(bool bIsTeamMatch, bool bHasAliveTeamMember);
	void ClientNotifyStartBuff(const struct FName& BuffName, bool bStart);
	void ClientNotifySpeedBoost(float Boost);
	void ClientNotifyRestrictingPlayArea();
	void ClientNotifyNextGasIn(const struct FVector_NetQuantize& PoisonGasWarningPosition, float PoisonGasWarningRadius);
	void ClientNotifyHealAmount_Unreliable(float Heal);
	void ClientNotifyHealAmount_Reliable(float Heal);
	void ClientNotifyHealAmount(float Heal);
	void ClientNotifyHeal_Unreliable(float HealthStart, float Health, float MaxHealth);
	void ClientNotifyHeal_Reliable(float HealthStart, float Health, float MaxHealth);
	void ClientNotifyHeal(float HealthStart, float Health, float MaxHealth);
	void ClientInteractByComponent(class USeperatedInteractionComponent* TargetComponent);
	void ClientInteract(class AActor* TargetObject);
	void ClientGameStarted();
	void ClientEndOnlineGame();
	void ClientAdminCopyString(const struct FString& inString);
	void BEServer(const struct FString& Command, const struct FString& Arg0, const struct FString& Arg1, const struct FString& Arg2);
	void BEClient(const struct FString& Command);
	void Admin(const struct FString& ServerAdminCommand);
};


// Class TslGame.PerfBotPlayerController
// 0x0060 (0x0940 - 0x08E0)
class APerfBotPlayerController : public ATslPlayerController
{
public:
	int                                                AmmoClips;                                        		// 0x08E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x08E4(0x0004) MISSED OFFSET
	class UClass*                                      WeaponType;                                       		// 0x08E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                              		// 0x08F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.PerfBotPlayerController");
		return ptr;
	}


	void ServerMoveToLocation(const struct FVector& Location);
	void ClientQuit();
};


// Class TslGame.TslPlayerController_Menu
// 0x0000 (0x08E0 - 0x08E0)
class ATslPlayerController_Menu : public ATslPlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerController_Menu");
		return ptr;
	}

};


// Class TslGame.CharacterBreathBuff
// 0x0008 (0x03F0 - 0x03E8)
class ACharacterBreathBuff : public ATslBuff
{
public:
	float                                              BreathPerTick;                                    		// 0x03E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CharacterBreathBuff");
		return ptr;
	}


	class ATslCharacter* GetCharacter();
	class UCharacterBreathComponent* GetBreathComponent();
};


// Class TslGame.TslBuoyancyForceComponent
// 0x0000 (0x03A0 - 0x03A0)
class UTslBuoyancyForceComponent : public UBuoyancyForceComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBuoyancyForceComponent");
		return ptr;
	}

};


// Class TslGame.TslCameraComponent
// 0x0000 (0x0840 - 0x0840)
class UTslCameraComponent : public UCameraComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCameraComponent");
		return ptr;
	}

};


// Class TslGame.TslCharacterMovement
// 0x00C0 (0x0800 - 0x0740)
class UTslCharacterMovement : public UCharacterMovementComponent
{
public:
	float                                              MaxProneSpeed;                                    		// 0x0740(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxGroggySpeed;                                   		// 0x0744(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              JumpedHalfHeight;                                 		// 0x0748(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedToJumpModifier;                              		// 0x074C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinJumpZVelocity;                                 		// 0x0750(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxJumpZVelocity;                                 		// 0x0754(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LandingJumpDecreaseModifier;                      		// 0x0758(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoveryWalkSpeedRatePerSec;                      		// 0x075C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinWalkSpeedModifier;                             		// 0x0760(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WalkSpeedModifierUnit;                            		// 0x0764(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinStandingJumpXYSpeed;                           		// 0x0768(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpeedInWaterModifier;                             		// 0x076C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                              		// 0x0770(0x001C) MISSED OFFSET
	float                                              MaxSwimAcceleration;                              		// 0x078C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxZSpeedOutOfWaterModifier;                      		// 0x0790(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    MaxSwimmingRotationRate;                          		// 0x0794(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    SwimmingRotationAcceleration;                     		// 0x07A0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxUnderwaterSwimSpeed;                           		// 0x07AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxUnderwaterSwimAcceleration;                    		// 0x07B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BrakingDecelerationUnderwaterSwimming;            		// 0x07B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    MaxUnderwaterSwimmingRotationRate;                		// 0x07B8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    UnderwaterSwimmingRotationAcceleration;           		// 0x07C4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinimumHighAltitude;                              		// 0x07D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x07D4(0x0004) MISSED OFFSET
	float                                              MaxFallLateralSpeedAtHighAltitude;                		// 0x07D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              TerminalVelocityAtHighAltitude;                   		// 0x07DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DecreaseTerminalVelocityAtHighAltitude;           		// 0x07E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxFallAccelerationAtHighAltitude;                		// 0x07E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    FallRotationRateAtHighAltitude;                   		// 0x07E8(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AirControlAtHighAltitude;                         		// 0x07F4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AirControlBoostMultiplierAtHighAltitude;          		// 0x07F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AirControlBoostVelocityThresholdAtHighAltitude;   		// 0x07FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCharacterMovement");
		return ptr;
	}

};


// Class TslGame.TslCharacterProxy
// 0x0030 (0x07E0 - 0x07B0)
class ATslCharacterProxy : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x07B0(0x0008) MISSED OFFSET
	TArray<class UWeaponClone*>                        ArmedWeapons;                                     		// 0x07B8(0x0010) (CPF_ZeroConstructor)
	class UWeaponAnimInfoComponent*                    WeaponAnimInfoComponent;                          		// 0x07C8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              WeaponUpdateIntervalSeconds;                      		// 0x07D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                               		// 0x07D4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCharacterProxy");
		return ptr;
	}


	void UpdateEquippedWeapons();
	void UpdateCharacterAppearance();
	void UpdateArmedWeapons();
	void SetAccessorySlot(class UTslAccessoryComponent* AccessoryComponent, TEnumAsByte<enum class EAccessorySlot> Slot);
	class UTslAccessoryComponent* GetAccessorySlot(TEnumAsByte<enum class EAccessorySlot> Slot);
};


// Class TslGame.TslCharacterSpringArmComponent
// 0x00D0 (0x0460 - 0x0390)
class UTslCharacterSpringArmComponent : public USpringArmComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                               		// 0x0390(0x0004) MISSED OFFSET
	struct FVector                                     DefaultSocketOffset;                              		// 0x0394(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     IndoorSocketOffset;                               		// 0x03A0(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LeanLeftDefaultSocketOffsetAddition;              		// 0x03AC(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LeanRightDefaultSocketOffsetAddition;             		// 0x03B8(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LeftShoulderAimingSocketOffset;                   		// 0x03C4(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     RightShoulderAimingSocketOffset;                  		// 0x03D0(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LeanLeftAimedSocketOffsetAddition;                		// 0x03DC(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LeanRightAimedSocketOffsetAddition;               		// 0x03E8(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SprintSocketOffsetAddition;                       		// 0x03F4(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CrouchSocketOffsetZAddition;                      		// 0x0400(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CrouchSocketOffsetMovementZAddition;              		// 0x0404(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ProneScoketOffsetZAddition;                       		// 0x0408(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SocketOffsetInterpSpeed;                          		// 0x040C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     DefaultTargetOffset;                              		// 0x0410(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     IndoorTargetOffset;                               		// 0x041C(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AimingTargetOffset;                               		// 0x0428(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TargetOffsetInterpSpeed;                          		// 0x0434(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefaultSpringArmLength;                           		// 0x0438(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              IndoorSpringArmLength;                            		// 0x043C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AimingSpringArmLength;                            		// 0x0440(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpringArmLengthInterpSpeed;                       		// 0x0444(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AimingSpringArmLengthInterpSpeed;                 		// 0x0448(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x044C(0x0004) MISSED OFFSET
	float                                              SpringArmRestoreInterpSpeed;                      		// 0x0450(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                               		// 0x0454(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCharacterSpringArmComponent");
		return ptr;
	}

};


// Class TslGame.TslChatWidgetStyle
// 0x0988 (0x09B8 - 0x0030)
class UTslChatWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslChatStyle                               ChatStyle;                                        		// 0x0030(0x0988) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslChatWidgetStyle");
		return ptr;
	}

};


// Class TslGame.TslCheatManager
// 0x0008 (0x0080 - 0x0078)
class UTslCheatManager : public UCheatManager
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCheatManager");
		return ptr;
	}


	void ToggleVisibilityOfDestructibleComponents();
	void ToggleMatchTimer();
	void ToggleCollisionOfDestructibleComponents();
	void TestVoiceAccessToken();
	void SpawnBot();
	void SetVehicleRepRotCorrection(float AngularDeltaThreshold, float AngularInterpAlpha, float AngularRecipFixTime);
	void SetVehicleRepPosCorrection(float LinearDeltaThresholdSq, float LinearInterpAlpha, float LinearRecipFixTime, float BodySpeedThresholdSq);
	void ReturnLookAt();
	void MoveVehicleOnClient(float X, float Y, float Z);
	void LookAt(float Pitch, float Yaw, float Roll);
	void ForceMatchStart();
	void DumpVoiceDevices();
	void DumpDestructibleComponents();
	void DrawVehicleCenterOfMass();
	void CopyDebugInfo();
	void Cheat(const struct FString& Msg);
	void ChangeTeam(int NewTeamNumber);
};


// Class TslGame.TslCoherentWidget
// 0x0010 (0x0470 - 0x0460)
class UTslCoherentWidget : public UCoherentUIGTWidget
{
public:
	class UCoherentWidgetBinder*                       WidgetBinder;                                     		// 0x0460(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCoherentWidget");
		return ptr;
	}

};


// Class TslGame.TslConsole
// 0x0008 (0x0138 - 0x0130)
class UTslConsole : public UConsole
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x0130(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslConsole");
		return ptr;
	}

};


// Class TslGame.TslConsoleSetting
// 0x0020 (0x0090 - 0x0070)
class UTslConsoleSetting : public UConsoleSettings
{
public:
	TArray<struct FString>                             AutoCompleteItemPaths;                            		// 0x0070(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             AutoCompleteItemKinds;                            		// 0x0080(0x0010) (CPF_ZeroConstructor, CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslConsoleSetting");
		return ptr;
	}

};


// Class TslGame.TslCustomizableSkeletalComponent
// 0x0000 (0x03C0 - 0x03C0)
class UTslCustomizableSkeletalComponent : public UCustomizableSkeletalComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslCustomizableSkeletalComponent");
		return ptr;
	}

};


// Class TslGame.TslDamageField
// 0x0038 (0x03C0 - 0x0388)
class ATslDamageField : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                               		// 0x0388(0x0004) MISSED OFFSET
	float                                              DamageRadius;                                     		// 0x038C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             DamageFieldFX;                                    		// 0x0390(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                Damage;                                           		// 0x0398(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DamageInterval;                                   		// 0x039C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageType;                                       		// 0x03A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                              		// 0x03A8(0x0010) MISSED OFFSET
	class UClass*                                      DebuffTemplate;                                   		// 0x03B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDamageField");
		return ptr;
	}

};


// Class TslGame.TslDamageFieldContainer
// 0x0040 (0x03C8 - 0x0388)
class ATslDamageFieldContainer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x0388(0x0008) MISSED OFFSET
	TArray<struct FDamageFieldLayout>                  DamageFieldLayouts;                               		// 0x0390(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x8];                               		// 0x03A0(0x0008) MISSED OFFSET
	class UClass*                                      DamageFieldTemplate;                              		// 0x03A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      FlameInWall : 1;                                  		// 0x03B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                               		// 0x03B1(0x0003) MISSED OFFSET
	int                                                FlameMaxCountInWall;                              		// 0x03B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FlameDelayInWall;                                 		// 0x03B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                               		// 0x03BC(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDamageFieldContainer");
		return ptr;
	}

};


// Class TslGame.TslDamageType
// 0x0050 (0x0090 - 0x0040)
class UTslDamageType : public UDamageType
{
public:
	TEnumAsByte<enum class EDamageTypeCategory>        DamageTypeCategory;                               		// 0x0040(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0041(0x0007) MISSED OFFSET
	struct FCanvasIcon                                 KillIcon;                                         		// 0x0048(0x0018) (CPF_Edit, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	class UForceFeedbackEffect*                        HitForceFeedback;                                 		// 0x0060(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        KilledForceFeedback;                              		// 0x0068(0x0008) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bFallDamage : 1;                                  		// 0x0070(0x0001) (CPF_Edit, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                               		// 0x0071(0x0007) MISSED OFFSET
	TArray<struct FDamageRatioInfo>                    DamageRatioInfos;                                 		// 0x0078(0x0010) (CPF_Edit, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      HitReaction : 1;                                  		// 0x0088(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDamageType");
		return ptr;
	}

};


// Class TslGame.TslDemoSpectator
// 0x0028 (0x06E0 - 0x06B8)
class ATslDemoSpectator : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x28];                              		// 0x06B8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDemoSpectator");
		return ptr;
	}

};


// Class TslGame.TslDestructibleComponent
// 0x0000 (0x0990 - 0x0990)
class UTslDestructibleComponent : public UDestructibleComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDestructibleComponent");
		return ptr;
	}


	void ClientReceiveComponentDamage(float DamageAmount, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser);
};


// Class TslGame.TslDestructibleContainer
// 0x0008 (0x0390 - 0x0388)
class ATslDestructibleContainer : public AActor
{
public:
	unsigned char                                      bFlag : 1;                                        		// 0x0388(0x0001) (CPF_Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDestructibleContainer");
		return ptr;
	}


	void OnRep_Flag();
};


// Class TslGame.TslDoor
// 0x0288 (0x0620 - 0x0398)
class ATslDoor : public AStaticMeshActor
{
public:
	class UStaticMeshComponent*                        DoorMeshComponent;                                		// 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AkSound;                                          		// 0x03A0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UInteractionComponent*                       Interaction;                                      		// 0x03A8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                              		// 0x03B0(0x0020) MISSED OFFSET
	class UDestructibleMesh*                           DoorDestructibleMesh;                             		// 0x03D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDoorOpened : 1;                                  		// 0x03D8(0x0001) (CPF_Net)
	unsigned char                                      bReverseRotation : 1;                             		// 0x03D8(0x0001) (CPF_Net)
	unsigned char                                      UnknownData01[0x3];                               		// 0x03D9(0x0003) MISSED OFFSET
	float                                              OpenAngle;                                        		// 0x03DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               OpenSound;                                        		// 0x03E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               CloseSound;                                       		// 0x03E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 OpenCurve;                                        		// 0x03F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OpenCurveDuration;                                		// 0x03F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                               		// 0x03FC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CloseCurve;                                       		// 0x0400(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CloseCurveDuration;                               		// 0x0408(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PointDamageImpulse;                               		// 0x040C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PointDamageRadius;                                		// 0x0410(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreakingRadius;                                   		// 0x0414(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreakingImpulse;                                  		// 0x0418(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BreakingMinDamage;                                		// 0x041C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageAccumulateTimeout;                          		// 0x0420(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                               		// 0x0424(0x0004) MISSED OFFSET
	struct FName                                       TopImpactSoketName;                               		// 0x0428(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       CenterImpactSoketName;                            		// 0x0430(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BottomImpactSoketName;                            		// 0x0438(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1C0];                             		// 0x0440(0x01C0) MISSED OFFSET
	struct FDoorBreakingState                          DoorBreakingState;                                		// 0x0600(0x0001) (CPF_Net)
	unsigned char                                      UnknownData05[0x1F];                              		// 0x0601(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDoor");
		return ptr;
	}


	void OnRep_DoorOpened();
	void OnRep_DoorBreakingState();
	void OnInteractBy(class ATslCharacter* OtherCharacter);
	void ClientTakeDamage(float Damage, const struct FVector_NetQuantize& HitLocation, float DamageRadius, float Impulse);
};


// Class TslGame.TslDoorFrame
// 0x0010 (0x03A8 - 0x0398)
class ATslDoorFrame : public AStaticMeshActor
{
public:
	class UClass*                                      DoorType;                                         		// 0x0398(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        DoorMeshComponent;                                		// 0x03A0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslDoorFrame");
		return ptr;
	}

};


// Class TslGame.TslEngine
// 0x0000 (0x0D00 - 0x0D00)
class UTslEngine : public UGameEngine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslEngine");
		return ptr;
	}

};


// Class TslGame.TslEntryGameMode
// 0x0000 (0x0458 - 0x0458)
class ATslEntryGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslEntryGameMode");
		return ptr;
	}

};


// Class TslGame.TslExplosionEffect
// 0x0228 (0x05B0 - 0x0388)
class ATslExplosionEffect : public AActor
{
public:
	class UParticleSystem*                             ExplosionFX;                                      		// 0x0388(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UPointLightComponent*                        ExplosionLight;                                   		// 0x0390(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ExplosionLightFadeOut;                            		// 0x0398(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x039C(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               ExplosionSound;                                   		// 0x03A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FDecalEffectDataSet                         DecalEffectDataSet;                               		// 0x03A8(0x0168) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              DecalSpawnDelayTime;                              		// 0x0510(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x0514(0x0004) MISSED OFFSET
	struct FHitResult                                  SurfaceHit;                                       		// 0x0518(0x0088) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                              		// 0x05A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslExplosionEffect");
		return ptr;
	}


	void OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName);
};


// Class TslGame.TslExplosionReactionInterface
// 0x0000 (0x0028 - 0x0028)
class UTslExplosionReactionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslExplosionReactionInterface");
		return ptr;
	}


	void OnExplode(float DamageAmout, const struct FVector& Origin, TArray<struct FHitResult> ComponentHits, class AController* EventInstigator, class AActor* DamageCauser);
};


// Class TslGame.TslFence
// 0x0090 (0x0418 - 0x0388)
class ATslFence : public AActor
{
public:
	class USplineComponent*                            SplineComponent;                                  		// 0x0388(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	TEnumAsByte<enum class ETslFenceSelector>          BeginSelector;                                    		// 0x0390(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0391(0x0007) MISSED OFFSET
	class UStaticMesh*                                 BeginMesh1;                                       		// 0x0398(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 BeginMesh2;                                       		// 0x03A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 BeginMesh3;                                       		// 0x03A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 BeginMesh4;                                       		// 0x03B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class ETslFenceSelector>          EndSelector;                                      		// 0x03B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                               		// 0x03B9(0x0007) MISSED OFFSET
	class UStaticMesh*                                 EndMesh1;                                         		// 0x03C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 EndMesh2;                                         		// 0x03C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 EndMesh3;                                         		// 0x03D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 EndMesh4;                                         		// 0x03D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseRandomForMiddle : 1;                          		// 0x03E0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                               		// 0x03E1(0x0003) MISSED OFFSET
	float                                              UnitLengthForMiddle;                              		// 0x03E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UnitSpacingForMiddle;                             		// 0x03E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PivotOffsetForMiddle;                             		// 0x03EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRandomStream                               RandomStreamForMiddle;                            		// 0x03F0(0x0008) (CPF_Edit, CPF_ZeroConstructor)
	class UStaticMesh*                                 MiddleMesh1;                                      		// 0x03F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 MiddleMesh2;                                      		// 0x0400(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 MiddleMesh3;                                      		// 0x0408(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 MiddleMesh4;                                      		// 0x0410(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslFence");
		return ptr;
	}


	class USplineComponent* GetSplineComponent();
};


// Class TslGame.TslReactionData
// 0x0038 (0x0060 - 0x0028)
class UTslReactionData : public UDataAsset
{
public:
	float                                              DestroyDelay;                                     		// 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVehicleReactionData                        VehicleReactionData;                              		// 0x002C(0x000C) (CPF_Edit)
	struct FRadialDamageReactionData                   RadialDamageReactionData;                         		// 0x0038(0x0010) (CPF_Edit)
	struct FPointDamageReactionData                    PointDamageReactionData;                          		// 0x0048(0x0010) (CPF_Edit)
	int                                                DependancyCountBySibling;                         		// 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslReactionData");
		return ptr;
	}

};


// Class TslGame.TslReactionComponent
// 0x0040 (0x0820 - 0x07E0)
class UTslReactionComponent : public UStaticMeshComponent
{
public:
	class UTslReactionData*                            ReactionData;                                     		// 0x07E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           ReactionDM;                                       		// 0x07E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                              		// 0x07F0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslReactionComponent");
		return ptr;
	}


	void OnRep_PendingDestroy();
	void Client_ReactByVehicle(const struct FVector& Impact, const struct FVector& ImpulseDir, const struct FVector& Velocity);
	void Client_ReactByRadialDamage(float DamageAmount, const struct FVector& Origin, const struct FVector& Impact, const struct FVector& ImpulseDir, float OuterRadius);
	void Client_ReactByPointDamage(float DamageAmount, const struct FVector& Impact, const struct FVector& ImpulseDir);
};


// Class TslGame.TslBreakableFence
// 0x0068 (0x0480 - 0x0418)
class ATslBreakableFence : public ATslFence
{
public:
	class UTslReactionData*                            ReactionData;                                     		// 0x0418(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible1;                                		// 0x0420(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible2;                                		// 0x0428(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible3;                                		// 0x0430(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           BeginDestuctible4;                                		// 0x0438(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible1;                                  		// 0x0440(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible2;                                  		// 0x0448(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible3;                                  		// 0x0450(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           EndDestuctible4;                                  		// 0x0458(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible1;                               		// 0x0460(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible2;                               		// 0x0468(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible3;                               		// 0x0470(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleMesh*                           MiddleDestuctible4;                               		// 0x0478(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslBreakableFence");
		return ptr;
	}

};


// Class TslGame.TslStaticFence
// 0x0000 (0x0418 - 0x0418)
class ATslStaticFence : public ATslFence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslStaticFence");
		return ptr;
	}

};


// Class TslGame.TslFloatingVehicle
// 0x0080 (0x0468 - 0x03E8)
class ATslFloatingVehicle : public APawn
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x03E8(0x0008) MISSED OFFSET
	class USkeletalMeshComponent*                      MeshComponent;                                    		// 0x03F0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                           		// 0x03F8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslFloatingVehicleMovement*                 MovementComponent;                                		// 0x0400(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleHitComponent*                     VehicleHitComponent;                              		// 0x0408(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleCommonComponent*                  VehicleCommonComponent;                           		// 0x0410(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                             		// 0x0418(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleEffectComponent*                  VehicleEffectComponent;                           		// 0x0420(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSyncComponent*                    VehicleSyncComponent;                             		// 0x0428(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AudioComEngine;                                   		// 0x0430(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UClass*>                              ComponentsToDestroyOnDedicatedServer;             		// 0x0438(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FName                                       VehicleEnginePoint;                               		// 0x0448(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VehicleEngineRadius;                              		// 0x0450(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Health;                                           		// 0x0454(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	float                                              HealthMax;                                        		// 0x0458(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Fuel;                                             		// 0x045C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	float                                              FuelMax;                                          		// 0x0460(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslFloatingVehicle");
		return ptr;
	}


	bool IsBoosting();
	float GetVehicleEngineImmersionDepth();
	struct FVector GetVehicleAcceleration();
};


// Class TslGame.TslFloatingVehicleMovement
// 0x0040 (0x01B8 - 0x0178)
class UTslFloatingVehicleMovement : public UPawnMovementComponent
{
public:
	float                                              MaxAcceleration;                                  		// 0x0178(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Acceleration;                                     		// 0x017C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              StartAccelerationRate;                            		// 0x0180(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StopAccelerationRate;                             		// 0x0184(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxRotationYawAngle;                              		// 0x0188(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RotationYawAngle;                                 		// 0x018C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RotationYawRate;                                  		// 0x0190(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0194(0x0004) MISSED OFFSET
	class UCurveFloat*                                 DirectionalAccelerationCurve;                     		// 0x0198(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BoostModifier;                                    		// 0x01A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bIsBoosting : 1;                                  		// 0x01A4(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x01A5(0x0003) MISSED OFFSET
	float                                              ForwardInput;                                     		// 0x01A8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RotationInput;                                    		// 0x01AC(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                               		// 0x01B0(0x0004) MISSED OFFSET
	float                                              HitCharacterDuration;                             		// 0x01B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslFloatingVehicleMovement");
		return ptr;
	}


	void ServerUpdateInput(float InForwardInput, float InRotationInput, bool bInIsBoosting);
	void OnDriverLeave();
	bool IsBoosting();
	float GetRotationYawAngle();
	float GetMaxRotationYawAngle();
	float GetMaxAcceleration();
	struct FVector GetCalculatedAcceleration();
	float GetAcceleration();
};


// Class TslGame.TslGame_Menu
// 0x0000 (0x0458 - 0x0458)
class ATslGame_Menu : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGame_Menu");
		return ptr;
	}

};


// Class TslGame.TslSettings
// 0x0268 (0x0290 - 0x0028)
class UTslSettings : public UObject
{
public:
	float                                              RepDistance_Item;                                 		// 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_ItemGroup;                            		// 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Character;                            		// 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Weapon;                               		// 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Vehicle;                              		// 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Parachute;                            		// 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Door;                                 		// 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepDistance_Window;                               		// 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_Character;                           		// 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_WheeledVehicle;                      		// 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_FloatingVehicle;                     		// 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_Parachute;                           		// 0x0054(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_Aircraft;                            		// 0x0058(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RepFrequency_CarePackage;                         		// 0x005C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FRigidBodyErrorCorrection                   RepVehicle_PhysicErrorCorrection;                 		// 0x0060(0x001C) (CPF_Edit, CPF_Config)
	unsigned char                                      bBattlEyeEnabled : 1;                             		// 0x007C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bBattlEyeEnabledInPIE : 1;                        		// 0x007D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                               		// 0x007E(0x0002) MISSED OFFSET
	float                                              BattlEyeReliablePacketIntervalOnClient;           		// 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              BattlEyeReliablePacketIntervalOnServer;           		// 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              GameStateLogInterval;                             		// 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              ServerStatLogInterval;                            		// 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CharacterPositionLogInterval;                     		// 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              DestructibleComponentMaxDrawDistance;             		// 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	class UClass*                                      CharacterClassToPlay;                             		// 0x0098(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FBoneBinding>                        BoneMapping;                                      		// 0x00A0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<class UClass*>                              TestVehicleClasses;                               		// 0x00B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<class UClass*>                              TestFloatingVehicleClasses;                       		// 0x00C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	float                                              StoppedVehicleSpeedThreshold;                     		// 0x00D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              LastDriverDuration;                               		// 0x00D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              InteractableDistanceToleranceOnDedicatedServer;   		// 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              InteractableDistance_ItemDefault;                 		// 0x00DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FInteractionCollisionData                   InteractionCollisionForFPS;                       		// 0x00E0(0x0014) (CPF_Edit, CPF_Config)
	struct FInteractionCollisionData                   InteractionCollisionForTPS;                       		// 0x00F4(0x0014) (CPF_Edit, CPF_Config)
	unsigned char                                      bPreventFinishMatchInPIE : 1;                     		// 0x0108(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bEnableInitialItemDonator : 1;                    		// 0x0109(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                               		// 0x010A(0x0002) MISSED OFFSET
	float                                              InventoryMaxSpaceDefault;                         		// 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	class UTexture*                                    ErrorIconTexture;                                 		// 0x0110(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture*                                    LoadingIconTexture;                               		// 0x0118(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UObject*>                             AssetsForPackageIntegrity;                        		// 0x0120(0x0010) (CPF_ZeroConstructor)
	float                                              UICrosshairDistance;                              		// 0x0130(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              UICrosshairInterpSpeed;                           		// 0x0134(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              UICrosshairDisableDistance;                       		// 0x0138(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              GameTimeMultiplier;                               		// 0x013C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      AimOffsetRayCast : 1;                             		// 0x0140(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                               		// 0x0141(0x0003) MISSED OFFSET
	float                                              MeleeWeaponPitchMin;                              		// 0x0144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MeleeWeaponPitchMax;                              		// 0x0148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      FullRecoilRecovery : 1;                           		// 0x014C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                               		// 0x014D(0x0003) MISSED OFFSET
	struct FLevelLoadingBoostParameters                LevelLoadingBoostParameters;                      		// 0x0150(0x0010) (CPF_Edit, CPF_Config)
	TArray<struct FNearClippingValue>                  NearClippingValues;                               		// 0x0160(0x0010) (CPF_ZeroConstructor, CPF_Config)
	TArray<struct FTslGame_FCustomizableCategoryData>  CustomizableCategoryData;                         		// 0x0170(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FCustomizableActionName>             CustomizableActionNames;                          		// 0x0180(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FTslGame_FCustomizableAxisName>      CustomizableAxisNames;                            		// 0x0190(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FCustomizableMouseSensitiveName>     CustomizableMouseSensitiveNames;                  		// 0x01A0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FSurportQualityLevel>                SupportedQualityLevels;                           		// 0x01B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FScreenResolution>                   SupportedScreenResolutions;                       		// 0x01C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       MouseSensitivityCurve;                            		// 0x01D0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FStringAssetReference                       GammaCurve;                                       		// 0x01E0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	TArray<struct FString>                             CultureNames;                                     		// 0x01F0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	float                                              MinimumScreenResolutionRatio;                     		// 0x0200(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	struct FScreenResolution                           MinimumScreenResolution;                          		// 0x0204(0x0008) (CPF_Edit, CPF_Config)
	float                                              ClientSideHitLeeway;                              		// 0x020C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              ClientSideOriginDistanceLeeway;                   		// 0x0210(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              TravelDistanceLeeway;                             		// 0x0214(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseForceItemActorSpawn : 1;                      		// 0x0218(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                               		// 0x0219(0x0007) MISSED OFFSET
	TArray<struct FOverrideScalability>                OverrideScalabilities;                            		// 0x0220(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData05[0x50];                              		// 0x0230(0x0050) MISSED OFFSET
	class UCurveFloat*                                 LoadedMouseSensitivityCurve;                      		// 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UCurveFloat*                                 LoadedGammaCurve;                                 		// 0x0288(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSettings");
		return ptr;
	}


	class UTslSettings* STATIC_GetTslSettings();
};


// Class TslGame.TslGameInstance
// 0x0350 (0x0440 - 0x00F0)
class UTslGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x00F0(0x0008) MISSED OFFSET
	unsigned char                                      bUseLobbyWidget : 1;                              		// 0x00F8(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x00F9(0x0003) MISSED OFFSET
	int                                                LobbyWidgetZOrder;                                		// 0x00FC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	class ULobbyLink*                                  LobbyLink;                                        		// 0x0100(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UVivoxManager*                               VivoxManager;                                     		// 0x0108(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FTslStartParameter                          StartParamter;                                    		// 0x0110(0x0068)
	unsigned char                                      UnknownData02[0x180];                             		// 0x0178(0x0180) MISSED OFFSET
	class UClass*                                      LobbyWidgetClass;                                 		// 0x02F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x120];                             		// 0x0300(0x0120) MISSED OFFSET
	class ULobbyWidget*                                LobbyWidget;                                      		// 0x0420(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x18];                              		// 0x0428(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameInstance");
		return ptr;
	}


	bool UseLobbyWidget();
	struct FString GetStartParameterStringValue(const struct FString& Key, const struct FString& NotFoundValue);
	struct FTslStartParameter GetStartParameter();
	struct FName GetCurrentGameState();
};


// Class TslGame.TslGameMode
// 0x0280 (0x06D8 - 0x0458)
class ATslGameMode : public AGameMode
{
public:
	class UClass*                                      MalePawnClass;                                    		// 0x0458(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      PerfBotPlayerControllerClass;                     		// 0x0460(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoClear, CPF_IsPlainOldData)
	class UClass*                                      ModeControllerClass;                              		// 0x0468(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoClear, CPF_IsPlainOldData)
	TArray<class UClass*>                              AdditionalModeControllerClasses;                  		// 0x0470(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_NoClear)
	class UClass*                                      InitialItemDonatorClass;                          		// 0x0480(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FMatchPreparerClass>                 MatchPreparerClasses;                             		// 0x0488(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TEnumAsByte<enum class EMatchStartType>            MatchStartType;                                   		// 0x0498(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECameraViewBehaviour>       CameraViewBehaviour;                              		// 0x0499(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      PlayerRespawn : 1;                                		// 0x049A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                               		// 0x049B(0x0001) MISSED OFFSET
	int                                                PostMatchWaitingTime;                             		// 0x049C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                ServerQuitAfterLeavingMapTime;                    		// 0x04A0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                MinPlayers;                                       		// 0x04A4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                PlayerSpawnTryMaxCount;                           		// 0x04A8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bEnablePerfBotInPIE : 1;                          		// 0x04AC(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bEnablePerfBotLogin : 1;                          		// 0x04AD(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsPerfBotSpawnToRandomPosition : 1;              		// 0x04AE(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bCanRestartPerfBot : 1;                           		// 0x04AF(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bEnableObserverInPIE : 1;                         		// 0x04B0(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      IsBattleRoyale : 1;                               		// 0x04B1(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bStartPlayerAtMatchStart : 1;                     		// 0x04B2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bShouldSpawnAtStartSpot : 1;                      		// 0x04B3(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                               		// 0x04B4(0x0001) MISSED OFFSET
	unsigned char                                      bCanAllSpectate : 1;                              		// 0x04B5(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsGroggyMode : 1;                                		// 0x04B6(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                               		// 0x04B7(0x0001) MISSED OFFSET
	float                                              MultiplierBlueZone;                               		// 0x04B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MultiplierCarePackage;                            		// 0x04BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MultiplierRedZone;                                		// 0x04C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                EditorTestTeamMemberCount;                        		// 0x04C4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TMap<struct FString, class URewardData*>           RewardDataMap;                                    		// 0x04C8(0x0050) (CPF_Edit, CPF_ZeroConstructor)
	class URewardData*                                 RewardData;                                       		// 0x0518(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ATslPlayerState*                             WinnerPlayerState;                                		// 0x0520(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                WinnerTeam;                                       		// 0x0528(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                               		// 0x052C(0x0004) MISSED OFFSET
	class UClass*                                      ItemSpawnProcessorClass;                          		// 0x0530(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ThingSpawnProcessorClass;                         		// 0x0538(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      BasicBeltItemClassForNoBelt;                      		// 0x0540(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                               		// 0x0548(0x0008) MISSED OFFSET
	class UItemSpawnProcessor*                         ItemSpawnProcessor;                               		// 0x0550(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UThingSpawnProcessor*                        ThingSpawnProcessor;                              		// 0x0558(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UGeneralItemSpawner*                         InitialItemDonator;                               		// 0x0560(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UMatchPreparer*                              MatchPreparer;                                    		// 0x0568(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AModeController*                             ModeController;                                   		// 0x0570(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ADroppedItemGridManager*                     DroppedItemGridManager;                           		// 0x0578(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class AModeController*>                     AdditinalModeControllers;                         		// 0x0580(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData05[0x90];                              		// 0x0590(0x0090) MISSED OFFSET
	TMap<struct FString, class APlayerState*>          JoinedUserPlayerStateMap;                         		// 0x0620(0x0050) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FTeams>                              Teams;                                            		// 0x0670(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData06[0x58];                              		// 0x0680(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameMode");
		return ptr;
	}


	void SendSystemMessageToAll(TEnumAsByte<enum class ESystemMessageType> MessageType, const struct FText& Message, float MessageDuration);
	void NotifyRestrictingPlayAreaToAll();
	void NotifyNextGasInToAll(const struct FVector& PoisonGasWarningPosition, float PoisonGasWarningRadius);
	bool IsPreventFinishMatch();
	bool IsPlayInEditor();
	class UVivoxManager* GetVivoxManager();
	class UThingSpawnProcessor* GetThingSpawnProcessor();
	class ULobbyLink* GetLobbyLink();
	class UItemSpawnProcessor* GetItemSpawnProcessor();
	void GetAllPawns(TArray<class APawn*>* OutPawns);
	void FinishMatch();
	class ATslCharacter* FindCharacterByPlayerState(class APlayerState* State);
	bool CanDealDamage(class ATslPlayerState* DamageInstigator, class ATslPlayerState* DamagedPlayer);
	void BroadcastGameModeEvent(const struct FName& EventName, const struct FString& Parameter);
};


// Class TslGame.TslGameOption
// 0x0000 (0x0028 - 0x0028)
class UTslGameOption : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameOption");
		return ptr;
	}


	void STATIC_SetVoiceOutputMute(bool bIsMute);
	void STATIC_SetVoiceInputMute(bool bIsMute);
	void STATIC_SetUseTeamVoice(bool bUse);
	void STATIC_SetUsePushToTalk(bool bUse);
	void STATIC_SetUseGlobalVoice(bool bUse);
	void STATIC_SetUISoundVolume(float Volume);
	void STATIC_SetUISoundMute(bool bIsMute);
	void STATIC_SetScreenScale(float Value);
	void STATIC_SetScreenResoultion(const struct FScreenResolution& ScreenResolution);
	void STATIC_SetQualityLevel(TEnumAsByte<enum class EQualityType> Quality, int QualityLevel);
	void STATIC_SetOverallScalabilityLevel(int Value);
	void STATIC_SetMouseSensitivity(const struct FName& InMouseSensitiveName, float InMouseSensitivity);
	void STATIC_SetMotionBlur(bool bEnabled);
	void STATIC_SetMasterSoundVolume(float Volume);
	void STATIC_SetMasterSoundMute(bool bIsMute);
	void STATIC_SetInvertMouse(bool bInvert);
	void STATIC_SetGamma(float Gamma);
	void STATIC_SetFullScreen(TEnumAsByte<enum class EWindowMode> InFullscreenMode);
	void STATIC_SetEffectSoundVolume(float Volume);
	void STATIC_SetEffectSoundMute(bool bIsMute);
	void STATIC_SetCurrentCultureName(const struct FString& InCultureName);
	void STATIC_SetBGMSoundVolume(float Volume);
	void STATIC_SetBGMSoundMute(bool bIsMute);
	void STATIC_SetAxisKeys(const struct FName& AxisName, float Scale, bool bDefault, TArray<struct FTslInputKey> Keys);
	void STATIC_SetAxisKey(const struct FName& AxisName, float Scale, bool bGamepad, bool bDefault, const struct FTslInputKey& Key);
	void STATIC_SetActionKeys(const struct FName& ActionName, bool bDefault, TArray<struct FTslInputKey> Keys);
	void STATIC_SetActionKey(const struct FName& ActionName, bool bGamepad, bool bDefault, const struct FTslInputKey& Key);
	TArray<struct FName> STATIC_NotDuplicateCategoryNames(const struct FName& CatecoryName);
	bool STATIC_IsVoiceOutputMute();
	bool STATIC_IsVoiceInputMute();
	bool STATIC_IsUISoundMute();
	bool STATIC_IsModifierKey(const struct FTslInputKey& Key);
	bool STATIC_IsMasterSoundMute();
	bool STATIC_IsKeyValid(const struct FTslInputKey& Key);
	bool STATIC_IsKeyUsed(const struct FTslInputKey& Key);
	bool STATIC_IsInvertMouse();
	bool STATIC_IsGamepadKey(const struct FTslInputKey& Key);
	bool STATIC_IsEnabledMotionBlur();
	bool STATIC_IsEffectSoundMute();
	bool STATIC_IsBGMSoundMute();
	bool STATIC_GetUseTeamVoice();
	bool STATIC_GetUsePushToTalk();
	bool STATIC_GetUseGlobalVoice();
	float STATIC_GetUISoundVolume();
	TArray<struct FScreenResolution> STATIC_GetSupportedScreenResolutions();
	TArray<struct FSurportQualityLevel> STATIC_GetSupportedQualityLevels();
	float STATIC_GetScreenScale();
	struct FScreenResolution STATIC_GetScreenResolution();
	int STATIC_GetQualityLevel(TEnumAsByte<enum class EQualityType> Quality);
	int STATIC_GetOverallScalabilityLevel();
	struct FString STATIC_GetNativeLanguage(const struct FString& InCultureName);
	float STATIC_GetMouseSensitivity(const struct FName& InMouseSensitiveName);
	float STATIC_GetMasterSoundVolume();
	struct FText STATIC_GetKeyName(const struct FTslInputKey& Key);
	float STATIC_GetGamma();
	TEnumAsByte<enum class EWindowMode> STATIC_GetFullScreenMode();
	float STATIC_GetEffectSoundVolume();
	struct FString STATIC_GetDefaultCultureName();
	struct FString STATIC_GetCurrentCultureName();
	float STATIC_GetConvertedMouseSensitivity(const struct FName& InMouseSensitiveName);
	float STATIC_GetBGMSoundVolume();
	TArray<struct FTslInputKey> STATIC_GetAxisKeys(const struct FName& AxisName, float Scale, bool bDefault);
	struct FTslInputKey STATIC_GetAxisKey(const struct FName& AxisName, float Scale, bool bGamepad, bool bDefault);
	TArray<struct FQualityLevelInfo> STATIC_GetAutoQualityLevels(int WorkScale, float CPUMultiplier, float GPUMultiplier);
	TArray<struct FTslInputKey> STATIC_GetActionKeys(const struct FName& ActionName, bool bDefault);
	struct FTslInputKey STATIC_GetActionKey(const struct FName& ActionName, bool bGamepad, bool bDefault);
	TArray<struct FCustomizableMouseSensitiveName> STATIC_CustomizableMouseSensitiveNames();
	TArray<struct FTslGame_FCustomizableCategoryData> STATIC_CustomizableCategoryData();
	TArray<struct FTslGame_FCustomizableAxisName> STATIC_CustomizableAxisName();
	TArray<struct FCustomizableActionName> STATIC_CustomizableActionNames();
	TArray<struct FString> STATIC_CultureNames();
	void STATIC_ApplyMouseSensitivity();
	void STATIC_ApplyGameUserSettings(bool bCheckForCommandLineOverrides);
	void STATIC_ApplyAutoQualitySetting();
};


// Class TslGame.TslGameSession
// 0x0310 (0x06B0 - 0x03A0)
class ATslGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0x310];                             		// 0x03A0(0x0310) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameSession");
		return ptr;
	}

};


// Class TslGame.TslGameState
// 0x00A8 (0x0490 - 0x03E8)
class ATslGameState : public AGameState
{
public:
	struct FString                                     MatchShortGuid;                                   		// 0x03E8(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	int                                                NumTeams;                                         		// 0x03F8(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                RemainingTime;                                    		// 0x03FC(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bTimerPaused : 1;                                 		// 0x0400(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0401(0x0003) MISSED OFFSET
	int                                                NumJoinPlayers;                                   		// 0x0404(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumAlivePlayers;                                  		// 0x0408(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumAliveTeams;                                    		// 0x040C(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumStartPlayers;                                  		// 0x0410(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                NumStartTeams;                                    		// 0x0414(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     SafetyZonePosition;                               		// 0x0418(0x000C) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SafetyZoneRadius;                                 		// 0x0424(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     PoisonGasWarningPosition;                         		// 0x0428(0x000C) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              PoisonGasWarningRadius;                           		// 0x0434(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     RedZonePosition;                                  		// 0x0438(0x000C) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RedZoneRadius;                                    		// 0x0444(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              TotalReleaseDuration;                             		// 0x0448(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              TotalWarningDuration;                             		// 0x044C(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ElapsedWarningDuration;                           		// 0x0450(0x0004) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsGasRelease : 1;                                		// 0x0454(0x0001) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bIsTeamMatch : 1;                                 		// 0x0455(0x0001) (CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                               		// 0x0456(0x0002) MISSED OFFSET
	struct FVector                                     LerpSafetyZonePosition;                           		// 0x0458(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              LerpSafetyZoneRadius;                             		// 0x0464(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ElapsedGasReleaseDuration;                        		// 0x0468(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                              		// 0x046C(0x0014) MISSED OFFSET
	class ALevelAttribute*                             LevelAttribute;                                   		// 0x0480(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                               		// 0x0488(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameState");
		return ptr;
	}


	void UpdateWorldTimeSecondsDelta(float DeltaSeconds);
	void ShowPlayerStateList();
	void OnStartGasRelease(bool InbIsGasRelease);
	void OnRep_MatchShortGuid();
	bool IsMatchInProgressBP();
	class ALevelAttribute* GetLevelAttribute();
};


// Class TslGame.TslGameUserSettings
// 0x0080 (0x0180 - 0x0100)
class UTslGameUserSettings : public UGameUserSettings
{
public:
	float                                              ScreenScale;                                      		// 0x0100(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              Gamma;                                            		// 0x0104(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsLanMatch : 1;                                  		// 0x0108(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsMasterSoundMute : 1;                           		// 0x0109(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                               		// 0x010A(0x0002) MISSED OFFSET
	float                                              MasterSoundVolume;                                		// 0x010C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsEffectSoundMute : 1;                           		// 0x0110(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0111(0x0003) MISSED OFFSET
	float                                              EffectSoundVolume;                                		// 0x0114(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsUISoundMute : 1;                               		// 0x0118(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                               		// 0x0119(0x0003) MISSED OFFSET
	float                                              UISoundVolume;                                    		// 0x011C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsBGMSoundMute : 1;                              		// 0x0120(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                               		// 0x0121(0x0003) MISSED OFFSET
	float                                              BGMSoundVolume;                                   		// 0x0124(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsVoiceInputMute : 1;                            		// 0x0128(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bIsVoiceOutputMute : 1;                           		// 0x0129(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUsePushToTalk : 1;                               		// 0x012A(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseGlobalVoice : 1;                              		// 0x012B(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseTeamVoice : 1;                                		// 0x012C(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bSavedGraphicOption : 1;                          		// 0x012D(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bMotionBlur : 1;                                  		// 0x012E(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                               		// 0x012F(0x0001) MISSED OFFSET
	struct FString                                     CultureName;                                      		// 0x0130(0x0010) (CPF_ZeroConstructor, CPF_Config)
	struct FCustomInputSettings                        CustomInputSettins;                               		// 0x0140(0x0040) (CPF_Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameUserSettings");
		return ptr;
	}

};


// Class TslGame.TslGameViewportClient
// 0x0050 (0x04E0 - 0x0490)
class UTslGameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x50];                              		// 0x0490(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGameViewportClient");
		return ptr;
	}

};


// Class TslGame.TslGlassWindowComponent
// 0x0030 (0x0810 - 0x07E0)
class UTslGlassWindowComponent : public UStaticMeshComponent
{
public:
	float                                              DestroyDelayAfterDestructed;                      		// 0x07E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x07E4(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               DestructSound;                                    		// 0x07E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDestructibleComponent*                      DestructibleComponent;                            		// 0x07F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bReplicatedOnClient : 1;                          		// 0x07F8(0x0001) (CPF_Net)
	unsigned char                                      bDestroyed : 1;                                   		// 0x07F8(0x0001) (CPF_Net)
	unsigned char                                      UnknownData01[0x17];                              		// 0x07F9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGlassWindowComponent");
		return ptr;
	}


	void OnRep_ReplicatedOnClient(bool bLastReplicatedOnClient);
	void OnRep_Destroyed(bool bLastDestroyed);
	void ClientNotifyHit(bool bBlockingHit, const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& ImpactNormal);
};


// Class TslGame.TslGunAnimInstance
// 0x00D8 (0x0570 - 0x0498)
class UTslGunAnimInstance : public UAnimInstance
{
public:
	struct FScriptMulticastDelegate                    WeaponFire;                                       		// 0x0498(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    WeaponFireCycle;                                  		// 0x04A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    TriggerOn;                                        		// 0x04B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    TriggerOff;                                       		// 0x04C8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    Reload1;                                          		// 0x04D8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    Reload2;                                          		// 0x04E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneStart;                                 		// 0x04F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneSingle;                                		// 0x0508(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReloadByOneEnd;                                   		// 0x0518(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    WeaponCharge;                                     		// 0x0528(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FireSelect;                                       		// 0x0538(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    CancelReload;                                     		// 0x0548(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FName                                       Name_FireMode_Semi;                               		// 0x0558(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Name_FireMode_Burst;                              		// 0x0560(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       Name_FireMode_Fullauto;                           		// 0x0568(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslGunAnimInstance");
		return ptr;
	}


	void HandleFiremodeMontage(class UAnimMontage* FireModeMontage);
};


// Class TslGame.TslHealthGaugeData
// 0x0018 (0x0040 - 0x0028)
class UTslHealthGaugeData : public UDataAsset
{
public:
	TArray<struct FHealthColorData>                    HealthGaugeColors;                                		// 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FFloatInterval                              WarningRage;                                      		// 0x0038(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslHealthGaugeData");
		return ptr;
	}


	struct FLinearColor GetGaugeColor(float HealthPercent);
};


// Class TslGame.TslImpactEffect
// 0x0250 (0x05D8 - 0x0388)
class ATslImpactEffect : public AActor
{
public:
	class UParticleSystem*                             DefaultFX;                                        		// 0x0388(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             ConcreteFX;                                       		// 0x0390(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             DirtFX;                                           		// 0x0398(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             WaterFX;                                          		// 0x03A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             MetalFX;                                          		// 0x03A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             WoodFX;                                           		// 0x03B0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             GlassFX;                                          		// 0x03B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             GrassFX;                                          		// 0x03C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             FleshFX;                                          		// 0x03C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               AkSound;                                          		// 0x03D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FDecalEffectDataSet                         DecalEffectDataSet;                               		// 0x03D8(0x0168) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FHitResult                                  SurfaceHit;                                       		// 0x0540(0x0088) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleCom;                                      		// 0x05C8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AKCom;                                            		// 0x05D0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslImpactEffect");
		return ptr;
	}

};


// Class TslGame.TslInstancedGlassWindowComponent
// 0x0100 (0x0AB0 - 0x09B0)
class UTslInstancedGlassWindowComponent : public UGridInstancedStaticMeshComponent
{
public:
	class UDestructibleMesh*                           DestructibleMesh;                                 		// 0x09B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DestroyDelayAfterDestructed;                      		// 0x09B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x09BC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               DestructSound;                                    		// 0x09C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReplicatedOnClient : 1;                          		// 0x09C8(0x0001) (CPF_Net)
	unsigned char                                      UnknownData01[0x7];                               		// 0x09C9(0x0007) MISSED OFFSET
	TArray<int>                                        DestroyedInstances;                               		// 0x09D0(0x0010) (CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0xD0];                              		// 0x09E0(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslInstancedGlassWindowComponent");
		return ptr;
	}


	void OnRep_ReplicatedOnClient(bool bLastReplicatedOnClient);
	void OnRep_Destroyed();
	void ClientNotifyHit(bool bBlockingHit, const struct FVector_NetQuantize& Location, const struct FVector_NetQuantizeNormal& ImpactNormal, int InstanceIndex);
};


// Class TslGame.TslPersistentUser
// 0x0030 (0x0058 - 0x0028)
class UTslPersistentUser : public USaveGame
{
public:
	float                                              Gamma;                                            		// 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AimSensitivity;                                   		// 0x002C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bInvertedYAxis : 1;                               		// 0x0030(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0031(0x0003) MISSED OFFSET
	float                                              ScreenScalePercentage;                            		// 0x0034(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                              		// 0x0038(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPersistentUser");
		return ptr;
	}

};


// Class TslGame.TslLocalPlayer
// 0x0008 (0x0198 - 0x0190)
class UTslLocalPlayer : public ULocalPlayer
{
public:
	class UTslPersistentUser*                          PersistentUser;                                   		// 0x0190(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslLocalPlayer");
		return ptr;
	}

};


// Class TslGame.TslMenuItemWidgetStyle
// 0x01B8 (0x01E8 - 0x0030)
class UTslMenuItemWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslMenuItemStyle                           MenuItemStyle;                                    		// 0x0030(0x01B8) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMenuItemWidgetStyle");
		return ptr;
	}

};


// Class TslGame.TslMenuSoundsWidgetStyle
// 0x0038 (0x0068 - 0x0030)
class UTslMenuSoundsWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslMenuSoundsStyle                         SoundsStyle;                                      		// 0x0030(0x0038) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMenuSoundsWidgetStyle");
		return ptr;
	}

};


// Class TslGame.TslMenuWidgetStyle
// 0x0218 (0x0248 - 0x0030)
class UTslMenuWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTslMenuStyle                               MenuStyle;                                        		// 0x0030(0x0218) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslMenuWidgetStyle");
		return ptr;
	}

};


// Class TslGame.TslParticle
// 0x0058 (0x03E0 - 0x0388)
class ATslParticle : public AActor
{
public:
	unsigned char                                      bAutoDestroyOnParticleFinish : 1;                 		// 0x0388(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAutoPlaySound : 1;                               		// 0x0389(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                               		// 0x038A(0x0006) MISSED OFFSET
	TArray<struct FParticleParameter>                  DefaultParameters;                                		// 0x0390(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TEnumAsByte<enum class EAttachParent>              AttachParentType;                                 		// 0x03A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                               		// 0x03A1(0x0007) MISSED OFFSET
	struct FName                                       AttachSocketName;                                 		// 0x03A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAttachmentRule>            AttachLocationRule;                               		// 0x03B0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAttachmentRule>            AttachRotationRule;                               		// 0x03B1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<enum class EAttachmentRule>            AttachScaleRule;                                  		// 0x03B2(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                               		// 0x03B3(0x0005) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleSystem;                                   		// 0x03B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AkSound;                                          		// 0x03C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                              		// 0x03C8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslParticle");
		return ptr;
	}


	void SetParticleParameter(const struct FString& Name, float Value, bool bEnableRTPC);
	void OnParticleFinish(class UParticleSystemComponent* PSystem);
	void OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat);
	void OnParameterUpdated();
	float GetParticleParamter(const struct FString& Name, float DefaultValue);
	void AttachToParent();
};


// Class TslGame.TslParticleEnvironment
// 0x0020 (0x0400 - 0x03E0)
class ATslParticleEnvironment : public ATslParticle
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x03E0(0x0010) MISSED OFFSET
	float                                              AutoParticleActivateDistance;                     		// 0x03F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoPlayDistance;                                 		// 0x03F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                               		// 0x03F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslParticleEnvironment");
		return ptr;
	}

};


// Class TslGame.TslPhysicsVolume
// 0x0028 (0x03F8 - 0x03D0)
class ATslPhysicsVolume : public APhysicsVolume
{
public:
	class AOceanManager*                               OceanManager;                                     		// 0x03D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_IsPlainOldData)
	class UClass*                                      DefaultWaterSplash;                               		// 0x03D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      VehicleWaterSplash;                               		// 0x03E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                              		// 0x03E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPhysicsVolume");
		return ptr;
	}

};


// Class TslGame.TslPlayerCameraManager
// 0x0030 (0x1A00 - 0x19D0)
class ATslPlayerCameraManager : public APlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x30];                              		// 0x19D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerCameraManager");
		return ptr;
	}

};


// Class TslGame.TslPlayerState
// 0x01B8 (0x05D0 - 0x0418)
class ATslPlayerState : public APlayerState
{
public:
	int                                                Ranking;                                          		// 0x0418(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bKilled : 1;                                      		// 0x041C(0x0001)
	unsigned char                                      bShowMapMarker : 1;                               		// 0x041D(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                               		// 0x041E(0x0002) MISSED OFFSET
	struct FVector2D                                   MapMarkerPosition;                                		// 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bIsObserver : 1;                                  		// 0x0428(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0429(0x0003) MISSED OFFSET
	int                                                TeamNumber;                                       		// 0x042C(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FTslPlayerScores                            PlayerScores;                                     		// 0x0430(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FTslPlayerStatistics                        PlayerStatistics;                                 		// 0x043C(0x0004) (CPF_Net, CPF_Transient)
	unsigned char                                      UnknownData02[0xBC];                              		// 0x0440(0x00BC) MISSED OFFSET
	unsigned char                                      bQuitter : 1;                                     		// 0x04FC(0x0001)
	unsigned char                                      UnknownData03[0xD3];                              		// 0x04FD(0x00D3) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPlayerState");
		return ptr;
	}


	void OnRep_PlayerStatistics(const struct FTslPlayerStatistics& OldPlayerStatistics);
	bool IsQuitter();
	bool IsObserver();
	void InformAboutKill(class UDamageType* KillerDamageType, class ATslPlayerState* KilledPlayerState);
	int GetTeamNum();
	struct FString GetShortPlayerName();
	struct FTslPlayerScores GetPlayerScores();
	float GetPing();
	int GetKills();
	void BroadcastDeath(class ATslPlayerState* KillerPlayerState, class UDamageType* KillerDamageType, TEnumAsByte<enum class EDamageReason> DamageReason, const struct FText& DamageCauserName, int AlivePlayerNum, int AliveTeamNum);
};


// Class TslGame.TslPostProcessEffect
// 0x0048 (0x03D0 - 0x0388)
class ATslPostProcessEffect : public AActor
{
public:
	TArray<struct FPostProcessMaterial>                PostProcessMaterials;                             		// 0x0388(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FPostProcessEffectParameter>         DefaultPostProcessEffectParameter;                		// 0x0398(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	TArray<struct FPostProcessEffectDynamicMaterialState> PostProcessEffectDynamicMaterialStates;           		// 0x03A8(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	class APostProcessVolume*                          PostProcessVolume;                                		// 0x03B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                              		// 0x03C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslPostProcessEffect");
		return ptr;
	}


	bool SetMaterialVectorParameter(int Idx, const struct FName& ParameterName, const struct FLinearColor& Value);
	bool SetMaterialParameter(int Idx, const struct FName& ParameterName, float Value);
	bool SetMaterialBlendWeight(int Idx, float Value);
	bool SetEffectParameter(const struct FString& ParameterName, float Value);
	float GetEffectParameter(const struct FString& ParameterName, float DefaultValue);
};


// Class TslGame.TslWeapon_Projectile
// 0x0008 (0x0998 - 0x0990)
class ATslWeapon_Projectile : public ATslWeapon_Gun
{
public:
	struct FProjectileWeaponData                       ProjectileConfig;                                 		// 0x0990(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Projectile");
		return ptr;
	}


	void ServerFireProjectile(const struct FVector& Origin, const struct FVector_NetQuantizeNormal& ShootDir);
};


// Class TslGame.TslProjectile
// 0x0128 (0x04B0 - 0x0388)
class ATslProjectile : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x0388(0x0008) MISSED OFFSET
	class UProjectileMovementComponent*                MovementComp;                                     		// 0x0390(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USphereComponent*                            CollisionComp;                                    		// 0x0398(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    ParticleComp;                                     		// 0x03A0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        MeshComp;                                         		// 0x03A8(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPhysicsConstraintComponent*                 MeshConstraint;                                   		// 0x03B0(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVector                                     MeshInitialRotationRate;                          		// 0x03B8(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bSyncServerAndClientRotation : 1;                 		// 0x03C4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                               		// 0x03C5(0x000F) MISSED OFFSET
	unsigned char                                      HideMeshAtExplosion : 1;                          		// 0x03D4(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ExplosionInWater : 1;                             		// 0x03D5(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class EProjectileExplosionRotationType> ExplosionRotationType;                            		// 0x03D6(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                               		// 0x03D7(0x0001) MISSED OFFSET
	struct FName                                       ParticleToMeshAttachPointName;                    		// 0x03D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                               		// 0x03E0(0x0008) MISSED OFFSET
	class UClass*                                      ExplosionTemplate;                                		// 0x03E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ExplosionTemplateInAir;                           		// 0x03F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ExplosionTemplateInWater;                         		// 0x03F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               ImpactSound;                                      		// 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAkComponent*                                AkComp;                                           		// 0x0408(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                               		// 0x0410(0x0008) MISSED OFFSET
	TEnumAsByte<enum class EProjectileExplodeState>    ExplodeState;                                     		// 0x0418(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bActiveParticle : 1;                              		// 0x0419(0x0001) (CPF_Net, CPF_Transient)
	unsigned char                                      bDoTick : 1;                                      		// 0x0419(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData05[0x2];                               		// 0x041A(0x0002) MISSED OFFSET
	struct FRotator                                    ClientMeshRotation;                               		// 0x041C(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    ServerMeshRotation;                               		// 0x0428(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              VelocityStopStepDistance;                         		// 0x0434(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     LastStepLocation;                                 		// 0x0438(0x000C) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StepBuffer;                                       		// 0x0444(0x0004) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalInterpSpeed;                                 		// 0x0448(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bConstantInterpStep : 1;                          		// 0x044C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                               		// 0x044D(0x0003) MISSED OFFSET
	float                                              VelocityCheckTimerTick;                           		// 0x0450(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                               		// 0x0454(0x0004) MISSED OFFSET
	struct FProjectileData                             ProjectileConfig;                                 		// 0x0458(0x0028) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData08[0x30];                              		// 0x0480(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslProjectile");
		return ptr;
	}


	void SetMeshRotationFromServer();
	void OnRep_Exploded();
	void OnRep_ClientActivate();
	void OnRep_ActiveParticle();
	void OnImpact(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExplodeBP(const struct FVector& Location, const struct FRotator& Rotation, const struct FHitResult& Impact, float Radius);
	void CheckVelocityForStart();
};


// Class TslGame.TslProjectileMolotov
// 0x0050 (0x0500 - 0x04B0)
class ATslProjectileMolotov : public ATslProjectile
{
public:
	TEnumAsByte<enum class EMolotovSimulationType>     MolotovSimulation;                                		// 0x04B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x04B1(0x0007) MISSED OFFSET
	class UClass*                                      DamageFieldContainerTemplate;                     		// 0x04B8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageFieldContainerInWallTemplate;               		// 0x04C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageFieldTemplate;                              		// 0x04C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageFieldTemplateInWall;                        		// 0x04D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      FragmentProjectileClass;                          		// 0x04D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                ImpactMaxCount;                                   		// 0x04E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                              		// 0x04E4(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslProjectileMolotov");
		return ptr;
	}

};


// Class TslGame.TslSceneCaptureComponent2D
// 0x0010 (0x08C0 - 0x08B0)
class UTslSceneCaptureComponent2D : public USceneCaptureComponent2D
{
public:
	class UWorld*                                      World;                                            		// 0x08B0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x08B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSceneCaptureComponent2D");
		return ptr;
	}


	void CaptureScene();
};


// Class TslGame.TslSceneCaptureWorld
// 0x0078 (0x00A0 - 0x0028)
class UTslSceneCaptureWorld : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                              		// 0x0028(0x0028) MISSED OFFSET
	class UWorld*                                      World;                                            		// 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                              		// 0x0058(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSceneCaptureWorld");
		return ptr;
	}


	void InitWorld(class UGameInstance* GameInstance, const struct FString& SceneCapturePackageName);
	void DestroyWorld();
};


// Class TslGame.TslServerParticle
// 0x0028 (0x03B0 - 0x0388)
class ATslServerParticle : public AActor
{
public:
	unsigned char                                      bAutoDestroyOnParticleFinish : 1;                 		// 0x0388(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAutoPlaySound : 1;                               		// 0x0389(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                               		// 0x038A(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleSystem;                                   		// 0x0390(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AkSound;                                          		// 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                              		// 0x03A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslServerParticle");
		return ptr;
	}


	void StopParticleMulticast();
	void OnParticleFinish(class UParticleSystemComponent* PSystem);
};


// Class TslGame.TslSingleton
// 0x00F0 (0x0118 - 0x0028)
class UTslSingleton : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                              		// 0x0028(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSingleton");
		return ptr;
	}

};


// Class TslGame.TslSpectatorPawn
// 0x00B8 (0x04C8 - 0x0410)
class ATslSpectatorPawn : public ASpectatorPawn
{
public:
	class USpringArmComponent*                         FreeCameraSpringArmComponent;                     		// 0x0410(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCameraComponent*                            FreeCameraComponent;                              		// 0x0418(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpringArmComponent*                         ThirdPersonSpringArm;                             		// 0x0420(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCamera;                                		// 0x0428(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class USpringArmInVehicleComponent*                ThirdPersonSpringArmInVehicle;                    		// 0x0430(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCameraComponent*                            ThirdPersonCameraInVehicle;                       		// 0x0438(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UArrowComponent*                             AudioListener;                                    		// 0x0440(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0448(0x0004) MISSED OFFSET
	float                                              DeathFollowBlendTime;                             		// 0x044C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class EViewTargetBlendFunction>   DeathFollowBlendFunc;                             		// 0x0450(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0451(0x0003) MISSED OFFSET
	float                                              DeathFollowBlendExp;                              		// 0x0454(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DeathFollowTime;                                  		// 0x0458(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                               		// 0x045C(0x0004) MISSED OFFSET
	float                                              DeathFollowDistance;                              		// 0x0460(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                               		// 0x0464(0x0004) MISSED OFFSET
	struct FName                                       DeathFollowBone;                                  		// 0x0468(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                               		// 0x0470(0x0004) MISSED OFFSET
	float                                              LocationUpdateIntervalSeconds;                    		// 0x0474(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                               		// 0x0478(0x0004) MISSED OFFSET
	float                                              FreeCameraBlendTime;                              		// 0x047C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class EViewTargetBlendFunction>   FreeCameraBlendFunc;                              		// 0x0480(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                               		// 0x0481(0x0003) MISSED OFFSET
	float                                              FreeCameraBlendExp;                               		// 0x0484(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FreeCameraBlendPitch;                             		// 0x0488(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              FollowCameraZoomSpeed;                            		// 0x048C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ThirdPersonCameraBlendTime;                       		// 0x0490(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class EViewTargetBlendFunction>   ThirdPersonCameraBlendFunc;                       		// 0x0494(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                               		// 0x0495(0x0003) MISSED OFFSET
	float                                              ThirdPersonCameraBlendExp;                        		// 0x0498(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LimitTargetArmLength;                             		// 0x049C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       AttachSocket;                                     		// 0x04A0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ATslCharacter*                               DeathCharacter;                                   		// 0x04A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SpectatableCheckLength;                           		// 0x04B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpectatableCheckScreenRatio;                      		// 0x04B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x10];                              		// 0x04B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSpectatorPawn");
		return ptr;
	}


	void SetShowPlayerInfoDistance(float Distance);
	void OnViewTargetUpdate(class AActor* NewViewTarget);
	void OnToggleShowObseverTagWeapon();
	void OnToggleObseverTagWidget();
	void OnStopSlowMove();
	void OnStopFastMove();
	void OnStartSlowMove();
	void OnStartFastMove();
	bool IsObserverTagWeaponShow();
	class ATslCharacter* GetSpectatableCharacter();
	float GetShowPlayerInfoDistance();
	bool GetObserverTagShow();
	class ATslCharacter* GetLastSpectatedCharacter();
	TEnumAsByte<enum class EObserverCameraMode> GetCameraMode();
};


// Class TslGame.TslSpectatorPawnMovement
// 0x0028 (0x01C0 - 0x0198)
class UTslSpectatorPawnMovement : public USpectatorPawnMovement
{
public:
	unsigned char                                      UnknownData00[0x4];                               		// 0x0198(0x0004) MISSED OFFSET
	float                                              FastMoveModifier;                                 		// 0x019C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SlowMoveModifier;                                 		// 0x01A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinFreeMoveSpeed;                                 		// 0x01A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxFreeMoveSpeed;                                 		// 0x01A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinFreeMoveSpeedHeight;                           		// 0x01AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxFreeMoveSpeedHeight;                           		// 0x01B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AbsoluteMinZ;                                     		// 0x01B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AbsoluteMaxZ;                                     		// 0x01B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslSpectatorPawnMovement");
		return ptr;
	}

};


// Class TslGame.TslStatics
// 0x0000 (0x0028 - 0x0028)
class UTslStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslStatics");
		return ptr;
	}


	void STATIC_UseHighPrecisionMouseMovement(class APlayerController* PlayerController);
	void STATIC_SetWorldOriginByDistance(class APlayerController* Controller, float XYDistanceToShift);
	void STATIC_SetWorldOrigin(class APlayerController* Controller);
	void STATIC_SetAnimationAkSwitch(class ACharacter* Character, const struct FString& SwitchGroup, const struct FString& SwitchState);
	void STATIC_SetAnimationAkRTPC(class ACharacter* Character, const struct FString& RTPCName, float RTPCValue);
	struct FVector STATIC_ServerPositionToLocal(class UObject* WorldContextObject, const struct FVector& Server);
	int STATIC_SafeDivide_IntInt(int A, int B, int DivideByZeroValue);
	float STATIC_SafeDivide_FloatFloat(float A, float B, float DivideByZeroValue);
	void STATIC_ReleaseMouseCaptureFromPlayerController(class APlayerController* PlayerController);
	struct FVector STATIC_ProjectPointToFloor(class UObject* WorldContextObject, const struct FVector& Origin, float Length, bool* bOutHit);
	struct FString STATIC_PhysicalSurfaceToString(TEnumAsByte<enum class EPhysicalSurface> Type);
	struct FName STATIC_PhysicalSurfaceToName(TEnumAsByte<enum class EPhysicalSurface> Type);
	struct FVector STATIC_LocalPositionToServer(class UObject* WorldContextObject, const struct FVector& Local);
	bool STATIC_LineSphereIntersection(const struct FVector& Center, const struct FVector& Origion, const struct FVector& Direction, float Radius, struct FVector* Intersection1, struct FVector* Intersection2);
	bool STATIC_IsShipping();
	bool STATIC_IsServerActor(class AActor* Actor);
	bool STATIC_IsMapFullyLoaded(class UWorld* World);
	bool STATIC_IsClientActor(class AActor* Actor);
	float STATIC_GetWaterSurfaceHeight(class APhysicsVolume* PhysicsVolume, const struct FVector& CurLocation);
	class UTslVehicleSeatComponent* STATIC_GetVehicleSeatComponent(class AActor* Actor);
	class UTslVehicleCommonComponent* STATIC_GetVehicleCommonComponent(class AActor* Actor);
	class ATslPlayerController* STATIC_GetTslPlayerController(class APawn* Pawn);
	class ATslGameState* STATIC_GetTslGameState(class UObject* WorldContextObject);
	class ATslCharacter* STATIC_GetTslCharacter(class UObject* WorldContextObject);
	class UPhysicalMaterial* STATIC_GetSimplePhysicalMaterial(class UPrimitiveComponent* PrimitiveComponent);
	struct FVector STATIC_GetServerLocation(class UObject* ActorOrComponent);
	float STATIC_GetNextPlayzoneRadius(class UObject* WorldContextObject);
	struct FVector STATIC_GetNextPlayzonePosition(class UObject* WorldContextObject);
	struct FString STATIC_GetGameVersion();
	float STATIC_GetBluezoneRadius(class UObject* WorldContextObject);
	struct FVector STATIC_GetBluezonePosition(class UObject* WorldContextObject);
	bool STATIC_ApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, const struct FAttackId& AttackId, bool bIsTargetDestructible, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<enum class ECollisionChannel> DamagePreventionChannel, bool bExplode);
	bool STATIC_ApplyRadialDamage(class UObject* WorldContextObject, float BaseDamage, const struct FVector& Origin, float DamageRadius, class UClass* DamageTypeClass, TArray<class AActor*> IgnoreActors, const struct FAttackId& AttackId, bool bIsTargetDestructible, class AActor* DamageCauser, class AController* InstigatedByController, bool bDoFullDamage, TEnumAsByte<enum class ECollisionChannel> DamagePreventionChannel, bool bExplode);
	void STATIC_ApplyDamage(class AActor* DamagedActor, float BaseDamage, class AController* EventInstigator, class AActor* DamageCauser, class UClass* DamageTypeClass, const struct FAttackId& AttackId);
};


// Class TslGame.TslStreamer
// 0x0020 (0x0048 - 0x0028)
class UTslStreamer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                              		// 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslStreamer");
		return ptr;
	}


	void OnOriginShiftedInternal(class UWorld* InWorld, const struct FIntVector& From, const struct FIntVector& To);
	void OnLevelChangedInternal();
};


// Class TslGame.FoliageCollisionStreamer
// 0x0068 (0x00B0 - 0x0048)
class UFoliageCollisionStreamer : public UTslStreamer
{
public:
	unsigned char                                      bEnabled : 1;                                     		// 0x0048(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0049(0x0003) MISSED OFFSET
	float                                              MinDistance;                                      		// 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MaxQueryDistance;                                 		// 0x0050(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              MaxSimulationDistance;                            		// 0x0054(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bUseOnlyQueryAndPhysics : 1;                      		// 0x0058(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x57];                              		// 0x0059(0x0057) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.FoliageCollisionStreamer");
		return ptr;
	}

};


// Class TslGame.LODActorStreamer
// 0x0038 (0x0080 - 0x0048)
class ULODActorStreamer : public UTslStreamer
{
public:
	unsigned char                                      bEnabled : 1;                                     		// 0x0048(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0049(0x0003) MISSED OFFSET
	float                                              PreLoadDistance;                                  		// 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                PerFrameShowCount;                                		// 0x0050(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                PerFrameShowCountLimit;                           		// 0x0054(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TArray<struct FFloatRange>                         MinDrawDistanceOverride;                          		// 0x0058(0x0010) (CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      UnknownData01[0x18];                              		// 0x0068(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.LODActorStreamer");
		return ptr;
	}

};


// Class TslGame.ParticleEnvrionmentStreamer
// 0x0018 (0x0060 - 0x0048)
class UParticleEnvrionmentStreamer : public UTslStreamer
{
public:
	unsigned char                                      bEnabled : 1;                                     		// 0x0048(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0049(0x0003) MISSED OFFSET
	float                                              ToleranceDeactiveDistance;                        		// 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                              		// 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParticleEnvrionmentStreamer");
		return ptr;
	}

};


// Class TslGame.TslStreamerManager
// 0x0028 (0x03B0 - 0x0388)
class ATslStreamerManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x0388(0x0008) MISSED OFFSET
	TArray<class UClass*>                              StreamerClasses;                                  		// 0x0390(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UTslStreamer*>                        TslStreamers;                                     		// 0x03A0(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslStreamerManager");
		return ptr;
	}

};


// Class TslGame.TslUserWidget
// 0x0020 (0x0260 - 0x0240)
class UTslUserWidget : public UUserWidget
{
public:
	class UInputComponent*                             InputComponentAxis;                               		// 0x0240(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_DuplicateTransient, CPF_IsPlainOldData)
	class ATslCharacter*                               CachedTslCharacter;                               		// 0x0248(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslGameState*                               CachedTslGameState;                               		// 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslCharacter*                               CachedViewTargetTslCharacter;                     		// 0x0258(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslUserWidget");
		return ptr;
	}


	void StopListeningForAllInputAxises();
	void ListenForInputAxis(const struct FName& AxisName, float Scale, bool bConsume, const struct FScriptDelegate& Callback);
	class ATslCharacter* GetCachedViewTargetTslCharacter();
	class ATslGameState* GetCachedGameState();
	class ATslCharacter* GetCachedCharacter();
};


// Class TslGame.BlockInputUserWidget
// 0x0028 (0x0288 - 0x0260)
class UBlockInputUserWidget : public UTslUserWidget
{
public:
	unsigned char                                      bWhiteList : 1;                                   		// 0x0260(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0261(0x0007) MISSED OFFSET
	TArray<struct FBlockAction>                        BlockActions;                                     		// 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FName>                               BlockAxises;                                      		// 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.BlockInputUserWidget");
		return ptr;
	}

};


// Class TslGame.MapGridWidget
// 0x00F0 (0x0350 - 0x0260)
class UMapGridWidget : public UTslUserWidget
{
public:
	float                                              ZoomLevel;                                        		// 0x0260(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShowGridZoomLevel;                                		// 0x0264(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveFloat*                                 ViewRatioCurve;                                   		// 0x0268(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          MapMaterial;                                      		// 0x0270(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRectangleViewMode : 1;                           		// 0x0278(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                               		// 0x0279(0x0007) MISSED OFFSET
	class UTexture2D*                                  MapTexture;                                       		// 0x0280(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFont*                                       GridFont;                                         		// 0x0288(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FString>                             GridTextHorizentalArray;                          		// 0x0290(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FString>                             GridTextVerticalArray;                            		// 0x02A0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FLinearColor                                ColorLargeGrid;                                   		// 0x02B0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ColorSmallGrid;                                   		// 0x02C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ColorText;                                        		// 0x02D0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ColorSafetyZone;                                  		// 0x02E0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ColorRedZone;                                     		// 0x02F0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThicknessLargeGrid;                               		// 0x0300(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThicknessSmallGrid;                               		// 0x0304(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                ColorPoisonGasWarning;                            		// 0x0308(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDrawGridLine : 1;                                		// 0x0318(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDrawGridText : 1;                                		// 0x0319(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x16];                              		// 0x031A(0x0016) MISSED OFFSET
	class UMaterialInstanceDynamic*                    MatInst;                                          		// 0x0330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                              		// 0x0338(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.MapGridWidget");
		return ptr;
	}


	void UpdateZoomAndWidgetSize(float Zoom, const struct FVector2D& WidgetSize);
	void UpdateWidgetSize_UC(const struct FVector2D& WidgetSize);
	void UpdateRectangleViewByWidgetSize(const struct FVector2D& WidgetSize);
	void UpdateRectangleView();
	struct FVector2D UCtoMC(const struct FVector2D& UC);
	void SetZoomLevel(float NewZoomLevel);
	void SetImageBrush(class UMaterialInstanceDynamic* NewMatInst);
	void SetCharacterIconPositionAndRotation_UC(const struct FVector2D& Pos_UC, float Angle);
	void SetCenter_MC(const struct FVector2D& Center);
	struct FVector2D MCtoUC(const struct FVector2D& MapCoord);
	float GetZoomLevel();
	struct FVector2D GetWidgetSize();
	struct FVector2D GetWidgetPosition();
	struct FVector2D GetScreenOffset();
	void GetMapImageWigetSizeAndImageOffset(struct FVector2D* WidgetSize, struct FVector2D* ImageOffset);
	void DrawRedZone_UC(const struct FVector2D& Center_UC, float Radius_UC);
	void DrawMarker_UC(const struct FVector2D& MarkerCenter_UC);
	void CursorUCtoCenterMC(const struct FVector2D& UC, struct FVector2D* Offest_MC, bool* bUpdate);
	struct FVector2D ClampPositionByWidgetSize_UC(const struct FVector2D& Positon, const struct FVector2D& WidgetSize);
	struct FVector2D ClampPosition_UC(const struct FVector2D& Positon);
	void AddCenter_UC(const struct FVector2D& Offset_UC);
};


// Class TslGame.TslVehicleCommonComponent
// 0x0080 (0x0170 - 0x00F0)
class UTslVehicleCommonComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnBreak;                                          		// 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRepair;                                         		// 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDeath;                                          		// 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHealthChange;                                   		// 0x0120(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFuelChange;                                     		// 0x0130(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      bIsDying : 1;                                     		// 0x0140(0x0001) (CPF_Edit, CPF_Net, CPF_EditConst)
	unsigned char                                      bIsBroken : 1;                                    		// 0x0140(0x0001) (CPF_Edit, CPF_Net, CPF_EditConst)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0141(0x0003) MISSED OFFSET
	float                                              Health;                                           		// 0x0144(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              HealthMax;                                        		// 0x0148(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Fuel;                                             		// 0x014C(0x0004) (CPF_Edit, CPF_Net, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	float                                              FuelMax;                                          		// 0x0150(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x0154(0x0004) MISSED OFFSET
	class UClass*                                      VehicleExplosionDamageType;                       		// 0x0158(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<TEnumAsByte<enum class EDamageTypeCategory>> CharacterDamageIgnores;                           		// 0x0160(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleCommonComponent");
		return ptr;
	}


	void SetVehicleFuelPercent(float Percent);
	void Repair();
	void OnRep_Health(float LastHealth);
	void OnRep_Fuel(float LastFuel);
	void OnRep_Dying();
	void OnRep_Broken();
	bool IsDying();
	bool IsBroken();
	float GetVehicleHealthPercent();
	float GetVehicleHealth();
	float GetVehicleFuelPercent();
	float GetVehicleFuel();
	float GetVehicleBaseHealth();
	float GetVehicleBaseFuel();
	bool CanIgnoreCharacterDamage(TEnumAsByte<enum class EDamageTypeCategory> DamageTypeCategory);
	void Break();
	void AddVehicleFuel(float Delta);
};


// Class TslGame.TslVehicleEffectComponent
// 0x0150 (0x0240 - 0x00F0)
class UTslVehicleEffectComponent : public UActorComponent
{
public:
	class UMeshComponent*                              MeshComponent;                                    		// 0x00F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                EngineSoundComponent;                             		// 0x00F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVehicleEffectInfo                          VehicleEffectInfo;                                		// 0x0100(0x00D0) (CPF_Edit, CPF_DisableEditOnInstance)
	class ATslParticle*                                MufflerEffect;                                    		// 0x01D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                Muffler2Effect;                                   		// 0x01D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                BoostEffect;                                      		// 0x01E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                Boost2Effect;                                     		// 0x01E8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                DamagedEffect;                                    		// 0x01F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                ExplosionEffect;                                  		// 0x01F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                FrontTrailEffect;                                 		// 0x0200(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                RearTrailEffect;                                  		// 0x0208(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                ThrusterEffect;                                   		// 0x0210(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                Thruster2Effect;                                  		// 0x0218(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                              		// 0x0220(0x0018) MISSED OFFSET
	unsigned char                                      bRPMOverride : 1;                                 		// 0x0238(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleEffectComponent");
		return ptr;
	}


	void SetEngineSoundRTPC(const struct FString& RTPC, float Value);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnHealthChange(float CurrentHealth, float LastHealth, float HealthMax, bool bIsDying);
	void OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
	class UAkComponent* GetEngineSoundComponent();
};


// Class TslGame.TslVehicleHitComponent
// 0x0120 (0x0210 - 0x00F0)
class UTslVehicleHitComponent : public UActorComponent
{
public:
	class UMeshComponent*                              MeshComponent;                                    		// 0x00F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              HitCharacterDuration;                             		// 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                              		// 0x00FC(0x0054) MISSED OFFSET
	float                                              LeaveCharacterIgnoreDuration;                     		// 0x0150(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CharacterHitMinimumVehicleSpeed;                  		// 0x0154(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CharacterDamageVelocityUnitMultiplier;            		// 0x0158(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CharacterDamageMassUnitMultiplier;                		// 0x015C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CharacterDamageSpeedCurve;                        		// 0x0160(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCurveFloat*                                 CharacterDamageMassCurve;                         		// 0x0168(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumCharacterDamage;                           		// 0x0170(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CharacterLaunchSpeedMultiplier;                   		// 0x0174(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MinimumCharacterLaunchSpeed;                      		// 0x0178(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpulseMultiplier;                         		// 0x017C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UPhysicalMaterial*                           VoidPhysicalMaterial;                             		// 0x0180(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactModifier;                            		// 0x0188(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactModifierUpsideDown;                  		// 0x018C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactAbsorption;                          		// 0x0190(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactAbsorptionUpsideDown;                		// 0x0194(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactAbsorptionRider;                     		// 0x0198(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactAbsorptionRiderUpsideDown;           		// 0x019C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactVehicleDamageMultiplier;             		// 0x01A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PhysicsImpactRiderDamageMultiplier;               		// 0x01A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      VehicleHitDamageType;                             		// 0x01A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x01B0(0x0004) MISSED OFFSET
	float                                              ExplosionBaseDamage;                              		// 0x01B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionMinimumDamage;                           		// 0x01B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionRadiusInner;                             		// 0x01BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionRadiusOuter;                             		// 0x01C0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ExplosionDamageFalloff;                           		// 0x01C4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ExplosionDamageType;                              		// 0x01C8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class ECollisionChannel>          ExplosionDamagePreventionChannel;                 		// 0x01D0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                               		// 0x01D1(0x000F) MISSED OFFSET
	float                                              ImpulseLimitationSpeedThreshold;                  		// 0x01E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CollectTime;                                      		// 0x01E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                              		// 0x01E8(0x0010) MISSED OFFSET
	TArray<struct FVehicleDebugHit>                    DebugHitHistory;                                  		// 0x01F8(0x0010) (CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                               		// 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleHitComponent");
		return ptr;
	}


	void OnSyncHit(const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
};


// Class TslGame.TslVehicleReactionInterface
// 0x0000 (0x0028 - 0x0028)
class UTslVehicleReactionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleReactionInterface");
		return ptr;
	}


	void OnImpactedByVehicle(const struct FHitResult& Hit, const struct FVector& Velocity);
};


// Class TslGame.TslVehicleSeatComponent
// 0x00F8 (0x01E8 - 0x00F0)
class UTslVehicleSeatComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnRide;                                           		// 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnLeave;                                          		// 0x0100(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDriverRide;                                     		// 0x0110(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDriverLeave;                                    		// 0x0120(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostDriverRide;                                 		// 0x0130(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPostDriverLeave;                                		// 0x0140(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	TArray<struct FVehicleSeatInfo>                    SeatInfos;                                        		// 0x0150(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	TArray<class AVehicleSeatActor*>                   Seats;                                            		// 0x0160(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      bUseSeatCamera : 1;                               		// 0x0170(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDoFlipCheck : 1;                                 		// 0x0171(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                               		// 0x0172(0x0002) MISSED OFFSET
	float                                              FlipForce;                                        		// 0x0174(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDoEntryAngleCheck : 1;                           		// 0x0178(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0179(0x0003) MISSED OFFSET
	float                                              MinEntryAngle;                                    		// 0x017C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDampenPlayerVelocityOnLeave : 1;                 		// 0x0180(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                               		// 0x0181(0x0003) MISSED OFFSET
	float                                              OnLeaveVelocityMultiplier;                        		// 0x0184(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TWeakObjectPtr<class ATslCharacter>                LastDriver;                                       		// 0x0188(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x58];                              		// 0x0190(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleSeatComponent");
		return ptr;
	}


	void TryToRide(class ATslCharacter* Rider, class AVehicleSeatActor* Seat);
	void TryToLeave(class ATslCharacter* Rider);
	void Ride(class ATslCharacter* Rider, class AVehicleSeatActor* Seat);
	void PostDriverRide();
	void PostDriverLeave();
	void OnFuelChange(float CurrentFuel, float LastFuel, float FuelMax);
	void Leave(class ATslCharacter* Rider, class AVehicleSeatActor* Seat);
	void KillAllRiders(float KillingDamage, const struct FDamageEvent& DamageEvent, class ATslPlayerState* PlayerInstigator, class AActor* DamageCauser);
	int GetVehicleSeatIndex(class AVehicleSeatActor* Seat);
	TArray<class AVehicleSeatActor*> GetSeats();
	class AVehicleSeatActor* GetSeat(int SeatIndex);
	TArray<class ATslCharacter*> GetRiders();
	class ATslCharacter* GetLastDriver(float LastDuration);
	class ATslCharacter* GetDriver();
};


// Class TslGame.TslVehicleSyncComponent
// 0x0050 (0x0140 - 0x00F0)
class UTslVehicleSyncComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnSyncHit;                                        		// 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x4];                               		// 0x0100(0x0004) MISSED OFFSET
	float                                              MinCorrectionInterval;                            		// 0x0104(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x0108(0x0004) MISSED OFFSET
	float                                              SendingToServerIntervalAtClient;                  		// 0x010C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                               		// 0x0110(0x0008) MISSED OFFSET
	float                                              SendingReliableHitToServerIntervalAtClient;       		// 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                               		// 0x011C(0x0004) MISSED OFFSET
	float                                              AllowedMaxDistanceSqAtServer;                     		// 0x0120(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StationaryCorrectionIntervalAtClient;             		// 0x0124(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                               		// 0x0128(0x0004) MISSED OFFSET
	float                                              StationaryCorrectionSpeedThresholdSq;             		// 0x012C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              StationaryCorrectionThresholdDistanceSq;          		// 0x0130(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                               		// 0x0134(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleSyncComponent");
		return ptr;
	}


	void SendServerMoveToClient(int InCorrectionId, const struct FVector_NetQuantize100& ServerLocation, const struct FVector_NetQuantize100& ServerLinearVelocity, const struct FVector_NetQuantizeNormal& ServerRotator, const struct FVector_NetQuantize100& ServerAngularVelocity, bool bIsSnap);
	void SendClientMoveToServerUnreliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const struct FVector_NetQuantizeNormal& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity);
	void SendClientMoveToServerReliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const struct FVector_NetQuantizeNormal& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity);
	void SendClientHitToServerUnreliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const struct FVector_NetQuantizeNormal& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity, const struct FVector_NetQuantize100& NormalImpulse, const struct FHitResult& Hit);
	void SendClientHitToServerReliably(int InCorrectionId, const struct FVector_NetQuantize100& ClientLocation, const struct FVector_NetQuantize100& ClientLinearVelocity, const struct FVector_NetQuantizeNormal& ClientRotator, const struct FVector_NetQuantize100& ClientAngularVelocity, const struct FVector_NetQuantize100& NormalImpulse, const struct FHitResult& Hit);
	void OnHitAtServer(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnHitAtClient(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnDriverRide();
};


// Class TslGame.TslVehicleWheel
// 0x00D0 (0x01B8 - 0x00E8)
class UTslVehicleWheel : public UVehicleWheel
{
public:
	float                                              Health;                                           		// 0x00E8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HealthMax;                                        		// 0x00EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       TireBoneName;                                     		// 0x00F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LongSlipSkidThreshold;                            		// 0x00F8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LateralSlipSkidThreshold;                         		// 0x00FC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SpringCompressionLandingThreshold;                		// 0x0100(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bManualSuspensionSoundControl : 1;                		// 0x0104(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0105(0x0003) MISSED OFFSET
	struct FVector                                     WheelEffectOffset;                                		// 0x0108(0x000C) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x0114(0x0004) MISSED OFFSET
	class UTslWheelEffectType*                         RollEffect;                                       		// 0x0118(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslWheelEffectType*                         SkidAccelEffect;                                  		// 0x0120(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTslWheelEffectType*                         SkidEffect;                                       		// 0x0128(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      PuncturedParticleClass;                           		// 0x0130(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UAkAudioEvent*                               LandingSound;                                     		// 0x0138(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bApplyForceOnPuncture : 1;                        		// 0x0140(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                               		// 0x0141(0x0003) MISSED OFFSET
	float                                              PunctureForce;                                    		// 0x0144(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              PunctureVelocityScalar;                           		// 0x0148(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                               		// 0x014C(0x000C) MISSED OFFSET
	class ATslParticle*                                TslParticleRoll;                                  		// 0x0158(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                TslParticleSkid;                                  		// 0x0160(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ATslParticle*                                TslParticleAccelSkid;                             		// 0x0168(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UAkComponent*                                AudioCom;                                         		// 0x0170(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              MinZVelocityForSuspensionSound;                   		// 0x0178(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x3C];                              		// 0x017C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleWheel");
		return ptr;
	}

};


// Class TslGame.TslWeapon_Trajectory
// 0x0168 (0x0AF8 - 0x0990)
class ATslWeapon_Trajectory : public ATslWeapon_Gun
{
public:
	float                                              TrajectoryGravityZ;                               		// 0x0990(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RecoilSpreadScale;                                		// 0x0994(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      FireAtViewPoint : 1;                              		// 0x0998(0x0001) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x0999(0x0003) MISSED OFFSET
	float                                              DefaultTimerFrequency;                            		// 0x099C(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              CrouchSpreadModifier;                             		// 0x09A0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              ProneSpreadModifier;                              		// 0x09A4(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              WalkSpread;                                       		// 0x09A8(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              RunSpread;                                        		// 0x09AC(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	float                                              JumpSpread;                                       		// 0x09B0(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                               		// 0x09B4(0x0004) MISSED OFFSET
	struct FTrajectoryWeaponData                       TrajectoryConfig;                                 		// 0x09B8(0x0060) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FRecoilInfo                                 RecoilInfo;                                       		// 0x0A18(0x0068) (CPF_Edit, CPF_DisableEditOnInstance)
	class UClass*                                      ImpactTemplate;                                   		// 0x0A80(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             TrailFX;                                          		// 0x0A88(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       TrailTargetParam;                                 		// 0x0A90(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x60];                              		// 0x0A98(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Trajectory");
		return ptr;
	}


	void SimulateHit_UnReliable(const struct FHitResult& Impact, int RandomSeed, float ReticleSpread, const struct FVector& RelLocation);
	void SimulateHit_Reliable(const struct FHitResult& Impact, int RandomSeed, float ReticleSpread, const struct FVector& RelLocation);
	void ServerNotifyMiss(const struct FVector_NetQuantizeNormal& ShootDir, int RandomSeed, float ReticleSpread, const struct FAttackId& AttackId);
	void ServerNotifyHit(const struct FHitResult& Impact, const struct FVector_NetQuantize& Origin, const struct FVector_NetQuantizeNormal& ShootDir, int RandomSeed, float ReticleSpread, float TravelDistance, const struct FAttackId& AttackId, uint32_t HitSeq, const struct FVector& RelLocation);
	void ServerNotifyCrack(class ATslCharacter* TargetCharacter, const struct FVector_NetQuantize& LocationRelative, float BulletVelocity);
	struct FTrajectoryWeaponData GetTrajectoryConfig();
	struct FRecoilInfo GetRecoilInfo();
	float GetCurrentStabilityVar();
	float GetCurrentReoveryTarget();
	float GetCurrentRecoilValue();
	struct FVector2D GetCurrentRecoilTarget();
};


// Class TslGame.TslWeapon_Melee
// 0x00B8 (0x0830 - 0x0778)
class ATslWeapon_Melee : public ATslWeapon
{
public:
	class UAkAudioEvent*                               AttackSoundAk;                                    		// 0x0778(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FMeleeWeaponAnim>                    AttackAnims;                                      		// 0x0780(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              Damage;                                           		// 0x0790(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WeaponImpact;                                     		// 0x0794(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DamageType;                                       		// 0x0798(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TEnumAsByte<enum class EHitCheckType>              HitCheckType;                                     		// 0x07A0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                               		// 0x07A1(0x0003) MISSED OFFSET
	float                                              AllowedHitRangeLeeway;                            		// 0x07A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ImpactTemplate;                                   		// 0x07A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UCapsuleComponent*                           HitCapsuleComponent;                              		// 0x07B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                              		// 0x07B8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Melee");
		return ptr;
	}


	void ServerNotifyHit(TArray<struct FHitResult> Impacts, const struct FAttackId& AttackId, uint32_t HitSeq);
	void ServerAttack(int AnimIndex);
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	void OnAnimationNotify(const struct FName& NotifyName);
	void ClientHit_Confirmed(const struct FHitResult& Impact);
	void ClientAttack(int AnimIndex);
};


// Class TslGame.TslWeapon_Throwable
// 0x00B0 (0x0828 - 0x0778)
class ATslWeapon_Throwable : public ATslWeapon
{
public:
	struct FThrowableWeaponData                        ThrowableConfig;                                  		// 0x0778(0x0068) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x20];                              		// 0x07E0(0x0020) MISSED OFFSET
	TEnumAsByte<enum class EThrowableState>            ThrowableState;                                   		// 0x0800(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                              		// 0x0801(0x001F) MISSED OFFSET
	class ATslParticle*                                PinOffEffect;                                     		// 0x0820(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWeapon_Throwable");
		return ptr;
	}


	void ServerStartReady();
	void ServerForceDropProjectile();
	void ServerFireProjectile(const struct FVector& RelativeLocation, const struct FRotator& ProjectileRotation);
	void OnRep_ThrowableState();
	void OnAnimationNotify(const struct FName& NotifyName);
	TEnumAsByte<enum class EThrowableState> GetThrowableState();
	int GetThrowableCountInInventory();
	int GetThrowableCount();
	void Client_NotifyDrop();
};


// Class TslGame.TslWheeledVehicle
// 0x00C8 (0x04C0 - 0x03F8)
class ATslWheeledVehicle : public AWheeledVehicle
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x03F8(0x0008) MISSED OFFSET
	unsigned char                                      bStabilizeActive : 1;                             		// 0x0400(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                               		// 0x0401(0x000F) MISSED OFFSET
	class USphereComponent*                            ActivationTrigger;                                		// 0x0410(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              Health;                                           		// 0x0418(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	float                                              HealthMax;                                        		// 0x041C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Fuel;                                             		// 0x0420(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	float                                              FuelMax;                                          		// 0x0424(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bWantsToBoosting : 1;                             		// 0x0428(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData02[0x3];                               		// 0x0429(0x0003) MISSED OFFSET
	float                                              TorqueMultiplierForBoosting;                      		// 0x042C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                               		// 0x0430(0x0008) MISSED OFFSET
	class UTslVehicleHitComponent*                     VehicleHitComponent;                              		// 0x0438(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleCommonComponent*                  VehicleCommonComponent;                           		// 0x0440(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSeatComponent*                    VehicleSeatComponent;                             		// 0x0448(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleEffectComponent*                  VehicleEffectComponent;                           		// 0x0450(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslVehicleSyncComponent*                    VehicleSyncComponent;                             		// 0x0458(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAkComponent*                                AudioComEngine;                                   		// 0x0460(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBuoyancyForceComponent*                     BuoyancyForceComponent;                           		// 0x0468(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       SinkPoint;                                        		// 0x0470(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SinkBuffType;                                     		// 0x0478(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                               		// 0x0480(0x0008) MISSED OFFSET
	class UBuffComponet*                               BuffComponent;                                    		// 0x0488(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UClass*>                              ComponentsToDestroyOnDedicatedServer;             		// 0x0490(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      bProcessAutoEject : 1;                            		// 0x04A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                               		// 0x04A1(0x0003) MISSED OFFSET
	float                                              AutoEjectRoll;                                    		// 0x04A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoEjectPitch;                                   		// 0x04A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bRunStabilizeOnEntry : 1;                         		// 0x04AC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                               		// 0x04AD(0x0003) MISSED OFFSET
	float                                              StabilizeInitialTimer;                            		// 0x04B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StablizeCurrentTimer;                             		// 0x04B4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SteeringYawBias;                                  		// 0x04B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWheeledVehicle");
		return ptr;
	}


	void ServerSetBoosting(bool bNewBoosting);
	void OnPostDriverRide();
	void OnBreak();
	bool IsSunken();
	bool IsStablizeOverrideActive();
	bool IsStabilizeOverrideEnabled();
	bool IsInWaterVolume();
	bool IsBoosting();
	class UTslWheeledVehicleMovement* GetTslVehicleMovement();
	float GetSteeringInput();
	float GetCurrentWaterSurfaceZ();
	class UBuffComponet* GetBuffComponent();
	void ActivationTriggerEndOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ActivationTriggerBeginOverlap(class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class TslGame.TslWheeledVehicleMovement
// 0x0018 (0x0430 - 0x0418)
class UTslWheeledVehicleMovement : public UWheeledVehicleMovementComponent4W
{
public:
	TArray<float>                                      WheelHealthPercentages;                           		// 0x0418(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0428(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWheeledVehicleMovement");
		return ptr;
	}


	void SetSimulateVehicle(bool bSimulate);
	void ServerUpdateAdditionalState(int TargetGear);
	void OnDriverRide();
	void OnDriverLeave();
	void OnBreak();
	bool IsSimulatingVehicle();
	float GetWheelWaterDepth(int Index);
	float GetWheelSuspensionMaxRaise(int Index);
	float GetWheelSuspensionMaxDrop(int Index);
	float GetWheelRotationSpeed(int Index);
	TArray<float> GetWheelHealthPercentages();
	class UPhysicalMaterial* GetWheelContactSurfaceMaterial(int Index);
	float GetThrottleInput();
	float GetSteeringInputClamped();
	float GetSteeringInput();
	float GetHandbrakeInput();
	float GetBrakeInput();
	void ClientPunctureTire(int WheelIndex);
};


// Class TslGame.TslWheelEffectType
// 0x0080 (0x00A8 - 0x0028)
class UTslWheelEffectType : public UDataAsset
{
public:
	class UAkAudioEvent*                               Sound;                                            		// 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DefaultFxClass;                                   		// 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      ConcreteFxClass;                                  		// 0x0038(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      DirtFxClass;                                      		// 0x0040(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      WaterFxClass;                                     		// 0x0048(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      MetalFxClass;                                     		// 0x0050(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      WoodFxClass;                                      		// 0x0058(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GrassFxClass;                                     		// 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GlassFxClass;                                     		// 0x0068(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      RockFxClass;                                      		// 0x0070(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      SandFxClass;                                      		// 0x0078(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DefaultMinSpeed;                                  		// 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ConcreteMinSpeed;                                 		// 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DirtMinSpeed;                                     		// 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WaterMinSpeed;                                    		// 0x008C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MetalMinSpeed;                                    		// 0x0090(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WoodMinSpeed;                                     		// 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GrassMinSpeed;                                    		// 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              GlassMinSpeed;                                    		// 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              RockMinSpeed;                                     		// 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              SandMinSpeed;                                     		// 0x00A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslWheelEffectType");
		return ptr;
	}

};


// Class TslGame.UiHelperFunctions
// 0x0000 (0x0028 - 0x0028)
class UUiHelperFunctions : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.UiHelperFunctions");
		return ptr;
	}


	TArray<struct FTslPlayerMatchResultInfo> STATIC_SortPlayerMatchResultInfosByRanking(TArray<struct FTslPlayerMatchResultInfo> PlayerMatchResultInfos);
	TArray<TScriptInterface<class USlotInterface>> STATIC_SortItem(TArray<TScriptInterface<class USlotInterface>> InItemList);
	bool STATIC_IsLastSpectatedCharacter(class UUserWidget* Widget, class ATslCharacter* Character);
	bool STATIC_HaveDurability(const TScriptInterface<class USlotInterface>& ItemSlot);
	class ATslSpectatorPawn* STATIC_GetTslSpectatorPawn(class UUserWidget* Widget);
	class ATslHUD* STATIC_GetTslHUD(class UUserWidget* Widget);
	int STATIC_GetTeamId(class ATslCharacter* Character);
	TArray<struct FLinearColor> STATIC_GetTeamColors(int TeamCount);
	TArray<class ATslCharacter*> STATIC_GetSortedReplicateCharactersBySpectatorPawnDistance(class UUserWidget* Widget);
	struct FString STATIC_GetPlayerName(class ATslCharacter* Character);
	class ATslPlayerController* STATIC_GetOwningTslPlayerController(class UUserWidget* Widget);
	class ATslCharacter* STATIC_GetOwningTslCharacter(class UUserWidget* Widget);
	class ATslCharacter* STATIC_GetLastSpectatedCharacter(class UUserWidget* Widget);
	float STATIC_GetDurabilityRatio(const TScriptInterface<class USlotInterface>& ItemSlot);
};


// Class TslGame.VehicleRiderComponent
// 0x0050 (0x0140 - 0x00F0)
class UVehicleRiderComponent : public UActorComponent
{
public:
	int                                                SeatIndex;                                        		// 0x00F0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                              		// 0x00F4(0x003C) MISSED OFFSET
	class APawn*                                       LastVehiclePawn;                                  		// 0x0130(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VehicleRiderComponent");
		return ptr;
	}

};


// Class TslGame.ParachuteVehicleSeatActor
// 0x0000 (0x0408 - 0x0408)
class AParachuteVehicleSeatActor : public AVehicleSeatActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ParachuteVehicleSeatActor");
		return ptr;
	}

};


// Class TslGame.TslVehicleSeatActor
// 0x0008 (0x0410 - 0x0408)
class ATslVehicleSeatActor : public AVehicleSeatActor
{
public:
	TEnumAsByte<enum class ERiderType>                 RiderType;                                        		// 0x0408(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.TslVehicleSeatActor");
		return ptr;
	}

};


// Class TslGame.VivoxResponse
// 0x0070 (0x0098 - 0x0028)
class UVivoxResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                              		// 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VivoxResponse");
		return ptr;
	}

};


// Class TslGame.SignInResponse
// 0x0030 (0x00C8 - 0x0098)
class USignInResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x30];                              		// 0x0098(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.SignInResponse");
		return ptr;
	}

};


// Class TslGame.ChannelResponse
// 0x0050 (0x00E8 - 0x0098)
class UChannelResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x50];                              		// 0x0098(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.ChannelResponse");
		return ptr;
	}

};


// Class TslGame.KeyRevokeResponse
// 0x0020 (0x00B8 - 0x0098)
class UKeyRevokeResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x20];                              		// 0x0098(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.KeyRevokeResponse");
		return ptr;
	}

};


// Class TslGame.KeyAddResponse
// 0x0030 (0x00C8 - 0x0098)
class UKeyAddResponse : public UVivoxResponse
{
public:
	unsigned char                                      UnknownData00[0x30];                              		// 0x0098(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.KeyAddResponse");
		return ptr;
	}

};


// Class TslGame.VivoxComponent
// 0x0090 (0x0180 - 0x00F0)
class UVivoxComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                               		// 0x00F0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnVoiceChatUpdated;                               		// 0x00F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FVivoxConnectionInfo                        ConnectionInfo;                                   		// 0x0108(0x0020) (CPF_Net)
	unsigned char                                      UnknownData01[0x8];                               		// 0x0128(0x0008) MISSED OFFSET
	float                                              ResetFailureDelaySeconds;                         		// 0x0130(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                               		// 0x0134(0x000C) MISSED OFFSET
	float                                              UpdatePositionIntervalSeconds;                    		// 0x0140(0x0004) (CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                               		// 0x0144(0x000C) MISSED OFFSET
	struct FString                                     TeamChannelUrl;                                   		// 0x0150(0x0010) (CPF_Net, CPF_ZeroConstructor)
	struct FString                                     GlobalChannelUrl;                                 		// 0x0160(0x0010) (CPF_Net, CPF_ZeroConstructor)
	unsigned char                                      UnknownData04[0x10];                              		// 0x0170(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VivoxComponent");
		return ptr;
	}


	void UpdatePosition();
	void SetVoiceChannelType(TEnumAsByte<enum class EVivoxChannelType> ChannelType);
	void SetLocalVoiceOutputMuted(bool bIsMuted);
	void SetLocalVoiceInputMuted(bool bIsMuted);
	void ServerTestAccessToken();
	void ServerLogin();
	void ServerJoinTeamChannel();
	void ServerJoinGlobalChannel();
	void ResetTeamChannelJoinState();
	void ResetLoginState();
	void ResetGlobalChannelJoinState();
	void ResetConnectionState();
	void RefreshDevices();
	TEnumAsByte<enum class EVivoxChannelType> GetVoiceChannelType();
	bool GetLocalVoiceOutputMuted();
	bool GetLocalVoiceInputMuted();
	void ClientLogin(const struct FString& AccessToken);
	void ClientJoinTeamChannel(const struct FString& AccessToken);
	void ClientJoinGlobalChannel(const struct FString& AccessToken);
};


// Class TslGame.VivoxManager
// 0x00F0 (0x0118 - 0x0028)
class UVivoxManager : public UObject
{
public:
	class UWorld*                                      World;                                            		// 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0030(0x0008) MISSED OFFSET
	struct FVivoxConnectionInfo                        ConnectionInfo;                                   		// 0x0038(0x0020)
	unsigned char                                      bUseEphmeralChannel : 1;                          		// 0x0058(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                               		// 0x0059(0x0007) MISSED OFFSET
	struct FString                                     AuthId;                                           		// 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AuthPwd;                                          		// 0x0070(0x0010) (CPF_ZeroConstructor)
	int64_t                                            AccessTokenExpirationTime;                        		// 0x0080(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Issuer;                                           		// 0x0088(0x0010) (CPF_ZeroConstructor)
	struct FString                                     Key;                                              		// 0x0098(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                              		// 0x00A8(0x0010) MISSED OFFSET
	class USignInResponse*                             SignIn;                                           		// 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UKeyAddResponse*                             KeyAdd;                                           		// 0x00C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UKeyRevokeResponse*                          KeyRevoke;                                        		// 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class UChannelResponse*>                    Channels;                                         		// 0x00D0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData03[0x10];                              		// 0x00E0(0x0010) MISSED OFFSET
	TArray<class ATslPlayerController*>                PlayerControllers;                                		// 0x00F0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	int                                                ProximalMaxRange;                                 		// 0x0100(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ProximalClampingDistance;                         		// 0x0104(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ProximalDistanceModel;                            		// 0x0108(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                               		// 0x010C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.VivoxManager");
		return ptr;
	}


	void OnRevokeKeySuccess(class UVivoxResponse* Response);
	void OnRevokeKeyFail(class UVivoxResponse* Response);
	void OnChannelSuccess(class UVivoxResponse* Response);
	void OnChannelFail(class UVivoxResponse* Response);
	void OnAddKeySuccess(class UVivoxResponse* Response);
	void OnAddKeyFail(class UVivoxResponse* Response);
};


// Class TslGame.WeaponAnimInfoComponent
// 0x0060 (0x0150 - 0x00F0)
class UWeaponAnimInfoComponent : public UActorComponent
{
public:
	struct FName                                       WeaponAttachPointPistol;                          		// 0x00F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointRifle;                           		// 0x00F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointThrowable;                       		// 0x0100(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointMelee;                           		// 0x0108(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      MeshComponent;                                    		// 0x0110(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Primary;                       		// 0x0118(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Secondary;                     		// 0x0120(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Sidearm;                       		// 0x0128(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Melee;                         		// 0x0130(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	class UTslAccessoryComponent*                      CharacterAccessory_Thrown;                        		// 0x0138(0x0008) (CPF_Edit, CPF_ExportObject, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       WeaponLeftHandIKAttachPoint;                      		// 0x0140(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                               		// 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponAnimInfoComponent");
		return ptr;
	}


	void SetAccessorySlot(class UTslAccessoryComponent* NewAccessoryComponent, TEnumAsByte<enum class EAccessorySlot> Slot);
	bool HasWeaponLeftHandIKSocket(class ATslWeapon* Weapon);
	struct FTransform GetWeaponLeftHandIKTransform(class ATslWeapon* Weapon);
	struct FTransform GetWeaponHandIK_Right(class ATslWeapon* Weapon);
	struct FTransform GetWeaponHandIK_Left(class ATslWeapon* Weapon);
	class ATslWeapon* GetCurrentWeapon();
	class UTslAccessoryComponent* GetAccessorySlot(TEnumAsByte<enum class EAccessorySlot> Slot);
};


// Class TslGame.CharacterWeaponAnimInfoComponent
// 0x0038 (0x0188 - 0x0150)
class UCharacterWeaponAnimInfoComponent : public UWeaponAnimInfoComponent
{
public:
	struct FName                                       WeaponAttachPointPistolDriving;                   		// 0x0150(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointPistolSitting;                   		// 0x0158(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointRifleDriving;                    		// 0x0160(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointRifleSitting;                    		// 0x0168(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointRifleAim;                        		// 0x0170(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointThrowableDriving;                		// 0x0178(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       WeaponAttachPointMeleeDriving;                    		// 0x0180(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.CharacterWeaponAnimInfoComponent");
		return ptr;
	}

};


// Class TslGame.WeaponClone
// 0x0018 (0x0040 - 0x0028)
class UWeaponClone : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                              		// 0x0028(0x0010) MISSED OFFSET
	class ATslWeapon*                                  ClonedWeapon;                                     		// 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TslGame.WeaponClone");
		return ptr;
	}


	void Update();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
