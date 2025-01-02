#pragma once

// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DunDefArabia.DunDefGenieBossController.BeamHitActors
// 0x0008
struct FBeamHitActors
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0004)
	float                                              LastDamageTime;                                           // 0x0004(0x0004)
};

// ScriptStruct DunDefArabia.DunDefGenieBossController.TongueTraceSockets
// 0x0014
struct FTongueTraceSockets
{
	struct FName                                       TongueSocketName;                                         // 0x0000(0x0008) (Edit)
	struct FVector                                     PreviousTraceLoc;                                         // 0x0008(0x000C)
};

// ScriptStruct DunDefArabia.DunDefDjinn.SpellAnims
// 0x003C
struct FSpellAnims
{
	struct FName                                       StartAnimName;                                            // 0x0000(0x0008) (Edit)
	struct FName                                       LoopAnimName;                                             // 0x0008(0x0008) (Edit)
	struct FName                                       StopAnimName;                                             // 0x0010(0x0008) (Edit)
	class UParticleSystem*                             CastingEffectTemplate;                                    // 0x0018(0x0004) (Edit)
	class UParticleSystem*                             CastingEffectTemplate_Ally;                               // 0x001C(0x0004) (Edit)
	struct FName                                       CastAttachSocketName;                                     // 0x0020(0x0008) (Edit)
	float                                              effectScale;                                              // 0x0028(0x0004) (Edit)
	class UParticleSystem*                             AttachTemplate;                                           // 0x002C(0x0004) (Edit)
	class UParticleSystem*                             AttachTemplate_Ally;                                      // 0x0030(0x0004) (Edit)
	float                                              AttachScale;                                              // 0x0034(0x0004) (Edit)
	class USoundCue*                                   LoopingCastSound;                                         // 0x0038(0x0004) (Edit)
};

// ScriptStruct DunDefArabia.DunDefGenieBoss.EyeBeam
// 0x0014
struct FEyeBeam
{
	class UClass*                                      MyDamageType;                                             // 0x0000(0x0004) (Edit)
	class UParticleSystem*                             BeamEffect;                                               // 0x0004(0x0004) (Edit)
	class UParticleSystem*                             EyeEffect;                                                // 0x0008(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     ImpactEmitterTemplate;                                    // 0x000C(0x0004) (Edit)
	struct FColor                                      EyeLightColor;                                            // 0x0010(0x0004) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
