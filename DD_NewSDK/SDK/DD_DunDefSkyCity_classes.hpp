#pragma once

// Dungeon Defenders (10.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class DunDefSkyCity.DunDefProjectile_Meteor
// 0x0034 (0x03A8 - 0x0374)
class ADunDefProjectile_Meteor : public ADunDefProjectile
{
public:
	class ADunDefEmitterSpawnable*                     DamagingFireEmitters;                                     // 0x0374(0x0004) (Edit)
	int                                                MaxNumberofFires;                                         // 0x0378(0x0004) (Edit)
	float                                              MinDecalSize;                                             // 0x037C(0x0004) (Edit)
	float                                              MaxDecalSize;                                             // 0x0380(0x0004) (Edit)
	float                                              MinDecalHeight;                                           // 0x0384(0x0004) (Edit)
	float                                              MaxDecalHeight;                                           // 0x0388(0x0004) (Edit)
	float                                              MinFireSpreadRadius;                                      // 0x038C(0x0004) (Edit)
	float                                              MaxFireSpreadRadius;                                      // 0x0390(0x0004) (Edit)
	float                                              decalZOffset;                                             // 0x0394(0x0004) (Edit)
	class ADecalActorMovableSpawnable*                 DecalActorTemplate;                                       // 0x0398(0x0004) (Edit)
	unsigned long                                      bUseShadow : 1;                                           // 0x039C(0x0004) (Edit)
	unsigned long                                      bUseHoming : 1;                                           // 0x039C(0x0004) (Edit)
	class UStaticMeshComponent*                        MyShadow;                                                 // 0x03A0(0x0004) (Edit, ExportObject, Component, EditInline)
	class ADecalActorMovableSpawnable*                 myDecal;                                                  // 0x03A4(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDefProjectile_Meteor");
		return ptr;
	}


	void Destroyed();
	void SpawnFires(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void Explode(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void UpdateDecal(float DeltaTime);
	void UpdateShadow(float DeltaTime);
	void DoHoming(float DeltaTime);
	void Tick(float DeltaTime);
	void PostBeginPlay();
};


// Class DunDefSkyCity.DropOffPoint
// 0x0004 (0x031C - 0x0318)
class ADropOffPoint : public AFlightPathNode
{
public:
	unsigned long                                      bIsBeingUsed : 1;                                         // 0x0318(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DropOffPoint");
		return ptr;
	}


	unsigned long GetIsBeingUsed();
	void SetBeingUsed(unsigned long bNowBeingUsed);
};


// Class DunDefSkyCity.DunDef_DamagingInterpActor
// 0x0024 (0x02A4 - 0x0280)
class ADunDef_DamagingInterpActor : public AInterpActor
{
public:
	TArray<struct Fdamagee>                            currentDmgTargets;                                        // 0x0280(0x000C) (NeedCtorLink)
	unsigned long                                      bAlwaysDamage : 1;                                        // 0x028C(0x0004) (Edit)
	unsigned long                                      bKillonDmgEncroach : 1;                                   // 0x028C(0x0004) (Edit)
	unsigned long                                      bDoingDamage : 1;                                         // 0x028C(0x0004) (Transient)
	float                                              dmgInterval;                                              // 0x0290(0x0004) (Edit)
	float                                              KnockbackMomentum;                                        // 0x0294(0x0004) (Edit)
	class UClass*                                      MyDamageType;                                             // 0x0298(0x0004) (Edit)
	int                                                dmgAmount;                                                // 0x029C(0x0004) (Edit)
	float                                              DamageMultiplier;                                         // 0x02A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDef_DamagingInterpActor");
		return ptr;
	}


	unsigned long StopsProjectile(class AProjectile* P);
	int GetDamageAmount();
	void RanInto(class AActor* Other);
	unsigned long EncroachingOn(class AActor* Other);
	void ClearDamageList();
	void SetDoDamage(unsigned long bSetDamage, unsigned long bToggleCollision);
};


