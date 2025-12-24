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

// Enum CDT3.Seq_Condition_CDTOptionsCheck.CDTOptions
enum class ECDTOptions : uint8_t
{
	TowerDynLighting               = 0,
	MoveBuilding                   = 1,
	PlayerSellTower                = 2,
	QualityFX                      = 3,
	CDPortalVisible                = 4,
	DisplayFiveStar                = 5,
	CosmeticVisible                = 6,
	CDTOptions_MAX                 = 7
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CDT3.MultiZoneMinimap.TexVolumeMap
// 0x002C
struct FTexVolumeMap
{
	class UTexture2D*                                  MiniMapBackgroundTexture;                                 // 0x0000(0x0004) (Edit)
	TArray<class AVolume*>                             DisplayedInsideVolumes;                                   // 0x0004(0x000C) (Edit, NeedCtorLink)
	struct FVector                                     CenterMapCoord;                                           // 0x0010(0x000C) (Edit)
	struct FVector                                     MapWorldScale;                                            // 0x001C(0x000C) (Edit)
	float                                              MiniMapScale;                                             // 0x0028(0x0004) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
