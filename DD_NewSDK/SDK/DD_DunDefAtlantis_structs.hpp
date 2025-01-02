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

// Enum DunDefAtlantis.DunDefSharkMan.EFist
enum class EFist : uint8_t
{
	Fist_Left                      = 0,
	Fist_Right                     = 1,
	Fist_MAX                       = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DunDefAtlantis.PuzzleRoomActor.PuzzlePiece
// 0x000C
struct FPuzzlePiece
{
	class APuzzlePieceActor*                           thePiece;                                                 // 0x0000(0x0004)
	unsigned long                                      bCurrentPathPiece : 1;                                    // 0x0004(0x0004)
	int                                                GridIndex;                                                // 0x0008(0x0004)
};

// ScriptStruct DunDefAtlantis.DunDefKraken.Tentacle
// 0x0034
struct FTentacle
{
	class AKrakenTentacle*                             theTentacle;                                              // 0x0000(0x0004) (Edit)
	unsigned long                                      bInShell : 1;                                             // 0x0004(0x0004)
	struct FName                                       SkelControlName;                                          // 0x0008(0x0008) (Edit)
	struct FName                                       BasedSocket;                                              // 0x0010(0x0008) (Edit)
	struct FName                                       RootBoneName;                                             // 0x0018(0x0008) (Edit)
	struct FName                                       ProjectileSocketName;                                     // 0x0020(0x0008) (Edit)
	struct FName                                       RetreatVFXSocketName;                                     // 0x0028(0x0008) (Edit)
	class USkelControlSingleBone*                      TentacleController;                                       // 0x0030(0x0004)
};

// ScriptStruct DunDefAtlantis.DunDefKrakenController.ChargeHit
// 0x0008
struct FChargeHit
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0004)
	float                                              LastHitTime;                                              // 0x0004(0x0004)
};

// ScriptStruct DunDefAtlantis.RaisingWaterVolume.AirControlPawn
// 0x0008
struct FAirControlPawn
{
	class ADunDefPawn*                                 thePawn;                                                  // 0x0000(0x0004)
	float                                              LeftVolumeTime;                                           // 0x0004(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