// Class DunDefSkyCity.DunDef_OldOne
// 0x0610 (0x085C - 0x024C)
class ADunDef_OldOne : public ASkeletalMeshActor
{
public:
	TArray<struct FCrystals>                           PhaseOneCrystals;                                         // 0x024C(0x000C) (Edit, NeedCtorLink)
	float                                              PhaseOneDirectedSmashReach;                               // 0x0258(0x0004) (Edit)
	int                                                PhaseOneMeteorCustomNodeID;                               // 0x025C(0x0004) (Edit)
	TArray<struct FSmashAnims>                         PhaseOneSmashLeftAnims;                                   // 0x0260(0x000C) (Edit, NeedCtorLink)
	TArray<struct FSmashAnims>                         PhaseOneSmashRightAnims;                                  // 0x026C(0x000C) (Edit, NeedCtorLink)
	struct FSmashAnims                                 PhaseOneSmashDoubleAnim;                                  // 0x0278(0x0020) (Edit, NeedCtorLink)
	struct FName                                       DoubleSocketName;                                         // 0x0298(0x0008) (Edit)
	float                                              PhaseOneSmashCD;                                          // 0x02A0(0x0004) (Edit)
	float                                              PhaseOneSmashDoubleCD;                                    // 0x02A4(0x0004) (Edit)
	float                                              PhaseOneChanceToForceDblSmash;                            // 0x02A8(0x0004) (Edit)
	float                                              LastPhaseOneSmashTime;                                    // 0x02AC(0x0004) (Transient)
	float                                              LastDoublePhaseOneSmashTime;                              // 0x02B0(0x0004) (Transient)
	float                                              DoubleStombZOffset;                                       // 0x02B4(0x0004) (Edit)
	struct FName                                       PhaseOneProjectileAnim;                                   // 0x02B8(0x0008) (Edit)
	float                                              PhaseOneProjectileLargeChance;                            // 0x02C0(0x0004) (Edit)
	float                                              PhaseOneProjectileCD;                                     // 0x02C4(0x0004) (Edit)
	int                                                NumSmallMeteors;                                          // 0x02C8(0x0004) (Edit)
	float                                              LastPhaseOneProjectileTime;                               // 0x02CC(0x0004) (Transient)
	class AActor*                                      projectileTarget;                                         // 0x02D0(0x0004) (Transient)
	float                                              PhaseOneTauntCD;                                          // 0x02D4(0x0004) (Edit)
	struct FName                                       PhaseOneTauntAnim;                                        // 0x02D8(0x0008) (Edit)
	float                                              LastPhaseOneTauntTime;                                    // 0x02E0(0x0004) (Transient)
	float                                              LastPhaseOneMeteorTime;                                   // 0x02E4(0x0004) (Transient)
	struct FName                                       PhaseOneEnterEventName;                                   // 0x02E8(0x0008) (Edit)
	float                                              PhaseOneMinAttackDelay;                                   // 0x02F0(0x0004) (Edit)
	float                                              PhaseOneMaxAttackDelay;                                   // 0x02F4(0x0004) (Edit)
	class ADunDefEmitterShockwave*                     SingleHitShockwave;                                       // 0x02F8(0x0004) (Edit)
	class ADunDefEmitterShockwave*                     DoubleHitShockwave;                                       // 0x02FC(0x0004) (Edit)
	int                                                PhaseOneNumMeteors;                                       // 0x0300(0x0004) (Edit)
	float                                              PhaseOneMeteorCD;                                         // 0x0304(0x0004) (Edit)
	TArray<struct FCrystals>                           PhaseTwoCrystals;                                         // 0x0308(0x000C) (Edit, NeedCtorLink)
	float                                              PhaseTwoDirectedSmashReach;                               // 0x0314(0x0004) (Edit)
	TArray<struct FSmashAnims>                         PhaseTwoSmashLeftAnims;                                   // 0x0318(0x000C) (Edit, NeedCtorLink)
	TArray<struct FSmashAnims>                         PhaseTwoSmashRightAnims;                                  // 0x0324(0x000C) (Edit, NeedCtorLink)
	struct FSmashAnims                                 PhaseTwoSmashDoubleAnim;                                  // 0x0330(0x0020) (Edit, NeedCtorLink)
	float                                              PhaseTwoSmashCD;                                          // 0x0350(0x0004) (Edit)
	float                                              PhaseTwoSmashDoubleCD;                                    // 0x0354(0x0004) (Edit)
	float                                              PhaseTwoProjectileCD;                                     // 0x0358(0x0004) (Edit)
	float                                              PhaseTwoChanceToForceDblSmash;                            // 0x035C(0x0004) (Edit)
	struct FName                                       PhaseTwoProjectileAnim_L;                                 // 0x0360(0x0008) (Edit)
	struct FName                                       PhaseTwoProjectileAnim_R;                                 // 0x0368(0x0008) (Edit)
	struct FName                                       PhaseTwoMeteorStrikeAnim;                                 // 0x0370(0x0008) (Edit)
	class ADunDefEmitterShockwave*                     DoubleHandHitShockwave;                                   // 0x0378(0x0004) (Edit)
	class ADunDefHomingProjectile*                     PhaseTwoSingleProjectile;                                 // 0x037C(0x0004) (Edit)
	class ADunDefProjectile*                           PhaseTwoMeteors;                                          // 0x0380(0x0004) (Edit)
	float                                              PhaseTwoMeteorSpawnHeight;                                // 0x0384(0x0004) (Edit)
	int                                                PhaseTwoNumMeteors;                                       // 0x0388(0x0004) (Edit)
	int                                                PhaseTwoMeteorCustomNodeID;                               // 0x038C(0x0004) (Edit)
	struct FName                                       PhaseTwoBeamAttackAnim;                                   // 0x0390(0x0008) (Edit)
	struct FName                                       PhaseTwoBeamLoopAnim;                                     // 0x0398(0x0008) (Edit)
	struct FName                                       PhaseTwoBeamSocket;                                       // 0x03A0(0x0008) (Edit)
	struct FName                                       PhaseTwoBeamCrazyAttackAnim;                              // 0x03A8(0x0008) (Edit)
	float                                              PhaseTwoBeamCD;                                           // 0x03B0(0x0004) (Edit)
	float                                              PhaseTwoChanceForCrazyBeam;                               // 0x03B4(0x0004) (Edit)
	float                                              PhaseTwoLazerTime;                                        // 0x03B8(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     BellyImpactEmitterTemplate;                               // 0x03BC(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     BellyImpactCrazyEmitterTemplate;                          // 0x03C0(0x0004) (Edit)
	class UParticleSystemComponent*                    BellyBeamStart;                                           // 0x03C4(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    BellyBeam;                                                // 0x03C8(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystem*                             BellyBeamCrazyTemplate;                                   // 0x03CC(0x0004) (Edit)
	class UParticleSystem*                             BellyBeamStartCrazyTemplate;                              // 0x03D0(0x0004) (Edit)
	class UParticleSystem*                             BellyBeamStartTemplate;                                   // 0x03D4(0x0004) (Edit)
	class UParticleSystem*                             BellyBeamNormalTemplate;                                  // 0x03D8(0x0004) (Edit)
	class UClass*                                      BellyBeamDmgType;                                         // 0x03DC(0x0004) (Edit)
	class UClass*                                      CrazyBellyBeamDmgType;                                    // 0x03E0(0x0004) (Edit)
	float                                              BellyDamageMomentum;                                      // 0x03E4(0x0004) (Edit)
	int                                                BellyDmgAmount;                                           // 0x03E8(0x0004) (Edit)
	int                                                BellyDmgAmountCrazy;                                      // 0x03EC(0x0004) (Edit)
	float                                              BellyDmgFrequency;                                        // 0x03F0(0x0004) (Edit)
	float                                              BellyTrackingSpeed;                                       // 0x03F4(0x0004) (Edit)
	float                                              BellyCrazyTrackingSpeed;                                  // 0x03F8(0x0004) (Edit)
	TArray<struct FCrazyBellyLazers>                   BellyLazersCrazy;                                         // 0x03FC(0x000C) (Transient, Component, NeedCtorLink)
	TArray<struct FCrazyBellyLazers>                   BellyLazersNormal;                                        // 0x0408(0x000C) (Transient, Component, NeedCtorLink)
	class ADunDefCustomNode*                           PhaseTwoLazerStartPoint;                                  // 0x0414(0x0004) (Edit)
	float                                              PhaseTwoTauntCD;                                          // 0x0418(0x0004) (Edit)
	struct FName                                       PhaseTwoTauntAnim;                                        // 0x041C(0x0008) (Edit)
	float                                              PhaseTwoMinAttackDelay;                                   // 0x0424(0x0004) (Edit)
	float                                              PhaseTwoMaxAttackDelay;                                   // 0x0428(0x0004) (Edit)
	float                                              LastPhaseTwoTauntTime;                                    // 0x042C(0x0004) (Transient)
	TArray<struct FDmgActors>                          BellyBeamHitActors;                                       // 0x0430(0x000C) (Transient, NeedCtorLink)
	float                                              PhaseTwoMeteorCD;                                         // 0x043C(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     currentLeftEyeImpactEmitter;                              // 0x0440(0x0004)
	class ADunDefEmitterSpawnable*                     currentRightEyeImpactEmitter;                             // 0x0444(0x0004)
	class ADunDefEmitterSpawnable*                     currentBellyImpactEmitter;                                // 0x0448(0x0004)
	float                                              LastPhaseTwoSmashTime;                                    // 0x044C(0x0004) (Transient)
	float                                              LastDoublePhaseTwoSmashTime;                              // 0x0450(0x0004) (Transient)
	float                                              LastPhaseTwoProjectileTime;                               // 0x0454(0x0004) (Transient)
	float                                              LastBeamAttackTime;                                       // 0x0458(0x0004) (Transient)
	float                                              LastPhaseTwoMeteorTime;                                   // 0x045C(0x0004) (Transient)
	unsigned long                                      bDoCrazyBellyLazers : 1;                                  // 0x0460(0x0004) (Net, Transient)
	unsigned long                                      bAllowHurtAnim : 1;                                       // 0x0460(0x0004) (Transient)
	unsigned long                                      bDoCrazyEyeLazers : 1;                                    // 0x0460(0x0004) (Net, Transient)
	unsigned long                                      bDoingLazers : 1;                                         // 0x0460(0x0004)
	unsigned long                                      bClampDifficultyToInsane : 1;                             // 0x0460(0x0004) (Edit)
	unsigned long                                      bAllowSuction : 1;                                        // 0x0460(0x0004) (Edit)
	unsigned long                                      bDoDamageFlashing : 1;                                    // 0x0460(0x0004) (Edit)
	unsigned long                                      bDamageFlashOldOne : 1;                                   // 0x0460(0x0004) (Edit)
	unsigned long                                      bAllowPhaseShiftFinish : 1;                               // 0x0460(0x0004) (Transient)
	unsigned long                                      bCrazyLazerEyes : 1;                                      // 0x0460(0x0004) (Transient)
	unsigned long                                      bUsingTimeLimit : 1;                                      // 0x0460(0x0004) (Transient)
	unsigned long                                      bTriggeredLowHealthEvent : 1;                             // 0x0460(0x0004) (Transient)
	unsigned long                                      bChainIgnore : 1;                                         // 0x0460(0x0004) (Transient)
	unsigned long                                      bIsWebbed : 1;                                            // 0x0460(0x0004) (Transient)
	struct FName                                       PhaseTwoEnterEventName;                                   // 0x0464(0x0008) (Edit)
	float                                              DoubleHandStompZOffset;                                   // 0x046C(0x0004) (Edit)
	TArray<struct FSmashAnims>                         PhaseThreeSmashLeftAnims;                                 // 0x0470(0x000C) (Edit, NeedCtorLink)
	TArray<struct FSmashAnims>                         PhaseThreeSmashRightAnims;                                // 0x047C(0x000C) (Edit, NeedCtorLink)
	class ADunDefOldOneBreath*                         PhaseThreeFlameBreath;                                    // 0x0488(0x0004) (Edit)
	class ADunDefOldOneBreath*                         PhaseThreeFlameSweep;                                     // 0x048C(0x0004) (Edit)
	struct FName                                       PhaseThreeFlameSweepStartAnim;                            // 0x0490(0x0008) (Edit)
	struct FName                                       PhaseThreeFlameBreathSocket;                              // 0x0498(0x0008) (Edit)
	struct FName                                       PhaseThreeFlameBreathSweepAnim;                           // 0x04A0(0x0008) (Edit)
	struct FName                                       PhaseThreeFlameBreathBurstAnim;                           // 0x04A8(0x0008) (Edit)
	struct FSmashAnims                                 PhaseThreeSweepAnimLeft;                                  // 0x04B0(0x0020) (Edit, NeedCtorLink)
	struct FSmashAnims                                 PhaseThreeSweepAnimRight;                                 // 0x04D0(0x0020) (Edit, NeedCtorLink)
	struct FSmashAnims                                 PhaseThreeSmashDoubleAnim;                                // 0x04F0(0x0020) (Edit, NeedCtorLink)
	struct FCrystals                                   PhaseThreeCrystal;                                        // 0x0510(0x0014) (Edit)
	struct FName                                       PhaseThreeEnterEventName;                                 // 0x0524(0x0008) (Edit)
	struct FName                                       PhaseThreeLazerDirectedAnim;                              // 0x052C(0x0008) (Edit)
	struct FName                                       PhaseThreeLazerCrazyAnim;                                 // 0x0534(0x0008) (Edit)
	struct FName                                       PhaseThreeLazerLoop;                                      // 0x053C(0x0008) (Edit)
	float                                              PhaseThreeSmashCD;                                        // 0x0544(0x0004) (Edit)
	float                                              PhaseThreeSmashDoubleCD;                                  // 0x0548(0x0004) (Edit)
	float                                              PhaseThreeLazerCD;                                        // 0x054C(0x0004) (Edit)
	float                                              PhaseThreeChanceToForceDblSmash;                          // 0x0550(0x0004) (Edit)
	float                                              PhaseThreeDirectedSmashReach;                             // 0x0554(0x0004) (Edit)
	float                                              PhaseThreeSweepCD;                                        // 0x0558(0x0004) (Edit)
	float                                              PhaseThreeFlameCD;                                        // 0x055C(0x0004) (Edit)
	float                                              PhaseThreeLazerTime;                                      // 0x0560(0x0004) (Edit)
	float                                              LazerDmgAmount;                                           // 0x0564(0x0004) (Edit)
	float                                              LazerDamageMomentum;                                      // 0x0568(0x0004) (Edit)
	float                                              LazerDmgFrequency;                                        // 0x056C(0x0004) (Edit)
	float                                              LazerDmgAmountCrazy;                                      // 0x0570(0x0004) (Edit)
	float                                              EyeTrackingSpeed;                                         // 0x0574(0x0004) (Edit)
	class UClass*                                      LazerEyeDmgType;                                          // 0x0578(0x0004) (Edit)
	class UClass*                                      CrazyLazerEyeDmgType;                                     // 0x057C(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     ImpactEmitterTemplate;                                    // 0x0580(0x0004) (Edit)
	class ADunDefEmitterSpawnable*                     ImpactEmitterCrazyEyeTemplate;                            // 0x0584(0x0004) (Edit)
	float                                              PhaseThreeMinAttackDelay;                                 // 0x0588(0x0004) (Edit)
	float                                              PhaseThreeMaxAttackDelay;                                 // 0x058C(0x0004) (Edit)
	int                                                PhaseThreeMeteorCustomNodeID;                             // 0x0590(0x0004) (Edit)
	int                                                PhaseThreeNumMeteors;                                     // 0x0594(0x0004) (Edit)
	struct FName                                       PhaseThreeProjectileAnim_L;                               // 0x0598(0x0008) (Edit)
	struct FName                                       PhaseThreeProjectileAnim_R;                               // 0x05A0(0x0008) (Edit)
	TArray<struct FDmgActors>                          LeftEyeHitActors;                                         // 0x05A8(0x000C) (Transient, NeedCtorLink)
	TArray<struct FDmgActors>                          RightEyeHitActors;                                        // 0x05B4(0x000C) (Transient, NeedCtorLink)
	float                                              LastPhaseThreeSmashTime;                                  // 0x05C0(0x0004) (Transient)
	float                                              LastDoublePhaseThreeSmashTime;                            // 0x05C4(0x0004) (Transient)
	float                                              LastPhaseThreeSweepTime;                                  // 0x05C8(0x0004) (Transient)
	float                                              LastPhaseThreeFlameTime;                                  // 0x05CC(0x0004) (Transient)
	float                                              LastPhaseThreeLazerTime;                                  // 0x05D0(0x0004) (Transient)
	struct FVector                                     prevLeftEyeLoc;                                           // 0x05D4(0x000C) (Transient)
	struct FVector                                     prevRightEyeLoc;                                          // 0x05E0(0x000C) (Transient)
	class ADunDefOldOneBreath*                         currentFlame;                                             // 0x05EC(0x0004) (Transient)
	class AActor*                                      currentLazerTarget;                                       // 0x05F0(0x0004) (Net, Transient)
	struct FName                                       LeftEyeSocket;                                            // 0x05F4(0x0008) (Edit)
	struct FName                                       RightEyeSocket;                                           // 0x05FC(0x0008) (Edit)
	struct FName                                       LeftEyeTopSocket;                                         // 0x0604(0x0008) (Edit)
	struct FName                                       RightTopEyeSocket;                                        // 0x060C(0x0008) (Edit)
	class UParticleSystemComponent*                    LeftEyeBeam;                                              // 0x0614(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    RightEyeBeam;                                             // 0x0618(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    LeftEyeBeamStart;                                         // 0x061C(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    RightEyeBeamStart;                                        // 0x0620(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    LeftEyeTopBeam;                                           // 0x0624(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    RightEyeTopBeam;                                          // 0x0628(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    LeftEyeTopBeamStart;                                      // 0x062C(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    RightEyeTopBeamStart;                                     // 0x0630(0x0004) (Edit, ExportObject, Component, EditInline)
	float                                              PhaseThreeMaxFlameBreathAngle;                            // 0x0634(0x0004) (Edit)
	class ADunDefGasCloud*                             LazerFires;                                               // 0x0638(0x0004) (Edit)
	float                                              LazerFireFrequency;                                       // 0x063C(0x0004) (Edit)
	class ADunDefCustomNode*                           PhaseThreeLazerStartPoint;                                // 0x0640(0x0004) (Edit)
	float                                              LastLazerFireTime;                                        // 0x0644(0x0004) (Transient)
	float                                              PhaseThreeMaxSwipeRadius;                                 // 0x0648(0x0004) (Edit)
	float                                              PhaseThreeTauntCD;                                        // 0x064C(0x0004) (Edit)
	struct FName                                       PhaseThreeTauntAnim;                                      // 0x0650(0x0008) (Edit)
	TArray<float>                                      PhaseThreeTimeLimit;                                      // 0x0658(0x000C) (Edit, NeedCtorLink)
	float                                              LastPhaseThreeTauntTime;                                  // 0x0664(0x0004) (Transient)
	TArray<struct FCrazyBellyLazers>                   PhaseThreeMultiLazer;                                     // 0x0668(0x000C) (Edit, Component, NeedCtorLink)
	float                                              PhaseThreeLazerCrazyChance;                               // 0x0674(0x0004) (Edit)
	float                                              PhaseThreeChanceForFlameSweep;                            // 0x0678(0x0004) (Edit)
	class UParticleSystem*                             EyeBeamCrazyStartTemplate;                                // 0x067C(0x0004) (Edit)
	class UParticleSystem*                             EyeBeamCrazyTemplate;                                     // 0x0680(0x0004) (Edit)
	TArray<struct FCollisionBoxes>                     myCollisionBoxes;                                         // 0x0684(0x000C) (Edit, NeedCtorLink)
	class ADunDefProjectile*                           LargeFireBallProjectile;                                  // 0x0690(0x0004) (Edit)
	class ADunDefProjectile*                           SmallFireBallProjectile;                                  // 0x0694(0x0004) (Edit)
	struct FName                                       LeftHandSocketName;                                       // 0x0698(0x0008) (Edit)
	struct FName                                       RightHandSocketName;                                      // 0x06A0(0x0008) (Edit)
	struct FName                                       LeftHandSmashSocketName;                                  // 0x06A8(0x0008) (Edit)
	struct FName                                       RightHandSmashSocketName;                                 // 0x06B0(0x0008) (Edit)
	struct FName                                       DoubleHandSmashSocketName;                                // 0x06B8(0x0008) (Edit)
	struct FName                                       LeftFootSocketName;                                       // 0x06C0(0x0008) (Edit)
	struct FName                                       RightFootSocketName;                                      // 0x06C8(0x0008) (Edit)
	struct FName                                       DoubleFootSocketName;                                     // 0x06D0(0x0008) (Edit)
	struct FName                                       TransitionToPhaseOne;                                     // 0x06D8(0x0008) (Edit)
	struct FName                                       TransitionToPhaseTwo;                                     // 0x06E0(0x0008) (Edit)
	struct FName                                       TransitionToPhaseThree;                                   // 0x06E8(0x0008) (Edit)
	struct FName                                       DeathEventName;                                           // 0x06F0(0x0008) (Edit)
	TEnumAsByte<EPhase>                                myCurrentPhase;                                           // 0x06F8(0x0001) (Net)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06F9(0x0003) MISSED OFFSET
	TArray<struct FName>                               CustomAnimNodeNames;                                      // 0x06FC(0x000C) (Edit, NeedCtorLink)
	struct FName                                       CustomAnimBlenderName;                                    // 0x0708(0x0008) (Edit)
	class UAnimNodeBlend*                              CustomAnimBlender;                                        // 0x0710(0x0004)
	int                                                LastCustomAnimNodePlayIndex;                              // 0x0714(0x0004)
	TArray<class UAnimNodePlayCustomAnim*>             CustomAnimNodes;                                          // 0x0718(0x000C) (NeedCtorLink)
	TArray<float>                                      DifficultyHealthMultipliers;                              // 0x0724(0x000C) (Edit, NeedCtorLink)
	TArray<float>                                      DifficultyDamageMultipliers;                              // 0x0730(0x000C) (Edit, NeedCtorLink)
	TArray<float>                                      NumPlayerHealthMultipliers;                               // 0x073C(0x000C) (Edit, NeedCtorLink)
	float                                              NightmareDamageMultiplier;                                // 0x0748(0x0004) (Edit)
	float                                              ExtraNightmareHealthMultiplier;                           // 0x074C(0x0004) (Edit)
	int                                                MaxDifficultySets;                                        // 0x0750(0x0004) (Edit)
	int                                                MyTargetingTeam;                                          // 0x0754(0x0004) (Edit)
	float                                              AttackRange;                                              // 0x0758(0x0004) (Edit)
	struct FName                                       HeadLookAtName;                                           // 0x075C(0x0008) (Edit)
	struct FName                                       HealthEventName;                                          // 0x0764(0x0008) (Edit)
	class ADunDefEmitterSpawnable*                     HandMuzzleEffect;                                         // 0x076C(0x0004) (Edit)
	class UAudioComponent*                             LazerCastingSoundComponent;                               // 0x0770(0x0004) (Edit, ExportObject, Component, EditInline)
	float                                              LastFlashingDamageTime;                                   // 0x0774(0x0004) (Transient)
	float                                              DamageFlashingDuration;                                   // 0x0778(0x0004) (Edit)
	float                                              DamageFlashingFadeExponent;                               // 0x077C(0x0004) (Edit)
	float                                              DamageFlashingIntensity;                                  // 0x0780(0x0004) (Edit)
	struct FName                                       DamageFlashingScalarParamName;                            // 0x0784(0x0008) (Edit)
	TArray<int>                                        DamageMatInstanceIndices;                                 // 0x078C(0x000C) (Edit, NeedCtorLink)
	TArray<class UMaterialInstanceConstant*>           MyDamageMatInstances;                                     // 0x0798(0x000C) (Transient, NeedCtorLink)
	class UAnimNodePlayCustomAnim*                     CustomAnimNode;                                           // 0x07A4(0x0004) (Transient)
	class AActor*                                      currentSmashTarget;                                       // 0x07A8(0x0004) (Transient)
	float                                              currentAttackTime;                                        // 0x07AC(0x0004) (Transient)
	struct FSmashAnims                                 currentSmashAnim;                                         // 0x07B0(0x0020) (Transient, NeedCtorLink)
	struct FName                                       currentPhaseShiftAnim;                                    // 0x07D0(0x0008) (Transient)
	struct FName                                       currentHurtAnim;                                          // 0x07D8(0x0008) (Transient)
	int                                                crystalsDestroyedThisPhase;                               // 0x07E0(0x0004) (Transient)
	int                                                difficultyIndex;                                          // 0x07E4(0x0004) (Transient)
	float                                              DifficultyHealthMultiplier;                               // 0x07E8(0x0004) (Transient)
	float                                              DifficultyDamageMultiplier;                               // 0x07EC(0x0004) (Transient)
	TArray<class ADunDefCustomNode*>                   meteorPoints_P1;                                          // 0x07F0(0x000C) (Transient, NeedCtorLink)
	TArray<class ADunDefCustomNode*>                   meteorPoints_P2;                                          // 0x07FC(0x000C) (Transient, NeedCtorLink)
	TArray<class ADunDefCustomNode*>                   meteorPoints_P3;                                          // 0x0808(0x000C) (Transient, NeedCtorLink)
	struct FVector                                     prevLazerLoc;                                             // 0x0814(0x000C) (Transient)
	class USkelControlLookAt*                          HeadLookAt;                                               // 0x0820(0x0004) (Transient)
	float                                              currentTimeLimit;                                         // 0x0824(0x0004) (Transient)
	float                                              currentPhaseStart;                                        // 0x0828(0x0004) (Transient)
	float                                              tauntChance;                                              // 0x082C(0x0004) (Transient)
	float                                              projectileChance;                                         // 0x0830(0x0004) (Transient)
	float                                              smashChance;                                              // 0x0834(0x0004) (Transient)
	float                                              lazerChance;                                              // 0x0838(0x0004) (Transient)
	float                                              meteorChance;                                             // 0x083C(0x0004) (Transient)
	float                                              swipeChance;                                              // 0x0840(0x0004) (Transient)
	float                                              flameChance;                                              // 0x0844(0x0004) (Transient)
	float                                              sweepChance;                                              // 0x0848(0x0004) (Transient)
	class ADunDef_OldOneCrystals*                      primaryCrystal;                                           // 0x084C(0x0004) (Net, Transient)
	TArray<class ADunDefTower_ChainLightning*>         ChainingTowers;                                           // 0x0850(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDef_OldOne");
		return ptr;
	}


	unsigned long ForceLineOfSight();
	float GetLightningTowerDamagePercent();
	void setIsWebbed(unsigned long isWebbed);
	unsigned long isWebbed();
	unsigned long GetChainIgnore();
	void SetChainIgnore(unsigned long ignore);
	unsigned long IsBeingChainedBy(class ADunDefTower_ChainLightning* Tower);
	void RemoveFromChainingTowers(class ADunDefTower_ChainLightning* Tower);
	void AddToChainingTowers(class ADunDefTower_ChainLightning* Tower);
	unsigned long AllowSuction();
	unsigned long IsPlayingCustomAnim(const struct FName& inAnim, float TimeFromEndToConsiderFinished);
	void SetupDamageFlashing();
	void UpdateDamageFlashing();
	void LocalTookDamage(int DamageAmount, const struct FVector& atPosition, class UClass* fromDamageType);
	void NotifyHealthLevel(class ADunDef_OldOneCrystals* healthCrystal);
	void HealPctOfMaxHealth(float HealPct, class AController* Healer, class UClass* DamageType, unsigned long bShowFloatingNumbers);
	float GetHealthPercent();
	int GetHealth(unsigned long bGetMax);
	unsigned long ForceMoveActor(class AActor* Mover, const struct FVector& NewLoc);
	class UPrimitiveComponent* GetOverrideTargetComponent();
	float GetMass();
	unsigned long AllowDarknessIgnorance();
	unsigned long ForceFriendlyFire(class AActor* Target);
	struct FVector GetInterpolatedTargetingLocation(class AActor* RequestedBy);
	struct FVector GetTargetingLocation(class AActor* RequestedBy);
	void OnDestroy_RemoveFromTargetableList();
	void OnPostBeginPlay_AddToTargetableList();
	void UnregisterAttacker(class ADunDefEnemyController* forController);
	void RegisterAttacker(class ADunDefEnemyController* forController);
	float GetAttackRangeOffset();
	unsigned long IgnoreFriendlyFireDamage(const TScriptInterface<class UDunDefTargetableInterface>& instigatorActor, class AController* OptionalController);
	int GetTargetingTeam();
	float GetTowerTargetingDesirability(class ADunDefTower* forTower);
	float GetPlayerTargetingDesirability(class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer);
	void TraceEyeMultiBeamDmg(int beamIdx, const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc);
	void SetMultiEyeBeamLocation(int beamIdx, const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, const struct FVector& BeamNormal);
	void TraceMultiEyeBeam(float DeltaTime);
	void SpawnFire(class ADunDefGasCloud* fireTemplate, const struct FVector& SpawnLoc);
	void TraceRightEyeDmg(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc);
	void SetRightEyeBeamLocation(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, const struct FVector& BeamNormal);
	void TraceLeftEyeDmg(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc);
	void SetLeftEyeBeamLocation(const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, const struct FVector& BeamNormal);
	void TraceRightEye(float DeltaTime);
	void TraceLeftEye(float DeltaTime);
	void TraceBellyMultiBeamDmg(int beamIdx, const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc);
	void TraceBellyBeamDmg(int Idx, const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc);
	void SetBellyBeamLocation(int Idx, const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, const struct FVector& BeamNormal);
	void SetMultiBellyBeamLocation(int beamIdx, const struct FVector& beamStartLoc, const struct FVector& BeamEndLoc, const struct FVector& BeamNormal);
	void TraceMultiBellyBeam(float DeltaTime);
	void SetRandomLazerPoint(int lazerIdx, const struct FVector& lazerPoint);
	void TraceBellyBeam(float DeltaTime);
	void SetNormalBellyTarget(int Idx);
	void InitNormalBeams();
	class AActor* ChooseTarget();
	void StartLazers();
	void StopFlameBreath();
	void StartFlameSweep();
	void StartFlameburst();
	void ActivateChestCrystal();
	void ActivateRightHandCrystal();
	void ActivateLeftHandCrystal();
	void DeactivateChestCrystal();
	void DeactivateRightHandCrystal();
	void DeactivateLeftHandCrystal();
	void SpawnDoubleSlamEmitter(const struct FVector& SpawnLoc, class ADunDefEmitterShockwave* EmitterTemplate);
	void SpawnSingleSlamEmitter(const struct FVector& SpawnLoc);
	void DoubleStomp();
	void RightFootStomp();
	void LeftFootStomp();
	void UpdateDifficultyValues();
	void DeActivateCollisionDamage();
	void ActivateCollisionDamage();
	int GetNumCrystalsThisPhase();
	void DoPhaseShift();
	unsigned long ArePlayersWithinRange(const struct FVector& LocCheck, float distCheck);
	void DoDeath();
	unsigned long CheckCrystalDeaths();
	void NotifyCrystalDeath(class ADunDef_OldOneCrystals* diedCrystal);
	void DoubleFootStomp();
	void LeftHandProjectile();
	void RightHandProjectile();
	unsigned long PickSmashAttack();
	void DoProjectileAttack();
	unsigned long CheckProjectileAttack();
	unsigned long CheckForTaunt();
	unsigned long CheckForBeamAttack();
	void DoTaunt();
	struct FName GetTauntAnim();
	void PlayHurtAnim(const struct FName& theHurtAnim);
	void FinishTaunt();
	void SpawnMeteor(class ADunDefCustomNode* theNode);
	void StartMeteorAttack();
	unsigned long CheckForMeteorAttack();
	unsigned long CheckForFlame();
	unsigned long CheckForLazer();
	unsigned long CheckForSweep();
	void EndAttack(unsigned long bDontEndState);
	void ShutDownLazers();
	void SetInitalEyeLazerTarget(class AActor* newLazerTarget);
	void StartBellyLazer();
	void StartEyeLazer();
	void BeginFlameSweepAnim();
	void DoFlameSweep();
	void DoubleHandStomp();
	void LeftHandStomp();
	void RightHandStomp();
	float GetAttackDelay();
	void SetPhase(TEnumAsByte<EPhase> newPhase);
	void OnToggle(class USeqAct_Toggle* Action);
	void StartAttack();
	void PickAttack();
	unsigned long StopCustomAnim(float blendTimeOut, const struct FName& CustomAnimationToStop, unsigned long bReplicate, unsigned long bForceReplication);
	float PlayCustomAnim(const struct FName& inAnim, float blendTimeIn, unsigned long Looping, float Speed, float BlendOutTime, unsigned long bOverride, unsigned long Replicate, unsigned long bUninterruptable, unsigned long bReplicateToOwners);
	void InitCrystals();
	void ClearCrystalsRefs();
	void PopulateCustomNode();
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
};


