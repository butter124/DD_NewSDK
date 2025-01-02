#pragma once

// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DunDefSkyCity.DunDef_OldOne.Phase
enum class EPhase : uint8_t
{
	PHASE_ONE                      = 0,
	PHASE_TWO                      = 1,
	PHASE_Three                    = 2,
	PHASE_MAX                      = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DunDefSkyCity.DunDef_DamagingInterpActor.damagee
// 0x0008
struct Fdamagee
{
	class AActor*                                      damageTarget;                                             // 0x0000(0x0004)
	float                                              LastDmgTime;                                              // 0x0004(0x0004)
};

// ScriptStruct DunDefSkyCity.DunDef_OldOne.DmgActors
// 0x0008
struct FDmgActors
{
	class AActor*                                      damagedActor;                                             // 0x0000(0x0004)
	float                                              damagedTime;                                              // 0x0004(0x0004)
};

// ScriptStruct DunDefSkyCity.DunDef_OldOne.CrazyBellyLazers
// 0x0040
struct FCrazyBellyLazers
{
	class UParticleSystemComponent*                    myLazer;                                                  // 0x0000(0x0004) (ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    myStartEffect;                                            // 0x0004(0x0004) (ExportObject, Component, EditInline)
	struct FVector                                     prevLazerLoc;                                             // 0x0008(0x000C)
	struct FVector                                     currentTargetLoc;                                         // 0x0014(0x000C)
	TArray<struct FDmgActors>                          bellyDmgActors;                                           // 0x0020(0x000C) (NeedCtorLink)
	class ADunDefEmitterSpawnable*                     ImpactEmitter;                                            // 0x002C(0x0004)
	float                                              lastTargSwitchTime;                                       // 0x0030(0x0004)
	class AActor*                                      currentTarget;                                            // 0x0034(0x0004)
	struct FName                                       attachSocket;                                             // 0x0038(0x0008) (Edit)
};

// ScriptStruct DunDefSkyCity.DunDef_OldOne.CollisionBoxes
// 0x000C
struct FCollisionBoxes
{
	class ADunDef_DamagingInterpActor*                 theCollision;                                             // 0x0000(0x0004) (Edit)
	struct FName                                       BaseSocketName;                                           // 0x0004(0x0008) (Edit)
};

// ScriptStruct DunDefSkyCity.DunDef_OldOne.Crystals
// 0x0014
struct FCrystals
{
	class ADunDef_OldOneCrystals*                      theCrystal;                                               // 0x0000(0x0004) (Edit)
	struct FName                                       destroyedAnim;                                            // 0x0004(0x0008) (Edit)
	struct FName                                       crystalTag;                                               // 0x000C(0x0008) (Edit)
};

// ScriptStruct DunDefSkyCity.DunDef_OldOne.SmashAnims
// 0x0020
struct FSmashAnims
{
	struct FName                                       AttackAnimName;                                           // 0x0000(0x0008) (Edit)
	float                                              MaxDistance;                                              // 0x0008(0x0004) (Edit)
	float                                              MaxAngle;                                                 // 0x000C(0x0004) (Edit)
	unsigned long                                      bToggleCollisions : 1;                                    // 0x0010(0x0004) (Edit)
	TArray<class ADunDef_DamagingInterpActor*>         damageableCollisions;                                     // 0x0014(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct DunDefSkyCity.DunDefGoblinCopter.HoldAI
// 0x0024
struct FHoldAI
{
	class ADunDefEnemy*                                HoldEnemyTemplate;                                        // 0x0000(0x0004) (Edit)
	struct FName                                       HoldSocketName;                                           // 0x0004(0x0008) (Edit)
	struct FVector                                     Offset;                                                   // 0x000C(0x000C) (Edit)
	struct FRotator                                    RotationOffset;                                           // 0x0018(0x000C) (Edit)
};

// ScriptStruct DunDefSkyCity.DunDefGoblinCopter.HeldPawnDifficultyOffset
// 0x0008
struct FHeldPawnDifficultyOffset
{
	float                                              MinimumWaveDifficultyOffset;                              // 0x0000(0x0004) (Edit)
	float                                              PawnDifficultyOffset;                                     // 0x0004(0x0004) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
