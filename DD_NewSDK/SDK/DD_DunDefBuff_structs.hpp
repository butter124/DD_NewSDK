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

// ScriptStruct DunDefBuff.DunDef_SeqAct_BuffArrayManager.indexer
// 0x000C
struct Findexer
{
	class ADunDefPlayerController*                     MyPC;                                                     // 0x0000(0x0004)
	int                                                Buffindex;                                                // 0x0004(0x0004)
	int                                                Wave;                                                     // 0x0008(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