// Class DunDefSkyCity.DunDef_OldOneCrystals
// 0x0098 (0x05A0 - 0x0508)
class ADunDef_OldOneCrystals : public ADunDefDamageableTarget
{
public:
	struct FName                                       SocketBaseName;                                           // 0x0508(0x0008) (Edit)
	class UStaticMeshComponent*                        MyMesh;                                                   // 0x0510(0x0004) (Edit, ExportObject, Component, EditInline)
	class UStaticMeshComponent*                        CollisionMesh;                                            // 0x0514(0x0004) (Edit, ExportObject, Component, EditInline)
	class UParticleSystemComponent*                    ActiveParticle;                                           // 0x0518(0x0004) (Edit, ExportObject, Component, EditInline)
	class UDynamicLightEnvironmentComponent*           LightEnvironment;                                         // 0x051C(0x0004) (Edit, ExportObject, Component, EditInline)
	TEnumAsByte<EPhase>                                myPhase;                                                  // 0x0520(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0521(0x0003) MISSED OFFSET
	unsigned long                                      bLimitDamageOnActivation : 1;                             // 0x0524(0x0004) (Edit)
	unsigned long                                      bFullHealOnDeath : 1;                                     // 0x0524(0x0004) (Edit)
	unsigned long                                      bPrimaryCrystal : 1;                                      // 0x0524(0x0004) (Edit)
	unsigned long                                      bDoDamageFlashing : 1;                                    // 0x0524(0x0004) (Edit)
	unsigned long                                      bDamageFlashOldOne : 1;                                   // 0x0524(0x0004) (Edit)
	unsigned long                                      bShutDown : 1;                                            // 0x0524(0x0004) (Net, Transient)
	unsigned long                                      bInPlay : 1;                                              // 0x0524(0x0004) (Net, Transient)
	float                                              MaxAllowedDmgPct;                                         // 0x0528(0x0004) (Edit)
	struct FName                                       MeshActiveColorParamName;                                 // 0x052C(0x0008) (Edit)
	struct FName                                       DissolveParamName;                                        // 0x0534(0x0008) (Edit)
	struct FLinearColor                                ActiveColor;                                              // 0x053C(0x0010) (Edit)
	struct FLinearColor                                InActiveColor;                                            // 0x054C(0x0010) (Edit)
	struct FName                                       HurtAnimName;                                             // 0x055C(0x0008) (Edit)
	float                                              NotifyAtHealthPct;                                        // 0x0564(0x0004) (Edit)
	float                                              ActivateTime;                                             // 0x0568(0x0004) (Edit)
	float                                              DissolveTime;                                             // 0x056C(0x0004) (Edit)
	float                                              LastFlashingDamageTime;                                   // 0x0570(0x0004) (Transient)
	float                                              DamageFlashingDuration;                                   // 0x0574(0x0004) (Edit)
	float                                              DamageFlashingFadeExponent;                               // 0x0578(0x0004) (Edit)
	float                                              DamageFlashingIntensity;                                  // 0x057C(0x0004) (Edit)
	struct FName                                       DamageFlashingScalarParamName;                            // 0x0580(0x0008) (Edit)
	class ADunDefEmitterSpawnable*                     CrystalHurtEffectTemplate;                                // 0x0588(0x0004) (Edit)
	int                                                currentDamageAmt;                                         // 0x058C(0x0004) (Transient)
	class ADunDef_OldOne*                              myOldOne;                                                 // 0x0590(0x0004) (Net, Transient)
	class UMaterialInstanceConstant*                   myMIC;                                                    // 0x0594(0x0004) (Transient)
	float                                              ActivateStartTime;                                        // 0x0598(0x0004) (Transient)
	float                                              DissolveStartTime;                                        // 0x059C(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDef_OldOneCrystals");
		return ptr;
	}


	float DTGetPlayerTargetingDesirability(class ADunDefPlayerController* forController, class ADunDefPlayer* ForPlayer);
	float DTGetTowerTargetingDesirability(class ADunDefTower* forTower);
	unsigned long IgnoreFriendlyFireDamage(const TScriptInterface<class UDunDefTargetableInterface>& instigatorActor, class AController* OptionalController);
	unsigned long DrawMyHUD(class ADunDefHUD* H);
	void PlayHitEffect(class UClass* DamageType, const struct FVector& HitLocation);
	void UpdateDamageFlashing();
	void LocalTookDamage(int DamageAmount, const struct FVector& atPosition, class UClass* fromDamageType);
	void SubtractHealth(int DamageAmount);
	void SetInPlay();
	void RepairCrystal();
	unsigned long StopsProjectile(class AProjectile* P);
	void UpdateHealthColor();
	void NotifyHealthChange();
	void UpdateActivate();
	void Deactivate();
	void Activate();
	void BaseChange();
	void ShutDownCrystal();
	void UpdateDissolve();
	void DissolveCrystal();
	void PlayDeath();
	void Died(class AController* EventInstigator, const struct FVector& HitLocation, class UClass* DamageType, class AActor* DamageCauser);
	void InitCrystal(class ADunDef_OldOne* owningOldOne);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSkyCity.DunDefOldOneBreath
