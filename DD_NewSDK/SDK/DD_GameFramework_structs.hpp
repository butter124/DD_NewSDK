#pragma once

// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_LOADING_MOVIE                                      "LoadingMovie"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameFramework.GameCrowdAgent.EConformType
enum class EConformType : uint8_t
{
	CFM_NavMesh                    = 0,
	CFM_BSP                        = 1,
	CFM_World                      = 2,
	CFM_None                       = 3,
	CFM_MAX                        = 4
};


// Enum GameFramework.GameTypes.EShakeParam
enum class EShakeParam : uint8_t
{
	ESP_OffsetRandom               = 0,
	ESP_OffsetZero                 = 1,
	ESP_MAX                        = 2
};


// Enum GameFramework.GameSkelCtrl_Recoil.ERecoilStart
enum class ERecoilStart : uint8_t
{
	ERS_Zero                       = 0,
	ERS_Random                     = 1,
	ERS_MAX                        = 2
};


// Enum GameFramework.GameThirdPersonCameraMode.ECameraViewportTypes
enum class ECameraViewportTypes : uint8_t
{
	CVT_16to9_Full                 = 0,
	CVT_16to9_VertSplit            = 1,
	CVT_16to9_HorizSplit           = 2,
	CVT_4to3_Full                  = 3,
	CVT_4to3_HorizSplit            = 4,
	CVT_4to3_VertSplit             = 5,
	CVT_MAX                        = 6
};


// Enum GameFramework.MobileHUD.EZoneType
enum class EZoneType : uint8_t
{
	ZoneType_Button                = 0,
	ZoneType_Joystick              = 1,
	ZoneType_Trackball             = 2,
	ZoneType_Tilt                  = 3,
	ZoneType_MAX                   = 4
};


// Enum GameFramework.MobileHUD.EZoneState
enum class EZoneState : uint8_t
{
	ZoneState_Inactive             = 0,
	ZoneState_Activating           = 1,
	ZoneState_Active               = 2,
	ZoneState_Deactivating         = 3,
	ZoneState_MAX                  = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameFramework.GameCrowdAgent.BehaviorEntry
// 0x000C
struct FBehaviorEntry
{
	class UGameCrowdAgentBehavior*                     BehaviorArchetype;                                        // 0x0000(0x0004) (Edit)
	float                                              BehaviorFrequency;                                        // 0x0004(0x0004) (Edit)
	unsigned long                                      bNeverRepeat : 1;                                         // 0x0008(0x0004) (Edit)
	unsigned long                                      bHasBeenUsed : 1;                                         // 0x0008(0x0004)
	unsigned long                                      bCanBeUsed : 1;                                           // 0x0008(0x0004)
};

// ScriptStruct GameFramework.GameCrowdAgent.RecentInteraction
// 0x000C
struct FRecentInteraction
{
	struct FName                                       InteractionTag;                                           // 0x0000(0x0008)
	float                                              InteractionDelay;                                         // 0x0008(0x0004)
};

// ScriptStruct GameFramework.GameCrowdAgentSkeletal.GameCrowdAttachmentInfo
// 0x0014
struct FGameCrowdAttachmentInfo
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0000(0x0004) (Edit)
	float                                              Chance;                                                   // 0x0004(0x0004) (Edit)
	struct FVector                                     Scale3D;                                                  // 0x0008(0x000C) (Edit)
};

// ScriptStruct GameFramework.GameCrowdAgentSkeletal.GameCrowdAttachmentList
// 0x0014
struct FGameCrowdAttachmentList
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (Edit)
	TArray<struct FGameCrowdAttachmentInfo>            List;                                                     // 0x0008(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct GameFramework.SeqAct_GameCrowdSpawner.AgentArchetypeInfo
