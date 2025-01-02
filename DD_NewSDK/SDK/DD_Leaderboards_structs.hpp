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

#define CONST_DunDefLeaderboardReadBase_GS_USERNAME_MAXLENGTH    15
#define CONST_DunDefLeaderboardReadBase_FILTER_SESSIONID_START   0x10000064
#define CONST_DunDefLeaderboardReadBase_GS_MESSAGE_MAXLENGTH     255
#define CONST_DunDefLeaderboardReadBase_GS_PASSWORD_MAXLENGTH    30
#define CONST_DunDefLeaderboardReadBase_QUERY_COOP               1
#define CONST_DunDefLeaderboardReadBase_CONTEXT_GAME_MODE        0x0000800B
#define CONST_DunDefLeaderboardReadBase_CONTEXT_GAME_MODE_COOP   0
#define CONST_DunDefLeaderboardReadBase_PROPS_COMPLETIONTIME     0x1000002C
#define CONST_DunDefLeaderboardReadBase_GS_CDKEY_PART_MAXLENGTH  4
#define CONST_DunDefLeaderboardReadBase_PROPS_INFINITE_BUILD_TIME 0x10000011
#define CONST_DunDefLeaderboardReadBase_FILTER_VERSIONNUMBER     0x10000075
#define CONST_DunDefLeaderboardReadBase_GS_EMAIL_MAXLENGTH       50
#define CONST_DunDefLeaderboardReadBase_FILTER_STRATEGY          0x10000070
#define CONST_DunDefLeaderboardReadBase_QUERY_FILTERED           2
#define CONST_DunDefLeaderboardReadBase_PROPS_HERONAME           0x20000016
#define CONST_DunDefLeaderboardReadBase_FILTER_LEVEL_START       0x1000002E
#define CONST_DunDefLeaderboardWriteBase_PROPS_VERSIONNUMBER     0x10000073
#define CONST_DunDefLeaderboardReadBase_STATS_VIEW_COLUMN_CLASS  2
#define CONST_DunDefLeaderboardReadBase_PRESENCE_INACTIVE        4
#define CONST_DunDefLeaderboardReadBase_FILTER_DIFF_START        0x10000056
#define CONST_DunDefLeaderboardWriteBase_STATS_VIEW_COLUMN_TIME  5
#define CONST_DunDefLeaderboardReadBase_FILTER_BUILD             0x1000005B
#define CONST_DunDefLeaderboardReadBase_STATS_VIEW_COLUMN_LEVEL  3
#define CONST_DunDefLeaderboardReadBase_FILTER_SURVIVAL          0x1000005C
#define CONST_DunDefLeaderboardReadBase_STATS_VIEW_COLUMN_WAVE   6
#define CONST_DunDefLeaderboardReadBase_FILTER_HEROLEVELEND      0x10000061
#define CONST_DunDefLeaderboardReadBase_FILTER_CHALLENGE         0x1000005D
#define CONST_DunDefLeaderboardReadBase_FILTER_HEROLEVELSTART    0x1000005F
#define CONST_DunDefLeaderboardReadBase_FILTER_HEROCLASS         0x10000060
#define CONST_DunDefLeaderboardReadBase_FILTER_LEVELINDEX        0x10000062
#define CONST_DunDefLeaderboardReadBase_FILTER_SESSIONID_COUNT   10
#define CONST_DunDefLeaderboardWriteBase_PROPS_DIFFICULTY        0x10000014
#define CONST_DunDefLeaderboardReadBase_FILTER_DEMOMODE          0x10000074
#define CONST_DunDefLeaderboardReadBase_PROPS_PURE_STRATEGY      0x1000006F
#define CONST_DunDefLeaderboardWriteBase_PRESENCE_LOBBY          1
#define CONST_DunDefLeaderboardWriteBase_QUERY_FILTERED          2
#define CONST_DunDefLeaderboardReadBase_PROPS_GAME_DIFFICULTY    0x10000010
#define CONST_DunDefLeaderboardReadBase_FILTER_MATCHCOMPLETE     0x10000077
#define CONST_DunDefLeaderboardWriteBase_GS_CDKEY_PART_MAXLENGTH 4
#define CONST_DunDefLeaderboardReadBase_PROPS_HOSTHEROCLASS      0x1000005E
#define CONST_DunDefLeaderboardReadBase_CONTEXT_ACTIVE_MISSION   1
#define CONST_DunDefLeaderboardReadBase_PRESENCE_MAIN_MENU       0
#define CONST_DunDefLeaderboardWriteBase_STATS_VIEW_COLUMN_SCORE 4
#define CONST_DunDefLeaderboardReadBase_PRESENCE_LOBBY           1
#define CONST_DunDefLeaderboardReadBase_PRESENCE_SPECIAL_MISSION 3
#define CONST_DunDefLeaderboardReadBase_PRESENCE_MISSION         2
#define CONST_DunDefLeaderboardReadBase_PROPS_VERSIONNUMBER      0x10000073
#define CONST_DunDefLeaderboardReadBase_PROPS_LEVEL_INDEX        0x1000000D
#define CONST_DunDefLeaderboardReadBase_PROPS_FRIENDLY_NAME      0x10000013
#define CONST_DunDefLeaderboardReadBase_PROPS_INFINITE_WAVES     0x1000000E
#define CONST_DunDefLeaderboardReadBase_STATS_VIEW_COLUMN_SCORE  4
#define CONST_DunDefLeaderboardWriteBase_GS_EMAIL_MAXLENGTH      50
#define CONST_DunDefLeaderboardReadBase_PROPS_START_AT_WAVE      0x1000000F
#define CONST_DunDefLeaderboardReadBase_PROPS_WAVECOUNT          0x1000002D
#define CONST_DunDefLeaderboardReadBase_PROPS_LEVEL_TAG          0x10000012
#define CONST_DunDefLeaderboardWriteBase_PROPS_HEROCLASS         0x20000020
#define CONST_DunDefLeaderboardReadBase_PROPS_DIFFICULTY         0x10000014
#define CONST_DunDefLeaderboardReadBase_PROPS_ISCHALLENGE        0x1000005A
#define CONST_DunDefLeaderboardReadBase_PROPS_HOSTHEROLEVEL      0x1000002A
#define CONST_DunDefLeaderboardReadBase_PROPS_UNIQUE_SESSIONID   0x10000063
#define CONST_DunDefLeaderboardReadBase_PROPS_DEMOMODE           0x10000072
#define CONST_DunDefLeaderboardReadBase_PROPS_PHASE_TYPE         0x10000071
#define CONST_DunDefLeaderboardReadBase_PROPS_MATCHCOMPLETE      0x10000076
#define CONST_DunDefLeaderboardReadBase_PROPS_HEROCLASS          0x20000020
#define CONST_DunDefLeaderboardWriteBase_GS_USERNAME_MAXLENGTH   15
#define CONST_DunDefLeaderboardReadBase_PROPS_HEROLEVEL          0x1000002A
#define CONST_DunDefLeaderboardReadBase_PROPS_SCORE              0x2000002B
#define CONST_DunDefLeaderboardReadBase_STATS_VIEW_COLUMN_NAME   1
#define CONST_DunDefLeaderboardWriteBase_FILTER_HEROCLASS        0x10000060
#define CONST_DunDefLeaderboardReadBase_STATS_VIEW_COLUMN_TIME   5
#define CONST_DunDefLeaderboardWriteBase_GS_PASSWORD_MAXLENGTH   30
#define CONST_DunDefLeaderboardWriteBase_GS_MESSAGE_MAXLENGTH    255
#define CONST_DunDefLeaderboardWriteBase_CONTEXT_GAME_MODE       0x0000800B
#define CONST_DunDefLeaderboardWriteBase_CONTEXT_GAME_MODE_COOP  0
#define CONST_DunDefLeaderboardWriteBase_QUERY_COOP              1
#define CONST_DunDefLeaderboardWriteBase_FILTER_LEVEL_START      0x1000002E
#define CONST_DunDefLeaderboardWriteBase_FILTER_DIFF_START       0x10000056
#define CONST_DunDefLeaderboardWriteBase_FILTER_BUILD            0x1000005B
#define CONST_DunDefLeaderboardWriteBase_FILTER_SURVIVAL         0x1000005C
#define CONST_DunDefLeaderboardWriteBase_FILTER_SESSIONID_COUNT  10
#define CONST_DunDefLeaderboardWriteBase_FILTER_CHALLENGE        0x1000005D
#define CONST_DunDefLeaderboardWriteBase_FILTER_HEROLEVELSTART   0x1000005F
#define CONST_DunDefLeaderboardWriteBase_FILTER_HEROLEVELEND     0x10000061
#define CONST_DunDefLeaderboardWriteBase_FILTER_LEVELINDEX       0x10000062
#define CONST_DunDefLeaderboardWriteBase_FILTER_SESSIONID_START  0x10000064
#define CONST_DunDefLeaderboardWriteBase_FILTER_STRATEGY         0x10000070
#define CONST_DunDefLeaderboardWriteBase_FILTER_DEMOMODE         0x10000074
#define CONST_DunDefLeaderboardWriteBase_PRESENCE_SPECIAL_MISSION 3
#define CONST_DunDefLeaderboardWriteBase_FILTER_VERSIONNUMBER    0x10000075
#define CONST_DunDefLeaderboardWriteBase_FILTER_MATCHCOMPLETE    0x10000077
#define CONST_DunDefLeaderboardWriteBase_CONTEXT_ACTIVE_MISSION  1
#define CONST_DunDefLeaderboardWriteBase_PRESENCE_MAIN_MENU      0
#define CONST_DunDefLeaderboardWriteBase_PRESENCE_MISSION        2
#define CONST_DunDefLeaderboardWriteBase_PRESENCE_INACTIVE       4
#define CONST_DunDefLeaderboardWriteBase_PROPS_LEVEL_INDEX       0x1000000D
#define CONST_DunDefLeaderboardWriteBase_PROPS_INFINITE_WAVES    0x1000000E
#define CONST_DunDefLeaderboardWriteBase_PROPS_START_AT_WAVE     0x1000000F
#define CONST_DunDefLeaderboardWriteBase_PROPS_GAME_DIFFICULTY   0x10000010
#define CONST_DunDefLeaderboardWriteBase_PROPS_INFINITE_BUILD_TIME 0x10000011
#define CONST_DunDefLeaderboardWriteBase_PROPS_LEVEL_TAG         0x10000012
#define CONST_DunDefLeaderboardWriteBase_PROPS_FRIENDLY_NAME     0x10000013
#define CONST_DunDefLeaderboardWriteBase_PROPS_ISCHALLENGE       0x1000005A
#define CONST_DunDefLeaderboardWriteBase_PROPS_HOSTHEROCLASS     0x1000005E
#define CONST_DunDefLeaderboardWriteBase_PROPS_HOSTHEROLEVEL     0x1000002A
#define CONST_DunDefLeaderboardWriteBase_PROPS_UNIQUE_SESSIONID  0x10000063
#define CONST_DunDefLeaderboardWriteBase_PROPS_MATCHCOMPLETE     0x10000076
#define CONST_DunDefLeaderboardWriteBase_PROPS_PURE_STRATEGY     0x1000006F
#define CONST_DunDefLeaderboardWriteBase_PROPS_PHASE_TYPE        0x10000071
#define CONST_DunDefLeaderboardWriteBase_PROPS_DEMOMODE          0x10000072
#define CONST_DunDefLeaderboardWriteBase_PROPS_HERONAME          0x20000016
#define CONST_DunDefLeaderboardWriteBase_PROPS_HEROLEVEL         0x1000002A
#define CONST_DunDefLeaderboardWriteBase_PROPS_SCORE             0x2000002B
#define CONST_DunDefLeaderboardWriteBase_PROPS_COMPLETIONTIME    0x1000002C
#define CONST_DunDefLeaderboardWriteBase_PROPS_WAVECOUNT         0x1000002D
#define CONST_DunDefLeaderboardWriteBase_STATS_VIEW_COLUMN_NAME  1
#define CONST_DunDefLeaderboardWriteBase_STATS_VIEW_COLUMN_CLASS 2
#define CONST_DunDefLeaderboardWriteBase_STATS_VIEW_COLUMN_LEVEL 3
#define CONST_DunDefLeaderboardWriteBase_STATS_VIEW_COLUMN_WAVE  6

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