// 0x000C (0x0354 - 0x0348)
class ADunDefOldOneBreath : public ADunDefGasCloud
{
public:
	float                                              MaxTargetDeltaPitch;                                      // 0x0348(0x0004) (Edit)
	float                                              MaxTargetDeltaYaw;                                        // 0x034C(0x0004) (Edit)
	unsigned long                                      bCheckPlayerInvincibility : 1;                            // 0x0350(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDefOldOneBreath");
		return ptr;
	}


	unsigned long HurtRadius(float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage);
};


// Class DunDefSkyCity.DunDefEmitterShockwave
// 0x0058 (0x032C - 0x02D4)
class ADunDefEmitterShockwave : public ADunDefEmitterSpawnable
{
public:
	float                                              MaximumMassMomentumScale;                                 // 0x02D4(0x0004) (Edit)
	float                                              MassMomentumBaseScale;                                    // 0x02D8(0x0004) (Edit)
	float                                              MassMomentumScaleExponent;                                // 0x02DC(0x0004) (Edit)
	int                                                Damage;                                                   // 0x02E0(0x0004) (Edit)
	float                                              Radius;                                                   // 0x02E4(0x0004) (Edit)
	float                                              EffectRadius;                                             // 0x02E8(0x0004) (Edit)
	class UClass*                                      MyDamageType;                                             // 0x02EC(0x0004) (Edit)
	float                                              MyMomentum;                                               // 0x02F0(0x0004) (Edit)
	float                                              DamageDelay;                                              // 0x02F4(0x0004) (Edit)
	float                                              DamageFalloffExponent;                                    // 0x02F8(0x0004) (Edit)
	unsigned long                                      bExpandingShockwave : 1;                                  // 0x02FC(0x0004) (Edit)
	unsigned long                                      bExpandAsRing : 1;                                        // 0x02FC(0x0004) (Edit)
	unsigned long                                      bCheckPlayerInvincibility : 1;                            // 0x02FC(0x0004) (Edit)
	struct FName                                       ScaleParamName;                                           // 0x0300(0x0008) (Edit)
	float                                              RingWidth;                                                // 0x0308(0x0004) (Edit)
	float                                              InitialRadius;                                            // 0x030C(0x0004) (Edit)
	float                                              RingHeight;                                               // 0x0310(0x0004) (Edit)
	float                                              ExpansionTime;                                            // 0x0314(0x0004) (Edit)
	float                                              currentExpansionTime;                                     // 0x0318(0x0004)
	float                                              currentRadius;                                            // 0x031C(0x0004)
	TArray<class AActor*>                              hitActors;                                                // 0x0320(0x000C) (Edit, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDefEmitterShockwave");
		return ptr;
	}


	unsigned long RingHurtRadius(float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage);
	void Tick(float DeltaTime);
	unsigned long STATIC_AllowSpawn(class AActor* theArchetype, const struct FVector& theLoc, const struct FRotator& theRot);
	unsigned long HurtRadius(float BaseDamage, float DamageRadius, class UClass* DamageType, float Momentum, const struct FVector& HurtOrigin, class AActor* IgnoredActor, class AController* InstigatedByController, unsigned long bDoFullDamage);
	void DoDamage();
	void PostBeginPlay();
};