// 0x0014
struct FAgentArchetypeInfo
{
	class UObject*                                     AgentArchetype;                                           // 0x0000(0x0004) (Edit)
	float                                              FrequencyModifier;                                        // 0x0004(0x0004) (Edit)
	TArray<class UObject*>                             GroupMembers;                                             // 0x0008(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct GameFramework.GameTypes.TakeHitInfo
// 0x0038
struct FTakeHitInfo
{
	struct FVector                                     HitLocation;                                              // 0x0000(0x000C)
	struct FVector                                     Momentum;                                                 // 0x000C(0x000C)
	class UClass*                                      DamageType;                                               // 0x0018(0x0004)
	class APawn*                                       InstigatedBy;                                             // 0x001C(0x0004)
	unsigned char                                      HitBoneIndex;                                             // 0x0020(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0024(0x0004)
	float                                              Damage;                                                   // 0x0028(0x0004)
	struct FVector                                     RadialDamageOrigin;                                       // 0x002C(0x000C)
};

// ScriptStruct GameFramework.MobileHUD.MobileInputZone
// 0x005C
struct FMobileInputZone
{
	struct FName                                       InputKey;                                                 // 0x0000(0x0008)
	struct FName                                       HorizontalInputKey;                                       // 0x0008(0x0008)
	struct FName                                       TapInputKey;                                              // 0x0010(0x0008)
	struct FString                                     Desc;                                                     // 0x0018(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                Config;                                                   // 0x0024(0x0004)
	int                                                X;                                                        // 0x0028(0x0004)
	int                                                Y;                                                        // 0x002C(0x0004)
	int                                                SizeX;                                                    // 0x0030(0x0004)
	int                                                SizeY;                                                    // 0x0034(0x0004)
	int                                                Border;                                                   // 0x0038(0x0004)
	unsigned long                                      bIsInvisible : 1;                                         // 0x003C(0x0004)
	TEnumAsByte<EZoneType>                             Type;                                                     // 0x0040(0x0001)
	TEnumAsByte<EZoneState>                            State;                                                    // 0x0041(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	float                                              VertMultiplier;                                           // 0x0044(0x0004)
	float                                              HorizMultiplier;                                          // 0x0048(0x0004)
	int                                                CurX;                                                     // 0x004C(0x0004)
	int                                                CurY;                                                     // 0x0050(0x0004)
	int                                                CurCenterX;                                               // 0x0054(0x0004)
	int                                                CurCenterY;                                               // 0x0058(0x0004)
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilParams
// 0x0004
struct FRecoilParams
{
	TEnumAsByte<ERecoilStart>                          X;                                                        // 0x0000(0x0001) (Edit)
	TEnumAsByte<ERecoilStart>                          Y;                                                        // 0x0001(0x0001) (Edit)
	TEnumAsByte<ERecoilStart>                          Z;                                                        // 0x0002(0x0001) (Edit)
	unsigned char                                      Padding;                                                  // 0x0003(0x0001) (Const, Transient)
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilDef
// 0x0070
struct FRecoilDef
{
	float                                              TimeToGo;                                                 // 0x0000(0x0004) (Transient)
	float                                              TimeDuration;                                             // 0x0004(0x0004) (Edit)
	struct FVector                                     RotAmplitude;                                             // 0x0008(0x000C) (Edit)
	struct FVector                                     RotFrequency;                                             // 0x0014(0x000C) (Edit)
	struct FVector                                     RotSinOffset;                                             // 0x0020(0x000C)
	struct FRecoilParams                               RotParams;                                                // 0x002C(0x0004) (Edit)
	struct FRotator                                    RotOffset;                                                // 0x0030(0x000C) (Transient)
	struct FVector                                     LocAmplitude;                                             // 0x003C(0x000C) (Edit)
	struct FVector                                     LocFrequency;                                             // 0x0048(0x000C) (Edit)
	struct FVector                                     LocSinOffset;                                             // 0x0054(0x000C)
	struct FRecoilParams                               LocParams;                                                // 0x0060(0x0004) (Edit)
	struct FVector                                     LocOffset;                                                // 0x0064(0x000C) (Transient)
};

// ScriptStruct GameFramework.GameThirdPersonCamera.CamFocusPointParams
// 0x0034
struct FCamFocusPointParams
{
	class AActor*                                      FocusActor;                                               // 0x0000(0x0004) (Edit)
	struct FName                                       FocusBoneName;                                            // 0x0004(0x0008) (Edit)
	struct FVector                                     FocusWorldLoc;                                            // 0x000C(0x000C) (Edit)
	float                                              CameraFOV;                                                // 0x0018(0x0004) (Edit)
	struct FVector2D                                   InterpSpeedRange;                                         // 0x001C(0x0008) (Edit)
	struct FVector2D                                   InFocusFOV;                                               // 0x0024(0x0008) (Edit)
	unsigned long                                      bAlwaysFocus : 1;                                         // 0x002C(0x0004) (Edit)
	unsigned long                                      bAdjustCamera : 1;                                        // 0x002C(0x0004) (Edit)
	unsigned long                                      bIgnoreTrace : 1;                                         // 0x002C(0x0004) (Edit)
	float                                              FocusPitchOffsetDeg;                                      // 0x0030(0x0004) (Edit)
};

// ScriptStruct GameFramework.GameThirdPersonCamera.PenetrationAvoidanceFeeler
// 0x0020
struct FPenetrationAvoidanceFeeler
{
	struct FRotator                                    AdjustmentRot;                                            // 0x0000(0x000C) (Edit)
	float                                              WorldWeight;                                              // 0x000C(0x0004) (Edit)
	float                                              PawnWeight;                                               // 0x0010(0x0004) (Edit)
	struct FVector                                     Extent;                                                   // 0x0014(0x000C) (Edit)
};

// ScriptStruct GameFramework.GameThirdPersonCameraMode.ViewOffsetData
// 0x0024
struct FViewOffsetData
{
	struct FVector                                     OffsetHigh;                                               // 0x0000(0x000C) (Edit)
	struct FVector                                     OffsetMid;                                                // 0x000C(0x000C) (Edit)
	struct FVector                                     OffsetLow;                                                // 0x0018(0x000C) (Edit)
};

// ScriptStruct GameFramework.GameTypes.SpecialMoveStruct
// 0x0014
struct FSpecialMoveStruct
{
	struct FName                                       SpecialMoveName;                                          // 0x0000(0x0008)
	class AGamePawn*                                   InteractionPawn;                                          // 0x0008(0x0004)
	class AActor*                                      InteractionActor;                                         // 0x000C(0x0004)
	int                                                Flags;                                                    // 0x0010(0x0004)
};

// ScriptStruct GameFramework.GameTypes.GameSpecialMoveInfo
// 0x0010
struct FGameSpecialMoveInfo
{
	struct FName                                       SpecialMoveName;                                          // 0x0000(0x0008) (Edit)
	class UClass*                                      SpecialMoveClass;                                         // 0x0008(0x0004) (Edit)
	class UGameSpecialMove*                            SpecialMoveInstance;                                      // 0x000C(0x0004) (Edit)
};

// ScriptStruct GameFramework.GameTypes.ShakeParams
// 0x0004
struct FShakeParams
{
	TEnumAsByte<EShakeParam>                           X;                                                        // 0x0000(0x0001)
	TEnumAsByte<EShakeParam>                           Y;                                                        // 0x0001(0x0001)
	TEnumAsByte<EShakeParam>                           Z;                                                        // 0x0002(0x0001)
	unsigned char                                      Padding;                                                  // 0x0003(0x0001) (Const, Transient)
};

// ScriptStruct GameFramework.GameTypes.ScreenShakeStruct
// 0x0078
struct FScreenShakeStruct
{
	float                                              TimeToGo;                                                 // 0x0000(0x0004)
	float                                              TimeDuration;                                             // 0x0004(0x0004)
	struct FVector                                     RotAmplitude;                                             // 0x0008(0x000C)
	struct FVector                                     RotFrequency;                                             // 0x0014(0x000C)
	struct FVector                                     RotSinOffset;                                             // 0x0020(0x000C)
	struct FShakeParams                                RotParam;                                                 // 0x002C(0x0004)
	struct FVector                                     LocAmplitude;                                             // 0x0030(0x000C)
	struct FVector                                     LocFrequency;                                             // 0x003C(0x000C)
	struct FVector                                     LocSinOffset;                                             // 0x0048(0x000C)
	struct FShakeParams                                LocParam;                                                 // 0x0054(0x0004)
	float                                              FOVAmplitude;                                             // 0x0058(0x0004)
	float                                              FOVFrequency;                                             // 0x005C(0x0004)
	float                                              FOVSinOffset;                                             // 0x0060(0x0004)
	TEnumAsByte<EShakeParam>                           FOVParam;                                                 // 0x0064(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	struct FName                                       ShakeName;                                                // 0x0068(0x0008)
	unsigned long                                      bOverrideTargetingDampening : 1;                          // 0x0070(0x0004)
	float                                              TargetingDampening;                                       // 0x0074(0x0004)
};

// ScriptStruct GameFramework.GameTypes.ScreenShakeAnimStruct
// 0x0030
struct FScreenShakeAnimStruct
{
	class UCameraAnim*                                 Anim;                                                     // 0x0000(0x0004)
	unsigned long                                      bUseDirectionalAnimVariants : 1;                          // 0x0004(0x0004)
	class UCameraAnim*                                 Anim_Left;                                                // 0x0008(0x0004)
	class UCameraAnim*                                 Anim_Right;                                               // 0x000C(0x0004)
	class UCameraAnim*                                 Anim_Rear;                                                // 0x0010(0x0004)
	float                                              AnimPlayRate;                                             // 0x0014(0x0004)
	float                                              AnimScale;                                                // 0x0018(0x0004)
	float                                              AnimBlendInTime;                                          // 0x001C(0x0004)
	float                                              AnimBlendOutTime;                                         // 0x0020(0x0004)
	unsigned long                                      bRandomSegment : 1;                                       // 0x0024(0x0004)
	float                                              RandomSegmentDuration;                                    // 0x0028(0x0004)
	unsigned long                                      bSingleInstance : 1;                                      // 0x002C(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