// Class DunDefSkyCity.DunDefGoblinCopter
// 0x00DC (0x0DE8 - 0x0D0C)
class ADunDefGoblinCopter : public ADunDefEnemy
{
public:
	TArray<struct FHoldAI>                             HoldableTemplates;                                        // 0x0D0C(0x000C) (Edit, NeedCtorLink)
	struct FName                                       DropOffAnimName;                                          // 0x0D18(0x0008) (Edit)
	struct FName                                       ShootLeftAnimName;                                        // 0x0D20(0x0008) (Edit)
	struct FName                                       ShootRightAnimName;                                       // 0x0D28(0x0008) (Edit)
	struct FName                                       ShootDoubleAnimName;                                      // 0x0D30(0x0008) (Edit)
	TArray<struct FName>                               SpawnInAnimName;                                          // 0x0D38(0x000C) (Edit, NeedCtorLink)
	struct FName                                       ShootLeftSocketName;                                      // 0x0D44(0x0008) (Edit)
	struct FName                                       ShootRightSocketName;                                     // 0x0D4C(0x0008) (Edit)
	float                                              DeathVelocityForce;                                       // 0x0D54(0x0004) (Edit)
	float                                              DeathSpinRotRate;                                         // 0x0D58(0x0004) (Edit)
	float                                              MiniMapHoldOffset;                                        // 0x0D5C(0x0004) (Edit)
	float                                              MiniMapHoldIconSize;                                      // 0x0D60(0x0004) (Edit)
	float                                              HeldMiniMapIconSize;                                      // 0x0D64(0x0004) (Net)
	TArray<class ADunDefEmitterSpawnable*>             DestructionEffects;                                       // 0x0D68(0x000C) (Edit, NeedCtorLink)
	class ADunDefEmitterSpawnable*                     FlareTemplate;                                            // 0x0D74(0x0004) (Edit)
	struct FName                                       RightFlareSocketName;                                     // 0x0D78(0x0008) (Edit)
	struct FName                                       LeftFlareSocketName;                                      // 0x0D80(0x0008) (Edit)
	float                                              FlareVelocity;                                            // 0x0D88(0x0004) (Edit)
	float                                              FlareFallSpeed;                                           // 0x0D8C(0x0004) (Edit)
	float                                              FlareLifeSpan;                                            // 0x0D90(0x0004) (Edit)
	float                                              FlareLifeSpanOffset;                                      // 0x0D94(0x0004) (Edit)
	struct FRotator                                    FlareRotOffset;                                           // 0x0D98(0x000C) (Edit)
	TArray<struct FHeldPawnDifficultyOffset>           HeldPawnDifficultyOffsets;                                // 0x0DA4(0x000C) (Edit, NeedCtorLink)
	TArray<class UClass*>                              IgnoreDmgTypesWithFlare;                                  // 0x0DB0(0x000C) (Edit, NeedCtorLink)
	float                                              PctDmgtoDroppedPawnOnDrop;                                // 0x0DBC(0x0004) (Edit)
	unsigned long                                      bUsePawnElementalEntry : 1;                               // 0x0DC0(0x0004) (Edit)
	unsigned long                                      bPawnUsedLocInterp : 1;                                   // 0x0DC0(0x0004) (Net)
	unsigned long                                      bPawnUsedClientRotInterp : 1;                             // 0x0DC0(0x0004) (Net)
	unsigned long                                      bStartFalling : 1;                                        // 0x0DC0(0x0004)
	unsigned long                                      bDamagePawnOnDrop : 1;                                    // 0x0DC0(0x0004)
	class ADunDefEmitterSpawnable*                     myCurrentFlare;                                           // 0x0DC4(0x0004) (Transient)
	class ADunDefEnemy*                                currentHeldPawn;                                          // 0x0DC8(0x0004) (Net)
	int                                                currentHeldIndex;                                         // 0x0DCC(0x0004) (Net)
	struct FVector                                     currentHoldOffset;                                        // 0x0DD0(0x000C)
	int                                                GCopterNumber;                                            // 0x0DDC(0x0004)
	float                                              CopterPushForce;                                          // 0x0DE0(0x0004)
	float                                              CopterProxDistance;                                       // 0x0DE4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDefGoblinCopter");
		return ptr;
	}


	void TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser, class UObject* WhatHitMe);
	struct FVector GetTargetingLocation(class AActor* RequestedBy);
	void SpawnFlare(const struct FVector& flareLoc, const struct FRotator& flareRot);
	void GetFlareSpawnLocAndRot(struct FVector* flareLoc, struct FRotator* flareRot);
	void CheckGCopterProximity();
	void UpdateDifficultyValues(unsigned long UpdateMaterial, unsigned long onlyDynamicValues);
	void DrawMiniMapIcon(class UCanvas* Canvas, class ADunDefMiniMap* MiniMap);
	void PauseAnimationAfterDeath();
	void PlayDying(class UClass* DamageType, const struct FVector& HitLoc);
	unsigned long Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation);
	void DoDoubleShoot();
	void DoRightShoot();
	void DoLeftShoot();
	float PlayDoubleShootAnim();
	float PlayRightShootAnim(float shootPlayRate);
	float PlayLeftShootAnim(float shootPlayRate);
	void ResetHeldPawnValues(class ADunDefEnemy* thePawn);
	void DropPawn();
	float PlayDropOffAnim();
	void SetMovementPhysics();
	unsigned long CanBeBaseForPawn(class APawn* aPawn);
	void InitNewHeldPawn();
	void SetUpHoldingPawn(class ADunDefEnemy* newHeldPawn);
	void SpawnHoldingPawn();
	float GetHeldPawnExtraDifficultyOffset();
	void Tick(float DeltaTime);
	void TurnOnVFX();
	int UpdateDifficultyMaterial();
	void PostBeginPlay();
	void ExecReplicatedFunction(const struct FName& FunctionName, const struct FName& nameParam1, const struct FName& nameParam2, class AActor* actorParam1, class AActor* actorParam2, const struct FVector& vecParam1, const struct FRotator& rotParam1, float floatParam1, float floatParam2, float floatParam3, float floatParam4, unsigned long boolParam1, unsigned long boolParam2, unsigned long boolParam3, const struct FString& stringParam1, class UObject* objectParam1);
	void ReplicatedEvent(const struct FName& VarName);
};


// Class DunDefSkyCity.DunDefGoblinCopterController
// 0x006C (0x0678 - 0x060C)
class ADunDefGoblinCopterController : public ADunDefEnemyController
{
public:
	class AActor*                                      TargetActor;                                              // 0x060C(0x0004)
	struct FVector                                     TargetLocation;                                           // 0x0610(0x000C)
	float                                              LastNavCheck;                                             // 0x061C(0x0004)
	class ADunDefGoblinCopter*                         myPawn;                                                   // 0x0620(0x0004)
	float                                              DropOffPointSearchRadius;                                 // 0x0624(0x0004) (Edit)
	float                                              FloatHeight;                                              // 0x0628(0x0004) (Edit)
	float                                              RangeFromTarget;                                          // 0x062C(0x0004) (Edit)
	float                                              DropOffRange;                                             // 0x0630(0x0004) (Edit)
	class ADunDefHomingProjectile*                     HomingProjectileTemplate;                                 // 0x0634(0x0004) (Edit)
	float                                              DropOffSearchTimeOutTime;                                 // 0x0638(0x0004)
	float                                              DropOffSearchStart;                                       // 0x063C(0x0004)
	float                                              BarrageChance;                                            // 0x0640(0x0004) (Edit)
	float                                              BarrageAnimPlayRate;                                      // 0x0644(0x0004) (Edit)
	int                                                BarrageMissileCount;                                      // 0x0648(0x0004) (Edit)
	unsigned long                                      bDoingBarrage : 1;                                        // 0x064C(0x0004)
	unsigned long                                      bHasPayLoad : 1;                                          // 0x064C(0x0004)
	unsigned long                                      bWantsDropOff : 1;                                        // 0x064C(0x0004)
	unsigned long                                      bForceDropOffPoint : 1;                                   // 0x064C(0x0004) (Transient)
	int                                                BarrageCount;                                             // 0x0650(0x0004)
	TArray<class ADropOffPoint*>                       DropOffPoints;                                            // 0x0654(0x000C) (NeedCtorLink)
	class ADropOffPoint*                               currentDropOffPoint;                                      // 0x0660(0x0004)
	float                                              FlareRefireTime;                                          // 0x0664(0x0004) (Edit)
	float                                              MaxForcePathRange;                                        // 0x0668(0x0004) (Edit)
	struct FVector                                     CheckDropOffLoSExtent;                                    // 0x066C(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DunDefSkyCity.DunDefGoblinCopterController");
		return ptr;
	}


	void SpawnRocket(const struct FVector& SpawnLoc);
	float PlayMissileShootAnim();
	unsigned long IsWithinDropRange();
	unsigned long CheckDropOffLoS(class AActor* Other);
	void ShootFlare();
	void CheckForDropOffRange();
	void CheckAttackSight();
	unsigned long IsWithinAttackRange(class AActor* Other, float AttackRangeOffset, unsigned long bCheckDeltaZ);
	void DoAttack();
	void FindDropOffPoint();
	void GetTargetMoveToPoint(class AActor* moveToActor);
	float GetZDifference(class AActor* zActor);
	void CheckDirectReachability();
	void CheckIndirectReachability();
	struct FVector GeneratePathToActor(class AActor* Goal, float WithinDistance, unsigned long bAllowPartialPath);
	unsigned long NavActorReachable(class AActor* A);
	class ANavigationPoint* FindNearestNavPointTo(class AActor* A, unsigned long bCheckVisible);
	void SetMyPawn();
	void Possess(class APawn* inPawn, unsigned long bVehicleTransition);
	void Destroyed();
	void PostBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
