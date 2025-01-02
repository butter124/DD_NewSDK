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

#define CONST_LEVELUPTIME_PER_LEVEL_EXPONENT_FACTOR              0.35
#define CONST__DataTypes_MAX_DAMAGEREDUCTIONS                    4
#define CONST_Main_FILTER_DIFF_START                             0x10000056
#define CONST_MAX_SHOP_EQUIPMENT_SET_AMOUNTS                     3
#define CONST_DunDefGameSearchCommon_PROPS_PURE_STRATEGY         0x1000006F
#define CONST_UI_TitleScreen_FILTER_SESSIONID_START              0x10000064
#define CONST__DataTypes_MAX_BUFF_SLOTS                          3
#define CONST_Main_PROPS_HEROLEVEL                               0x1000002A
#define CONST_UI_CharacterSelect_CONTEXT_GAME_MODE_COOP          0
#define CONST_UI_TitleScreen_PROPS_START_AT_WAVE                 0x1000000F
#define CONST_MANAPOWER_PER_LEVEL_LINEAR_FACTOR                  20.0
#define CONST_DunDefOnlineGameSettingsConsole_GS_PASSWORD_MAXLENGTH 30
#define CONST_DD_SIGNED_BYTE_MAX                                 128.0
#define CONST_DunDefPlayerController_CONTEXT_ACTIVE_MISSION      1
#define CONST_DunDefDataStore_GameSearch_PROPS_HERONAME          0x20000016
#define CONST__DataTypes_MAX_BUFF_TIERS                          6
#define CONST_DunDefPlayerController_GS_MESSAGE_MAXLENGTH        255
#define CONST_DunDefHeroManagerNative_MAX_BUFF_SLOTS             3
#define CONST__DataTypes_MAX_LEVELUP_STATS                       11
#define CONST_DunDefOnlineGameSettingsConsole_FILTER_SURVIVAL    0x1000005C
#define CONST_DunDefGameReplicationInfo_PROPS_MATCHCOMPLETE      0x10000076
#define CONST_StatObject_MAX_BUFF_SLOTS                          3
#define CONST__DataTypes_MAX_CORES                               40
#define CONST__DataTypes_MAX_TUTORIAL_SETS                       10
#define CONST_MAX_STAT_VALUE_SPEED_HERO                          100
#define CONST_DunDefPlayerController_PRESENCE_MISSION            2
#define CONST_DunDefGameReplicationInfo_FILTER_LEVELINDEX        0x10000062
#define CONST_DunDefPlayerController_FILTER_SESSIONID_COUNT      10
#define CONST_DunDefHeroManagerNative_MAX_CORES                  40
#define CONST_ANTI_CHEAT_INTERVAL                                10
#define CONST_UI_NetworkMultiplayer_PROPS_COMPLETIONTIME         0x1000002C
#define CONST_HERO_LEVEL_CAP                                     100
#define CONST__DataTypes_MAX_ACHIEVEMENTS_TO_STORE               500
#define CONST_DunDefPlayerController_FILTER_HEROLEVELSTART       0x1000005F
#define CONST_DunDefGameSearchCommon_PROPS_GAME_DIFFICULTY       0x10000010
#define CONST_SPEED_HACK_DETECTION_THRESHOLD                     3
#define CONST_SPEED_HACK_TOLERANCE                               1.20
#define CONST_MAX_ITEM_BOX_EQUIPMENT_RUTHLESS                    1000
#define CONST_UI_CharacterSelect_PROPS_START_AT_WAVE             0x1000000F
#define CONST_DunDefOnlineGameSettingsConsole_FILTER_VERSIONNUMBER 0x10000075
#define CONST_MAX_BANKED_MANA_DEMO                               5000
#define CONST_DunDefHeroManagerNative_MAX_ACHIEVEMENTS_TO_STORE  500
#define CONST_MAX_SUBFOLDERS                                     6
#define CONST_Main_PRESENCE_MISSION                              2
#define CONST_EXP_PER_LEVEL_LINEAR_FACTOR_DOUBLEHIGH             900000
#define CONST_DunDefGameReplicationInfo_CONTEXT_ACTIVE_MISSION   1
#define CONST_DunDefHeroManagerNative_MAX_TUTORIAL_SETS          10
#define CONST_DunDefHeroManagerNative_MAX_DAMAGEREDUCTIONS       4
#define CONST_DunDefPlayerController_PRESENCE_INACTIVE           4
#define CONST_XBOX_MUSIC_MULTIPLIER                              0.7
#define CONST_DunDefHeroManagerNative_MAX_LEVELUP_STATS          11
#define CONST_DunDefOnlineGameSettingsConsole_FILTER_DEMOMODE    0x10000074
#define CONST_Main_GS_PASSWORD_MAXLENGTH                         30
#define CONST_PC_MUSIC_MULTIPLIER                                0.7
#define CONST_DunDefHeroManagerNative_MAX_BUFF_TIERS             6
#define CONST_EQUIPMENT_STOCKY                                   3
#define CONST_HeroEquipmentNative_MAX_BUFF_SLOTS                 3
#define CONST_HeroEquipmentNative_MAX_BUFF_TIERS                 6
#define CONST_HeroEquipment_NUM_EQUIPMENT_TYPES                  5
#define CONST_DunDefOnlineGameSettingsConsole_PRESENCE_MISSION   2
#define CONST_HeroEquipmentNative_MAX_LEVELUP_STATS              11
#define CONST_NEGATIVE_EQUIPMENT_STAT_WEIGHT                     1.4
#define CONST_HeroEquipmentNative_MAX_DAMAGEREDUCTIONS           4
#define CONST_MAX_STAT_VALUE_SPEED                               100
#define CONST_MAX_STAT_VALUE                                     1000
#define CONST_Main_CONTEXT_ACTIVE_MISSION                        1
#define CONST_EXP_PER_LEVEL_EXPONENT_FACTOR_HIGH                 2.1
#define CONST_Main_PROPS_HEROCLASS                               0x20000020
#define CONST_DunDefDataStore_GameSearch_PROPS_FRIENDLY_NAME     0x10000013
#define CONST_HeroEquipmentNative_MAX_CORES                      40
#define CONST_UI_TitleScreen_PRESENCE_MAIN_MENU                  0
#define CONST_DunDefAchievementManager_MAX_LEVELUP_STATS         11
#define CONST_DunDefDataStore_GameSearch_FILTER_SESSIONID_COUNT  10
#define CONST_HeroEquipmentNative_MAX_TUTORIAL_SETS              10
#define CONST_DunDefPlayerController_PROPS_WAVECOUNT             0x1000002D
#define CONST_UI_TitleScreen_CONTEXT_ACTIVE_MISSION              1
#define CONST_UI_NetworkMultiplayer_PROPS_WAVECOUNT              0x1000002D
#define CONST_Main_STATS_VIEW_COLUMN_CLASS                       2
#define CONST_HeroEquipmentNative_MAX_ACHIEVEMENTS_TO_STORE      500
#define CONST_DunDefPlayerController_PROPS_HEROCLASS             0x20000020
#define CONST_DunDefAchievementManager_MAX_BUFF_SLOTS            3
#define CONST_DunDefGameSearchCommon_FILTER_HEROLEVELSTART       0x1000005F
#define CONST_UI_NetworkMultiplayer_FILTER_BUILD                 0x1000005B
#define CONST_DunDefAchievementManager_MAX_BUFF_TIERS            6
#define CONST_DunDefAchievementManager_MAX_DAMAGEREDUCTIONS      4
#define CONST_DunDefGameReplicationInfo_PROPS_WAVECOUNT          0x1000002D
#define CONST_DunDefDataStore_GameSearch_PROPS_HOSTHEROCLASS     0x1000005E
#define CONST_DunDefAchievementManager_MAX_CORES                 40
#define CONST_DunDefOnlineGameSettingsConsole_FILTER_LEVEL_START 0x1000002E
#define CONST_DunDefAchievementManager_MAX_TUTORIAL_SETS         10
#define CONST_EXP_PER_LEVEL_EXPONENT_FACTOR                      2.5
#define CONST_DunDefDataStore_GameSearch_FILTER_LEVELINDEX       0x10000062
#define CONST_DunDefAchievementManager_MAX_ACHIEVEMENTS_TO_STORE 500
#define CONST_EXP_PER_LEVEL_LINEAR_FACTOR                        80.0
#define CONST_UI_CharacterSelect_GS_PASSWORD_MAXLENGTH           30
#define CONST_MAX_PLAYERSHOP_ITEMS                               250
#define CONST_EXP_PER_LEVEL_LINEAR_FACTOR_HIGH                   800000
#define CONST_UI_CharacterSelect_FILTER_MATCHCOMPLETE            0x10000077
#define CONST_EXP_PER_LEVEL_EXPONENT_FACTOR_DOUBLEHIGH           2.2
#define CONST_DunDefBuff_MAX_BUFF_SLOTS                          3
#define CONST_MAX_ITEM_BOX_EQUIPMENT_ULTIMATE                    600
#define CONST_Main_FILTER_MATCHCOMPLETE                          0x10000077
#define CONST_LEVELUPTIME_PER_LEVEL_LINEAR_FACTOR                6.0
#define CONST_DunDefGameReplicationInfo_STATS_VIEW_COLUMN_TIME   5
#define CONST_MAX_HERO_EXPERIENCE                                3000000000
#define CONST_DunDefPlayerController_FILTER_LEVEL_START          0x1000002E
#define CONST_UI_MultiplayerMenu_PROPS_HOSTHEROCLASS             0x1000005E
#define CONST_DunDefGameReplicationInfo_PROPS_HOSTHEROLEVEL      0x1000002A
#define CONST_Main_PROPS_INFINITE_WAVES                          0x1000000E
#define CONST_PC_MOVIE_MULTIPLIER                                1.44
#define CONST_HERO_LEVEL_CAP_DEMO                                10
#define CONST_UI_CharacterSelect_PROPS_DIFFICULTY                0x10000014
#define CONST_Main_FILTER_SURVIVAL                               0x1000005C
#define CONST_DunDefHero_MAX_LEVELUP_STATS                       11
#define CONST_MAX_ITEM_BOX_EQUIPMENT                             320
#define CONST_MAX_FOLDER_DEPTH                                   5
#define CONST_Main_PROPS_MATCHCOMPLETE                           0x10000076
#define CONST_Main_FILTER_BUILD                                  0x1000005B
#define CONST_MAX_LOADED_HEROES                                  40
#define CONST_UI_MultiplayerMenu_GS_EMAIL_MAXLENGTH              50
#define CONST_LIGHTING_EXPENSIVE_FUNCTION                        2
#define CONST_MAX_EQUIPMENT_SLOTS                                5
#define CONST_MAX_EQUIPMENT_STORED_MANA                          9999999999
#define CONST_DunDefBuff_MAX_ACHIEVEMENTS_TO_STORE               500
#define CONST_UI_MultiplayerMenu_PRESENCE_LOBBY                  1
#define CONST_UI_CharacterSelect_PROPS_INFINITE_WAVES            0x1000000E
#define CONST_MAX_ITEM_BOX_EQUIPMENT_ETERNAL                     800
#define CONST_DunDefPlayerController_FILTER_DIFF_START           0x10000056
#define CONST_Main_FILTER_LEVELINDEX                             0x10000062
#define CONST_DD_SIGNED_BYTE_MIN                                 -127.0
#define CONST_UI_MultiplayerMenu_PROPS_MATCHCOMPLETE             0x10000076
#define CONST_UI_CharacterSelect_PROPS_PHASE_TYPE                0x10000071
#define CONST_UI_CharacterSelect_PROPS_HOSTHEROCLASS             0x1000005E
#define CONST_DunDefGameReplicationInfo_FILTER_SURVIVAL          0x1000005C
#define CONST_Main_PROPS_ISCHALLENGE                             0x1000005A
#define CONST_MAX_SHOP_EQUIPMENT_SETS                            3
#define CONST_MAX_BANKED_MANA                                    600000000
#define CONST_LEVEL_FILE_EXTENSION                               ".udk"
#define CONST_DunDefHeroManager_NUM_EQUIPMENT_TYPES              6
#define CONST_MAX_HERO_NAME_LENGTH                               32
#define CONST_DunDefGameReplicationInfo_STATS_VIEW_COLUMN_CLASS  2
#define CONST_ENEMY_COLLECTIONGROUP                              8
#define CONST_DunDefHeroManager_MAX_SUPPORTED_GAMEPADS           4
#define CONST_PLAYER_COLLECTIONGROUP                             256
#define CONST_UI_CharacterSelect_QUERY_COOP                      1
#define CONST_DunDefGameReplicationInfo_GS_USERNAME_MAXLENGTH    15
#define CONST_DunDefGameReplicationInfo_GS_PASSWORD_MAXLENGTH    30
#define CONST_UI_TitleScreen_CONTEXT_GAME_MODE                   0x0000800B
#define CONST_DunDefDataStore_GameSearch_PROPS_WAVECOUNT         0x1000002D
#define CONST_UI_NetworkMultiplayer_PROPS_LEVEL_TAG              0x10000012
#define CONST_DunDefGameReplicationInfo_GS_MESSAGE_MAXLENGTH     255
#define CONST_UI_NetworkMultiplayer_GS_PASSWORD_MAXLENGTH        30
#define CONST_DunDefGameReplicationInfo_GS_EMAIL_MAXLENGTH       50
#define CONST_DunDefGameReplicationInfo_GS_CDKEY_PART_MAXLENGTH  4
#define CONST_DunDefGameReplicationInfo_FILTER_SESSIONID_COUNT   10
#define CONST_PAWN_MEGA_DAMAGE                                   100000000
#define CONST_DunDefGameReplicationInfo_CONTEXT_GAME_MODE        0x0000800B
#define CONST_DunDefGameReplicationInfo_CONTEXT_GAME_MODE_COOP   0
#define CONST_DunDefGameReplicationInfo_QUERY_COOP               1
#define CONST_DunDefGameReplicationInfo_QUERY_FILTERED           2
#define CONST_DunDefPlayerController_PRESENCE_MAIN_MENU          0
#define CONST_MAX_TEAMS                                          8
#define CONST_DunDefGameReplicationInfo_FILTER_LEVEL_START       0x1000002E
#define CONST_DunDefGameReplicationInfo_FILTER_SESSIONID_START   0x10000064
#define CONST_DunDefGameReplicationInfo_FILTER_DIFF_START        0x10000056
#define CONST_UI_NetworkMultiplayer_GS_USERNAME_MAXLENGTH        15
#define CONST_DunDefGameReplicationInfo_FILTER_BUILD             0x1000005B
#define CONST_DunDefGameReplicationInfo_STATS_VIEW_COLUMN_SCORE  4
#define CONST_UI_CharacterSelect_STATS_VIEW_COLUMN_NAME          1
#define CONST_DunDefGameSearchCommon_FILTER_SESSIONID_START      0x10000064
#define CONST_DunDefGameReplicationInfo_FILTER_CHALLENGE         0x1000005D
#define CONST_DunDefGameReplicationInfo_FILTER_HEROLEVELSTART    0x1000005F
#define CONST_DunDefGameReplicationInfo_FILTER_HEROLEVELEND      0x10000061
#define CONST_DunDefDataStore_GameSearch_STATS_VIEW_COLUMN_NAME  1
#define CONST_EQUIPMENT_STURDY                                   5
#define CONST_DunDefDataStore_GameSearch_PROPS_PURE_STRATEGY     0x1000006F
#define CONST_DunDefGameReplicationInfo_FILTER_HEROCLASS         0x10000060
#define CONST_DunDefDataStore_GameSearch_FILTER_DEMOMODE         0x10000074
#define CONST_DunDefDataStore_GameSearch_FILTER_CHALLENGE        0x1000005D
#define CONST_DunDefDataStore_GameSearch_FILTER_HEROLEVELEND     0x10000061
#define CONST_DunDefGameReplicationInfo_FILTER_STRATEGY          0x10000070
#define CONST_DunDefGameReplicationInfo_FILTER_DEMOMODE          0x10000074
#define CONST_DunDefGameReplicationInfo_FILTER_VERSIONNUMBER     0x10000075
#define CONST_UI_MultiplayerMenu_STATS_VIEW_COLUMN_LEVEL         3
#define CONST_DunDefGameReplicationInfo_PRESENCE_MAIN_MENU       0
#define CONST_UI_NetworkMultiplayer_STATS_VIEW_COLUMN_NAME       1
#define CONST_DunDefGameReplicationInfo_FILTER_MATCHCOMPLETE     0x10000077
#define CONST_DunDefGameReplicationInfo_PRESENCE_LOBBY           1
#define CONST_UI_CharacterSelect_PRESENCE_LOBBY                  1
#define CONST_DunDefGameReplicationInfo_PRESENCE_MISSION         2
#define CONST_DunDefGameReplicationInfo_PRESENCE_SPECIAL_MISSION 3
#define CONST_DunDefGameReplicationInfo_PRESENCE_INACTIVE        4
#define CONST_DunDefGameReplicationInfo_STATS_VIEW_COLUMN_WAVE   6
#define CONST_DunDefOnlineGameSettingsConsole_FILTER_HEROLEVELSTART 0x1000005F
#define CONST_UI_TitleScreen_FILTER_HEROCLASS                    0x10000060
#define CONST_DunDefGameReplicationInfo_PROPS_LEVEL_INDEX        0x1000000D
#define CONST_DunDefGameReplicationInfo_PROPS_INFINITE_WAVES     0x1000000E
#define CONST_UI_CharacterSelect_FILTER_DEMOMODE                 0x10000074
#define CONST_DunDefGameReplicationInfo_PROPS_START_AT_WAVE      0x1000000F
#define CONST_MAX_ALLOWED_PLAYERS                                4
#define CONST_DunDefGameReplicationInfo_PROPS_GAME_DIFFICULTY    0x10000010
#define CONST_DunDefGameReplicationInfo_PROPS_INFINITE_BUILD_TIME 0x10000011
#define CONST_UI_CharacterSelect_PROPS_FRIENDLY_NAME             0x10000013
#define CONST_DunDefGameReplicationInfo_PROPS_LEVEL_TAG          0x10000012
#define CONST_DunDefOnlineGameSettingsConsole_GS_MESSAGE_MAXLENGTH 255
#define CONST_DunDefGameSearchCommon_STATS_VIEW_COLUMN_SCORE     4
#define CONST_DunDefGameReplicationInfo_PROPS_FRIENDLY_NAME      0x10000013
#define CONST_DunDefPlayerController_FILTER_LEVELINDEX           0x10000062
#define CONST_DunDefGameReplicationInfo_PROPS_DIFFICULTY         0x10000014
#define CONST_DunDefGameReplicationInfo_PROPS_ISCHALLENGE        0x1000005A
#define CONST_Main_FILTER_SESSIONID_START                        0x10000064
#define CONST_DunDefGameReplicationInfo_PROPS_HOSTHEROCLASS      0x1000005E
#define CONST_UI_NetworkMultiplayer_PROPS_HOSTHEROLEVEL          0x1000002A
#define CONST_DunDefGameReplicationInfo_PROPS_UNIQUE_SESSIONID   0x10000063
#define CONST_DunDefOnlineGameSettingsConsole_FILTER_DIFF_START  0x10000056
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_HOSTHEROCLASS 0x1000005E
#define CONST_UI_TitleScreen_PROPS_INFINITE_WAVES                0x1000000E
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_FRIENDLY_NAME 0x10000013
#define CONST_DunDefGameReplicationInfo_PROPS_PURE_STRATEGY      0x1000006F
#define CONST_DunDefGameReplicationInfo_PROPS_PHASE_TYPE         0x10000071
#define CONST_DunDefGameReplicationInfo_PROPS_DEMOMODE           0x10000072
#define CONST_DunDefGameReplicationInfo_PROPS_SCORE              0x2000002B
#define CONST_Main_GS_EMAIL_MAXLENGTH                            50
#define CONST_DunDefOnlineGameSettingsConsole_FILTER_CHALLENGE   0x1000005D
#define CONST_DunDefGameReplicationInfo_PROPS_VERSIONNUMBER      0x10000073
#define CONST_DI_COLLECTIONGROUP                                 512
#define CONST_DunDefGameReplicationInfo_PROPS_HERONAME           0x20000016
#define CONST_UI_TitleScreen_GS_EMAIL_MAXLENGTH                  50
#define CONST_XBOX_MOVIE_MULTIPLIER                              0.9
#define CONST_DunDefGameReplicationInfo_PROPS_HEROCLASS          0x20000020
#define CONST_DunDefGameReplicationInfo_PROPS_HEROLEVEL          0x1000002A
#define CONST_PLAYERTARGETABLE_COLLECTIONGROUP                   8192
#define CONST_DunDefGameReplicationInfo_PROPS_COMPLETIONTIME     0x1000002C
#define CONST_DunDefGameReplicationInfo_STATS_VIEW_COLUMN_NAME   1
#define CONST_DunDefOnlineGameSettingsConsole_QUERY_FILTERED     2
#define CONST_DunDefGameReplicationInfo_STATS_VIEW_COLUMN_LEVEL  3
#define CONST_MAX_STARTING_WAVE                                  8
#define CONST_DunDefPlayerController_FILTER_HEROCLASS            0x10000060
#define CONST_DunDefDataStore_GameSearch_PROPS_INFINITE_WAVES    0x1000000E
#define CONST_MAX_BEST_STARTING_WAVE                             32
#define CONST_WAVE_COMPLETION_SCORE_TIMEBONUS_LEVELMULTIPLIER_EXPONENT 1.33
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_INFINITE_WAVES 0x1000000E
#define CONST_MAX_PROJECTILE_ARRAY_SIZE                          250
#define CONST_DunDefPlayerController_PROPS_UNIQUE_SESSIONID      0x10000063
#define CONST_UI_MultiplayerMenu_PROPS_LEVEL_INDEX               0x1000000D
#define CONST_EQUIPMENT_QUALITY_MAX                              20
#define CONST_WYVERN_EXPENSIVE_FUNCTION                          0
#define CONST_UnrealUnitToDisplayUnit                            0.01
#define CONST_TOKEN_EXPENSIVE_FUNCTION                           1
#define CONST_FAMILIARTARGET_EXPENSIVE_FUNCTIONS                 3
#define CONST_Main_PROPS_LEVEL_TAG                               0x10000012
#define CONST_DunDefBuff_MAX_DAMAGEREDUCTIONS                    4
#define CONST_AUTOAIM_EXPENSIVE_FUNCTIONS                        4
#define CONST_MAX_EXPENSIVE_FUNCTIONS                            5
#define CONST_WAVE_COMPLETION_SCORE_TIMEBONUS_DIVISOR            2.0
#define CONST_DunDefDataStore_GameSearch_CONTEXT_GAME_MODE_COOP  0
#define CONST_WAVE_COMPLETION_SCORE_MULTIPLIER                   13.0
#define CONST_DunDefDataStore_GameSearch_QUERY_COOP              1
#define CONST_PS3_MOVIE_MULTIPLIER                               0.4
#define CONST_WAVE_COMPLETION_SCORE_EXPONENT                     1.28
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_HEROLEVEL    0x1000002A
#define CONST_WAVE_COMPLETION_SCORE_TIMEBONUS_MULTIPLIER         8.0
#define CONST_WAVE_COMPLETION_SCORE_TIMEBONUS_EXPONENT           2.15
#define CONST_UI_TitleScreen_PROPS_LEVEL_INDEX                   0x1000000D
#define CONST_WAVE_COMPLETION_SCORE_TIMEBONUS_INTERVAL_SECONDS   180.0
#define CONST_MAX_WAVE_POINT_NUMBER                              12
#define CONST_DEFAULT_MAX_GROUPS                                 15
#define CONST_DunDefPlayerController_GS_USERNAME_MAXLENGTH       15
#define CONST_DunDefPlayerController_GS_PASSWORD_MAXLENGTH       30
#define CONST_DunDefPlayerController_GS_EMAIL_MAXLENGTH          50
#define CONST_DunDefPlayerController_GS_CDKEY_PART_MAXLENGTH     4
#define CONST_DunDefPlayerController_PROPS_VERSIONNUMBER         0x10000073
#define CONST_DunDefOnlineGameSettingsConsole_GS_USERNAME_MAXLENGTH 15
#define CONST_DunDefPlayerController_CONTEXT_GAME_MODE           0x0000800B
#define CONST_Main_PROPS_HERONAME                                0x20000016
#define CONST_DunDefPlayerController_CONTEXT_GAME_MODE_COOP      0
#define CONST_UI_MultiplayerMenu_STATS_VIEW_COLUMN_CLASS         2
#define CONST_DunDefPlayerController_QUERY_COOP                  1
#define CONST_DunDefPlayerController_QUERY_FILTERED              2
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_HERONAME     0x20000016
#define CONST_DunDefOnlineGameSettingsConsole_GS_EMAIL_MAXLENGTH 50
#define CONST_UI_TitleScreen_PROPS_SCORE                         0x2000002B
#define CONST_DunDefGameSearchCommon_PRESENCE_MAIN_MENU          0
#define CONST_DunDefPlayerController_FILTER_BUILD                0x1000005B
#define CONST_Main_GS_MESSAGE_MAXLENGTH                          255
#define CONST_DunDefPlayerController_FILTER_SURVIVAL             0x1000005C
#define CONST_DunDefPlayerController_FILTER_CHALLENGE            0x1000005D
#define CONST_DunDefPlayerController_FILTER_HEROLEVELEND         0x10000061
#define CONST_DunDefOnlineGameSettingsConsole_FILTER_BUILD       0x1000005B
#define CONST_UI_NetworkMultiplayer_CONTEXT_ACTIVE_MISSION       1
#define CONST_DunDefPlayerController_FILTER_SESSIONID_START      0x10000064
#define CONST_DunDefPlayerController_FILTER_STRATEGY             0x10000070
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_LEVEL_TAG    0x10000012
#define CONST_DunDefGameSearchCommon_STATS_VIEW_COLUMN_NAME      1
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_HOSTHEROLEVEL 0x1000002A
#define CONST_DunDefPlayerController_FILTER_DEMOMODE             0x10000074
#define CONST_DunDefPlayerController_FILTER_VERSIONNUMBER        0x10000075
#define CONST_UI_MultiplayerMenu_FILTER_VERSIONNUMBER            0x10000075
#define CONST_MAX_FILTER_SIZE                                    240
#define CONST_DunDefPlayerController_FILTER_MATCHCOMPLETE        0x10000077
#define CONST_DunDefPlayerController_PRESENCE_LOBBY              1
#define CONST_DunDefPlayerController_PRESENCE_SPECIAL_MISSION    3
#define CONST_DunDefPlayerController_PROPS_LEVEL_INDEX           0x1000000D
#define CONST_Main_STATS_VIEW_COLUMN_TIME                        5
#define CONST_Main_GS_USERNAME_MAXLENGTH                         15
#define CONST_DunDefPlayerController_PROPS_INFINITE_WAVES        0x1000000E
#define CONST_DunDefPlayerController_PROPS_START_AT_WAVE         0x1000000F
#define CONST_DunDefPlayerController_PROPS_GAME_DIFFICULTY       0x10000010
#define CONST_DunDefPlayerController_PROPS_INFINITE_BUILD_TIME   0x10000011
#define CONST_DunDefDataStore_GameSearch_FILTER_BUILD            0x1000005B
#define CONST_StatObject_MAX_BUFF_TIERS                          6
#define CONST_Main_QUERY_COOP                                    1
#define CONST_DunDefPlayerController_PROPS_LEVEL_TAG             0x10000012
#define CONST_DunDefPlayerController_PROPS_DIFFICULTY            0x10000014
#define CONST_DunDefDataStore_GameSearch_GS_MESSAGE_MAXLENGTH    255
#define CONST_DunDefPlayerController_PROPS_FRIENDLY_NAME         0x10000013
#define CONST_DunDefPlayerController_PROPS_ISCHALLENGE           0x1000005A
#define CONST_DunDefGameSearchCommon_FILTER_SESSIONID_COUNT      10
#define CONST_DunDefPlayerController_PROPS_HOSTHEROCLASS         0x1000005E
#define CONST_DunDefPlayerController_PROPS_HOSTHEROLEVEL         0x1000002A
#define CONST_DunDefDataStore_GameSearch_STATS_VIEW_COLUMN_WAVE  6
#define CONST_DunDefPlayerController_PROPS_PURE_STRATEGY         0x1000006F
#define CONST_Main_PROPS_PHASE_TYPE                              0x10000071
#define CONST_UI_MultiplayerMenu_STATS_VIEW_COLUMN_TIME          5
#define CONST_UI_CharacterSelect_PROPS_LEVEL_INDEX               0x1000000D
#define CONST_DunDefPlayerController_PROPS_PHASE_TYPE            0x10000071
#define CONST_DunDefPlayerController_PROPS_DEMOMODE              0x10000072
#define CONST_DunDefPlayerController_PROPS_MATCHCOMPLETE         0x10000076
#define CONST_DunDefPlayerController_PROPS_HERONAME              0x20000016
#define CONST_MAX_PLAYERSHOP_MANA                                2000000000
#define CONST_Main_STATS_VIEW_COLUMN_NAME                        1
#define CONST_Main_STATS_VIEW_COLUMN_LEVEL                       3
#define CONST_UI_NetworkMultiplayer_PROPS_MATCHCOMPLETE          0x10000076
#define CONST_DunDefPlayerController_PROPS_HEROLEVEL             0x1000002A
#define CONST_DunDefPlayerController_PROPS_SCORE                 0x2000002B
#define CONST_DunDefGameSearchCommon_PROPS_WAVECOUNT             0x1000002D
#define CONST_EQUIPMENT_ULTIMATE93                               17
#define CONST_DunDefOnlineGameSettingsConsole_GS_CDKEY_PART_MAXLENGTH 4
#define CONST_DunDefPlayerController_PROPS_COMPLETIONTIME        0x1000002C
#define CONST_DunDefPlayerController_STATS_VIEW_COLUMN_NAME      1
#define CONST_DunDefPlayerController_STATS_VIEW_COLUMN_CLASS     2
#define CONST_DunDefPlayerController_STATS_VIEW_COLUMN_LEVEL     3
#define CONST_UI_TitleScreen_GS_MESSAGE_MAXLENGTH                255
#define CONST_DunDefDataStore_GameSearch_PROPS_ISCHALLENGE       0x1000005A
#define CONST_DunDefPlayerController_STATS_VIEW_COLUMN_SCORE     4
#define CONST_DunDefPlayerController_MAX_CORES                   40
#define CONST_UI_NetworkMultiplayer_STATS_VIEW_COLUMN_WAVE       6
#define CONST_DunDefPlayerController_STATS_VIEW_COLUMN_TIME      5
#define CONST_ITEMBOX_DATA_SET                                   8
#define CONST_DunDefPlayerController_MAX_DAMAGEREDUCTIONS        4
#define CONST_DunDefDataStore_GameSearch_CONTEXT_ACTIVE_MISSION  1
#define CONST_PLAYERSHOP_MAX_ITEM_SELL_AMOUNT                    2000000000
#define CONST_DunDefPlayerController_STATS_VIEW_COLUMN_WAVE      6
#define CONST_DunDefPlayerController_MAX_ACHIEVEMENTS_TO_STORE   500
#define CONST_UI_NetworkMultiplayer_PROPS_GAME_DIFFICULTY        0x10000010
#define CONST_DunDefPlayerController_MAX_TUTORIAL_SETS           10
#define CONST_DunDefGameSearchCommon_FILTER_HEROLEVELEND         0x10000061
#define CONST_DunDefPlayerController_MAX_LEVELUP_STATS           11
#define CONST_DunDefPlayerController_MAX_BUFF_TIERS              6
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_ISCHALLENGE  0x1000005A
#define CONST_DunDefPlayerController_MAX_BUFF_SLOTS              3
#define CONST_EQUIPMENT_TORN                                     1
#define CONST_Main_STATS_VIEW_COLUMN_WAVE                        6
#define CONST_DunDefDataStore_GameSearch_PROPS_HEROCLASS         0x20000020
#define CONST_Main_STATS_VIEW_COLUMN_SCORE                       4
#define CONST_Main_PROPS_WAVECOUNT                               0x1000002D
#define CONST_DunDefGameSearchCommon_FILTER_MATCHCOMPLETE        0x10000077
#define CONST_Main_PROPS_COMPLETIONTIME                          0x1000002C
#define CONST_DunDefOnlineGameSettingsConsole_QUERY_COOP         1
#define CONST_StatObject_MAX_TUTORIAL_SETS                       10
#define CONST_Main_PROPS_SCORE                                   0x2000002B
#define CONST_UI_NetworkMultiplayer_GS_EMAIL_MAXLENGTH           50
#define CONST_Main_PROPS_VERSIONNUMBER                           0x10000073
#define CONST_Main_PROPS_DEMOMODE                                0x10000072
#define CONST_Main_PROPS_PURE_STRATEGY                           0x1000006F
#define CONST_UI_CharacterSelect_PROPS_MATCHCOMPLETE             0x10000076
#define CONST_Main_PROPS_UNIQUE_SESSIONID                        0x10000063
#define CONST_Main_PROPS_HOSTHEROLEVEL                           0x1000002A
#define CONST_DunDefGameSearchCommon_PROPS_MATCHCOMPLETE         0x10000076
#define CONST_UI_CharacterSelect_FILTER_SESSIONID_COUNT          10
#define CONST_Main_PROPS_HOSTHEROCLASS                           0x1000005E
#define CONST_EQUIPMENT_ULTIMATE                                 16
#define CONST_UI_MultiplayerMenu_PROPS_PHASE_TYPE                0x10000071
#define CONST_Main_PROPS_DIFFICULTY                              0x10000014
#define CONST_Main_PROPS_FRIENDLY_NAME                           0x10000013
#define CONST_Main_PROPS_INFINITE_BUILD_TIME                     0x10000011
#define CONST_Main_PROPS_GAME_DIFFICULTY                         0x10000010
#define CONST_Main_PROPS_START_AT_WAVE                           0x1000000F
#define CONST_DunDefGameSearchCommon_FILTER_LEVELINDEX           0x10000062
#define CONST_UI_CharacterSelect_PRESENCE_MAIN_MENU              0
#define CONST_Main_PROPS_LEVEL_INDEX                             0x1000000D
#define CONST_UI_MultiplayerMenu_PRESENCE_MISSION                2
#define CONST_Main_PRESENCE_INACTIVE                             4
#define CONST_Main_PRESENCE_SPECIAL_MISSION                      3
#define CONST_Main_PRESENCE_LOBBY                                1
#define CONST_Main_PRESENCE_MAIN_MENU                            0
#define CONST_DunDefGameSearchCommon_PROPS_DEMOMODE              0x10000072
#define CONST_Main_FILTER_VERSIONNUMBER                          0x10000075
#define CONST_Main_FILTER_DEMOMODE                               0x10000074
#define CONST_Main_FILTER_STRATEGY                               0x10000070
#define CONST_Main_FILTER_SESSIONID_COUNT                        10
#define CONST_UI_CharacterSelect_PROPS_LEVEL_TAG                 0x10000012
#define CONST_UI_CharacterSelect_FILTER_VERSIONNUMBER            0x10000075
#define CONST_Main_FILTER_HEROCLASS                              0x10000060
#define CONST_Main_FILTER_HEROLEVELEND                           0x10000061
#define CONST_DunDefGameSearchCommon_CONTEXT_ACTIVE_MISSION      1
#define CONST_UI_MultiplayerMenu_GS_USERNAME_MAXLENGTH           15
#define CONST_Main_FILTER_HEROLEVELSTART                         0x1000005F
#define CONST_Main_FILTER_CHALLENGE                              0x1000005D
#define CONST_UI_MultiplayerMenu_FILTER_HEROCLASS                0x10000060
#define CONST_Main_FILTER_LEVEL_START                            0x1000002E
#define CONST_Main_QUERY_FILTERED                                2
#define CONST_Main_CONTEXT_GAME_MODE_COOP                        0
#define CONST_DunDefDataStore_GameSearch_PROPS_HOSTHEROLEVEL     0x1000002A
#define CONST_MAX_TRADING_EQUIPMENTS                             48
#define CONST_Main_CONTEXT_GAME_MODE                             0x0000800B
#define CONST_DunDefDataStore_GameSearch_FILTER_DIFF_START       0x10000056
#define CONST_Main_GS_CDKEY_PART_MAXLENGTH                       4
#define CONST_PAWN_COLLECTIONGROUP                               4
#define CONST_ENEMY_MAX_HEALTH                                   2000000000
#define CONST_DunDefGameSearchCommon_FILTER_HEROCLASS            0x10000060
#define CONST_UI_NetworkMultiplayer_PROPS_START_AT_WAVE          0x1000000F
#define CONST_MT_COLLECTIONGROUP                                 128
#define CONST_DunDefGameSearchCommon_GS_MESSAGE_MAXLENGTH        255
#define CONST_DunDefBuff_MAX_TUTORIAL_SETS                       10
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_GAME_DIFFICULTY 0x10000010
#define CONST_UI_TitleScreen_PROPS_DEMOMODE                      0x10000072
#define CONST_DunDefBuff_MAX_CORES                               40
#define CONST_DunDefBuff_MAX_LEVELUP_STATS                       11
#define CONST_UI_TitleScreen_FILTER_CHALLENGE                    0x1000005D
#define CONST_DunDefBuff_MAX_BUFF_TIERS                          6
#define CONST_DT_COLLECTIONGROUP                                 2
#define CONST_DunDefDataStore_GameSearch_GS_USERNAME_MAXLENGTH   15
#define CONST_DunDefOnlineGameSettingsConsole_STATS_VIEW_COLUMN_NAME 1
#define CONST_DunDefDataStore_GameSearch_GS_PASSWORD_MAXLENGTH   30
#define CONST_DunDefOnlineGameSettingsConsole_CONTEXT_GAME_MODE  0x0000800B
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_MATCHCOMPLETE 0x10000076
#define CONST_DunDefDataStore_GameSearch_GS_EMAIL_MAXLENGTH      50
#define CONST_DunDefDataStore_GameSearch_GS_CDKEY_PART_MAXLENGTH 4
#define CONST_DunDefDataStore_GameSearch_CONTEXT_GAME_MODE       0x0000800B
#define CONST_DunDefDataStore_GameSearch_FILTER_STRATEGY         0x10000070
#define CONST_DunDefDataStore_GameSearch_QUERY_FILTERED          2
#define CONST_UI_CharacterSelect_GS_CDKEY_PART_MAXLENGTH         4
#define CONST_DunDefDataStore_GameSearch_FILTER_LEVEL_START      0x1000002E
#define CONST_DunDefDataStore_GameSearch_FILTER_SURVIVAL         0x1000005C
#define CONST_DunDefDataStore_GameSearch_FILTER_HEROLEVELSTART   0x1000005F
#define CONST_DunDefGameSearchCommon_PRESENCE_MISSION            2
#define CONST_DunDefDataStore_GameSearch_FILTER_HEROCLASS        0x10000060
#define CONST_DunDefDataStore_GameSearch_FILTER_SESSIONID_START  0x10000064
#define CONST_UI_TitleScreen_STATS_VIEW_COLUMN_SCORE             4
#define CONST_DunDefDataStore_GameSearch_FILTER_VERSIONNUMBER    0x10000075
#define CONST_DunDefDataStore_GameSearch_FILTER_MATCHCOMPLETE    0x10000077
#define CONST_DunDefGameSearchCommon_PRESENCE_LOBBY              1
#define CONST_DunDefDataStore_GameSearch_PRESENCE_MAIN_MENU      0
#define CONST_DunDefDataStore_GameSearch_PRESENCE_LOBBY          1
#define CONST_UI_NetworkMultiplayer_STATS_VIEW_COLUMN_LEVEL      3
#define CONST_DunDefGameStorage_MAX_CORES                        40
#define CONST_DunDefDataStore_GameSearch_PRESENCE_MISSION        2
#define CONST_UI_MultiplayerMenu_FILTER_SESSIONID_COUNT          10
#define CONST_DunDefDataStore_GameSearch_PRESENCE_SPECIAL_MISSION 3
#define CONST_DunDefDataStore_GameSearch_PRESENCE_INACTIVE       4
#define CONST_DunDefGameSearchCommon_PROPS_VERSIONNUMBER         0x10000073
#define CONST_DunDefDataStore_GameSearch_PROPS_LEVEL_INDEX       0x1000000D
#define CONST_DunDefOnlineGameSettingsConsole_STATS_VIEW_COLUMN_CLASS 2
#define CONST_UI_NetworkMultiplayer_PROPS_UNIQUE_SESSIONID       0x10000063
#define CONST_DunDefDataStore_GameSearch_STATS_VIEW_COLUMN_SCORE 4
#define CONST_DunDefDataStore_GameSearch_PROPS_START_AT_WAVE     0x1000000F
#define CONST_DunDefDataStore_GameSearch_PROPS_GAME_DIFFICULTY   0x10000010
#define CONST_UI_NetworkMultiplayer_GS_MESSAGE_MAXLENGTH         255
#define CONST_DunDefDataStore_GameSearch_PROPS_INFINITE_BUILD_TIME 0x10000011
#define CONST_UI_NetworkMultiplayer_FILTER_SURVIVAL              0x1000005C
#define CONST_UI_CharacterSelect_PROPS_COMPLETIONTIME            0x1000002C
#define CONST_DunDefDataStore_GameSearch_PROPS_LEVEL_TAG         0x10000012
#define CONST_DunDefGameSearchCommon_FILTER_DIFF_START           0x10000056
#define CONST_DunDefDataStore_GameSearch_PROPS_DIFFICULTY        0x10000014
#define CONST_StatObject_MAX_CORES                               40
#define CONST_DunDefDataStore_GameSearch_PROPS_UNIQUE_SESSIONID  0x10000063
#define CONST_DunDefDataStore_GameSearch_PROPS_PHASE_TYPE        0x10000071
#define CONST_DunDefDataStore_GameSearch_PROPS_DEMOMODE          0x10000072
#define CONST_DunDefDataStore_GameSearch_PROPS_VERSIONNUMBER     0x10000073
#define CONST_UI_NetworkMultiplayer_QUERY_COOP                   1
#define CONST_UI_CharacterSelect_GS_MESSAGE_MAXLENGTH            255
#define CONST_DunDefDataStore_GameSearch_PROPS_MATCHCOMPLETE     0x10000076
#define CONST_UI_CharacterSelect_PROPS_SCORE                     0x2000002B
#define CONST_DunDefDataStore_GameSearch_PROPS_HEROLEVEL         0x1000002A
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_VERSIONNUMBER 0x10000073
#define CONST_DunDefDataStore_GameSearch_PROPS_SCORE             0x2000002B
#define CONST_EQUIPMENT_ULTIMATE_PLUS                            18
#define CONST_DunDefDataStore_GameSearch_PROPS_COMPLETIONTIME    0x1000002C
#define CONST_REQUIRED_WAVES_AFTER_START_TO_INVEST               1
#define CONST_DunDefDataStore_GameSearch_STATS_VIEW_COLUMN_CLASS 2
#define CONST_UI_CharacterSelect_PROPS_WAVECOUNT                 0x1000002D
#define CONST_DunDefDataStore_GameSearch_STATS_VIEW_COLUMN_LEVEL 3
#define CONST_EQUIPMENT_POLISHED                                 6
#define CONST_DunDefDataStore_GameSearch_STATS_VIEW_COLUMN_TIME  5
#define CONST_DROPPED_EQUIPMENT_COLLECTIONGROUP                  16
#define CONST_DunDefGameSearchCommon_GS_USERNAME_MAXLENGTH       15
#define CONST_DunDefGameSearchCommon_GS_PASSWORD_MAXLENGTH       30
#define CONST_DunDefGameSearchCommon_GS_EMAIL_MAXLENGTH          50
#define CONST_UI_CharacterSelect_PRESENCE_INACTIVE               4
#define CONST_DunDefGameSearchCommon_GS_CDKEY_PART_MAXLENGTH     4
#define CONST_UI_MultiplayerMenu_PROPS_SCORE                     0x2000002B
#define CONST_DunDefGameSearchCommon_CONTEXT_GAME_MODE           0x0000800B
#define CONST_DunDefGameSearchCommon_CONTEXT_GAME_MODE_COOP      0
#define CONST_DunDefGameSearchCommon_QUERY_COOP                  1
#define CONST_DunDefGameSearchCommon_QUERY_FILTERED              2
#define CONST_UI_MultiplayerMenu_FILTER_HEROLEVELSTART           0x1000005F
#define CONST_DunDefGameSearchCommon_FILTER_LEVEL_START          0x1000002E
#define CONST_DunDefGameSearchCommon_FILTER_BUILD                0x1000005B
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_HEROCLASS    0x20000020
#define CONST_DunDefGameSearchCommon_FILTER_SURVIVAL             0x1000005C
#define CONST_DunDefOnlineGameSettingsConsole_CONTEXT_ACTIVE_MISSION 1
#define CONST_DunDefGameSearchCommon_FILTER_CHALLENGE            0x1000005D
#define CONST_MAX_WAVE_DISPLAY_ENTRIES                           15
#define CONST_DunDefOnlineGameSettingsConsole_FILTER_SESSIONID_COUNT 10
#define CONST_DunDefGameSearchCommon_FILTER_STRATEGY             0x10000070
#define CONST_DunDefGameSearchCommon_FILTER_DEMOMODE             0x10000074
#define CONST_UI_NetworkMultiplayer_GS_CDKEY_PART_MAXLENGTH      4
#define CONST_DunDefGameSearchCommon_FILTER_VERSIONNUMBER        0x10000075
#define CONST_DunDefGameSearchCommon_PRESENCE_SPECIAL_MISSION    3
#define CONST_DunDefGameSearchCommon_PRESENCE_INACTIVE           4
#define CONST_DunDefGameSearchCommon_PROPS_LEVEL_INDEX           0x1000000D
#define CONST_UI_NetworkMultiplayer_STATS_VIEW_COLUMN_TIME       5
#define CONST_DunDefGameSearchCommon_PROPS_INFINITE_WAVES        0x1000000E
#define CONST_DunDefGameSearchCommon_PROPS_START_AT_WAVE         0x1000000F
#define CONST_UI_CharacterSelect_CONTEXT_ACTIVE_MISSION          1
#define CONST_DunDefGameSearchCommon_PROPS_INFINITE_BUILD_TIME   0x10000011
#define CONST_UI_CharacterSelect_FILTER_SESSIONID_START          0x10000064
#define CONST_DunDefGameSearchCommon_PROPS_LEVEL_TAG             0x10000012
#define CONST_DunDefGameSearchCommon_PROPS_FRIENDLY_NAME         0x10000013
#define CONST_DunDefGameSearchCommon_PROPS_DIFFICULTY            0x10000014
#define CONST_DunDefGameSearchCommon_PROPS_ISCHALLENGE           0x1000005A
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_INFINITE_BUILD_TIME 0x10000011
#define CONST_DunDefGameSearchCommon_PROPS_HOSTHEROCLASS         0x1000005E
#define CONST_COLLECTIONGROUP                                    32
#define CONST_DunDefGameSearchCommon_PROPS_HOSTHEROLEVEL         0x1000002A
#define CONST_UI_CharacterSelect_PROPS_PURE_STRATEGY             0x1000006F
#define CONST_UI_CharacterSelect_PROPS_GAME_DIFFICULTY           0x10000010
#define CONST_DunDefGameSearchCommon_PROPS_UNIQUE_SESSIONID      0x10000063
#define CONST_DunDefGameSearchCommon_PROPS_PHASE_TYPE            0x10000071
#define CONST_DunDefOnlineGameSettingsConsole_PRESENCE_SPECIAL_MISSION 3
#define CONST_DunDefGameSearchCommon_PROPS_HERONAME              0x20000016
#define CONST_UI_TitleScreen_FILTER_DIFF_START                   0x10000056
#define CONST_UI_CharacterSelect_GS_USERNAME_MAXLENGTH           15
#define CONST_DunDefGameSearchCommon_PROPS_HEROCLASS             0x20000020
#define CONST_DunDefGameSearchCommon_STATS_VIEW_COLUMN_LEVEL     3
#define CONST_DunDefGameSearchCommon_PROPS_HEROLEVEL             0x1000002A
#define CONST_DunDefGameSearchCommon_PROPS_SCORE                 0x2000002B
#define CONST_DunDefGameSearchCommon_PROPS_COMPLETIONTIME        0x1000002C
#define CONST_DunDefGameSearchCommon_STATS_VIEW_COLUMN_CLASS     2
#define CONST_DunDefGameSearchCommon_STATS_VIEW_COLUMN_TIME      5
#define CONST_DunDefGameSearchCommon_STATS_VIEW_COLUMN_WAVE      6
#define CONST_DunDefGameStorage_MAX_ACHIEVEMENTS_TO_STORE        500
#define CONST_DunDefGameStorage_MAX_TUTORIAL_SETS                10
#define CONST_DunDefGameStorage_MAX_DAMAGEREDUCTIONS             4
#define CONST_DunDefGameStorage_MAX_LEVELUP_STATS                11
#define CONST_DunDefGameStorage_MAX_BUFF_TIERS                   6
#define CONST_DunDefGameStorage_MAX_BUFF_SLOTS                   3
#define CONST_UI_CharacterSelect_FILTER_HEROCLASS                0x10000060
#define CONST_DEFAULT_NUM_DECIMALPLACES                          2
#define CONST_DunDefOnlineGameSettingsConsole_FILTER_STRATEGY    0x10000070
#define CONST_UI_TitleScreen_GS_CDKEY_PART_MAXLENGTH             4
#define CONST_DunDefOnlineGameSettingsConsole_CONTEXT_GAME_MODE_COOP 0
#define CONST_DunDefOnlineGameSettingsConsole_FILTER_HEROLEVELEND 0x10000061
#define CONST_UI_CharacterSelect_GS_EMAIL_MAXLENGTH              50
#define CONST_UI_TitleScreen_PROPS_PHASE_TYPE                    0x10000071
#define CONST_DunDefOnlineGameSettingsConsole_FILTER_HEROCLASS   0x10000060
#define CONST_DunDefOnlineGameSettingsConsole_STATS_VIEW_COLUMN_LEVEL 3
#define CONST_MAX_TRADE_MANA                                     600000000
#define CONST_DunDefOnlineGameSettingsConsole_FILTER_LEVELINDEX  0x10000062
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_WAVECOUNT    0x1000002D
#define CONST_DunDefOnlineGameSettingsConsole_FILTER_SESSIONID_START 0x10000064
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_DEMOMODE     0x10000072
#define CONST_DunDefOnlineGameSettingsConsole_FILTER_MATCHCOMPLETE 0x10000077
#define CONST_DunDefOnlineGameSettingsConsole_PRESENCE_MAIN_MENU 0
#define CONST_DunDefOnlineGameSettingsConsole_PRESENCE_LOBBY     1
#define CONST_DunDefOnlineGameSettingsConsole_PRESENCE_INACTIVE  4
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_LEVEL_INDEX  0x1000000D
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_START_AT_WAVE 0x1000000F
#define CONST_UI_NetworkMultiplayer_PROPS_FRIENDLY_NAME          0x10000013
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_DIFFICULTY   0x10000014
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_UNIQUE_SESSIONID 0x10000063
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_PURE_STRATEGY 0x1000006F
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_PHASE_TYPE   0x10000071
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_SCORE        0x2000002B
#define CONST_DunDefOnlineGameSettingsConsole_PROPS_COMPLETIONTIME 0x1000002C
#define CONST_DunDefOnlineGameSettingsConsole_STATS_VIEW_COLUMN_SCORE 4
#define CONST_DunDefOnlineGameSettingsConsole_STATS_VIEW_COLUMN_TIME 5
#define CONST_UI_CharacterSelect_STATS_VIEW_COLUMN_SCORE         4
#define CONST_DunDefOnlineGameSettingsConsole_STATS_VIEW_COLUMN_WAVE 6
#define CONST_ACTIVATABLE_COLLECTIONGROUP                        1024
#define CONST_TRAP_COLLECTIONGROUP                               64
#define CONST_CHEST_DROP_MULTIPLIER                              7
#define CONST_NUM_CURSOR_PARTICLES                               72
#define CONST_PS3_MUSIC_MULTIPLIER                               1.40
#define CONST_MAX_PLAYERSHOP_MANA_DIGIT                          0
#define CONST_MAX_PLAYERSHOP_MANA_INT                            1000
#define CONST_StatObject_MAX_ACHIEVEMENTS_TO_STORE               500
#define CONST_StatObject_MAX_DAMAGEREDUCTIONS                    4
#define CONST_StatObject_MAX_LEVELUP_STATS                       11
#define CONST_UI_CharacterSelect_CONTEXT_GAME_MODE               0x0000800B
#define CONST_UI_CharacterSelect_QUERY_FILTERED                  2
#define CONST_UI_CharacterSelect_FILTER_LEVEL_START              0x1000002E
#define CONST_UI_CharacterSelect_FILTER_DIFF_START               0x10000056
#define CONST_UI_TitleScreen_FILTER_HEROLEVELEND                 0x10000061
#define CONST_UI_NetworkMultiplayer_PROPS_INFINITE_WAVES         0x1000000E
#define CONST_UI_CharacterSelect_FILTER_BUILD                    0x1000005B
#define CONST_UI_CharacterSelect_FILTER_SURVIVAL                 0x1000005C
#define CONST_EQUIPMENT_POWERFUL                                 8
#define CONST_UI_CharacterSelect_FILTER_CHALLENGE                0x1000005D
#define CONST_UI_CharacterSelect_FILTER_HEROLEVELSTART           0x1000005F
#define CONST_UI_MultiplayerMenu_PROPS_ISCHALLENGE               0x1000005A
#define CONST_UI_CharacterSelect_FILTER_HEROLEVELEND             0x10000061
#define CONST_UI_CharacterSelect_FILTER_LEVELINDEX               0x10000062
#define CONST_UI_CharacterSelect_FILTER_STRATEGY                 0x10000070
#define CONST_UI_MultiplayerMenu_FILTER_CHALLENGE                0x1000005D
#define CONST_UI_CharacterSelect_PRESENCE_MISSION                2
#define CONST_UI_CharacterSelect_PRESENCE_SPECIAL_MISSION        3
#define CONST_UI_CharacterSelect_PROPS_INFINITE_BUILD_TIME       0x10000011
#define CONST_UI_CharacterSelect_PROPS_ISCHALLENGE               0x1000005A
#define CONST_EQUIPMENT_EPIC                                     10
#define CONST_UI_CharacterSelect_PROPS_HOSTHEROLEVEL             0x1000002A
#define CONST_UI_CharacterSelect_PROPS_UNIQUE_SESSIONID          0x10000063
#define CONST_UI_TitleScreen_CONTEXT_GAME_MODE_COOP              0
#define CONST_UI_CharacterSelect_PROPS_DEMOMODE                  0x10000072
#define CONST_UI_CharacterSelect_PROPS_VERSIONNUMBER             0x10000073
#define CONST_UI_CharacterSelect_PROPS_HERONAME                  0x20000016
#define CONST_UI_CharacterSelect_PROPS_HEROCLASS                 0x20000020
#define CONST_UI_CharacterSelect_PROPS_HEROLEVEL                 0x1000002A
#define CONST_UI_MultiplayerMenu_GS_MESSAGE_MAXLENGTH            255
#define CONST_UI_CharacterSelect_STATS_VIEW_COLUMN_CLASS         2
#define CONST_UI_CharacterSelect_STATS_VIEW_COLUMN_LEVEL         3
#define CONST_UI_CharacterSelect_STATS_VIEW_COLUMN_TIME          5
#define CONST_UI_CharacterSelect_STATS_VIEW_COLUMN_WAVE          6
#define CONST_UI_NetworkMultiplayer_PROPS_HERONAME               0x20000016
#define CONST_MAX_DROP_MANA                                      100000
#define CONST_NUM_SHIFT_ITERATIONS                               10
#define CONST_UI_NetworkMultiplayer_FILTER_DIFF_START            0x10000056
#define CONST_NUM_CTRL_ITERATIONS                                50
#define CONST_UI_MultiplayerMenu_GS_PASSWORD_MAXLENGTH           30
#define CONST_UI_MultiplayerMenu_GS_CDKEY_PART_MAXLENGTH         4
#define CONST_UI_MultiplayerMenu_CONTEXT_GAME_MODE_COOP          0
#define CONST_UI_MultiplayerMenu_CONTEXT_GAME_MODE               0x0000800B
#define CONST_UI_MultiplayerMenu_QUERY_COOP                      1
#define CONST_UI_MultiplayerMenu_QUERY_FILTERED                  2
#define CONST_UI_MultiplayerMenu_FILTER_LEVEL_START              0x1000002E
#define CONST_UI_TitleScreen_PROPS_COMPLETIONTIME                0x1000002C
#define CONST_UI_NetworkMultiplayer_PRESENCE_SPECIAL_MISSION     3
#define CONST_UI_MultiplayerMenu_PRESENCE_INACTIVE               4
#define CONST_UI_MultiplayerMenu_FILTER_DIFF_START               0x10000056
#define CONST_UI_MultiplayerMenu_FILTER_BUILD                    0x1000005B
#define CONST_UI_MultiplayerMenu_FILTER_SURVIVAL                 0x1000005C
#define CONST_UI_MultiplayerMenu_FILTER_HEROLEVELEND             0x10000061
#define CONST_UI_MultiplayerMenu_FILTER_LEVELINDEX               0x10000062
#define CONST_UI_MultiplayerMenu_FILTER_SESSIONID_START          0x10000064
#define CONST_UI_MultiplayerMenu_FILTER_STRATEGY                 0x10000070
#define CONST_UI_MultiplayerMenu_FILTER_DEMOMODE                 0x10000074
#define CONST_UI_MultiplayerMenu_PROPS_GAME_DIFFICULTY           0x10000010
#define CONST_UI_MultiplayerMenu_FILTER_MATCHCOMPLETE            0x10000077
#define CONST_UI_MultiplayerMenu_CONTEXT_ACTIVE_MISSION          1
#define CONST_UI_NetworkMultiplayer_FILTER_VERSIONNUMBER         0x10000075
#define CONST_UI_MultiplayerMenu_PRESENCE_MAIN_MENU              0
#define CONST_UI_NetworkMultiplayer_STATS_VIEW_COLUMN_SCORE      4
#define CONST_UI_MultiplayerMenu_PRESENCE_SPECIAL_MISSION        3
#define CONST_UI_MultiplayerMenu_PROPS_INFINITE_WAVES            0x1000000E
#define CONST_UI_MultiplayerMenu_STATS_VIEW_COLUMN_SCORE         4
#define CONST_UI_MultiplayerMenu_PROPS_START_AT_WAVE             0x1000000F
#define CONST_UI_MultiplayerMenu_PROPS_INFINITE_BUILD_TIME       0x10000011
#define CONST_UI_MultiplayerMenu_PROPS_LEVEL_TAG                 0x10000012
#define CONST_UI_MultiplayerMenu_PROPS_FRIENDLY_NAME             0x10000013
#define CONST_UI_MultiplayerMenu_PROPS_DIFFICULTY                0x10000014
#define CONST_UI_MultiplayerMenu_PROPS_HOSTHEROLEVEL             0x1000002A
#define CONST_UI_MultiplayerMenu_PROPS_UNIQUE_SESSIONID          0x10000063
#define CONST_UI_MultiplayerMenu_PROPS_PURE_STRATEGY             0x1000006F
#define CONST_EQUIPMENT_SOLID                                    4
#define CONST_UI_MultiplayerMenu_PROPS_DEMOMODE                  0x10000072
#define CONST_UI_MultiplayerMenu_PROPS_VERSIONNUMBER             0x10000073
#define CONST_UI_MultiplayerMenu_PROPS_HERONAME                  0x20000016
#define CONST_UI_MultiplayerMenu_PROPS_HEROCLASS                 0x20000020
#define CONST_UI_TitleScreen_PROPS_HERONAME                      0x20000016
#define CONST_UI_MultiplayerMenu_PROPS_HEROLEVEL                 0x1000002A
#define CONST_UI_MultiplayerMenu_PROPS_COMPLETIONTIME            0x1000002C
#define CONST_UI_MultiplayerMenu_PROPS_WAVECOUNT                 0x1000002D
#define CONST_UI_MultiplayerMenu_STATS_VIEW_COLUMN_NAME          1
#define CONST_UI_MultiplayerMenu_STATS_VIEW_COLUMN_WAVE          6
#define CONST_UI_NetworkMultiplayer_CONTEXT_GAME_MODE            0x0000800B
#define CONST_UI_NetworkMultiplayer_CONTEXT_GAME_MODE_COOP       0
#define CONST_UI_NetworkMultiplayer_QUERY_FILTERED               2
#define CONST_UI_NetworkMultiplayer_FILTER_LEVEL_START           0x1000002E
#define CONST_UI_NetworkMultiplayer_FILTER_CHALLENGE             0x1000005D
#define CONST_UI_NetworkMultiplayer_FILTER_HEROLEVELSTART        0x1000005F
#define CONST_UI_TitleScreen_QUERY_FILTERED                      2
#define CONST_UI_NetworkMultiplayer_FILTER_HEROLEVELEND          0x10000061
#define CONST_UI_NetworkMultiplayer_FILTER_HEROCLASS             0x10000060
#define CONST_UI_NetworkMultiplayer_FILTER_LEVELINDEX            0x10000062
#define CONST_UI_NetworkMultiplayer_FILTER_SESSIONID_START       0x10000064
#define CONST_UI_NetworkMultiplayer_FILTER_SESSIONID_COUNT       10
#define CONST_UI_NetworkMultiplayer_FILTER_STRATEGY              0x10000070
#define CONST_UI_NetworkMultiplayer_FILTER_DEMOMODE              0x10000074
#define CONST_UI_TitleScreen_PROPS_WAVECOUNT                     0x1000002D
#define CONST_UI_NetworkMultiplayer_FILTER_MATCHCOMPLETE         0x10000077
#define CONST_UI_NetworkMultiplayer_PRESENCE_MAIN_MENU           0
#define CONST_UI_NetworkMultiplayer_PRESENCE_LOBBY               1
#define CONST_UI_NetworkMultiplayer_PRESENCE_MISSION             2
#define CONST_UI_NetworkMultiplayer_PRESENCE_INACTIVE            4
#define CONST_UI_NetworkMultiplayer_PROPS_LEVEL_INDEX            0x1000000D
#define CONST_UI_NetworkMultiplayer_PROPS_INFINITE_BUILD_TIME    0x10000011
#define CONST_UI_NetworkMultiplayer_PROPS_DIFFICULTY             0x10000014
#define CONST_UI_NetworkMultiplayer_PROPS_ISCHALLENGE            0x1000005A
#define CONST_UI_NetworkMultiplayer_PROPS_HOSTHEROCLASS          0x1000005E
#define CONST_UI_NetworkMultiplayer_PROPS_PURE_STRATEGY          0x1000006F
#define CONST_UI_NetworkMultiplayer_PROPS_PHASE_TYPE             0x10000071
#define CONST_UI_NetworkMultiplayer_PROPS_DEMOMODE               0x10000072
#define CONST_UI_TitleScreen_PROPS_ISCHALLENGE                   0x1000005A
#define CONST_UI_NetworkMultiplayer_PROPS_VERSIONNUMBER          0x10000073
#define CONST_UI_NetworkMultiplayer_PROPS_HEROCLASS              0x20000020
#define CONST_UI_NetworkMultiplayer_PROPS_HEROLEVEL              0x1000002A
#define CONST_UI_NetworkMultiplayer_PROPS_SCORE                  0x2000002B
#define CONST_UI_TitleScreen_PRESENCE_INACTIVE                   4
#define CONST_UI_NetworkMultiplayer_STATS_VIEW_COLUMN_CLASS      2
#define CONST_PURCHASE_MANA_AMOUNT                               200000
#define CONST_UI_TitleScreen_GS_USERNAME_MAXLENGTH               15
#define CONST_UI_TitleScreen_GS_PASSWORD_MAXLENGTH               30
#define CONST_UI_TitleScreen_QUERY_COOP                          1
#define CONST_UI_TitleScreen_FILTER_LEVEL_START                  0x1000002E
#define CONST_UI_TitleScreen_FILTER_BUILD                        0x1000005B
#define CONST_UI_TitleScreen_FILTER_SURVIVAL                     0x1000005C
#define CONST_UI_TitleScreen_PROPS_HOSTHEROLEVEL                 0x1000002A
#define CONST_UI_TitleScreen_FILTER_HEROLEVELSTART               0x1000005F
#define CONST_UI_TitleScreen_FILTER_LEVELINDEX                   0x10000062
#define CONST_UI_TitleScreen_FILTER_SESSIONID_COUNT              10
#define CONST_UI_TitleScreen_FILTER_STRATEGY                     0x10000070
#define CONST_UI_TitleScreen_FILTER_DEMOMODE                     0x10000074
#define CONST_UI_TitleScreen_FILTER_VERSIONNUMBER                0x10000075
#define CONST_UI_TitleScreen_FILTER_MATCHCOMPLETE                0x10000077
#define CONST_UI_TitleScreen_PRESENCE_LOBBY                      1
#define CONST_UI_TitleScreen_PRESENCE_MISSION                    2
#define CONST_UI_TitleScreen_PRESENCE_SPECIAL_MISSION            3
#define CONST_UI_TitleScreen_PROPS_GAME_DIFFICULTY               0x10000010
#define CONST_UI_TitleScreen_PROPS_INFINITE_BUILD_TIME           0x10000011
#define CONST_UI_TitleScreen_PROPS_LEVEL_TAG                     0x10000012
#define CONST_UI_TitleScreen_PROPS_FRIENDLY_NAME                 0x10000013
#define CONST_UI_TitleScreen_PROPS_DIFFICULTY                    0x10000014
#define CONST_UI_TitleScreen_PROPS_HOSTHEROCLASS                 0x1000005E
#define CONST_UI_TitleScreen_PROPS_UNIQUE_SESSIONID              0x10000063
#define CONST_UI_TitleScreen_PROPS_PURE_STRATEGY                 0x1000006F
#define CONST_UI_TitleScreen_PROPS_VERSIONNUMBER                 0x10000073
#define CONST_UI_TitleScreen_PROPS_MATCHCOMPLETE                 0x10000076
#define CONST_UI_TitleScreen_PROPS_HEROCLASS                     0x20000020
#define CONST_UI_TitleScreen_PROPS_HEROLEVEL                     0x1000002A
#define CONST_UI_TitleScreen_STATS_VIEW_COLUMN_NAME              1
#define CONST_UI_TitleScreen_STATS_VIEW_COLUMN_CLASS             2
#define CONST_UI_TitleScreen_STATS_VIEW_COLUMN_LEVEL             3
#define CONST_UI_TitleScreen_STATS_VIEW_COLUMN_TIME              5
#define CONST_UI_TitleScreen_STATS_VIEW_COLUMN_WAVE              6
#define CONST_EQUIPMENT_CURSED                                   0
#define CONST_EQUIPMENT_WORN                                     2
#define CONST_EQUIPMENT_SHINING                                  7
#define CONST_EQUIPMENT_AMAZING                                  9
#define CONST_EQUIPMENT_LEGENDARY                                11
#define CONST_EQUIPMENT_GODLY                                    12
#define CONST_EQUIPMENT_MYTHICAL                                 13
#define CONST_EQUIPMENT_TRANSCENDENT                             14
#define CONST_EQUIPMENT_SUPREME                                  15
#define CONST_EQUIPMENT_ULTIMATE_PLUS_PLUS                       19

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UDKGame._DataTypes.EPawnBoostType
enum class EPawnBoostType : uint8_t
{
	EPB_RESISTANCE                 = 0,
	EPB_DAMAGE                     = 1,
	EPB_ATTACKRATE                 = 2,
	EPB_ATTACKRANGE                = 3,
	EPB_MOVEMENTSPEED              = 4,
	EPB_ANIMSPEED                  = 5,
	EPB_ATK_ANIMSPEED              = 6,
	EPB_GRAVITY                    = 7,
	EPB_MAX                        = 8
};


// Enum UDKGame._DataTypes.ETowerBoostType
enum class ETowerBoostType : uint8_t
{
	ETB_RESISTANCE                 = 0,
	ETB_DAMAGE                     = 1,
	ETB_ATTACKRATE                 = 2,
	ETB_ATTACKRANGE                = 3,
	ETB_MAX                        = 4
};


// Enum UDKGame._DataTypes.LevelUpValueType
enum class ELevelUpValueType : uint8_t
{
	LU_NONE                        = 0,
	LU_HEALTH                      = 1,
	LU_SPEED                       = 2,
	LU_DAMAGE                      = 3,
	LU_CASTINGRATE                 = 4,
	LU_HEROABILITYONE              = 5,
	LU_HEROABILITYTWO              = 6,
	LU_DEFENSEHEALTH               = 7,
	LU_DEFENSEATTACKRATE           = 8,
	LU_DEFENSEBASEDAMAGE           = 9,
	LU_DEFENSEAOE                  = 10,
	LU_WEAPONBASEDAMAGE            = 11,
	LU_WEAPONALTDAMAGE             = 12,
	LU_WEAPONELEMENTALDAMAGE       = 13,
	LU_DAMAGEVULNERABILITY         = 14,
	LU_ATTACKSPEED                 = 15,
	LU_TENACITY                    = 16,
	LU_MAX                         = 17
};


// Enum UDKGame._DataTypes.EAccessoryType
enum class EAccessoryType : uint8_t
{
	EAT_None                       = 0,
	EAT_BRACERS                    = 1,
	EAT_HAT                        = 2,
	EAT_MASK                       = 3,
	EAT_SHIELD                     = 4,
	EAT_MAX                        = 5
};


// Enum UDKGame._DataTypes.eComparisonType
enum class EeComparisonType : uint8_t
{
	CRT_None                       = 0,
	CRT_Equals                     = 1,
	CRT_LessThan                   = 2,
	CRT_GreaterThan                = 3,
	CRT_MAX                        = 4
};


// Enum UDKGame._DataTypes.EStatusEffect
enum class EStatusEffect : uint8_t
{
	SE_NONE                        = 0,
	SE_FROZEN                      = 1,
	SE_STUNNED                     = 2,
	SE_OILED                       = 3,
	SE_FIRE                        = 4,
	SE_POISONED                    = 5,
	SE_SHOCKED                     = 6,
	SE_WEBBED                      = 7,
	SE_MAX                         = 8
};


// Enum UDKGame._DataTypes.EElementTrait
enum class EElementTrait : uint8_t
{
	ET_NONE                        = 0,
	ET_EARTH                       = 1,
	ET_FIRE                        = 2,
	ET_WATER                       = 3,
	ET_LIGHTNING                   = 4,
	ET_ICE                         = 5,
	ET_OIL                         = 6,
	ET_POISON                      = 7,
	ET_MAGIC                       = 8,
	ET_DARK                        = 9,
	ET_HOLY                        = 10,
	ET_MAX                         = 11
};


// Enum UDKGame._DataTypes.EBuffSpawnEvent
enum class EBuffSpawnEvent : uint8_t
{
	BSE_Spawned                    = 0,
	BSE_ProjectileExploded         = 1,
	BSE_InstigatorAttacked         = 2,
	BSE_AbilityUsed                = 3,
	BSE_Death                      = 4,
	BSE_TakeDamage                 = 5,
	BSE_DealtDamage                = 6,
	BSE_AbilityCompleted           = 7,
	BSE_FireProjectile             = 8,
	BSE_AbilityProc                = 9,
	BSE_BuffEnd                    = 10,
	BSE_Healed                     = 11,
	BSE_KilledActor                = 12,
	BSE_Jumped                     = 13,
	BSE_HealedTarget               = 14,
	BSE_Timer                      = 15,
	BSE_MAX                        = 16
};


// Enum UDKGame._DataTypes.ESortingFilter
enum class ESortingFilter : uint8_t
{
	SF_OFF                         = 0,
	SF_TYPE                        = 1,
	SF_QUALITY                     = 2,
	SF_TYPE_AND_QUAL               = 3,
	SF_RATING                      = 4,
	SF_MANA                        = 5,
	SF_NAME                        = 6,
	SF_LEVELS                      = 7,
	SF_SIZE                        = 8,
	SF_MAX                         = 9
};


// Enum UDKGame._DataTypes.EGraphicsQuality
enum class EGraphicsQuality : uint8_t
{
	GQ_ULTRA                       = 0,
	GQ_HIGH                        = 1,
	GQ_MEDIUM                      = 2,
	GQ_LOW                         = 3,
	GQ_ULTRALOW                    = 4,
	GQ_MAX                         = 5
};


// Enum UDKGame._DataTypes.EWeaponType
enum class EWeaponType : uint8_t
{
	EWT_WEAPON_ANYONE              = 0,
	EWT_WEAPON_APPRENTICE          = 1,
	EWT_WEAPON_SQUIRE              = 2,
	EWT_WEAPON_INITIATE            = 3,
	EWT_WEAPON_RECRUIT             = 4,
	EWT_WEAPON_NONE                = 5,
	EWT_WEAPON_MAX                 = 6
};


// Enum UDKGame._DataTypes.EEquipmentStatType
enum class EEquipmentStatType : uint8_t
{
	EQS_WEAPONBASEDAMAGE           = 0,
	EQS_WEAPONALTDAMAGE            = 1,
	EQS_WEAPONELEMENTALDAMAGE      = 2,
	EQS_WEAPONSHOTSPERSECOND       = 3,
	EQS_CLIPAMMO                   = 4,
	EQS_RELOADSPEED                = 5,
	EQS_KNOCKBACK                  = 6,
	EQS_CHARGESPEED                = 7,
	EQS_BLOCKING                   = 8,
	EQS_WEAPONNUMBEROFPROJECTILES  = 9,
	EQS_WEAPONPROJECTILESPEED      = 10,
	EQS_ENDEQUIPMENTSTATS          = 11,
	EQS_DAMAGERESISTANCE           = 12,
	EQS_HEROSTAT                   = 13,
	EQS_MAX                        = 14
};


// Enum UDKGame.ActionWheel.EACTIONWHEEL_HIGHLIGHTSTATUS
enum class EACTIONWHEEL_HIGHLIGHTSTATUS : uint8_t
{
	ACTIONWHEEL_HIGHLIGHTSTATUS_NA = 0,
	ACTIONWHEEL_HIGHLIGHTSTATUS_CANUSE_SECTION = 1,
	ACTIONWHEEL_HIGHLIGHTSTATUS_CANUSE_ABILITY = 2,
	ACTIONWHEEL_HIGHLIGHTSTATUS_CANUSE_CASTING = 3,
	ACTIONWHEEL_HIGHLIGHTSTATUS_NOTENOUGHMANA = 4,
	ACTIONWHEEL_HIGHLIGHTSTATUS_NOTENOUGHLEVEL = 5,
	ACTIONWHEEL_HIGHLIGHTSTATUS_MAX = 6
};


// Enum UDKGame.DunDefPlayerAbility.EPlayerAbilityStatus
enum class EPlayerAbilityStatus : uint8_t
{
	EPA_INVISIBLE                  = 0,
	EPA_NOTAPPLICABLE              = 1,
	EPA_UNDERLEVELREQUIREMENT      = 2,
	EPA_NOTENOUGHMANA              = 3,
	EPA_BADPHYSICSSTATE            = 4,
	EPA_COOLINGDOWN                = 5,
	EPA_CANACTIVATE                = 6,
	EPA_CASTING                    = 7,
	EPA_MAX                        = 8
};


// Enum UDKGame.ActorFilter.EActorFilterRequirement
enum class EActorFilterRequirement : uint8_t
{
	EAFR_Allow                     = 0,
	EAFR_Disallow                  = 1,
	EAFR_MAX                       = 2
};


// Enum UDKGame.AnalyticsXML.EGameEvent
enum class EGameEvent : uint8_t
{
	EGameEvent_Victory             = 0,
	EGameEvent_Defeat              = 1,
	EGameEvent_MAX                 = 2
};


// Enum UDKGame.HeroEquipmentNative.EEquipmentType
enum class EEquipmentType : uint8_t
{
	EQT_WEAPON                     = 0,
	EQT_ARMOR_TORSO                = 1,
	EQT_ARMOR_PANTS                = 2,
	EQT_ARMOR_BOOTS                = 3,
	EQT_ARMOR_GLOVES               = 4,
	EQT_FAMILIAR                   = 5,
	EQT_ENDPRIMARYITEMS            = 6,
	EQT_ACCESSORY1                 = 7,
	EQT_ACCESSORY2                 = 8,
	EQT_ACCESSORY3                 = 9,
	EQT_MASK                       = 10,
	EQT_MAX                        = 11
};


// Enum UDKGame.DunDefAchievementManager.EAchievementCheckSet
enum class EAchievementCheckSet : uint8_t
{
	EAC_LEVEL_UP_EQUIPMENT         = 0,
	EAC_LEVEL_UP_HERO              = 1,
	EAC_LEVEL_VICTORY              = 2,
	EAC_EQUIPMENT_SET              = 3,
	EAC_SURVIVAL_WAVE              = 4,
	EAC_AWARD                      = 5,
	EAC_BANKED_MANA                = 6,
	EAC_ALL_FAMILIAR               = 7,
	EAC_AT_LOBBY                   = 8,
	EAC_MAX                        = 9
};


// Enum UDKGame.DunDefAchievementManager.EAchievement
enum class EAchievement : uint8_t
{
	EA_SMITHY                      = 0,
	EA_MY_WEAPON                   = 1,
	EA_MASTER_FAMILIAR             = 2,
	EA_PUPIL                       = 3,
	EA_VETERAN                     = 4,
	EA_DEFENDER_OF_ETHERIA         = 5,
	EA_TO_THE_LIMIT                = 6,
	EA_AREA1_ANY                   = 7,
	EA_AREA2_ANY                   = 8,
	EA_AREA3_ANY                   = 9,
	EA_ALL_ANY                     = 10,
	EA_AREA1_HARD                  = 11,
	EA_AREA2_HARD                  = 12,
	EA_AREA3_HARD                  = 13,
	EA_ALL_HARD                    = 14,
	EA_AREA1_INSANE                = 15,
	EA_AREA2_INSANE                = 16,
	EA_AREA3_INSANE                = 17,
	EA_ALL_INSANE                  = 18,
	EA_CHALLENGE1_NORMAL           = 19,
	EA_CHALLENGE2_NORMAL           = 20,
	EA_CHALLENGE3_NORMAL           = 21,
	EA_CHALLENGE4_NORMAL           = 22,
	EA_CHALLENGE5_NORMAL           = 23,
	EA_CHALLENGE6_NORMAL           = 24,
	EA_CHALLENGE7_NORMAL           = 25,
	EA_CHALLENGE8_NORMAL           = 26,
	EA_CHALLENGE9_NORMAL           = 27,
	EA_CHALLENGE10_NORMAL          = 28,
	EA_CHALLENGE11_NORMAL          = 29,
	EA_CHALLENGE12_NORMAL          = 30,
	EA_ALL_CHALLENGE_NORMAL        = 31,
	EA_CHALLENGE1_INSANE           = 32,
	EA_CHALLENGE2_INSANE           = 33,
	EA_CHALLENGE3_INSANE           = 34,
	EA_CHALLENGE4_INSANE           = 35,
	EA_CHALLENGE5_INSANE           = 36,
	EA_CHALLENGE6_INSANE           = 37,
	EA_SURVIVAL_WAVE15_NORMAL      = 38,
	EA_SURVIVAL_WAVE20_NORMAL      = 39,
	EA_SURVIVAL_WAVE15_HARD        = 40,
	EA_SURVIVAL_WAVE10_INSANE      = 41,
	EA_ALL_PURESTRATEGY_WAVE10_NORMAL = 42,
	EA_NORMAL_LORD                 = 43,
	EA_GODLY_SET                   = 44,
	EA_GODLY_WEAPON                = 45,
	EA_SIX_FLAWLESS_NORMAL         = 46,
	EA_SIX_SKIN_OF_TEETH           = 47,
	EA_ALL_STRATEGIST              = 48,
	EA_ALL_GUNSLINGER              = 49,
	EA_ALL_TEAMWORK                = 50,
	EA_ALL_ENDINGS                 = 51,
	EA_ALL_LVL60                   = 52,
	EA_ALL_FAMILIARS               = 53,
	EA_MASTER_BANKER               = 54,
	EA_COMPLETED_TUTORIAL          = 55,
	EA_ALL_ACCOMPLISHMENTS         = 56,
	EA_XMAS                        = 57,
	EA_ETERNIASHARDS_PART1_ANY     = 58,
	EA_ETERNIASHARDS_PART1_NIGHTMARE = 59,
	EA_PORTAL_PROTECTOR            = 60,
	EA_PORTAL_PROTECTOR_NIGHTMARE  = 61,
	EA_MYTHICAL_DEFENDER           = 62,
	EA_MYTHICAL_DEFENDER_HARDCORE  = 63,
	EA_DUNGEON_RAIDER              = 64,
	EA_DUNGEON_RAIDER_MYTHICAL     = 65,
	EA_CUPID                       = 66,
	EA_CUPID_MYTHICAL              = 67,
	EA_CHALLENGE_MYTHICAL_HARDCORE = 68,
	EA_ETERNIASHARDS_PART2_ANY     = 69,
	EA_DJINN_RECRUITER             = 70,
	EA_ETERNIASHARDS_PART2_NIGHTMARE = 71,
	EA_DJINN_RECRUITER_NIGHTMARE   = 72,
	EA_TRANSCENDENT_SURVIVALIST    = 73,
	EA_ETERNIASHARDS_PART3_ANY     = 74,
	EA_PUZZLE_SOLVER               = 75,
	EA_ETERNIASHARDS_PART3_NIGHTMARE = 76,
	EA_PUZZLE_SOLVER_NIGHTMARE     = 77,
	EA_RTS                         = 78,
	EA_RTS_NIGHTMARE               = 79,
	EA_ETERNIASHARDS_PART4_ANY     = 80,
	EA_ETERNIASHARDS_PART4_NIGHTMARE = 81,
	EA_BOSS_CRUSHER                = 82,
	EA_BOSS_CRUSHER_NIGHTMARE      = 83,
	EA_HEROES                      = 84,
	EA_HEROES_NIGHTMARE            = 85,
	EA_MONSTERS                    = 86,
	EA_ULTIMATE_DEFENDER           = 87,
	EA_ANNIVERSARY                 = 88,
	EA_ANNIVERSARY_NIGHTMARE       = 89,
	EA_PUMPKING_PARTY              = 90,
	EA_PUMPKING_PARTY_NIGHTMARE    = 91,
	EA_GREATER_TURKEYHUNTER        = 92,
	EA_GREATER_TURKEYHUNTER_NIGHTMARE = 93,
	EA_SILENTNIGHT                 = 94,
	EA_SILENTNIGHT_NIGHTMARE       = 95,
	EA_WINTERWONDERLAND            = 96,
	EA_WINTERWONDERLAND_NIGHTMARE  = 97,
	EA_VDAY2013                    = 98,
	EA_VDAY2013_NIGHTMARE          = 99,
	EA_LAB                         = 100,
	EA_LAB_NIGHTMARE               = 101,
	EA_LABASSAULT                  = 102,
	EA_LABASSAULT_NIGHTMARE        = 103,
	EA_EMBERMOUNT                  = 104,
	EA_EMBERMOUNT_NIGHTMARE        = 105,
	EA_MOONBASE                    = 106,
	EA_MOONBASE_NIGHTMARE          = 107,
	EA_BUCCANEERBAY                = 108,
	EA_BUCCANEERBAY_NIGHTMARE      = 109,
	EA_TEMPLEOFWATER               = 110,
	EA_TEMPLEOFWATER_NIGHTMARE     = 111,
	EA_CRYSTALLINERESURGENCE       = 112,
	EA_CRYSTALLINERESURGENCE_NIGHTMARE = 113,
	EA_WINTERMIRE_NIGHTMARE        = 114,
	EA_INFESTED_NIGHTMARE          = 115,
	EA_OMENAK_NIGHTMARE            = 116,
	EA_TOMB_OF_ETHERIA_NIGHTMARE   = 117,
	EA_ETERNAL_DEFENDER            = 118,
	EA_SPOOKYBAY                   = 119,
	EA_SPOOKYBAY_NIGHTMARE         = 120,
	EA_HALLOWEENINVASION           = 121,
	EA_HALLOWEENINVASION_NIGHTMARE = 122,
	EA_STRIKINGTREE                = 123,
	EA_STRIKINGTREE_NIGHTMARE      = 124,
	EA_TAVERNINCURSION             = 125,
	EA_TAVERNINCURSION_NIGHTMARE   = 126,
	EA_SKYOLOVECAMPAIGN            = 127,
	EA_SKYOLOVECAMPAIGN_NIGHTMARE  = 128,
	EA_COASTALBAZAAR               = 129,
	EA_COASTALBAZAAR_NIGHTMARE     = 130,
	EA_WANDERINGHEART              = 131,
	EA_WANDERINGHEART_NIGHTMARE    = 132,
	EA_ARCANELIBRARY_NIGHTMARE     = 133,
	EA_DREADDUNGEON_NIGHTMARE      = 134,
	EA_EMERALDCITY_NIGHTMARE       = 135,
	EA_FLAMESOFREBIRTH_NIGHTMARE   = 136,
	EA_PIRATEINVASION_NIGHTMARE    = 137,
	EA_SPRINGVALLEY_NIGHTMARE      = 138,
	EA_TEMPLEOFPOLYBIUS_NIGHTMARE  = 139,
	EA_LIFESTREAMHOLLOW            = 140,
	EA_LIFESTREAMHOLLOW_NIGHTMARE  = 141,
	EA_FORESTOGRECRUSH             = 142,
	EA_FORESTOGRECRUSH_NIGHTMARE   = 143,
	EA_MAGUSCITADEL_NIGHTMARE      = 144,
	EA_TINKERERSWORKSHOP_NIGHMARE  = 145,
	EA_WORKSHOPINVASION_NIGHTMARE  = 146,
	EA_TROPICSOFETHERIA_NIGHTMARE  = 147,
	EA_ETERNIAGAUNTLET_NIGHTMARE   = 148,
	EA_CRYSTALCAVE_NIGHTMARE       = 149,
	EA_CRYSTALCAVE_NOTOWERSALLOWED_NIGHTMARE = 150,
	EA_RUTHLESS_DEFENDER           = 151,
	EA_SPOOK3                      = 152,
	EA_FROSTDALEWONDERLAND         = 153,
	EA_MAX                         = 154
};


// Enum UDKGame.DunDefHeroManager.EGameDifficulty
enum class EGameDifficulty : uint8_t
{
	EGD_EASY                       = 0,
	EGD_MEDIUM                     = 1,
	EGD_HARD                       = 2,
	EGD_INSANE                     = 3,
	EGD_NIGHTMARE                  = 4,
	EGD_RUTHLESS                   = 5,
	EGD_MAX                        = 6
};


// Enum UDKGame.DunDefHeroManager.StringVerificationTypes
enum class EStringVerificationTypes : uint8_t
{
	HERO_NAME_VERIFY               = 0,
	EQUIP_NAME_VERIFY              = 1,
	EQUIP_FORGER_NAME_VERIFY       = 2,
	StringVerificationTypes_MAX    = 3
};


// Enum UDKGame.DunDefHero.EHeroType
enum class EHeroType : uint8_t
{
	EHT_APPRENTICE                 = 0,
	EHT_SQUIRE                     = 1,
	EHT_HUNTRESS                   = 2,
	EHT_MONK                       = 3,
	EHT_MAX                        = 4
};


// Enum UDKGame.DunDefHeroManager.EMultiplayerModes
enum class EMultiplayerModes : uint8_t
{
	MP_UNRANKED                    = 0,
	MP_RANKED                      = 1,
	MP_NONSTEAM                    = 2,
	MP_MAX                         = 3
};


// Enum UDKGame.DunDefGameStats.HeroAwardEnum
enum class EHeroAwardEnum : uint8_t
{
	DDAward_Immortal               = 0,
	DDAward_Invincible             = 1,
	DDAward_Knight                 = 2,
	DDAward_Lord                   = 3,
	DDAward_Strategist             = 4,
	DDAward_Banker                 = 5,
	DDAward_TriggerHappy           = 6,
	DDAward_HandyMan               = 7,
	DDAward_Janitor                = 8,
	DDAward_Chillax                = 9,
	DDAward_FlawlessVictory        = 10,
	DDAward_MVP                    = 11,
	DDAward_Teamwork               = 12,
	DDAward_SkinOfTeeth            = 13,
	DDAward_FirstKill              = 14,
	DDAward_Mechanic               = 15,
	DDAward_BossSlayer             = 16,
	DDAward_MasterBuilder          = 17,
	DDAward_MasterStrategist       = 18,
	DDAward_GunSlinger             = 19,
	DDAward_RealMVP                = 20,
	DDAward_RTS                    = 21,
	DDAward_MAX                    = 22
};


// Enum UDKGame.DunDefGameStats.GameStat
enum class EGameStat : uint8_t
{
	DDStat_CombatStart             = 0,
	DDStat_CombatStop              = 1,
	DDStat_Score                   = 2,
	DDStat_EnemyKill               = 3,
	DDStat_PlayerKill              = 4,
	DDStat_TowerKill               = 5,
	DDStat_ExpGained               = 6,
	DDStat_ManaEarned              = 7,
	DDStat_UsefulBooty             = 8,
	DDStat_UnusefulBooty           = 9,
	DDStat_TowerBuilt              = 10,
	DDStat_TowerRepaired           = 11,
	DDStat_TowerDestroyed          = 12,
	DDStat_TowerSold               = 13,
	DDStat_TowerUpgraded           = 14,
	DDStat_Distance                = 15,
	DDStat_ChestOpened             = 16,
	DDStat_ChestLost               = 17,
	DDStat_HeroDied                = 18,
	DDStat_HeroDamaged             = 19,
	DDStat_HeroSwapped             = 20,
	DDStat_EnemyDeath              = 21,
	DDStat_EnemySpawn              = 22,
	DDStat_CoreActivated           = 23,
	DDStat_CoreAttacked            = 24,
	DDStat_AwardImmortal           = 25,
	DDStat_AwardInvincible         = 26,
	DDStat_KnightAchieved          = 27,
	DDStat_LordAchieved            = 28,
	DDStat_AwardStrategist         = 29,
	DDStat_AwardBanker             = 30,
	DDStat_AwardTriggerHappy       = 31,
	DDStat_AwardHandyMan           = 32,
	DDStat_AwardJanitor            = 33,
	DDStat_AwardChillax            = 34,
	DDStat_FlawlessVictory         = 35,
	DDStat_AwardMVH                = 36,
	DDStat_AwardTeamwork           = 37,
	DDStat_AwardSkinOfTeeth        = 38,
	DDStat_AwardFirstKill          = 39,
	DDStat_AwardMechanic           = 40,
	DDStat_AwardBossSlayer         = 41,
	DDStat_AwardMasterBuilder      = 42,
	DDStat_AwardMasterStrategist   = 43,
	DDStat_AwardGunSlinger         = 44,
	DDStat_AwardMVP                = 45,
	DDStat_AwardRTS                = 46,
	DDStat_MAX                     = 47
};


// Enum UDKGame.ToolTipInterface.ToolTipAlignment
enum class EToolTipAlignment : uint8_t
{
	TTAlignment_LeftTop            = 0,
	TTAlignment_RightBottom        = 1,
	TTAlignment_Center             = 2,
	TTAlignment_Absolute           = 3,
	TTAlignment_MAX                = 4
};


// Enum UDKGame.DunDefUIScene.SideButtonAlignment
enum class ESideButtonAlignment : uint8_t
{
	SBA_Left                       = 0,
	SBA_Right                      = 1,
	SBA_Top                        = 2,
	SBA_Bottom                     = 3,
	SBA_MAX                        = 4
};


// Enum UDKGame.DunDefGameReplicationInfo.EScoreAwardType
enum class EScoreAwardType : uint8_t
{
	ESA_NoType                     = 0,
	ESA_CompletedWave              = 1,
	ESA_WaveTimeBonus              = 2,
	ESA_NoCoreDamageBonus          = 3,
	ESA_NoPlayerDamageBonus        = 4,
	ESA_OnlyAttackedWithTowersBonus = 5,
	ESA_OnlyAttackedWithWeaponsBonus = 6,
	ESA_KilledEnemy                = 7,
	ESA_Award                      = 8,
	ESA_Cheated                    = 9,
	ESA_ExpBonus                   = 10,
	ESA_RuthlessBonus              = 11,
	ESA_MAX                        = 12
};


// Enum UDKGame.TextComponent.ENoteVerticalAlignment
enum class ENoteVerticalAlignment : uint8_t
{
	NVA_Top                        = 0,
	NVA_Center                     = 1,
	NVA_Bottom                     = 2,
	NVA_MAX                        = 3
};


// Enum UDKGame.TextComponent.ENoteAlignment
enum class ENoteAlignment : uint8_t
{
	NA_Center                      = 0,
	NA_Left                        = 1,
	NA_Right                       = 2,
	NA_MAX                         = 3
};


// Enum UDKGame.Main.ETUTORIALFLAG
enum class ETUTORIALFLAG : uint8_t
{
	ETF_ONLYBUILDDEFENSES          = 0,
	ETF_DISABLE_CORE_ACTIVATION    = 1,
	ETF_DISABLE_FORGE_ACTIVATION   = 2,
	ETF_MAX                        = 3
};


// Enum UDKGame.DunDefGameMessage.GAME_HUD_MESSAGE_TYPE
enum class EGAME_HUD_MESSAGE_TYPE : uint8_t
{
	GHM_GENERIC                    = 0,
	GHM_CRYSTALCOREATTACK          = 1,
	GHM_LEVELUP                    = 2,
	GHM_CANTJOINMULTIPLAYER        = 3,
	GHM_MAX                        = 4
};


// Enum UDKGame.DunDefEnemy.EnemyClassification
enum class EnemyClassification : uint8_t
{
	EC_NORMAL                      = 0,
	EC_UNDEAD                      = 1,
	EC_MAX                         = 2
};


// Enum UDKGame.DunDefDarkElfMageController.WhatToDo
enum class EWhatToDo : uint8_t
{
	WTD_Attack                     = 0,
	WTD_Heal                       = 1,
	WTD_Spawn                      = 2,
	WTD_MoveToHeal                 = 3,
	WTD_Run                        = 4,
	WTD_MAX                        = 5
};


// Enum UDKGame.DunDefDroppedEquipment.EQUALITYFX
enum class EQUALITYFX : uint8_t
{
	EQF_NONE                       = 0,
	EQF_CIRCLES_ONLY               = 1,
	EQF_CIRCLES_AND_BEAMS          = 2,
	EQF_MAX                        = 3
};


// Enum UDKGame.DunDefPlayerStats.PlayerStat
enum class EPlayerStat : uint8_t
{
	DDPlayerStat_EnemyKill         = 0,
	DDPlayerStat_PlayerKill        = 1,
	DDPlayerStat_TowerKill         = 2,
	DDPlayerStat_OpenedChests      = 3,
	DDPlayerStat_TowerBuilt        = 4,
	DDPlayerStat_TowerRepaired     = 5,
	DDPlayerStat_TowerDestroyed    = 6,
	DDPlayerStat_TowerSold         = 7,
	DDPlayerStat_TowerUpgraded     = 8,
	DDPlayerStat_BestTime          = 9,
	DDPlayerStat_TotalTime         = 10,
	DDPlayerStat_BestEnemyKill     = 11,
	DDPlayerStat_BestPlayerKill    = 12,
	DDPlayerStat_BestTowerKill     = 13,
	DDPlayerStat_Score             = 14,
	DDPlayerStat_HighScore         = 15,
	DDPlayerStat_SurvivalHighScore = 16,
	DDPlayerStat_StrategyHighScore = 17,
	DDPlayerStat_ExpGained         = 18,
	DDPlayerStat_ManaEarned        = 19,
	DDPlayerStat_BestExp           = 20,
	DDPlayerStat_BestMana          = 21,
	DDPlayerStat_DamageTaken       = 22,
	DDPlayerStat_MostDamage        = 23,
	DDPlayerStat_LeastDamage       = 24,
	DDPlayerStat_PlayerDeath       = 25,
	DDPlayerStat_MostDeaths        = 26,
	DDPlayerStat_LeastDeaths       = 27,
	DDPlayerStat_SurvivalHighWave  = 28,
	DDPlayerStat_StrategyHighWave  = 29,
	DDPlayerStat_ViewedEndings     = 30,
	DDPlayerStat_MaxedHeros        = 31,
	DDPlayerStat_CaughtFamiliars   = 32,
	DDPlayerStat_Immortal          = 33,
	DDPlayerStat_Invincible        = 34,
	DDPlayerStat_Knight            = 35,
	DDPlayerStat_Lord              = 36,
	DDPlayerStat_Strategist        = 37,
	DDPlayerStat_Banker            = 38,
	DDPlayerStat_TriggerHappy      = 39,
	DDPlayerStat_HandyMan          = 40,
	DDPlayerStat_Janitor           = 41,
	DDPlayerStat_Chillax           = 42,
	DDPlayerStat_FlawlessVictory   = 43,
	DDPlayerStat_MVP               = 44,
	DDPlayerStat_Teamwork          = 45,
	DDPlayerStat_SkinOfTeeth       = 46,
	DDPlayerStat_FirstKill         = 47,
	DDPlayerStat_Mechanic          = 48,
	DDPlayerStat_BossSlayer        = 49,
	DDPlayerStat_MasterBuilder     = 50,
	DDPlayerStat_MasterStrategist  = 51,
	DDPlayerStat_GunSlinger        = 52,
	DDPlayerStat_RealMVP           = 53,
	DDPlayerStat_RTS               = 54,
	DDPlayerStat_MAX               = 55
};


// Enum UDKGame.DunDefProjectile_Bouncing.EProjTarget
enum class EProjTarget : uint8_t
{
	DTarg_EnemyTeam                = 0,
	DTarg_MyTeam                   = 1,
	DTarg_BothTeams                = 2,
	DTarg_MAX                      = 3
};


// Enum UDKGame.UI_MessageBox.MessageBoxType
enum class EMessageBoxType : uint8_t
{
	MBT_Empty                      = 0,
	MBT_Ok                         = 1,
	MBT_YesNo                      = 2,
	MBT_Cancel                     = 3,
	MBT_Max                        = 4
};


// Enum UDKGame.UI_GameSetup.E_MAPLISTTYPE
enum class E_MAPLISTTYPE : uint8_t
{
	EMLT_CAMPAIGN                  = 0,
	EMLT_SHARDS                    = 1,
	EMLT_CHALLENGE                 = 2,
	EMLT_CUSTOM                    = 3,
	EMLT_LOSTQUESTS                = 4,
	EMLT_MAX                       = 5
};


// Enum UDKGame.UI_GameSpyLogin.UserPassState
enum class EUserPassState : uint8_t
{
	EValid                         = 0,
	EUsernameTooLong               = 1,
	EUsernameTooShort              = 2,
	EUsernameInvalidStartingCharacter = 3,
	EUsernameContainsInvalidCharacter = 4,
	EPasswordTooLong               = 5,
	EPasswordTooShort              = 6,
	UserPassState_MAX              = 7
};


// Enum UDKGame.UI_MainMenu.MainMenuButtons
enum class EMainMenuButtons : uint8_t
{
	MMButtonPlayOnline             = 0,
	MMButtonPlayLocal              = 1,
	MMButtonStatistics             = 2,
	MMButtonOptions                = 3,
	MMButtonCredits                = 4,
	MMButtonExit                   = 5,
	MMButtonDLC                    = 6,
	MMButtonUnlockFull             = 7,
	MainMenuButtons_MAX            = 8
};


// Enum UDKGame.UI_PlayerStats.ViewMode
enum class EViewMode : uint8_t
{
	KillMode                       = 0,
	TowerMode                      = 1,
	EnemyMode                      = 2,
	TreasureMode                   = 3,
	ViewMode_MAX                   = 4
};


// Enum UDKGame.UIResolutionContainer.ResolutionType
enum class EResolutionType : uint8_t
{
	ResType_FullScreen             = 0,
	ResType_SplitHalf              = 1,
	ResType_SplitQuarter           = 2,
	ResType_MAX                    = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UDKGame.DunDef_SeqAct_EnemyWaveSpawner.EnemyWaveEntry
// 0x00A0
struct FEnemyWaveEntry
{
	struct FName                                       EntryName;                                                // 0x0000(0x0008) (Edit)
	float                                              TimeOfWave;                                               // 0x0008(0x0004) (Edit)
	class AActor*                                      EnemyTemplate;                                            // 0x000C(0x0004) (Edit)
	TArray<float>                                      PlayerEnemyNumMultipliers;                                // 0x0010(0x000C) (Edit, NeedCtorLink)
	float                                              NumberOfEnemies;                                          // 0x001C(0x0004) (Edit)
	float                                              SpawnInterval;                                            // 0x0020(0x0004) (Edit)
	float                                              RandomSpawnInterval;                                      // 0x0024(0x0004) (Edit)
	float                                              EnemyNumScalingExponent;                                  // 0x0028(0x0004) (Edit)
	int                                                MinimumMasterWaveForThisGroup;                            // 0x002C(0x0004) (Edit)
	int                                                MaximumMasterWaveForThisGroup;                            // 0x0030(0x0004) (Edit)
	int                                                MaximumNumberOfEnemiesForThisGroup;                       // 0x0034(0x0004) (Edit)
	TArray<float>                                      PlayerMaximumNumberOfEnemiesForThisGroupMultipliers;      // 0x0038(0x000C) (Edit, NeedCtorLink)
	int                                                MinimumNumberOfPlayersForThisGroup;                       // 0x0044(0x0004) (Edit)
	int                                                MaximumNumberOfGroupsOverride;                            // 0x0048(0x0004) (Edit)
	unsigned long                                      DisableGroupDuplication : 1;                              // 0x004C(0x0004) (Edit)
	int                                                WaveModulusForInclusion;                                  // 0x0050(0x0004) (Edit)
	int                                                WaveModulusForExclusion;                                  // 0x0054(0x0004) (Edit)
	float                                              DifficultySetOffset;                                      // 0x0058(0x0004) (Edit)
	TArray<float>                                      NumEnemyDifficultyMultipliers;                            // 0x005C(0x000C) (Edit, NeedCtorLink)
	class UClass*                                      EnemyElementOverride;                                     // 0x0068(0x0004) (Edit)
	float                                              GroupDuplicationTimeOfWaveMultiplier;                     // 0x006C(0x0004) (Edit)
	unsigned long                                      bUseCustomMissionIndexRequirement : 1;                    // 0x0070(0x0004) (Edit)
	unsigned long                                      bNightmareModeOnly : 1;                                   // 0x0070(0x0004) (Edit)
	unsigned long                                      bDisableInPureStrategy : 1;                               // 0x0070(0x0004) (Edit)
	unsigned long                                      bForceNoSpawnInterval : 1;                                // 0x0070(0x0004) (Edit)
	int                                                CustomMissionIndexRequirement;                            // 0x0074(0x0004) (Edit)
	int                                                CustomEnemyTag;                                           // 0x0078(0x0004) (Edit)
	TArray<class AActor*>                              SpawnPointList;                                           // 0x007C(0x000C) (NeedCtorLink)
	unsigned long                                      Executed : 1;                                             // 0x0088(0x0004)
	unsigned long                                      Active : 1;                                               // 0x0088(0x0004)
	int                                                NumberOfEnemiesSpawned;                                   // 0x008C(0x0004)
	float                                              NextSpawnTimer;                                           // 0x0090(0x0004)
	int                                                NumberOfPlayersWhenScaled;                                // 0x0094(0x0004)
	float                                              TempRandomSpawnInterval;                                  // 0x0098(0x0004)
	unsigned long                                      bBeenMixRandomized : 1;                                   // 0x009C(0x0004)
};

// ScriptStruct UDKGame.DunDef_SeqAct_EnemyWaveSpawner.ActorTargetingMultiplier
// 0x0008
struct FActorTargetingMultiplier
{
	class AActor*                                      ActorRef;                                                 // 0x0000(0x0004) (Edit)
	float                                              TargetingMultiplier;                                      // 0x0004(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.LevelProgressInfo
// 0x0010
struct FLevelProgressInfo
{
	struct FString                                     campaignTag;                                              // 0x0000(0x000C) (NeedCtorLink)
	int                                                difficultyMask;                                           // 0x000C(0x0004)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.ProgressEntry
// 0x0020
struct FProgressEntry
{
	TArray<struct FLevelProgressInfo>                  beatenLevels;                                             // 0x0000(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo>                  unlockedLevels;                                           // 0x000C(0x000C) (NeedCtorLink)
	int                                                UserID;                                                   // 0x0018(0x0004)
	unsigned long                                      remote : 1;                                               // 0x001C(0x0004)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.CoreUnlockInfo
// 0x0028
struct FCoreUnlockInfo
{
	unsigned char                                      CoreUnlocks[0x28];                                        // 0x0000(0x0001)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.CoreUnlockEntry
// 0x002C
struct FCoreUnlockEntry
{
	struct FCoreUnlockInfo                             coresUnlocked;                                            // 0x0000(0x0028)
	int                                                UserID;                                                   // 0x0028(0x0004)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.AchievementInfo
// 0x01F4
struct FAchievementInfo
{
	unsigned char                                      Achievements[0x1F4];                                      // 0x0000(0x0001)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.AchievementSaveEntry
// 0x01FC
struct FAchievementSaveEntry
{
	struct FAchievementInfo                            Achievements;                                             // 0x0000(0x01F4)
	int                                                UserID;                                                   // 0x01F4(0x0004)
	unsigned long                                      remote : 1;                                               // 0x01F8(0x0004)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.CrystalCoreOptions
// 0x0034
struct FCrystalCoreOptions
{
	int                                                coreIndex;                                                // 0x0000(0x0004)
	struct FLinearColor                                color1;                                                   // 0x0004(0x0010)
	struct FLinearColor                                color2;                                                   // 0x0014(0x0010)
	struct FLinearColor                                color3;                                                   // 0x0024(0x0010)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.CrystalCoreEntry
// 0x0038
struct FCrystalCoreEntry
{
	struct FCrystalCoreOptions                         Options;                                                  // 0x0000(0x0034)
	int                                                UserID;                                                   // 0x0034(0x0004)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.GameDamageEntry
// 0x0010
struct FGameDamageEntry
{
	class UClass*                                      TheDamageType;                                            // 0x0000(0x0004) (Edit)
	class UParticleSystem*                             ElementalWeaponEffect;                                    // 0x0004(0x0004) (Edit)
	float                                              ElementalWeaponEffectExtraScale;                          // 0x0008(0x0004) (Edit)
	class AEmitterSpawnable*                           ElementalImpactEffectEmitter;                             // 0x000C(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.SearchFilterSettings
// 0x0021
struct FSearchFilterSettings
{
	TArray<int>                                        levelIndicesToFilter;                                     // 0x0000(0x000C) (NeedCtorLink)
	TArray<int>                                        difficultiesToFilter;                                     // 0x000C(0x000C) (NeedCtorLink)
	unsigned char                                      filterChallengeMissions;                                  // 0x0018(0x0001)
	unsigned char                                      filterCampaignMissions;                                   // 0x0019(0x0001)
	unsigned char                                      filterPureStrategy;                                       // 0x001A(0x0001)
	unsigned char                                      filterInfiniteBuild;                                      // 0x001B(0x0001)
	unsigned char                                      filterInfiniteWaves;                                      // 0x001C(0x0001)
	unsigned char                                      filterHostClass;                                          // 0x001D(0x0001)
	unsigned char                                      filterHostLevel;                                          // 0x001E(0x0001)
	unsigned char                                      filterHostLevelStart;                                     // 0x001F(0x0001)
	unsigned char                                      filterHostLevelEnd;                                       // 0x0020(0x0001)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.EquipmentSaveInfo
// 0x015C
struct FEquipmentSaveInfo
{
	unsigned long                                      IsInitialized : 1;                                        // 0x0000(0x0004)
	unsigned char                                      DamageReductionIndex[0x4];                                // 0x0004(0x0001)
	unsigned char                                      DamageReductionPercentage[0x4];                           // 0x0008(0x0001)
	int                                                StatModifiers[0xB];                                       // 0x000C(0x0004)
	int                                                SpawnStatModifiers[0xB];                                  // 0x0038(0x0004)
	int                                                WeaponDamageBonus;                                        // 0x0064(0x0004)
	unsigned char                                      WeaponNumberOfProjectilesBonus;                           // 0x0068(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                WeaponSpeedOfProjectilesBonus;                            // 0x006C(0x0004)
	unsigned char                                      WeaponAdditionalDamageTypeIndex;                          // 0x0070(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                WeaponAdditionalDamageAmount;                             // 0x0074(0x0004)
	float                                              WeaponDrawScaleMultiplier;                                // 0x0078(0x0004)
	float                                              WeaponSwingSpeedMultiplier;                               // 0x007C(0x0004)
	int                                                Level;                                                    // 0x0080(0x0004)
	int                                                StoredMana;                                               // 0x0084(0x0004)
	float                                              SpawnQuality;                                             // 0x0088(0x0004)
	float                                              SpawnRandomizerMultiplier;                                // 0x008C(0x0004)
	unsigned char                                      WeaponBlockingBonus;                                      // 0x0090(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	int                                                WeaponAltDamageBonus;                                     // 0x0094(0x0004)
	int                                                WeaponClipAmmoBonus;                                      // 0x0098(0x0004)
	unsigned char                                      WeaponReloadSpeedBonus;                                   // 0x009C(0x0001)
	unsigned char                                      WeaponKnockbackBonus;                                     // 0x009D(0x0001)
	unsigned char                                      WeaponChargeSpeedBonus;                                   // 0x009E(0x0001)
	unsigned char                                      WeaponShotsPerSecondBonus;                                // 0x009F(0x0001)
	unsigned char                                      NameIndex_Base;                                           // 0x00A0(0x0001)
	unsigned char                                      NameIndex_DamageReduction;                                // 0x00A1(0x0001)
	unsigned char                                      NameIndex_QualityDescriptor;                              // 0x00A2(0x0001)
	unsigned char                                      PrimaryColorSet;                                          // 0x00A3(0x0001)
	unsigned char                                      SecondaryColorSet;                                        // 0x00A4(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	int                                                EquipmentID1;                                             // 0x00A8(0x0004)
	int                                                EquipmentID2;                                             // 0x00AC(0x0004)
	int                                                MinimumSellWorth;                                         // 0x00B0(0x0004)
	int                                                MaximumSellWorth;                                         // 0x00B4(0x0004)
	int                                                MaxEquipmentLevel;                                        // 0x00B8(0x0004)
	int                                                DroppedLocationX;                                         // 0x00BC(0x0004)
	int                                                DroppedLocationY;                                         // 0x00C0(0x0004)
	int                                                DroppedLocationZ;                                         // 0x00C4(0x0004)
	unsigned char                                      bCanBeUpgraded;                                           // 0x00C8(0x0001)
	unsigned char                                      AllowRenamingAtMaxUpgrade;                                // 0x00C9(0x0001)
	unsigned char                                      bCantBeDropped;                                           // 0x00CA(0x0001)
	unsigned char                                      bCantBeSold;                                              // 0x00CB(0x0001)
	unsigned char                                      bAutoLockInItemBox;                                       // 0x00CC(0x0001)
	unsigned char                                      bDidOnetimeEffect;                                        // 0x00CD(0x0001)
	unsigned char                                      bIsLocked;                                                // 0x00CE(0x0001)
	unsigned char                                      ManualLR;                                                 // 0x00CF(0x0001)
	struct FLinearColor                                PrimaryColorOverride;                                     // 0x00D0(0x0010)
	struct FLinearColor                                SecondaryColorOverride;                                   // 0x00E0(0x0010)
	struct FString                                     UserEquipmentName;                                        // 0x00F0(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UserForgerName;                                           // 0x00FC(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Description;                                              // 0x0108(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     EquipmentTemplate;                                        // 0x0114(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     EquipmentTimeStamp;                                       // 0x0120(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                FolderID;                                                 // 0x012C(0x0004)
	unsigned long                                      bIsSecondary : 1;                                         // 0x0130(0x0004)
	int                                                StatEquipmentIDs[0x3];                                    // 0x0134(0x0004)
	int                                                StatEquipmentTiers[0x3];                                  // 0x0140(0x0004)
	struct FLinearColor                                QualityBeamColorOverride;                                 // 0x014C(0x0010)
};

// ScriptStruct UDKGame.HeroEquipmentNative.DamageReduction
// 0x0008
struct FDamageReduction
{
	class UClass*                                      ForDamageType;                                            // 0x0000(0x0004) (Edit)
	int                                                PercentageReduction;                                      // 0x0004(0x0004) (Edit)
};

// ScriptStruct UDKGame.HeroEquipment.EquipmentComparison
// 0x0038
struct FEquipmentComparison
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (NeedCtorLink)
	float                                              Values[0xB];                                              // 0x000C(0x0004)
};

// ScriptStruct UDKGame.HeroEquipmentNative.EquipmentColorSet
// 0x0020
struct FEquipmentColorSet
{
	struct FLinearColor                                PrimaryColor;                                             // 0x0000(0x0010)
	struct FLinearColor                                SecondaryColor;                                           // 0x0010(0x0010)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.OptionsFixedStruct
// 0x00A4
struct FOptionsFixedStruct
{
	unsigned long                                      AutoShowLevelUp : 1;                                      // 0x0000(0x0004)
	unsigned long                                      AllowFriendlyFire : 1;                                    // 0x0000(0x0004)
	unsigned long                                      UseGamepad : 1;                                           // 0x0000(0x0004)
	unsigned long                                      AutoAdjustCameraForPhase : 1;                             // 0x0000(0x0004)
	unsigned long                                      ShowTutorials : 1;                                        // 0x0000(0x0004)
	int                                                ShownTutorials[0xA];                                      // 0x0004(0x0004)
	float                                              VolumeSFX;                                                // 0x002C(0x0004)
	float                                              VolumeMusic;                                              // 0x0030(0x0004)
	float                                              VoicePlayVolume;                                          // 0x0034(0x0004)
	float                                              VoiceCaptureVolume;                                       // 0x0038(0x0004)
	unsigned long                                      PushToTalk : 1;                                           // 0x003C(0x0004)
	unsigned long                                      IncomingVoice : 1;                                        // 0x003C(0x0004)
	unsigned long                                      OutgoingVoice : 1;                                        // 0x003C(0x0004)
	float                                              Gamma;                                                    // 0x0040(0x0004)
	float                                              SaturationIntensity;                                      // 0x0044(0x0004)
	float                                              UIScalePercent;                                           // 0x0048(0x0004)
	unsigned long                                      PostProcessing : 1;                                       // 0x004C(0x0004)
	unsigned long                                      ShowFloatingDamageNumbers : 1;                            // 0x004C(0x0004)
	unsigned long                                      bRightStickTurnsCameraScheme : 1;                         // 0x004C(0x0004)
	unsigned long                                      bInvertCameraPitch : 1;                                   // 0x004C(0x0004)
	unsigned long                                      bSwapTriggersAndButtons : 1;                              // 0x004C(0x0004)
	unsigned long                                      FullScreen : 1;                                           // 0x004C(0x0004)
	unsigned char                                      SplitScreenConfig;                                        // 0x0050(0x0001)
	unsigned char                                      CurrentDifficulty;                                        // 0x0051(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	unsigned long                                      LobbyItemLock : 1;                                        // 0x0054(0x0004)
	unsigned long                                      bDefaultChaseCamera : 1;                                  // 0x0054(0x0004)
	float                                              DefaultCameraTargetDistance;                              // 0x0058(0x0004)
	float                                              DefaultPlacingTowerCameraDistance;                        // 0x005C(0x0004)
	float                                              MouseCameraRotationSpeed;                                 // 0x0060(0x0004)
	int                                                ItemQualityFilter;                                        // 0x0064(0x0004)
	unsigned long                                      bHideAccessory : 1;                                       // 0x0068(0x0004)
	unsigned long                                      EnableOutlineEffect : 1;                                  // 0x0068(0x0004)
	unsigned char                                      GraphicsQuality;                                          // 0x006C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
	float                                              FrameRateLimit;                                           // 0x0070(0x0004)
	unsigned char                                      InventorySortingFilter;                                   // 0x0074(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	int                                                MinimumLevel;                                             // 0x0078(0x0004)
	unsigned long                                      SavedLoginInfo : 1;                                       // 0x007C(0x0004)
	TArray<unsigned char>                              CustomGameMetaFlags;                                      // 0x0080(0x000C) (NeedCtorLink)
	TArray<int>                                        CustomeUnlocks;                                           // 0x008C(0x000C) (NeedCtorLink)
	TArray<int>                                        HeroUnlocks;                                              // 0x0098(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.OptionsInfo
// 0x0104
struct FOptionsInfo
{
	struct FOptionsFixedStruct                         fixedSizeOptions;                                         // 0x0000(0x00A4) (NeedCtorLink)
	struct FString                                     Resolution;                                               // 0x00A4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     lastLevelTag;                                             // 0x00B0(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UserName;                                                 // 0x00BC(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Password;                                                 // 0x00C8(0x000C) (AlwaysInit, NeedCtorLink)
	struct FSearchFilterSettings                       searchFilters;                                            // 0x00D4(0x0024) (NeedCtorLink)
	TArray<int>                                        installedDLCEquipments;                                   // 0x00F8(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.HeroEquipment.LevelRange
// 0x0008
struct FLevelRange
{
	int                                                MinLevel;                                                 // 0x0000(0x0004) (Edit)
	int                                                MaxLevel;                                                 // 0x0004(0x0004) (Edit)
};

// ScriptStruct UDKGame.HeroEquipment.EG_StatMatchingString
// 0x0018
struct FEG_StatMatchingString
{
	float                                              ValueThreshold;                                           // 0x0000(0x0004) (Edit)
	float                                              PetValueThreshold;                                        // 0x0004(0x0004) (Edit)
	float                                              ArmorValueThreshold;                                      // 0x0008(0x0004) (Edit)
	struct FString                                     StringValue;                                              // 0x000C(0x000C) (Edit, Localized, NeedCtorLink)
};

// ScriptStruct UDKGame.HeroEquipment.EG_StatRandomizer
// 0x0028
struct FEG_StatRandomizer
{
	float                                              MaxRandomValue;                                           // 0x0000(0x0004) (Edit)
	float                                              MaxRandomValueNegative;                                   // 0x0004(0x0004) (Edit)
	float                                              RandomPower;                                              // 0x0008(0x0004) (Edit)
	float                                              RandomPowerOverrideIfNegative;                            // 0x000C(0x0004) (Edit)
	float                                              RandomNegativeThreshold;                                  // 0x0010(0x0004) (Edit)
	float                                              RandomInclusionThreshold;                                 // 0x0014(0x0004) (Edit)
	float                                              InclusionThresholdOverrideIfNegative;                     // 0x0018(0x0004) (Edit)
	float                                              NegativeThresholdQualityPercentMultiplier;                // 0x001C(0x0004) (Edit)
	float                                              MinimumPercentageValue;                                   // 0x0020(0x0004) (Edit)
	float                                              NegativeMinimumPercentageValue;                           // 0x0024(0x0004) (Edit)
};

// ScriptStruct UDKGame.DataListEntryInterface.DataEntryProps
// 0x0004
struct FDataEntryProps
{
	class USurface*                                    DataImage;                                                // 0x0000(0x0004)
};

// ScriptStruct UDKGame.HeroEquipment.LevelRequirementOverride
// 0x0008
struct FLevelRequirementOverride
{
	float                                              QualityThreshold;                                         // 0x0000(0x0004) (Edit)
	int                                                LevelRequirementIndex;                                    // 0x0004(0x0004) (Edit)
};

// ScriptStruct UDKGame.HeroEquipment.EquipmentAttachmentScaleInfo
// 0x0010
struct FEquipmentAttachmentScaleInfo
{
	int                                                HeroAttachmentScaleType;                                  // 0x0000(0x0004) (Edit)
	struct FVector                                     AttachmentScale;                                          // 0x0004(0x000C) (Edit)
};

// ScriptStruct UDKGame.HeroEquipment.EquipmentAttachmentInfo
// 0x003C
struct FEquipmentAttachmentInfo
{
	TArray<struct FEquipmentAttachmentScaleInfo>       AttachmentScaleInfos;                                     // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FName                                       SocketNameToAttachTo;                                     // 0x000C(0x0008) (Edit)
	unsigned char                                      MICIndex;                                                 // 0x0014(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	unsigned long                                      UseQualityRatingMIC : 1;                                  // 0x0018(0x0004) (Edit)
	unsigned long                                      UseColorSetMIC : 1;                                       // 0x0018(0x0004) (Edit)
	unsigned long                                      bAttachToBone : 1;                                        // 0x0018(0x0004) (Edit)
	unsigned long                                      bAttachToActor : 1;                                       // 0x0018(0x0004) (Edit)
	unsigned long                                      bUseEquipmentDrawScale : 1;                               // 0x0018(0x0004) (Edit)
	unsigned long                                      bUseParentShadow : 1;                                     // 0x0018(0x0004) (Edit)
	struct FVector                                     CagedOffset;                                              // 0x001C(0x000C) (Edit)
	class UPrimitiveComponent*                         ComponentToAttach;                                        // 0x0028(0x0004) (Edit, ExportObject, Component, EditInline)
	unsigned long                                      bAttachToOtherSKAttachment : 1;                           // 0x002C(0x0004) (Edit)
	int                                                AttachToOtherSKAttachmentIndex;                           // 0x0030(0x0004) (Edit)
	struct FName                                       AttachedCompName;                                         // 0x0034(0x0008) (Transient)
};

// ScriptStruct UDKGame.HeroEquipmentNative.NetDamageReduction
// 0x0005
struct FNetDamageReduction
{
	class UClass*                                      ForDamageType;                                            // 0x0000(0x0004) (Edit)
	unsigned char                                      PercentageReduction;                                      // 0x0004(0x0001) (Edit)
};

// ScriptStruct UDKGame.HeroEquipment.EquipmentNetInfo
// 0x0120
struct FEquipmentNetInfo
{
	struct FNetDamageReduction                         DamageReductions[0x4];                                    // 0x0000(0x0008)
	int                                                StatModifiers[0xB];                                       // 0x0020(0x0004)
	class UHeroEquipment*                              EquipmentTemplate;                                        // 0x004C(0x0004)
	int                                                WeaponDamageBonus;                                        // 0x0050(0x0004)
	unsigned char                                      WeaponNumberOfProjectilesBonus;                           // 0x0054(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                WeaponSpeedOfProjectilesBonus;                            // 0x0058(0x0004)
	class UClass*                                      WeaponAdditionalDamageType;                               // 0x005C(0x0004)
	int                                                WeaponAdditionalDamageAmount;                             // 0x0060(0x0004)
	float                                              WeaponDrawScaleMultiplier;                                // 0x0064(0x0004)
	float                                              WeaponSwingSpeedMultiplier;                               // 0x0068(0x0004)
	int                                                Level;                                                    // 0x006C(0x0004)
	int                                                StoredMana;                                               // 0x0070(0x0004)
	unsigned char                                      WeaponBlockingBonus;                                      // 0x0074(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	int                                                WeaponAltDamageBonus;                                     // 0x0078(0x0004)
	int                                                WeaponClipAmmoBonus;                                      // 0x007C(0x0004)
	unsigned char                                      WeaponReloadSpeedBonus;                                   // 0x0080(0x0001)
	unsigned char                                      WeaponKnockbackBonus;                                     // 0x0081(0x0001)
	unsigned char                                      WeaponChargeSpeedBonus;                                   // 0x0082(0x0001)
	unsigned char                                      WeaponShotsPerSecondBonus;                                // 0x0083(0x0001)
	unsigned char                                      NameIndex_Base;                                           // 0x0084(0x0001)
	unsigned char                                      NameIndex_QualityDescriptor;                              // 0x0085(0x0001)
	unsigned char                                      NameIndex_DamageReduction;                                // 0x0086(0x0001)
	unsigned char                                      PrimaryColorSet;                                          // 0x0087(0x0001)
	unsigned char                                      SecondaryColorSet;                                        // 0x0088(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FLinearColor                                PrimaryColorOverride;                                     // 0x008C(0x0010)
	struct FLinearColor                                SecondaryColorOverride;                                   // 0x009C(0x0010)
	int                                                EquipmentID1;                                             // 0x00AC(0x0004)
	int                                                EquipmentID2;                                             // 0x00B0(0x0004)
	int                                                MinimumSellWorth;                                         // 0x00B4(0x0004)
	int                                                MaximumSellWorth;                                         // 0x00B8(0x0004)
	int                                                MaxEquipmentLevel;                                        // 0x00BC(0x0004)
	unsigned char                                      bCanBeUpgraded;                                           // 0x00C0(0x0001)
	unsigned char                                      AllowRenamingAtMaxUpgrade;                                // 0x00C1(0x0001)
	unsigned char                                      bCantBeDropped;                                           // 0x00C2(0x0001)
	unsigned char                                      bCantBeSold;                                              // 0x00C3(0x0001)
	unsigned char                                      bAutoLockInItemBox;                                       // 0x00C4(0x0001)
	unsigned char                                      bDidOnetimeEffect;                                        // 0x00C5(0x0001)
	unsigned char                                      ManualLR;                                                 // 0x00C6(0x0001)
	unsigned char                                      UnknownData03[0x1];                                       // 0x00C7(0x0001) MISSED OFFSET
	unsigned long                                      bIsForgerNameOnlineVerified : 1;                          // 0x00C8(0x0004)
	unsigned long                                      bIsNameOnlineVerified : 1;                                // 0x00C8(0x0004)
	unsigned long                                      bDisableRandomization : 1;                                // 0x00C8(0x0004)
	struct FString                                     UserEquipmentName;                                        // 0x00CC(0x000C) (NeedCtorLink)
	struct FString                                     UserForgerName;                                           // 0x00D8(0x000C) (NeedCtorLink)
	struct FString                                     Description;                                              // 0x00E4(0x000C) (NeedCtorLink)
	int                                                FolderID;                                                 // 0x00F0(0x0004)
	unsigned long                                      bIsSecondary : 1;                                         // 0x00F4(0x0004)
	int                                                StatEquipmentIDs[0x3];                                    // 0x00F8(0x0004)
	int                                                StatEquipmentTiers[0x3];                                  // 0x0104(0x0004)
	struct FLinearColor                                QualityBeamColorOverride;                                 // 0x0110(0x0010)
};

// ScriptStruct UDKGame.DunDefHeroManager.DLCEquipmentEntry
// 0x0010
struct FDLCEquipmentEntry
{
	struct FString                                     EquipmentObjectPath;                                      // 0x0000(0x000C) (Edit, NeedCtorLink)
	int                                                UniqueEquipmentDLCID;                                     // 0x000C(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefHeroManager.ItemFolder
// 0x0018
struct FItemFolder
{
	int                                                ParentID;                                                 // 0x0000(0x0004)
	int                                                FolderID;                                                 // 0x0004(0x0004)
	struct FString                                     FolderName;                                               // 0x0008(0x000C) (NeedCtorLink)
	unsigned long                                      Tag : 1;                                                  // 0x0014(0x0004) (Transient)
};

// ScriptStruct UDKGame.DunDefHeroManager.EquipmentDropEntry
// 0x0040
struct FEquipmentDropEntry
{
	float                                              EquipmentDropValue;                                       // 0x0000(0x0004) (Edit)
	float                                              RelativeWeighting;                                        // 0x0004(0x0004) (Edit)
	float                                              AbsoluteWeighting;                                        // 0x0008(0x0004) (Edit)
	float                                              MinimumQualityThreshold;                                  // 0x000C(0x0004) (Edit)
	float                                              MinimumShopQualityThreshold;                              // 0x0010(0x0004) (Edit)
	float                                              MinimumRarityThreshold;                                   // 0x0014(0x0004) (Edit)
	class UHeroEquipment*                              EquipmentTemplate;                                        // 0x0018(0x0004) (Edit)
	TArray<class UHeroEquipment*>                      AlternateEquipmentTemplates;                              // 0x001C(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      CanOnlyBeUsedOnce : 1;                                    // 0x0028(0x0004) (Edit)
	unsigned long                                      bUseForAnyPlayer : 1;                                     // 0x0028(0x0004) (Edit)
	float                                              MinimumDropTimeInterval;                                  // 0x002C(0x0004) (Edit)
	TEnumAsByte<EGameDifficulty>                       MinimumDifficulty;                                        // 0x0030(0x0001) (Edit)
	TEnumAsByte<EGameDifficulty>                       MaximumDifficulty;                                        // 0x0031(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	float                                              LastDroppedTime;                                          // 0x0034(0x0004)
	int                                                LastDroppedGameplayInstanceID;                            // 0x0038(0x0004)
	unsigned long                                      wasUsed : 1;                                              // 0x003C(0x0004)
};

// ScriptStruct UDKGame._DataTypes.HQArray
// 0x000C
struct FHQArray
{
	TArray<class UHeroEquipment*>                      inner;                                                    // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame._DataTypes.sHeroGUID
// 0x0010
struct FsHeroGUID
{
	int                                                GUID1;                                                    // 0x0000(0x0004)
	int                                                GUID2;                                                    // 0x0004(0x0004)
	int                                                GUID3;                                                    // 0x0008(0x0004)
	int                                                GUID4;                                                    // 0x000C(0x0004)
};

// ScriptStruct UDKGame.DunDefHero.HeroColorTemplate
// 0x003C
struct FHeroColorTemplate
{
	struct FString                                     colorName;                                                // 0x0000(0x000C) (Edit, Localized, NeedCtorLink)
	struct FLinearColor                                C1;                                                       // 0x000C(0x0010) (Edit)
	struct FLinearColor                                c2;                                                       // 0x001C(0x0010) (Edit)
	struct FLinearColor                                C3;                                                       // 0x002C(0x0010) (Edit)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.HeroSaveInfo
// 0x0114
struct FHeroSaveInfo
{
	unsigned long                                      IsInitialized : 1;                                        // 0x0000(0x0004)
	int                                                HeroHealthModifier;                                       // 0x0004(0x0004)
	int                                                HeroSpeedModifier;                                        // 0x0008(0x0004)
	int                                                HeroDamageModifier;                                       // 0x000C(0x0004)
	int                                                HeroCastingModifier;                                      // 0x0010(0x0004)
	int                                                HeroAbilityOneModifier;                                   // 0x0014(0x0004)
	int                                                HeroAbilityTwoModifier;                                   // 0x0018(0x0004)
	int                                                HeroDefenseHealthModifier;                                // 0x001C(0x0004)
	int                                                HeroDefenseAttackRateModifier;                            // 0x0020(0x0004)
	int                                                HeroDefenseDamageModifier;                                // 0x0024(0x0004)
	int                                                HeroDefenseAreaOfEffectModifier;                          // 0x0028(0x0004)
	int                                                HeroLevel;                                                // 0x002C(0x0004)
	int                                                HeroExperience;                                           // 0x0030(0x0004)
	int                                                ManaPower;                                                // 0x0034(0x0004)
	int                                                GUID1;                                                    // 0x0038(0x0004)
	int                                                GUID2;                                                    // 0x003C(0x0004)
	int                                                GUID3;                                                    // 0x0040(0x0004)
	int                                                GUID4;                                                    // 0x0044(0x0004)
	int                                                CurrentCostumeIndex;                                      // 0x0048(0x0004)
	struct FLinearColor                                C1;                                                       // 0x004C(0x0010)
	struct FLinearColor                                c2;                                                       // 0x005C(0x0010)
	struct FLinearColor                                C3;                                                       // 0x006C(0x0010)
	unsigned char                                      bDidRespec;                                               // 0x007C(0x0001)
	unsigned char                                      bGaveExpBonus;                                            // 0x007D(0x0001)
	unsigned char                                      bAllowRename;                                             // 0x007E(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x007F(0x0001) MISSED OFFSET
	struct FString                                     HeroName;                                                 // 0x0080(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     HeroTemplate;                                             // 0x008C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     HotKeyActionOne;                                          // 0x0098(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     HotKeyActionTwo;                                          // 0x00A4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     HotKeyActionThree;                                        // 0x00B0(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     HotKeyActionFour;                                         // 0x00BC(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     HotKeyActionFive;                                         // 0x00C8(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     HotKeyActionSix;                                          // 0x00D4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     HotKeyActionSeven;                                        // 0x00E0(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     HotKeyActionEight;                                        // 0x00EC(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     HotKeyActionNine;                                         // 0x00F8(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     HotKeyActionTen;                                          // 0x0104(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                EquipmentCount;                                           // 0x0110(0x0004)
};

// ScriptStruct UDKGame.DunDefHero.HotKey
// 0x0018
struct FHotKey
{
	struct FString                                     KeyBindingName;                                           // 0x0000(0x000C) (NeedCtorLink)
	struct FName                                       ActionWheelEntryName;                                     // 0x000C(0x0008) (Edit)
	class UActionWheelEntry*                           ActionWheelEntryObject;                                   // 0x0014(0x0004)
};

// ScriptStruct UDKGame.DunDefHero.HeroCostumeTemplate
// 0x00B8
struct FHeroCostumeTemplate
{
	int                                                CostumeUniqueID;                                          // 0x0000(0x0004) (Edit)
	struct FString                                     CostumeName;                                              // 0x0004(0x000C) (Edit, Localized, NeedCtorLink)
	class USkeletalMesh*                               CostumeMesh;                                              // 0x0010(0x0004) (Edit)
	class UAnimSet*                                    CostumeAnimSet;                                           // 0x0014(0x0004) (Edit)
	struct FLinearColor                                C1;                                                       // 0x0018(0x0010) (Edit)
	struct FLinearColor                                c2;                                                       // 0x0028(0x0010) (Edit)
	struct FLinearColor                                C3;                                                       // 0x0038(0x0010) (Edit)
	class ADunDefPlayer*                               PlayerTemplateOverride;                                   // 0x0048(0x0004) (Edit)
	class ADunDefPlayer*                               PlayerTemplateOverride_Competitive;                       // 0x004C(0x0004) (Edit)
	class UMaterialInterface*                          ColorableMiniMapIconMat;                                  // 0x0050(0x0004) (Edit)
	class UMaterialInterface*                          HeroIconMaterial;                                         // 0x0054(0x0004) (Edit)
	class USoundCue*                                   RemovedHeroSelectionSoundOverride;                        // 0x0058(0x0004) (Edit)
	TArray<class UMaterialInterface*>                  PreviewMaterials;                                         // 0x005C(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bIsPurchasable : 1;                                       // 0x0068(0x0004) (Edit)
	unsigned long                                      bShowWhenLocked : 1;                                      // 0x0068(0x0004) (Edit)
	struct FString                                     UnlockDescription;                                        // 0x006C(0x000C) (Edit, Localized, NeedCtorLink)
	unsigned long                                      bRankedOnly : 1;                                          // 0x0078(0x0004) (Edit)
	unsigned long                                      bHideOnMacAppStore : 1;                                   // 0x0078(0x0004) (Edit)
	struct FString                                     PurchaseURLSteam;                                         // 0x007C(0x000C) (Edit, NeedCtorLink)
	struct FString                                     PurchaseURLGeneral;                                       // 0x0088(0x000C) (Edit, NeedCtorLink)
	int                                                SteamAppIDToCheck;                                        // 0x0094(0x0004) (Edit)
	TArray<class ADunDefPlayerAbility*>                AdditionalAbilityTemplatesOverride;                       // 0x0098(0x000C) (Edit, NeedCtorLink)
	TArray<class ADunDefPlayerAbility*>                AdditionalAbilityTemplatesOverride_Competitive;           // 0x00A4(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bOverridePreviewAnimSet : 1;                              // 0x00B0(0x0004) (Edit)
	class UAnimSet*                                    OverridePreviewAnimSet;                                   // 0x00B4(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefHero.HeroNetInfo
// 0x0095
struct FHeroNetInfo
{
	struct FString                                     HeroName;                                                 // 0x0000(0x000C) (NeedCtorLink)
	class UDunDefHero*                                 HeroTemplate;                                             // 0x000C(0x0004)
	int                                                LastPawnHealth;                                           // 0x0010(0x0004)
	int                                                HeroHealthModifier;                                       // 0x0014(0x0004)
	int                                                HeroSpeedModifier;                                        // 0x0018(0x0004)
	int                                                HeroDamageModifier;                                       // 0x001C(0x0004)
	int                                                HeroCastingModifier;                                      // 0x0020(0x0004)
	int                                                HeroAbilityOneModifier;                                   // 0x0024(0x0004)
	int                                                HeroAbilityTwoModifier;                                   // 0x0028(0x0004)
	int                                                HeroDefenseHealthModifier;                                // 0x002C(0x0004)
	int                                                HeroDefenseAttackRateModifier;                            // 0x0030(0x0004)
	int                                                HeroDefenseDamageModifier;                                // 0x0034(0x0004)
	int                                                HeroDefenseAreaOfEffectModifier;                          // 0x0038(0x0004)
	int                                                HeroLevel;                                                // 0x003C(0x0004)
	int                                                HeroExperience;                                           // 0x0040(0x0004)
	int                                                ManaPower;                                                // 0x0044(0x0004)
	int                                                GameplayInstanceID;                                       // 0x0048(0x0004)
	int                                                GUID1;                                                    // 0x004C(0x0004)
	int                                                GUID2;                                                    // 0x0050(0x0004)
	int                                                GUID3;                                                    // 0x0054(0x0004)
	int                                                GUID4;                                                    // 0x0058(0x0004)
	struct FLinearColor                                C1;                                                       // 0x005C(0x0010)
	struct FLinearColor                                c2;                                                       // 0x006C(0x0010)
	struct FLinearColor                                C3;                                                       // 0x007C(0x0010)
	int                                                CurrentCostumeIndex;                                      // 0x008C(0x0004)
	unsigned long                                      bIsNameOnlineVerified : 1;                                // 0x0090(0x0004)
	unsigned char                                      SubstituteNameIndex;                                      // 0x0094(0x0001)
};

// ScriptStruct UDKGame.DunDefHeroManager.PlayerUserID
// 0x001C
struct FPlayerUserID
{
	int                                                PlayerIndex;                                              // 0x0000(0x0004)
	int                                                UserID;                                                   // 0x0004(0x0004)
	int                                                GuestID;                                                  // 0x0008(0x0004)
	unsigned long                                      beenLoaded : 1;                                           // 0x000C(0x0004)
	unsigned long                                      remote : 1;                                               // 0x000C(0x0004)
	struct FString                                     NickName;                                                 // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.HeroAndEquipment
// 0x0120
struct FHeroAndEquipment
{
	struct FHeroSaveInfo                               HeroData;                                                 // 0x0000(0x0114) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo>                  Equipment;                                                // 0x0114(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefHeroManager.PlayerShopEntrySaveInfo
// 0x0160
struct FPlayerShopEntrySaveInfo
{
	struct FEquipmentSaveInfo                          EquipmentEntry;                                           // 0x0000(0x015C) (NeedCtorLink)
	int                                                SellAmount;                                               // 0x015C(0x0004)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.ItemBoxEntry
// 0x0014
struct FItemBoxEntry
{
	struct FHighDigitInt                               myItemBoxInfo;                                            // 0x0000(0x0010)
	int                                                UserID;                                                   // 0x0010(0x0004)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.ItemBoxInfo
// 0x0010
struct FItemBoxInfo
{
	int                                                StoredMana;                                               // 0x0000(0x0004)
	int                                                HighInfoStoredMana[0x3];                                  // 0x0004(0x0004)
};

// ScriptStruct UDKGame.DunDefHeroManagerNative.OptionsEntry
// 0x0108
struct FOptionsEntry
{
	struct FOptionsInfo                                Options;                                                  // 0x0000(0x0104) (NeedCtorLink)
	int                                                UserID;                                                   // 0x0104(0x0004)
};

// ScriptStruct UDKGame.DunDefHeroManager.StatsSaveEntry
// 0x000C
struct FStatsSaveEntry
{
	class UDunDefPlayerStats*                          Stats;                                                    // 0x0000(0x0004)
	int                                                UserID;                                                   // 0x0004(0x0004)
	unsigned long                                      remote : 1;                                               // 0x0008(0x0004)
};

// ScriptStruct UDKGame.DunDefHeroManager.MissionCompletionEquipmentDropEntry
// 0x0020
struct FMissionCompletionEquipmentDropEntry
{
	unsigned long                                      bIsActive : 1;                                            // 0x0000(0x0004)
	struct FString                                     MissionEntryTag;                                          // 0x0004(0x000C) (Edit, NeedCtorLink)
	TEnumAsByte<EGameDifficulty>                       MinimumCompletedDifficulty;                               // 0x0010(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	TArray<struct FEquipmentDropEntry>                 AdditionalDropEntries;                                    // 0x0014(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefHeroManager.CrystalCoreData
// 0x0030
struct FCrystalCoreData
{
	TArray<TEnumAsByte<EAchievement>>                  neededAchievements;                                       // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FString                                     coreName;                                                 // 0x000C(0x000C) (Edit, Localized, NeedCtorLink)
	struct FColor                                      theCoreUnlockMessageColor;                                // 0x0018(0x0004) (Edit)
	class UParticleSystem*                             coreVFX;                                                  // 0x001C(0x0004) (Edit)
	class UMaterialInstanceConstant*                   mainColorMIC;                                             // 0x0020(0x0004) (Edit)
	class UMaterialInstanceConstant*                   altColorMIC;                                              // 0x0024(0x0004) (Edit)
	class UMaterialInstanceConstant*                   auraColorMIC;                                             // 0x0028(0x0004) (Edit)
	class UMaterialInstanceConstant*                   soulColorMIC;                                             // 0x002C(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefHeroManager.ShopEquipmentSet
// 0x000C
struct FShopEquipmentSet
{
	TArray<class UHeroEquipment*>                      Equipments;                                               // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefHeroManager.RuthlessMapModifiers
// 0x0008
struct FRuthlessMapModifiers
{
	float                                              EnemyCountMultiplier;                                     // 0x0000(0x0004) (Edit)
	int                                                MaximumNumberOfEnemiesOverride;                           // 0x0004(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefHeroManager.CampaignLevelEntry
// 0x0118
struct FCampaignLevelEntry
{
	unsigned long                                      IsDLCCampaign : 1;                                        // 0x0000(0x0004)
	unsigned long                                      IsSpecialMission : 1;                                     // 0x0000(0x0004)
	unsigned long                                      IsLostCampaign : 1;                                       // 0x0000(0x0004)
	unsigned long                                      IsRankedOnly : 1;                                         // 0x0000(0x0004)
	unsigned long                                      IsRestrictedDifficultyMission : 1;                        // 0x0000(0x0004)
	struct FString                                     EntryIdentifierTag;                                       // 0x0004(0x000C) (Edit, NeedCtorLink)
	struct FString                                     LevelFileName;                                            // 0x0010(0x000C) (Edit, NeedCtorLink)
	struct FString                                     LevelFriendlyName;                                        // 0x001C(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     LevelDescription;                                         // 0x0028(0x000C) (Edit, Localized, NeedCtorLink)
	unsigned long                                      AlwaysUnlocked : 1;                                       // 0x0034(0x0004)
	unsigned long                                      ProceedsToNextLevel : 1;                                  // 0x0034(0x0004)
	unsigned long                                      bDisableHardcoreMode : 1;                                 // 0x0034(0x0004) (Edit)
	float                                              EquipmentWeightingMultiplier;                             // 0x0038(0x0004) (Edit)
	float                                              EquipmentQualityMultiplier;                               // 0x003C(0x0004) (Edit)
	float                                              RuthlessEquipmentQualityMultiplier;                       // 0x0040(0x0004) (Edit)
	float                                              ExperienceMultiplier;                                     // 0x0044(0x0004) (Edit)
	float                                              RuthlessExperienceMultiplier;                             // 0x0048(0x0004) (Edit)
	struct FString                                     GameInfoClassOverride;                                    // 0x004C(0x000C) (Edit, NeedCtorLink)
	int                                                KismetSwitch;                                             // 0x0058(0x0004) (Edit)
	int                                                RecommendedHeroLevel;                                     // 0x005C(0x0004) (Edit)
	TArray<int>                                        RecommendedHeroLevels;                                    // 0x0060(0x000C) (Edit, NeedCtorLink)
	int                                                StartWaveOverride;                                        // 0x006C(0x0004) (Edit)
	int                                                MaxWaveOverride;                                          // 0x0070(0x0004) (Edit)
	int                                                RuthlessMaxWaveOverride;                                  // 0x0074(0x0004) (Edit)
	TArray<struct FString>                             AdditionalUnlocks;                                        // 0x0078(0x000C) (Edit, NeedCtorLink)
	int                                                ContextId;                                                // 0x0084(0x0004)
	unsigned long                                      IsDLC : 1;                                                // 0x0088(0x0004)
	TArray<struct FString>                             HiddenUnlessUnlocked;                                     // 0x008C(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      IsHidden : 1;                                             // 0x0098(0x0004) (Edit)
	struct FString                                     PreviewImage;                                             // 0x009C(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bIsDemoLevel : 1;                                         // 0x00A8(0x0004)
	unsigned long                                      AllowForegroundRendering : 1;                             // 0x00A8(0x0004) (Edit)
	unsigned long                                      AllowFlawlessVictory : 1;                                 // 0x00A8(0x0004) (Edit)
	unsigned long                                      SpecialMissionAllowProcession : 1;                        // 0x00A8(0x0004) (Edit)
	unsigned long                                      bForceDisplayAtEndOfList : 1;                             // 0x00A8(0x0004) (Edit)
	unsigned long                                      HideOnMacAppStore : 1;                                    // 0x00A8(0x0004) (Edit)
	int                                                TowerUnitsOverride;                                       // 0x00AC(0x0004) (Edit)
	unsigned long                                      NoLeaderboard : 1;                                        // 0x00B0(0x0004)
	unsigned long                                      bMultiplayerOnly : 1;                                     // 0x00B0(0x0004)
	float                                              TreasureManaDropMultiplier;                               // 0x00B4(0x0004) (Edit)
	unsigned long                                      bIsCustomEntry : 1;                                       // 0x00B8(0x0004)
	unsigned long                                      IsPremiumLevel : 1;                                       // 0x00B8(0x0004)
	unsigned long                                      IsRestrictedPremiumLevel : 1;                             // 0x00B8(0x0004)
	int                                                TheDLCId;                                                 // 0x00BC(0x0004)
	unsigned long                                      IsModMap : 1;                                             // 0x00C0(0x0004)
	unsigned long                                      IsSubscribedModMap : 1;                                   // 0x00C0(0x0004)
	unsigned long                                      bHiddenIfLocked : 1;                                      // 0x00C0(0x0004)
	unsigned long                                      ForceShowInMissionSetup : 1;                              // 0x00C0(0x0004)
	unsigned long                                      ForceShowForStats : 1;                                    // 0x00C0(0x0004)
	struct FString                                     PurchaseURLSteam;                                         // 0x00C4(0x000C) (NeedCtorLink)
	struct FString                                     PurchaseURLGeneral;                                       // 0x00D0(0x000C) (NeedCtorLink)
	float                                              EquipmentRandomizerMultiplier;                            // 0x00DC(0x0004) (Edit)
	float                                              MapAdditiveDroppedEquipmentQuality;                       // 0x00E0(0x0004) (Edit)
	float                                              RuthlessMapAdditiveDroppedEquipmentQuality;               // 0x00E4(0x0004) (Edit)
	float                                              EqupmentRandomizerAdditionPerScalingWave;                 // 0x00E8(0x0004) (Edit)
	float                                              MixModeEquipmentAdditionScalingPerWave;                   // 0x00EC(0x0004) (Edit)
	float                                              NightmareRandomizerAdditionPerScalingWave;                // 0x00F0(0x0004) (Edit)
	float                                              HardcoreNightmareRandomizerAdditionPerScalingWave;        // 0x00F4(0x0004) (Edit)
	float                                              ExtraBuildTimeMultiplier;                                 // 0x00F8(0x0004) (Edit)
	float                                              OverlordMinHeight;                                        // 0x00FC(0x0004) (Edit)
	float                                              OverlordMaxHeight;                                        // 0x0100(0x0004) (Edit)
	struct FVector2D                                   OverlordMinXYBounds;                                      // 0x0104(0x0008) (Edit)
	struct FVector2D                                   OverlordMaxXYBounds;                                      // 0x010C(0x0008) (Edit)
	int                                                DunDefMaxPlayers;                                         // 0x0114(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefNativeUIScene.UIAnimationSound
// 0x000C
struct FUIAnimationSound
{
	class USoundCue*                                   CueToPlay;                                                // 0x0000(0x0004) (Edit)
	float                                              timeToPlay;                                               // 0x0004(0x0004) (Edit)
	unsigned long                                      bStopSoundOnUIDeactivate : 1;                             // 0x0008(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefNativeUIScene.DunDefUIAnimation
// 0x003C
struct FDunDefUIAnimation
{
	struct FName                                       SequenceName;                                             // 0x0000(0x0008) (Edit)
	TEnumAsByte<EUIAnimationLoopMode>                  LoopMode;                                                 // 0x0008(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	TArray<struct FUIAnimTrack>                        Tracks;                                                   // 0x000C(0x000C) (Edit, NeedCtorLink)
	class UUIAnimationSeq*                             AnimSeqObject;                                            // 0x0018(0x0004)
	unsigned long                                      allowInput : 1;                                           // 0x001C(0x0004) (Edit)
	unsigned long                                      bUnstoppable : 1;                                         // 0x001C(0x0004) (Edit)
	float                                              animationRate;                                            // 0x0020(0x0004) (Edit)
	TArray<class UUIScreenObject*>                     WidgetsToAnimate;                                         // 0x0024(0x000C) (Edit, NeedCtorLink)
	TArray<struct FUIAnimationSound>                   Sounds;                                                   // 0x0030(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefNativeViewportClient.ScreenResolution
// 0x0008
struct FScreenResolution
{
	int                                                Width;                                                    // 0x0000(0x0004)
	int                                                Height;                                                   // 0x0004(0x0004)
};

// ScriptStruct UDKGame.EquipmentDataContainer.SHeroEquipmentItem
// 0x0008
struct FSHeroEquipmentItem
{
	int                                                equipmentID;                                              // 0x0000(0x0004) (Edit, Const, DuplicateTransient)
	class UHeroEquipmentNative*                        EquipmentTemplate;                                        // 0x0004(0x0004) (Edit)
};

// ScriptStruct UDKGame.NativeDunDefEnemyController.DebugTargetList
// 0x0008
struct FDebugTargetList
{
	class AActor*                                      Target;                                                   // 0x0000(0x0004)
	float                                              Desiribility;                                             // 0x0004(0x0004)
};

// ScriptStruct UDKGame.NativeDunDefEnemyController.ClassTargetingMultiplier
// 0x0008
struct FClassTargetingMultiplier
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0004) (Edit)
	float                                              TargetingMultiplier;                                      // 0x0004(0x0004) (Edit)
};

// ScriptStruct UDKGame.NativeDunDefEnemyController.AggroEntry
// 0x000C
struct FAggroEntry
{
	class AActor*                                      Attacker;                                                 // 0x0000(0x0004)
	float                                              AggroFactor;                                              // 0x0004(0x0004)
	float                                              LastAggroHitTime;                                         // 0x0008(0x0004)
};

// ScriptStruct UDKGame.NativeDunDefGameReplicationInfo.FloatingDamageEntry
// 0x0044
struct FFloatingDamageEntry
{
	class UClass*                                      TheDamageType;                                            // 0x0000(0x0004)
	struct FString                                     theDamageAmount;                                          // 0x0004(0x000C) (NeedCtorLink)
	struct FVector                                     Position;                                                 // 0x0010(0x000C)
	float                                              LifeSpan;                                                 // 0x001C(0x0004)
	float                                              DisplayScale;                                             // 0x0020(0x0004)
	float                                              ScreenPosYOffset;                                         // 0x0024(0x0004)
	unsigned long                                      IsDamageFromEnemy : 1;                                    // 0x0028(0x0004)
	float                                              StartTime;                                                // 0x002C(0x0004)
	unsigned long                                      bOverrideColor : 1;                                       // 0x0030(0x0004)
	struct FLinearColor                                OverrideColor;                                            // 0x0034(0x0010)
};

// ScriptStruct UDKGame.SaveHelper.PurchasedItem
// 0x000C
struct FPurchasedItem
{
	int                                                OrderID;                                                  // 0x0000(0x0004)
	int                                                ItemId;                                                   // 0x0004(0x0004)
	int                                                Quantity;                                                 // 0x0008(0x0004)
};

// ScriptStruct UDKGame.SaveHelper.QueuedSave
// 0x0014
struct FQueuedSave
{
	int                                                UserID;                                                   // 0x0000(0x0004)
	unsigned long                                      bIsRemote : 1;                                            // 0x0004(0x0004)
	TArray<unsigned char>                              saveData;                                                 // 0x0008(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct UDKGame.StatObjectDataContainer.SStatObject
// 0x0008
struct FSStatObject
{
	int                                                StatObjectID;                                             // 0x0000(0x0004) (Edit, Const, DuplicateTransient)
	class UBaseStatObject*                             StatObjectTemplate;                                       // 0x0004(0x0004) (Edit)
};

// ScriptStruct UDKGame.StatSystem.StatEntry
// 0x0018
struct FStatEntry
{
	int                                                StatClass;                                                // 0x0000(0x0004)
	float                                              Time;                                                     // 0x0004(0x0004)
	int                                                StatValue;                                                // 0x0008(0x0004)
	int                                                PlayerIndex;                                              // 0x000C(0x0004)
	struct FName                                       associatedName;                                           // 0x0010(0x0008)
};

// ScriptStruct UDKGame.StatSystem.StatPlayerMetaData
// 0x0014
struct FStatPlayerMetaData
{
	struct FName                                       Key;                                                      // 0x0000(0x0008)
	struct FString                                     Value;                                                    // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.StatSystem.BestOfStatEntry
// 0x0024
struct FBestOfStatEntry
{
	struct FStatEntry                                  BestOfStatEntry;                                          // 0x0000(0x0018)
	TArray<struct FStatPlayerMetaData>                 bestOfMetadata;                                           // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.StatSystem.StatContainer
// 0x003C
struct FStatContainer
{
	TArray<struct FStatEntry>                          storedInstances;                                          // 0x0000(0x000C) (NeedCtorLink)
	TArray<struct FStatEntry>                          cumulativeInstances;                                      // 0x000C(0x000C) (NeedCtorLink)
	struct FBestOfStatEntry                            bestOfInstance;                                           // 0x0018(0x0024) (NeedCtorLink)
};

// ScriptStruct UDKGame.StatSystem.StatBuffer
// 0x0020
struct FStatBuffer
{
	int                                                bufferIndex;                                              // 0x0000(0x0004)
	struct FString                                     BufferName;                                               // 0x0004(0x000C) (NeedCtorLink)
	class UStatSystem*                                 owningSystem;                                             // 0x0010(0x0004)
	TArray<struct FStatContainer>                      Stats;                                                    // 0x0014(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.StatSystem.StatPlayer
// 0x0024
struct FStatPlayer
{
	class APlayerController*                           PC;                                                       // 0x0000(0x0004)
	struct FString                                     PlayerName;                                               // 0x0004(0x000C) (NeedCtorLink)
	unsigned long                                      isHere : 1;                                               // 0x0010(0x0004)
	int                                                statPlayerIndex;                                          // 0x0014(0x0004)
	TArray<struct FStatPlayerMetaData>                 MetaData;                                                 // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.StatSystem.StatClass
// 0x0048
struct FStatClass
{
	unsigned long                                      bCumulative : 1;                                          // 0x0000(0x0004)
	unsigned long                                      bEvent : 1;                                               // 0x0000(0x0004)
	unsigned long                                      bStore : 1;                                               // 0x0000(0x0004)
	unsigned long                                      bPlayerSpecific : 1;                                      // 0x0000(0x0004)
	unsigned long                                      bSplitName : 1;                                           // 0x0000(0x0004)
	unsigned long                                      bIsBestOf : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bMultiplayerAward : 1;                                    // 0x0000(0x0004)
	unsigned long                                      bPureStrategy : 1;                                        // 0x0000(0x0004)
	unsigned long                                      IgnoreOnSpecialMission : 1;                               // 0x0000(0x0004)
	int                                                AwardType;                                                // 0x0004(0x0004)
	int                                                ScoreValue;                                               // 0x0008(0x0004)
	struct FLinearColor                                ScoreAwardColor;                                          // 0x000C(0x0010)
	TArray<float>                                      ScoreDifficultyMultipliers;                               // 0x001C(0x000C) (NeedCtorLink)
	unsigned long                                      ScoreIncludeLevelMultiplier : 1;                          // 0x0028(0x0004)
	unsigned long                                      ScoreIncludeDifficultyMultiplier : 1;                     // 0x0028(0x0004)
	class UTexture2D*                                  AwardTexture;                                             // 0x002C(0x0004)
	struct FString                                     AwardName;                                                // 0x0030(0x000C) (Localized, NeedCtorLink)
	struct FString                                     AwardDescription;                                         // 0x003C(0x000C) (Localized, NeedCtorLink)
};

// ScriptStruct UDKGame.StatSystem.StatProxyBuffer
// 0x0024
struct FStatProxyBuffer
{
	TArray<struct FStatBuffer>                         storedBuffers;                                            // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FStatPlayer>                         Players;                                                  // 0x000C(0x000C) (AlwaysInit, NeedCtorLink)
	TArray<struct FStatClass>                          statClasses;                                              // 0x0018(0x000C) (Const, AlwaysInit, NeedCtorLink)
};

// ScriptStruct UDKGame.UILineGraph.LineIcon
// 0x0020
struct FLineIcon
{
	class UTexture*                                    Texture;                                                  // 0x0000(0x0004) (Edit)
	float                                              xvalue;                                                   // 0x0004(0x0004) (Edit)
	struct FLinearColor                                Color;                                                    // 0x0008(0x0010) (Edit)
	float                                              yvalue;                                                   // 0x0018(0x0004) (Const)
	float                                              Size;                                                     // 0x001C(0x0004) (Edit)
};

// ScriptStruct UDKGame.UILineGraph.LineGraphLine
// 0x002C
struct FLineGraphLine
{
	TArray<struct FVector2D>                           Values;                                                   // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FLinearColor                                Color;                                                    // 0x000C(0x0010) (Edit)
	float                                              widthInPixels;                                            // 0x001C(0x0004) (Edit)
	TArray<struct FLineIcon>                           icons;                                                    // 0x0020(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct UDKGame.UIResolutionContainer.ResolutionFitting
// 0x0028
struct FResolutionFitting
{
	TEnumAsByte<EResolutionType>                       screenType;                                               // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     ResSettingName;                                           // 0x0004(0x000C) (Edit, NeedCtorLink)
	int                                                Width;                                                    // 0x0010(0x0004) (Edit)
	int                                                Height;                                                   // 0x0014(0x0004) (Edit)
	int                                                coords[0x4];                                              // 0x0018(0x0004) (Edit)
};

// ScriptStruct UDKGame._DataTypes.sNameStringPair
// 0x0014
struct FsNameStringPair
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (Edit)
	struct FString                                     Value;                                                    // 0x0008(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct UDKGame._DataTypes.TowerUpgradeStat
// 0x000C
struct FTowerUpgradeStat
{
	int                                                ForTowerLevel;                                            // 0x0000(0x0004)
	TEnumAsByte<ELevelUpValueType>                     ValueStat;                                                // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                StatModifier;                                             // 0x0008(0x0004)
};

// ScriptStruct UDKGame._DataTypes.Boostingtypes
// 0x002C
struct FBoostingtypes
{
	TEnumAsByte<ETowerBoostType>                       boostType;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              boostExponent;                                            // 0x0004(0x0004) (Edit)
	float                                              boostBaseAmt;                                             // 0x0008(0x0004) (Edit)
	TEnumAsByte<ELevelUpValueType>                     levelUpStat;                                              // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     boostToolTip;                                             // 0x0010(0x000C) (Edit, Localized, NeedCtorLink)
	TArray<float>                                      UpgradeLinearBoostMultipliers;                            // 0x001C(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bInvertValue : 1;                                         // 0x0028(0x0004) (Edit)
};

// ScriptStruct UDKGame._DataTypes.sTowerBoostType
// 0x0008
struct FsTowerBoostType
{
	TEnumAsByte<ETowerBoostType>                       boostType;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BoostAmount;                                              // 0x0004(0x0004) (Edit)
};

// ScriptStruct UDKGame._DataTypes.sPawnBoostType
// 0x0008
struct FsPawnBoostType
{
	TEnumAsByte<EPawnBoostType>                        boostType;                                                // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              BoostAmount;                                              // 0x0004(0x0004) (Edit)
};

// ScriptStruct UDKGame._DataTypes.sBuffStorageData
// 0x0028
struct FsBuffStorageData
{
	struct FsHeroGUID                                  HeroID;                                                   // 0x0000(0x0010)
	int                                                buffUniqueID;                                             // 0x0010(0x0004)
	int                                                BuffStackCount;                                           // 0x0014(0x0004)
	float                                              BuffRemainingLifeSpan;                                    // 0x0018(0x0004)
	float                                              BuffLastRefreshTime;                                      // 0x001C(0x0004)
	float                                              BuffLastProcTime;                                         // 0x0020(0x0004)
	unsigned long                                      bCanProc : 1;                                             // 0x0024(0x0004)
};

// ScriptStruct UDKGame._DataTypes.sHeroBuffData
// 0x001C
struct FsHeroBuffData
{
	struct FsHeroGUID                                  HeroID;                                                   // 0x0000(0x0010)
	TArray<struct FsBuffStorageData>                   heroBuffData;                                             // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame._DataTypes.AuraEffect
// 0x0008
struct FAuraEffect
{
	class ADunDefTower_Aura*                           AuraType;                                                 // 0x0000(0x0004)
	int                                                UseCounter;                                               // 0x0004(0x0004)
};

// ScriptStruct UDKGame._DataTypes.ActorLevelUpStatModifier
// 0x0020
struct FActorLevelUpStatModifier
{
	TEnumAsByte<ELevelUpValueType>                     theLevelUpValueType;                                      // 0x0000(0x0001) (Edit, EditConst)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              InitialValue;                                             // 0x0004(0x0004) (Edit)
	float                                              MaxValue;                                                 // 0x0008(0x0004) (Edit)
	float                                              LevelLinearStatMultiplier;                                // 0x000C(0x0004) (Edit)
	float                                              LevelExponentialStatMultiplier;                           // 0x0010(0x0004) (Edit)
	float                                              InitialLinearStatMultiplier;                              // 0x0014(0x0004) (Edit)
	float                                              LinearStatMultiplier;                                     // 0x0018(0x0004) (Edit)
	float                                              ExponentialStatMultiplier;                                // 0x001C(0x0004) (Edit)
};

// ScriptStruct UDKGame._DataTypes.sLastDamageInfo
// 0x0010
struct FsLastDamageInfo
{
	class UClass*                                      lastDamageType;                                           // 0x0000(0x0004) (Transient)
	class AActor*                                      lastDamageCauser;                                         // 0x0004(0x0004) (Transient)
	class UObject*                                     lastWhatHitMe;                                            // 0x0008(0x0004) (Transient)
	class AController*                                 lastDamageInstigator;                                     // 0x000C(0x0004) (Transient)
};

// ScriptStruct UDKGame.DunDefDamageableTarget.DamageAdjuster
// 0x000C
struct FDamageAdjuster
{
	class UClass*                                      TheDamageType;                                            // 0x0000(0x0004) (Edit)
	float                                              DamageScale;                                              // 0x0004(0x0004) (Edit)
	float                                              MomentumScale;                                            // 0x0008(0x0004) (Edit)
};

// ScriptStruct UDKGame._DataTypes.sActorStatDescription
// 0x0028
struct FsActorStatDescription
{
	int                                                ActorStatID;                                              // 0x0000(0x0004) (Edit)
	struct FString                                     ModifierTag;                                              // 0x0004(0x000C) (Edit, NeedCtorLink)
	struct FString                                     PreDescriptionText;                                       // 0x0010(0x000C) (Edit, NeedCtorLink)
	struct FString                                     PostDescriptionText;                                      // 0x001C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct UDKGame._DataTypes.EnemyRuthlessModifiers
// 0x0018
struct FEnemyRuthlessModifiers
{
	float                                              HealthMultiplier;                                         // 0x0000(0x0004) (Edit)
	float                                              SpeedMultiplier;                                          // 0x0004(0x0004) (Edit)
	float                                              DamageMultiplier;                                         // 0x0008(0x0004) (Edit)
	float                                              PawnDamageResistanceModifierOverride;                     // 0x000C(0x0004) (Edit)
	float                                              TowerDamageResistanceModifier;                            // 0x0010(0x0004) (Edit)
	unsigned long                                      bUseTowerResistance : 1;                                  // 0x0014(0x0004) (Edit)
};

// ScriptStruct UDKGame._DataTypes.sNameFloatPair
// 0x000C
struct FsNameFloatPair
{
	struct FName                                       Key;                                                      // 0x0000(0x0008)
	float                                              Value;                                                    // 0x0008(0x0004)
};

// ScriptStruct UDKGame._DataTypes.sNameIntPair
// 0x000C
struct FsNameIntPair
{
	struct FName                                       Key;                                                      // 0x0000(0x0008)
	int                                                Value;                                                    // 0x0008(0x0004)
};

// ScriptStruct UDKGame._DataTypes.sNameBoolPair
// 0x000C
struct FsNameBoolPair
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (Edit)
	unsigned long                                      bValue : 1;                                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct UDKGame._DataTypes.sIntPair
// 0x0008
struct FsIntPair
{
	int                                                Left;                                                     // 0x0000(0x0004)
	int                                                Right;                                                    // 0x0004(0x0004)
};

// ScriptStruct UDKGame._DataTypes.sIntFloatPair
// 0x0008
struct FsIntFloatPair
{
	int                                                Left;                                                     // 0x0000(0x0004)
	float                                              Right;                                                    // 0x0004(0x0004)
};

// ScriptStruct UDKGame._DataTypes.sIndexPair
// 0x0008
struct FsIndexPair
{
	int                                                Data;                                                     // 0x0000(0x0004)
	int                                                Index;                                                    // 0x0004(0x0004)
};

// ScriptStruct UDKGame._DataTypes.sIntStringPair
// 0x0010
struct FsIntStringPair
{
	int                                                IntValue;                                                 // 0x0000(0x0004) (Edit)
	struct FString                                     StrValue;                                                 // 0x0004(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct UDKGame._DataTypes.sElementalCombo
// 0x000C
struct FsElementalCombo
{
	class UClass*                                      DamageTypeTrigger;                                        // 0x0000(0x0004) (Edit)
	TEnumAsByte<EStatusEffect>                         StatusEffect;                                             // 0x0004(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class UDunDefBuff*                                 Result;                                                   // 0x0008(0x0004) (Edit)
};

// ScriptStruct UDKGame._DataTypes.sBuffNetInfo
// 0x00C8
struct FsBuffNetInfo
{
	class UDunDefBuff*                                 BuffTemplate;                                             // 0x0000(0x0004)
	class APawn*                                       Instigator;                                               // 0x0004(0x0004)
	class AActor*                                      BuffTarget;                                               // 0x0008(0x0004)
	class AActor*                                      BuffOwner;                                                // 0x000C(0x0004)
	struct FVector                                     Location;                                                 // 0x0010(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C)
	int                                                BuffTemplateID;                                           // 0x0028(0x0004)
	int                                                BuffID;                                                   // 0x002C(0x0004)
	int                                                BuffTier;                                                 // 0x0030(0x0004)
	int                                                StackCount;                                               // 0x0034(0x0004)
	float                                              LifeSpan;                                                 // 0x0038(0x0004)
	float                                              BuffRange;                                                // 0x003C(0x0004)
	float                                              StatValueBuffsAdditive[0x11];                             // 0x0040(0x0004)
	float                                              StatValueBuffsMultiplicative[0x11];                       // 0x0084(0x0004)
};

// ScriptStruct UDKGame._DataTypes.sBuffInfo
// 0x0064
struct FsBuffInfo
{
	struct FString                                     BuffName;                                                 // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FString                                     BuffDescription;                                          // 0x000C(0x000C) (Edit, NeedCtorLink)
	class USurface*                                    BuffIcon;                                                 // 0x0018(0x0004) (Edit)
	struct FString                                     TierNames[0x6];                                           // 0x001C(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct UDKGame._DataTypes.sBuffNotification
// 0x0020
struct FsBuffNotification
{
	struct FString                                     NotificationText;                                         // 0x0000(0x000C) (Edit, NeedCtorLink)
	struct FLinearColor                                NotificationTextColor;                                    // 0x000C(0x0010) (Edit)
	float                                              NotificationDuration;                                     // 0x001C(0x0004) (Edit)
};

// ScriptStruct UDKGame._DataTypes.sBuffNotifcationInfo
// 0x00A0
struct FsBuffNotifcationInfo
{
	struct FsBuffNotification                          BuffApplyNotification;                                    // 0x0000(0x0020) (Edit, NeedCtorLink)
	struct FsBuffNotification                          BuffRemoveNotification;                                   // 0x0020(0x0020) (Edit, NeedCtorLink)
	struct FsBuffNotification                          BuffActivationNotification;                               // 0x0040(0x0020) (Edit, NeedCtorLink)
	struct FsBuffNotification                          BuffDeActivationNotification;                             // 0x0060(0x0020) (Edit, NeedCtorLink)
	struct FsBuffNotification                          BuffProcNotification;                                     // 0x0080(0x0020) (Edit, NeedCtorLink)
};

// ScriptStruct UDKGame._DataTypes.sActorStatScalar
// 0x0014
struct FsActorStatScalar
{
	TEnumAsByte<ELevelUpValueType>                     AssociatedStat;                                           // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              ScalingValue;                                             // 0x0004(0x0004) (Edit)
	float                                              ScalingExponent;                                          // 0x0008(0x0004) (Edit)
	float                                              BaseValue;                                                // 0x000C(0x0004) (Edit)
	unsigned long                                      bUseStatModifier : 1;                                     // 0x0010(0x0004) (Edit)
};

// ScriptStruct UDKGame._DataTypes.sActorStatModifier
// 0x0044
struct FsActorStatModifier
{
	TEnumAsByte<ELevelUpValueType>                     StatToModify;                                             // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<struct FsActorStatScalar>                   AssociateStatScalars;                                     // 0x0004(0x000C) (Edit, NeedCtorLink)
	float                                              BaseValue;                                                // 0x0010(0x0004) (Edit)
	float                                              InitialValueOverride;                                     // 0x0014(0x0004) (Edit)
	float                                              BaseValueDivsor;                                          // 0x0018(0x0004) (Edit)
	float                                              BaseValueLevelLinearMultiplier;                           // 0x001C(0x0004) (Edit)
	float                                              BaseValueLinearMultiplier;                                // 0x0020(0x0004) (Edit)
	float                                              BaseValueExponent;                                        // 0x0024(0x0004) (Edit)
	float                                              MaxValue;                                                 // 0x0028(0x0004) (Edit)
	float                                              MinValue;                                                 // 0x002C(0x0004) (Edit)
	int                                                DecimalPlacesForToolTip;                                  // 0x0030(0x0004) (Edit)
	struct FString                                     ModifierTag;                                              // 0x0034(0x000C) (Edit, NeedCtorLink)
	unsigned long                                      bUseAdditiveScaling : 1;                                  // 0x0040(0x0004) (Edit)
	unsigned long                                      bDisplayToolTipAsPercentage : 1;                          // 0x0040(0x0004) (Edit)
	unsigned long                                      bInvertedStat : 1;                                        // 0x0040(0x0004) (Edit)
	unsigned long                                      bUseToolTipHack : 1;                                      // 0x0040(0x0004) (Edit)
};

// ScriptStruct UDKGame._DataTypes.sActorStatTemplateModifier
// 0x0010
struct FsActorStatTemplateModifier
{
	class UObject*                                     AssociatedTemplate;                                       // 0x0000(0x0004) (Edit)
	TArray<struct FsActorStatModifier>                 Modifiers;                                                // 0x0004(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct UDKGame._DataTypes.sBuffTarget
// 0x0010
struct FsBuffTarget
{
	TArray<class UDunDefBuff*>                         Buffs;                                                    // 0x0000(0x000C) (NeedCtorLink)
	class AActor*                                      Target;                                                   // 0x000C(0x0004)
};

// ScriptStruct UDKGame.DunDefMapInfo.MixEnemyDifficultyThreshold
// 0x0005
struct FMixEnemyDifficultyThreshold
{
	class ADunDefEnemy*                                EnemyArchetype;                                           // 0x0000(0x0004) (Edit)
	TEnumAsByte<EGameDifficulty>                       DifficultyThreshold;                                      // 0x0004(0x0001) (Edit)
};

// ScriptStruct UDKGame.DunDefMapInfo.EnemyAnimTreeOverride
// 0x0008
struct FEnemyAnimTreeOverride
{
	class ADunDefEnemy*                                EnemyArchetype;                                           // 0x0000(0x0004) (Edit)
	class UAnimTree*                                   AnimTreeOverride;                                         // 0x0004(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefMapInfo.CustomMapWideModifier
// 0x001C
struct FCustomMapWideModifier
{
	int                                                GameModeSwitchInt;                                        // 0x0000(0x0004) (Edit)
	struct FEnemyRuthlessModifiers                     MapWideModifier;                                          // 0x0004(0x0018) (Edit)
};

// ScriptStruct UDKGame.DunDefMapInfo.OverrideRuthlessModifiersPerEnemyTemplate
// 0x0020
struct FOverrideRuthlessModifiersPerEnemyTemplate
{
	struct FEnemyRuthlessModifiers                     CustomModifier;                                           // 0x0000(0x0018) (Edit)
	class ADunDefEnemy*                                EnemyTemplate;                                            // 0x0018(0x0004) (Edit)
	int                                                KismetSwitchInt;                                          // 0x001C(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefMapInfo.CameraParticleInfo
// 0x0040
struct FCameraParticleInfo
{
	class UParticleSystem*                             ParticleSystem;                                           // 0x0000(0x0004) (Edit)
	struct FVector                                     cameraOffset;                                             // 0x0004(0x000C) (Edit)
	struct FVector                                     cameraWorldOffset;                                        // 0x0010(0x000C) (Edit)
	unsigned long                                      useCameraRotMultiplier : 1;                               // 0x001C(0x0004) (Edit)
	struct FVector                                     cameraRotMultiplier;                                      // 0x0020(0x000C) (Edit)
	struct FName                                       particleName;                                             // 0x002C(0x0008) (Edit)
	unsigned long                                      initiallyEnabled : 1;                                     // 0x0034(0x0004) (Edit)
	int                                                TranslucencySortPriority;                                 // 0x0038(0x0004) (Edit)
	unsigned long                                      fromMap : 1;                                              // 0x003C(0x0004)
};

// ScriptStruct UDKGame.DunDefPlayerController.DunDefMuteListEntry
// 0x000C
struct FDunDefMuteListEntry
{
	struct FUniqueNetId                                mutedNetId;                                               // 0x0000(0x0008)
	unsigned long                                      selfInitiated : 1;                                        // 0x0008(0x0004)
};

// ScriptStruct UDKGame.DunDefPlayerController.metPlayers
// 0x0014
struct FmetPlayers
{
	struct FUniqueNetId                                metID;                                                    // 0x0000(0x0008)
	struct FString                                     metName;                                                  // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefPlayerController.PRIRelatedInfo
// 0x0020
struct FPRIRelatedInfo
{
	struct FUniqueNetId                                NetId;                                                    // 0x0000(0x0008)
	struct FString                                     PlayerName;                                               // 0x0008(0x000C) (NeedCtorLink)
	TArray<struct FDunDefMuteListEntry>                DunDefMuteList;                                           // 0x0014(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameReplicationInfo.StatSendingQueueEntry
// 0x0008
struct FStatSendingQueueEntry
{
	class ADunDefPlayerController*                     DPC;                                                      // 0x0000(0x0004)
	int                                                statPlayerIndex;                                          // 0x0004(0x0004)
};

// ScriptStruct UDKGame.DunDefGameReplicationInfo.damageTypeCount
// 0x0008
struct FdamageTypeCount
{
	int                                                statPlayerIndex;                                          // 0x0000(0x0004)
	int                                                Count;                                                    // 0x0004(0x0004)
};

// ScriptStruct UDKGame.DunDefGameReplicationInfo.HeroAward
// 0x0010
struct ADunDefGameReplicationInfo_FHeroAward
{
	TEnumAsByte<EHeroAwardEnum>                        Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Count;                                                    // 0x0004(0x0004)
	float                                              Time;                                                     // 0x0008(0x0004)
	int                                                Wave;                                                     // 0x000C(0x0004)
};

// ScriptStruct UDKGame.DunDefGameReplicationInfo.HeroAwardStatInfo
// 0x0030
struct FHeroAwardStatInfo
{
	int                                                numPlayerKills;                                           // 0x0000(0x0004)
	int                                                numTowerKills;                                            // 0x0004(0x0004)
	int                                                numTotalKills;                                            // 0x0008(0x0004)
	int                                                numTowerRepairs;                                          // 0x000C(0x0004)
	int                                                numUpgrades;                                              // 0x0010(0x0004)
	int                                                numDamage;                                                // 0x0014(0x0004)
	int                                                numDeaths;                                                // 0x0018(0x0004)
	int                                                mana;                                                     // 0x001C(0x0004)
	int                                                Dist;                                                     // 0x0020(0x0004)
	TArray<struct ADunDefGameReplicationInfo_FHeroAward> awards;                                                   // 0x0024(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameReplicationInfo.playerStatsEntry
// 0x0028
struct FplayerStatsEntry
{
	int                                                remoteUserID;                                             // 0x0000(0x0004)
	int                                                arraySize;                                                // 0x0004(0x0004)
	struct FString                                     PlayerName;                                               // 0x0008(0x000C) (NeedCtorLink)
	int                                                statPlayerIndex;                                          // 0x0014(0x0004)
	unsigned long                                      remote : 1;                                               // 0x0018(0x0004)
	unsigned long                                      ignore : 1;                                               // 0x0018(0x0004)
	unsigned long                                      Host : 1;                                                 // 0x0018(0x0004)
	TArray<int>                                        remoteBestOfStats;                                        // 0x001C(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameReplicationInfo.WaveBonusChecks
// 0x0028
struct FWaveBonusChecks
{
	unsigned long                                      CoreTookDamage : 1;                                       // 0x0000(0x0004)
	TArray<int>                                        PlayerTookDamage;                                         // 0x0004(0x000C) (NeedCtorLink)
	TArray<int>                                        UsedAnyWeaponsToHurt;                                     // 0x0010(0x000C) (NeedCtorLink)
	TArray<int>                                        UsedAnyTowersToHurt;                                      // 0x001C(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameReplicationInfo.ExpensiveFunctionRegister
// 0x0010
struct FExpensiveFunctionRegister
{
	TArray<class UObject*>                             ExpensiveFunctionRequestors;                              // 0x0000(0x000C) (Transient, NeedCtorLink)
	unsigned long                                      bExpensiveFunctionRan : 1;                                // 0x000C(0x0004) (Transient)
};

// ScriptStruct UDKGame.DunDefUIScene.ToolTipInfo
// 0x0046
struct FToolTipInfo
{
	TScriptInterface<class UToolTipInterface>          ToolTipTarget;                                            // 0x0000(0x0008)
	class UUIPrefab*                                   CurrentToolTipTemplate;                                   // 0x0008(0x0004)
	float                                              CountDownTimer;                                           // 0x000C(0x0004)
	unsigned long                                      ToolTipFadingOut : 1;                                     // 0x0010(0x0004)
	float                                              ToolTipFadeTimer;                                         // 0x0014(0x0004)
	struct FVector                                     ToolTipScale;                                             // 0x0018(0x000C)
	struct FString                                     ToolTipString;                                            // 0x0024(0x000C) (NeedCtorLink)
	class UUIObject*                                   ToolTip;                                                  // 0x0030(0x0004)
	unsigned long                                      MouseFollow : 1;                                          // 0x0034(0x0004)
	struct FVector2D                                   ToolTipOffset;                                            // 0x0038(0x0008)
	unsigned long                                      ScenePosition : 1;                                        // 0x0040(0x0004)
	TEnumAsByte<EToolTipAlignment>                     HorizontalAlignment;                                      // 0x0044(0x0001)
	TEnumAsByte<EToolTipAlignment>                     VerticalAlignment;                                        // 0x0045(0x0001)
};

// ScriptStruct UDKGame.DunDefUIScene.DunDefKeyBindings
// 0x0020
struct FDunDefKeyBindings
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (Edit)
	class UUIObject*                                   WidgetToClick;                                            // 0x0008(0x0004) (Edit)
	TEnumAsByte<ESideButtonAlignment>                  buttonAlignment;                                          // 0x000C(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              buttonOffset;                                             // 0x0010(0x0004) (Edit)
	float                                              buttonSize;                                               // 0x0014(0x0004) (Edit)
	unsigned long                                      bDontHandleInput : 1;                                     // 0x0018(0x0004) (Edit)
	unsigned long                                      bForceDrawBinding : 1;                                    // 0x0018(0x0004) (Edit)
	unsigned long                                      bDontDrawIcon : 1;                                        // 0x0018(0x0004) (Edit)
	unsigned long                                      bBindingDisabled : 1;                                     // 0x0018(0x0004) (Edit)
	unsigned long                                      bSetWidgetFocus : 1;                                      // 0x0018(0x0004) (Edit)
	unsigned long                                      bDontResetFocus : 1;                                      // 0x0018(0x0004) (Edit)
	unsigned long                                      bForceDrawBindingIfAnyGamepad : 1;                        // 0x0018(0x0004) (Edit)
	unsigned long                                      bUseSubRenderDelegate : 1;                                // 0x0018(0x0004) (Edit)
	float                                              LastPressedTime;                                          // 0x001C(0x0004)
};

// ScriptStruct UDKGame.Main.MapPrefixDefinition
// 0x0018
struct FMapPrefixDefinition
{
	struct FString                                     MapPrefix;                                                // 0x0000(0x000C) (Config, NeedCtorLink)
	struct FString                                     GameInfoClassName;                                        // 0x000C(0x000C) (Config, NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefWeapon_MeleeSword.MeleeSwingInfo
// 0x002C
struct FMeleeSwingInfo
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008) (Edit)
	float                                              Animspeed;                                                // 0x0008(0x0004) (Edit)
	float                                              TimeBeforeEndToAllowNextCombo;                            // 0x000C(0x0004) (Edit)
	float                                              TimeAfterEndToAllowNextCombo;                             // 0x0010(0x0004) (Edit)
	unsigned long                                      StepTowardsTarget : 1;                                    // 0x0014(0x0004) (Edit)
	float                                              DamageMultiplier;                                         // 0x0018(0x0004) (Edit)
	float                                              MomentumMultiplier;                                       // 0x001C(0x0004) (Edit)
	float                                              SwingAnimationDuration;                                   // 0x0020(0x0004)
	float                                              BlendInTime;                                              // 0x0024(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x0028(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefPlayer.OverlayEffectEntry
// 0x0014
struct FOverlayEffectEntry
{
	class AActor*                                      CausedByActor;                                            // 0x0000(0x0004)
	struct FLinearColor                                Coloration;                                               // 0x0004(0x0010)
};

// ScriptStruct UDKGame.DunDefPlayer.CustomColorContainer
// 0x0038
struct FCustomColorContainer
{
	class USkeletalMesh*                               CostumeMesh;                                              // 0x0000(0x0004)
	class UAnimSet*                                    CostumeAnimSet;                                           // 0x0004(0x0004)
	struct FLinearColor                                C1;                                                       // 0x0008(0x0010)
	struct FLinearColor                                c2;                                                       // 0x0018(0x0010)
	struct FLinearColor                                C3;                                                       // 0x0028(0x0010)
};

// ScriptStruct UDKGame.DunDefPlayerAbility_TowerPlacement.ActorHitInfo
// 0x0008
struct FActorHitInfo
{
	class AActor*                                      TracedActor;                                              // 0x0000(0x0004)
	float                                              TracedDistance;                                           // 0x0004(0x0004)
};

// ScriptStruct UDKGame.AdvancedConsoleCommandsSettings.ItemTestInfo
// 0x0044
struct FItemTestInfo
{
	TArray<int>                                        Qualities;                                                // 0x0000(0x000C) (NeedCtorLink)
	TArray<int>                                        Levels;                                                   // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     ArchetypeToTest;                                          // 0x0018(0x000C) (NeedCtorLink)
	struct FString                                     ItemName;                                                 // 0x0024(0x000C) (NeedCtorLink)
	float                                              QualityToTest;                                            // 0x0030(0x0004)
	float                                              MultiplierToTest;                                         // 0x0034(0x0004)
	int                                                MaxItemCount;                                             // 0x0038(0x0004)
	int                                                CurrentItemCount;                                         // 0x003C(0x0004)
	int                                                ItemsPerFrame;                                            // 0x0040(0x0004)
};

// ScriptStruct UDKGame.DunDefAchievementManager.AchievementEntry
// 0x002C
struct FAchievementEntry
{
	TEnumAsByte<EAchievement>                          AchievementId;                                            // 0x0000(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     AchievementName;                                          // 0x0004(0x000C) (Edit, Localized, NeedCtorLink)
	struct FString                                     AchievementDescription;                                   // 0x0010(0x000C) (Edit, Localized, NeedCtorLink)
	unsigned long                                      Is360 : 1;                                                // 0x001C(0x0004) (Edit)
	unsigned long                                      bUnlockInUnranked : 1;                                    // 0x001C(0x0004) (Edit)
	int                                                Mapping360;                                               // 0x0020(0x0004) (Edit)
	class UTexture2D*                                  AchievementIcon;                                          // 0x0024(0x0004) (Edit)
	struct FColor                                      AchievementColor;                                         // 0x0028(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefAchievementManager.FamiliarTypeAlias
// 0x0010
struct FFamiliarTypeAlias
{
	struct FString                                     FamiliarPath;                                             // 0x0000(0x000C) (Edit, NeedCtorLink)
	int                                                AliasIndex;                                               // 0x000C(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefViewportClient.CursorParticle
// 0x0028
struct FCursorParticle
{
	float                                              Width;                                                    // 0x0000(0x0004)
	float                                              Height;                                                   // 0x0004(0x0004)
	struct FVector2D                                   Velocity;                                                 // 0x0008(0x0008)
	struct FVector2D                                   Acceleration;                                             // 0x0010(0x0008)
	struct FVector2D                                   Position;                                                 // 0x0018(0x0008)
	float                                              LifeSpan;                                                 // 0x0020(0x0004)
	float                                              Scale;                                                    // 0x0024(0x0004)
};

// ScriptStruct UDKGame.DunDefViewportClient.AxisInfo
// 0x0010
struct FAxisInfo
{
	float                                              lx;                                                       // 0x0000(0x0004)
	float                                              ly;                                                       // 0x0004(0x0004)
	float                                              rx;                                                       // 0x0008(0x0004)
	float                                              ry;                                                       // 0x000C(0x0004)
};

// ScriptStruct UDKGame.UI_GameSetup.MissionPreviewImageInfo
// 0x0010
struct FMissionPreviewImageInfo
{
	struct FString                                     MissionTag;                                               // 0x0000(0x000C) (Edit, NeedCtorLink)
	class USurface*                                    MissionPreviewImage;                                      // 0x000C(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefGameStorage.OptionsFixedStruct_42
// 0x008C
struct FOptionsFixedStruct_42
{
	unsigned long                                      AutoShowLevelUp : 1;                                      // 0x0000(0x0004)
	unsigned long                                      AllowFriendlyFire : 1;                                    // 0x0000(0x0004)
	unsigned long                                      UseGamepad : 1;                                           // 0x0000(0x0004)
	unsigned long                                      AutoAdjustCameraForPhase : 1;                             // 0x0000(0x0004)
	unsigned long                                      ShowTutorials : 1;                                        // 0x0000(0x0004)
	int                                                ShownTutorials[0xA];                                      // 0x0004(0x0004)
	float                                              VolumeSFX;                                                // 0x002C(0x0004)
	float                                              VolumeMusic;                                              // 0x0030(0x0004)
	float                                              VoicePlayVolume;                                          // 0x0034(0x0004)
	float                                              VoiceCaptureVolume;                                       // 0x0038(0x0004)
	unsigned long                                      PushToTalk : 1;                                           // 0x003C(0x0004)
	unsigned long                                      IncomingVoice : 1;                                        // 0x003C(0x0004)
	unsigned long                                      OutgoingVoice : 1;                                        // 0x003C(0x0004)
	float                                              Gamma;                                                    // 0x0040(0x0004)
	float                                              SaturationIntensity;                                      // 0x0044(0x0004)
	float                                              UIScalePercent;                                           // 0x0048(0x0004)
	unsigned long                                      PostProcessing : 1;                                       // 0x004C(0x0004)
	unsigned long                                      ShowFloatingDamageNumbers : 1;                            // 0x004C(0x0004)
	unsigned long                                      bRightStickTurnsCameraScheme : 1;                         // 0x004C(0x0004)
	unsigned long                                      bInvertCameraPitch : 1;                                   // 0x004C(0x0004)
	unsigned long                                      bSwapTriggersAndButtons : 1;                              // 0x004C(0x0004)
	unsigned long                                      FullScreen : 1;                                           // 0x004C(0x0004)
	unsigned char                                      SplitScreenConfig;                                        // 0x0050(0x0001)
	unsigned char                                      CurrentDifficulty;                                        // 0x0051(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	unsigned long                                      LobbyItemLock : 1;                                        // 0x0054(0x0004)
	unsigned long                                      bDefaultChaseCamera : 1;                                  // 0x0054(0x0004)
	float                                              DefaultCameraTargetDistance;                              // 0x0058(0x0004)
	float                                              DefaultPlacingTowerCameraDistance;                        // 0x005C(0x0004)
	float                                              MouseCameraRotationSpeed;                                 // 0x0060(0x0004)
	unsigned long                                      SavedLoginInfo : 1;                                       // 0x0064(0x0004)
	TArray<unsigned char>                              CustomGameMetaFlags;                                      // 0x0068(0x000C) (NeedCtorLink)
	TArray<int>                                        CustomeUnlocks;                                           // 0x0074(0x000C) (NeedCtorLink)
	TArray<int>                                        HeroUnlocks;                                              // 0x0080(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.SearchFilterSettings_36
// 0x0025
struct FSearchFilterSettings_36
{
	TArray<int>                                        levelIndicesToFilter;                                     // 0x0000(0x000C) (NeedCtorLink)
	int                                                difficultiesToFilter[0x4];                                // 0x000C(0x0004)
	unsigned char                                      filterChallengeMissions;                                  // 0x001C(0x0001)
	unsigned char                                      filterCampaignMissions;                                   // 0x001D(0x0001)
	unsigned char                                      filterPureStrategy;                                       // 0x001E(0x0001)
	unsigned char                                      filterInfiniteBuild;                                      // 0x001F(0x0001)
	unsigned char                                      filterInfiniteWaves;                                      // 0x0020(0x0001)
	unsigned char                                      filterHostClass;                                          // 0x0021(0x0001)
	unsigned char                                      filterHostLevel;                                          // 0x0022(0x0001)
	unsigned char                                      filterHostLevelStart;                                     // 0x0023(0x0001)
	unsigned char                                      filterHostLevelEnd;                                       // 0x0024(0x0001)
};

// ScriptStruct UDKGame.DunDefGameStorage.OptionsInfo_36
// 0x00F0
struct FOptionsInfo_36
{
	struct FOptionsFixedStruct_42                      fixedSizeOptions;                                         // 0x0000(0x008C) (NeedCtorLink)
	struct FString                                     Resolution;                                               // 0x008C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     lastLevelTag;                                             // 0x0098(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UserName;                                                 // 0x00A4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Password;                                                 // 0x00B0(0x000C) (AlwaysInit, NeedCtorLink)
	struct FSearchFilterSettings_36                    searchFilters;                                            // 0x00BC(0x0028) (NeedCtorLink)
	TArray<int>                                        installedDLCEquipments;                                   // 0x00E4(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.EquipmentSaveInfo_37
// 0x00C8
struct FEquipmentSaveInfo_37
{
	unsigned long                                      IsInitialized : 1;                                        // 0x0000(0x0004)
	unsigned char                                      DamageReductionIndex[0x4];                                // 0x0004(0x0001)
	unsigned char                                      DamageReductionPercentage[0x4];                           // 0x0008(0x0001)
	unsigned char                                      StatModifiers[0xB];                                       // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	int                                                WeaponDamageBonus;                                        // 0x0018(0x0004)
	unsigned char                                      WeaponNumberOfProjectilesBonus;                           // 0x001C(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                WeaponSpeedOfProjectilesBonus;                            // 0x0020(0x0004)
	unsigned char                                      WeaponAdditionalDamageTypeIndex;                          // 0x0024(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	int                                                WeaponAdditionalDamageAmount;                             // 0x0028(0x0004)
	float                                              WeaponDrawScaleMultiplier;                                // 0x002C(0x0004)
	float                                              WeaponSwingSpeedMultiplier;                               // 0x0030(0x0004)
	unsigned char                                      Level;                                                    // 0x0034(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	int                                                StoredMana;                                               // 0x0038(0x0004)
	unsigned char                                      WeaponBlockingBonus;                                      // 0x003C(0x0001)
	unsigned char                                      UnknownData04[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	int                                                WeaponAltDamageBonus;                                     // 0x0040(0x0004)
	int                                                WeaponClipAmmoBonus;                                      // 0x0044(0x0004)
	unsigned char                                      WeaponReloadSpeedBonus;                                   // 0x0048(0x0001)
	unsigned char                                      WeaponKnockbackBonus;                                     // 0x0049(0x0001)
	unsigned char                                      WeaponChargeSpeedBonus;                                   // 0x004A(0x0001)
	unsigned char                                      WeaponShotsPerSecondBonus;                                // 0x004B(0x0001)
	unsigned char                                      NameIndex_Base;                                           // 0x004C(0x0001)
	unsigned char                                      NameIndex_DamageReduction;                                // 0x004D(0x0001)
	unsigned char                                      NameIndex_QualityDescriptor;                              // 0x004E(0x0001)
	unsigned char                                      PrimaryColorSet;                                          // 0x004F(0x0001)
	unsigned char                                      SecondaryColorSet;                                        // 0x0050(0x0001)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	int                                                EquipmentID1;                                             // 0x0054(0x0004)
	int                                                EquipmentID2;                                             // 0x0058(0x0004)
	int                                                MinimumSellWorth;                                         // 0x005C(0x0004)
	unsigned char                                      MaxEquipmentLevel;                                        // 0x0060(0x0001)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                DroppedLocationX;                                         // 0x0064(0x0004)
	int                                                DroppedLocationY;                                         // 0x0068(0x0004)
	int                                                DroppedLocationZ;                                         // 0x006C(0x0004)
	unsigned char                                      bCanBeUpgraded;                                           // 0x0070(0x0001)
	unsigned char                                      AllowRenamingAtMaxUpgrade;                                // 0x0071(0x0001)
	unsigned char                                      bCantBeDropped;                                           // 0x0072(0x0001)
	unsigned char                                      bCantBeSold;                                              // 0x0073(0x0001)
	unsigned char                                      bAutoLockInItemBox;                                       // 0x0074(0x0001)
	unsigned char                                      bDidOnetimeEffect;                                        // 0x0075(0x0001)
	unsigned char                                      bIsLocked;                                                // 0x0076(0x0001)
	unsigned char                                      ManualLR;                                                 // 0x0077(0x0001)
	struct FLinearColor                                PrimaryColorOverride;                                     // 0x0078(0x0010)
	struct FLinearColor                                SecondaryColorOverride;                                   // 0x0088(0x0010)
	struct FString                                     UserEquipmentName;                                        // 0x0098(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UserForgerName;                                           // 0x00A4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Description;                                              // 0x00B0(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     EquipmentTemplate;                                        // 0x00BC(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.HeroAndEquipment_37
// 0x0120
struct FHeroAndEquipment_37
{
	struct FHeroSaveInfo                               HeroData;                                                 // 0x0000(0x0114) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_37>               Equipment;                                                // 0x0114(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.AchievementInfo_38
// 0x003C
struct FAchievementInfo_38
{
	unsigned char                                      Achievements[0x3C];                                       // 0x0000(0x0001)
};

// ScriptStruct UDKGame.DunDefGameStorage.CoreUnlockInfo_43
// 0x0020
struct FCoreUnlockInfo_43
{
	unsigned char                                      CoreUnlocks[0x20];                                        // 0x0000(0x0001)
};

// ScriptStruct UDKGame.DunDefGameStorage.LevelProgressInfo_38
// 0x000D
struct FLevelProgressInfo_38
{
	struct FString                                     campaignTag;                                              // 0x0000(0x000C) (NeedCtorLink)
	unsigned char                                      difficultyMask;                                           // 0x000C(0x0001)
};

// ScriptStruct UDKGame.DunDefGameStorage.ItemBoxInfo_44
// 0x0004
struct FItemBoxInfo_44
{
	int                                                StoredMana;                                               // 0x0000(0x0004)
};

// ScriptStruct UDKGame.DunDefGameStorage.ShopSetSaveInfo_37
// 0x000C
struct FShopSetSaveInfo_37
{
	TArray<struct FEquipmentSaveInfo_37>               Shop_Equipment;                                           // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage_35
// 0x01D8
struct FGameStorage_35
{
	struct FOptionsInfo_36                             GameOptions;                                              // 0x0000(0x00F0) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_37>                Heroes;                                                   // 0x00F0(0x000C) (NeedCtorLink)
	struct FAchievementInfo_38                         Achievements;                                             // 0x00FC(0x003C)
	struct FCoreUnlockInfo_43                          Core_Info;                                                // 0x0138(0x0020)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x0158(0x0034)
	TArray<struct FLevelProgressInfo_38>               Beaten_Levels;                                            // 0x018C(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo_38>               Unlocked_Levels;                                          // 0x0198(0x000C) (NeedCtorLink)
	struct FItemBoxInfo_44                             Item_Box;                                                 // 0x01A4(0x0004)
	TArray<struct FEquipmentSaveInfo_37>               Equipment;                                                // 0x01A8(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_37>               Hero_Equipment;                                           // 0x01B4(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_37>               Lobby_Equipment;                                          // 0x01C0(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_37>                 Shop_Sets;                                                // 0x01CC(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.PlayerShopEntrySaveInfo_37
// 0x00CC
struct FPlayerShopEntrySaveInfo_37
{
	struct FEquipmentSaveInfo_37                       EquipmentEntry;                                           // 0x0000(0x00C8) (NeedCtorLink)
	int                                                SellAmount;                                               // 0x00C8(0x0004)
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage_36
// 0x01E4
struct FGameStorage_36
{
	struct FOptionsInfo_36                             GameOptions;                                              // 0x0000(0x00F0) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_37>                Heroes;                                                   // 0x00F0(0x000C) (NeedCtorLink)
	struct FAchievementInfo_38                         Achievements;                                             // 0x00FC(0x003C)
	struct FCoreUnlockInfo_43                          Core_Info;                                                // 0x0138(0x0020)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x0158(0x0034)
	TArray<struct FLevelProgressInfo_38>               Beaten_Levels;                                            // 0x018C(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo_38>               Unlocked_Levels;                                          // 0x0198(0x000C) (NeedCtorLink)
	struct FItemBoxInfo_44                             Item_Box;                                                 // 0x01A4(0x0004)
	TArray<struct FEquipmentSaveInfo_37>               Equipment;                                                // 0x01A8(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_37>               Hero_Equipment;                                           // 0x01B4(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_37>               Lobby_Equipment;                                          // 0x01C0(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_37>                 Shop_Sets;                                                // 0x01CC(0x000C) (NeedCtorLink)
	TArray<struct FPlayerShopEntrySaveInfo_37>         Player_Shop_Entries;                                      // 0x01D8(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.OptionsInfo_42
// 0x00EC
struct FOptionsInfo_42
{
	struct FOptionsFixedStruct_42                      fixedSizeOptions;                                         // 0x0000(0x008C) (NeedCtorLink)
	struct FString                                     Resolution;                                               // 0x008C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     lastLevelTag;                                             // 0x0098(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UserName;                                                 // 0x00A4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Password;                                                 // 0x00B0(0x000C) (AlwaysInit, NeedCtorLink)
	struct FSearchFilterSettings                       searchFilters;                                            // 0x00BC(0x0024) (NeedCtorLink)
	TArray<int>                                        installedDLCEquipments;                                   // 0x00E0(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage_37
// 0x01E0
struct FGameStorage_37
{
	struct FOptionsInfo_42                             GameOptions;                                              // 0x0000(0x00EC) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_37>                Heroes;                                                   // 0x00EC(0x000C) (NeedCtorLink)
	struct FAchievementInfo_38                         Achievements;                                             // 0x00F8(0x003C)
	struct FCoreUnlockInfo_43                          Core_Info;                                                // 0x0134(0x0020)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x0154(0x0034)
	TArray<struct FLevelProgressInfo_38>               Beaten_Levels;                                            // 0x0188(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo_38>               Unlocked_Levels;                                          // 0x0194(0x000C) (NeedCtorLink)
	struct FItemBoxInfo_44                             Item_Box;                                                 // 0x01A0(0x0004)
	TArray<struct FEquipmentSaveInfo_37>               Equipment;                                                // 0x01A4(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_37>               Hero_Equipment;                                           // 0x01B0(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_37>               Lobby_Equipment;                                          // 0x01BC(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_37>                 Shop_Sets;                                                // 0x01C8(0x000C) (NeedCtorLink)
	TArray<struct FPlayerShopEntrySaveInfo_37>         Player_Shop_Entries;                                      // 0x01D4(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.EquipmentSaveInfo_38
// 0x00E8
struct FEquipmentSaveInfo_38
{
	unsigned long                                      IsInitialized : 1;                                        // 0x0000(0x0004)
	unsigned char                                      DamageReductionIndex[0x4];                                // 0x0004(0x0001)
	unsigned char                                      DamageReductionPercentage[0x4];                           // 0x0008(0x0001)
	int                                                StatModifiers[0xB];                                       // 0x000C(0x0004)
	int                                                WeaponDamageBonus;                                        // 0x0038(0x0004)
	unsigned char                                      WeaponNumberOfProjectilesBonus;                           // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	int                                                WeaponSpeedOfProjectilesBonus;                            // 0x0040(0x0004)
	unsigned char                                      WeaponAdditionalDamageTypeIndex;                          // 0x0044(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	int                                                WeaponAdditionalDamageAmount;                             // 0x0048(0x0004)
	float                                              WeaponDrawScaleMultiplier;                                // 0x004C(0x0004)
	float                                              WeaponSwingSpeedMultiplier;                               // 0x0050(0x0004)
	unsigned char                                      Level;                                                    // 0x0054(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                StoredMana;                                               // 0x0058(0x0004)
	unsigned char                                      WeaponBlockingBonus;                                      // 0x005C(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	int                                                WeaponAltDamageBonus;                                     // 0x0060(0x0004)
	int                                                WeaponClipAmmoBonus;                                      // 0x0064(0x0004)
	unsigned char                                      WeaponReloadSpeedBonus;                                   // 0x0068(0x0001)
	unsigned char                                      WeaponKnockbackBonus;                                     // 0x0069(0x0001)
	unsigned char                                      WeaponChargeSpeedBonus;                                   // 0x006A(0x0001)
	unsigned char                                      WeaponShotsPerSecondBonus;                                // 0x006B(0x0001)
	unsigned char                                      NameIndex_Base;                                           // 0x006C(0x0001)
	unsigned char                                      NameIndex_DamageReduction;                                // 0x006D(0x0001)
	unsigned char                                      NameIndex_QualityDescriptor;                              // 0x006E(0x0001)
	unsigned char                                      PrimaryColorSet;                                          // 0x006F(0x0001)
	unsigned char                                      SecondaryColorSet;                                        // 0x0070(0x0001)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                EquipmentID1;                                             // 0x0074(0x0004)
	int                                                EquipmentID2;                                             // 0x0078(0x0004)
	int                                                MinimumSellWorth;                                         // 0x007C(0x0004)
	unsigned char                                      MaxEquipmentLevel;                                        // 0x0080(0x0001)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                DroppedLocationX;                                         // 0x0084(0x0004)
	int                                                DroppedLocationY;                                         // 0x0088(0x0004)
	int                                                DroppedLocationZ;                                         // 0x008C(0x0004)
	unsigned char                                      bCanBeUpgraded;                                           // 0x0090(0x0001)
	unsigned char                                      AllowRenamingAtMaxUpgrade;                                // 0x0091(0x0001)
	unsigned char                                      bCantBeDropped;                                           // 0x0092(0x0001)
	unsigned char                                      bCantBeSold;                                              // 0x0093(0x0001)
	unsigned char                                      bAutoLockInItemBox;                                       // 0x0094(0x0001)
	unsigned char                                      bDidOnetimeEffect;                                        // 0x0095(0x0001)
	unsigned char                                      bIsLocked;                                                // 0x0096(0x0001)
	unsigned char                                      ManualLR;                                                 // 0x0097(0x0001)
	struct FLinearColor                                PrimaryColorOverride;                                     // 0x0098(0x0010)
	struct FLinearColor                                SecondaryColorOverride;                                   // 0x00A8(0x0010)
	struct FString                                     UserEquipmentName;                                        // 0x00B8(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UserForgerName;                                           // 0x00C4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Description;                                              // 0x00D0(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     EquipmentTemplate;                                        // 0x00DC(0x000C) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.HeroAndEquipment_38
// 0x0120
struct FHeroAndEquipment_38
{
	struct FHeroSaveInfo                               HeroData;                                                 // 0x0000(0x0114) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_38>               Equipment;                                                // 0x0114(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.ShopSetSaveInfo_38
// 0x000C
struct FShopSetSaveInfo_38
{
	TArray<struct FEquipmentSaveInfo_38>               Shop_Equipment;                                           // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.PlayerShopEntrySaveInfo_38
// 0x00EC
struct FPlayerShopEntrySaveInfo_38
{
	struct FEquipmentSaveInfo_38                       EquipmentEntry;                                           // 0x0000(0x00E8) (NeedCtorLink)
	int                                                SellAmount;                                               // 0x00E8(0x0004)
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage_38
// 0x01E0
struct FGameStorage_38
{
	struct FOptionsInfo_42                             GameOptions;                                              // 0x0000(0x00EC) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_38>                Heroes;                                                   // 0x00EC(0x000C) (NeedCtorLink)
	struct FAchievementInfo_38                         Achievements;                                             // 0x00F8(0x003C)
	struct FCoreUnlockInfo_43                          Core_Info;                                                // 0x0134(0x0020)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x0154(0x0034)
	TArray<struct FLevelProgressInfo_38>               Beaten_Levels;                                            // 0x0188(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo_38>               Unlocked_Levels;                                          // 0x0194(0x000C) (NeedCtorLink)
	struct FItemBoxInfo_44                             Item_Box;                                                 // 0x01A0(0x0004)
	TArray<struct FEquipmentSaveInfo_38>               Equipment;                                                // 0x01A4(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_38>               Hero_Equipment;                                           // 0x01B0(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_38>               Lobby_Equipment;                                          // 0x01BC(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_38>                 Shop_Sets;                                                // 0x01C8(0x000C) (NeedCtorLink)
	TArray<struct FPlayerShopEntrySaveInfo_38>         Player_Shop_Entries;                                      // 0x01D4(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.EquipmentSaveInfo_39
// 0x00F0
struct FEquipmentSaveInfo_39
{
	unsigned long                                      IsInitialized : 1;                                        // 0x0000(0x0004)
	unsigned char                                      DamageReductionIndex[0x4];                                // 0x0004(0x0001)
	unsigned char                                      DamageReductionPercentage[0x4];                           // 0x0008(0x0001)
	int                                                StatModifiers[0xB];                                       // 0x000C(0x0004)
	int                                                WeaponDamageBonus;                                        // 0x0038(0x0004)
	unsigned char                                      WeaponNumberOfProjectilesBonus;                           // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	int                                                WeaponSpeedOfProjectilesBonus;                            // 0x0040(0x0004)
	unsigned char                                      WeaponAdditionalDamageTypeIndex;                          // 0x0044(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	int                                                WeaponAdditionalDamageAmount;                             // 0x0048(0x0004)
	float                                              WeaponDrawScaleMultiplier;                                // 0x004C(0x0004)
	float                                              WeaponSwingSpeedMultiplier;                               // 0x0050(0x0004)
	unsigned char                                      Level;                                                    // 0x0054(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                StoredMana;                                               // 0x0058(0x0004)
	unsigned char                                      WeaponBlockingBonus;                                      // 0x005C(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	int                                                WeaponAltDamageBonus;                                     // 0x0060(0x0004)
	int                                                WeaponClipAmmoBonus;                                      // 0x0064(0x0004)
	unsigned char                                      WeaponReloadSpeedBonus;                                   // 0x0068(0x0001)
	unsigned char                                      WeaponKnockbackBonus;                                     // 0x0069(0x0001)
	unsigned char                                      WeaponChargeSpeedBonus;                                   // 0x006A(0x0001)
	unsigned char                                      WeaponShotsPerSecondBonus;                                // 0x006B(0x0001)
	unsigned char                                      NameIndex_Base;                                           // 0x006C(0x0001)
	unsigned char                                      NameIndex_DamageReduction;                                // 0x006D(0x0001)
	unsigned char                                      NameIndex_QualityDescriptor;                              // 0x006E(0x0001)
	unsigned char                                      PrimaryColorSet;                                          // 0x006F(0x0001)
	unsigned char                                      SecondaryColorSet;                                        // 0x0070(0x0001)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                EquipmentID1;                                             // 0x0074(0x0004)
	int                                                EquipmentID2;                                             // 0x0078(0x0004)
	int                                                MinimumSellWorth;                                         // 0x007C(0x0004)
	unsigned char                                      MaxEquipmentLevel;                                        // 0x0080(0x0001)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                DroppedLocationX;                                         // 0x0084(0x0004)
	int                                                DroppedLocationY;                                         // 0x0088(0x0004)
	int                                                DroppedLocationZ;                                         // 0x008C(0x0004)
	unsigned char                                      bCanBeUpgraded;                                           // 0x0090(0x0001)
	unsigned char                                      AllowRenamingAtMaxUpgrade;                                // 0x0091(0x0001)
	unsigned char                                      bCantBeDropped;                                           // 0x0092(0x0001)
	unsigned char                                      bCantBeSold;                                              // 0x0093(0x0001)
	unsigned char                                      bAutoLockInItemBox;                                       // 0x0094(0x0001)
	unsigned char                                      bDidOnetimeEffect;                                        // 0x0095(0x0001)
	unsigned char                                      bIsLocked;                                                // 0x0096(0x0001)
	unsigned char                                      ManualLR;                                                 // 0x0097(0x0001)
	struct FLinearColor                                PrimaryColorOverride;                                     // 0x0098(0x0010)
	struct FLinearColor                                SecondaryColorOverride;                                   // 0x00A8(0x0010)
	struct FString                                     UserEquipmentName;                                        // 0x00B8(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UserForgerName;                                           // 0x00C4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Description;                                              // 0x00D0(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     EquipmentTemplate;                                        // 0x00DC(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                FolderID;                                                 // 0x00E8(0x0004)
	unsigned long                                      bIsSecondary : 1;                                         // 0x00EC(0x0004)
};

// ScriptStruct UDKGame.DunDefGameStorage.HeroAndEquipment_39
// 0x0120
struct FHeroAndEquipment_39
{
	struct FHeroSaveInfo                               HeroData;                                                 // 0x0000(0x0114) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_39>               Equipment;                                                // 0x0114(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.AchievementInfo_40
// 0x0050
struct FAchievementInfo_40
{
	unsigned char                                      Achievements[0x50];                                       // 0x0000(0x0001)
};

// ScriptStruct UDKGame.DunDefGameStorage.ShopSetSaveInfo_39
// 0x000C
struct FShopSetSaveInfo_39
{
	TArray<struct FEquipmentSaveInfo_39>               Shop_Equipment;                                           // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.PlayerShopEntrySaveInfo_39
// 0x00F4
struct FPlayerShopEntrySaveInfo_39
{
	struct FEquipmentSaveInfo_39                       EquipmentEntry;                                           // 0x0000(0x00F0) (NeedCtorLink)
	int                                                SellAmount;                                               // 0x00F0(0x0004)
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage_39
// 0x020C
struct FGameStorage_39
{
	struct FOptionsInfo_42                             GameOptions;                                              // 0x0000(0x00EC) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_39>                Heroes;                                                   // 0x00EC(0x000C) (NeedCtorLink)
	struct FAchievementInfo_40                         Achievements;                                             // 0x00F8(0x0050)
	struct FCoreUnlockInfo_43                          Core_Info;                                                // 0x0148(0x0020)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x0168(0x0034)
	TArray<struct FLevelProgressInfo>                  Beaten_Levels;                                            // 0x019C(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo>                  Unlocked_Levels;                                          // 0x01A8(0x000C) (NeedCtorLink)
	struct FItemBoxInfo_44                             Item_Box;                                                 // 0x01B4(0x0004)
	TArray<struct FEquipmentSaveInfo_39>               Equipment;                                                // 0x01B8(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_39>               Hero_Equipment;                                           // 0x01C4(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_39>               Lobby_Equipment;                                          // 0x01D0(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_39>                 Shop_Sets;                                                // 0x01DC(0x000C) (NeedCtorLink)
	TArray<struct FPlayerShopEntrySaveInfo_39>         Player_Shop_Entries;                                      // 0x01E8(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         ItemFolders;                                              // 0x01F4(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         LocalShopItemFolders;                                     // 0x0200(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.EquipmentSaveInfo_40
// 0x00F4
struct FEquipmentSaveInfo_40
{
	unsigned long                                      IsInitialized : 1;                                        // 0x0000(0x0004)
	unsigned char                                      DamageReductionIndex[0x4];                                // 0x0004(0x0001)
	unsigned char                                      DamageReductionPercentage[0x4];                           // 0x0008(0x0001)
	int                                                StatModifiers[0xB];                                       // 0x000C(0x0004)
	int                                                WeaponDamageBonus;                                        // 0x0038(0x0004)
	unsigned char                                      WeaponNumberOfProjectilesBonus;                           // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	int                                                WeaponSpeedOfProjectilesBonus;                            // 0x0040(0x0004)
	unsigned char                                      WeaponAdditionalDamageTypeIndex;                          // 0x0044(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	int                                                WeaponAdditionalDamageAmount;                             // 0x0048(0x0004)
	float                                              WeaponDrawScaleMultiplier;                                // 0x004C(0x0004)
	float                                              WeaponSwingSpeedMultiplier;                               // 0x0050(0x0004)
	unsigned char                                      Level;                                                    // 0x0054(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                StoredMana;                                               // 0x0058(0x0004)
	unsigned char                                      WeaponBlockingBonus;                                      // 0x005C(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	int                                                WeaponAltDamageBonus;                                     // 0x0060(0x0004)
	int                                                WeaponClipAmmoBonus;                                      // 0x0064(0x0004)
	unsigned char                                      WeaponReloadSpeedBonus;                                   // 0x0068(0x0001)
	unsigned char                                      WeaponKnockbackBonus;                                     // 0x0069(0x0001)
	unsigned char                                      WeaponChargeSpeedBonus;                                   // 0x006A(0x0001)
	unsigned char                                      WeaponShotsPerSecondBonus;                                // 0x006B(0x0001)
	unsigned char                                      NameIndex_Base;                                           // 0x006C(0x0001)
	unsigned char                                      NameIndex_DamageReduction;                                // 0x006D(0x0001)
	unsigned char                                      NameIndex_QualityDescriptor;                              // 0x006E(0x0001)
	unsigned char                                      PrimaryColorSet;                                          // 0x006F(0x0001)
	unsigned char                                      SecondaryColorSet;                                        // 0x0070(0x0001)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                EquipmentID1;                                             // 0x0074(0x0004)
	int                                                EquipmentID2;                                             // 0x0078(0x0004)
	int                                                MinimumSellWorth;                                         // 0x007C(0x0004)
	int                                                MaximumSellWorth;                                         // 0x0080(0x0004)
	unsigned char                                      MaxEquipmentLevel;                                        // 0x0084(0x0001)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	int                                                DroppedLocationX;                                         // 0x0088(0x0004)
	int                                                DroppedLocationY;                                         // 0x008C(0x0004)
	int                                                DroppedLocationZ;                                         // 0x0090(0x0004)
	unsigned char                                      bCanBeUpgraded;                                           // 0x0094(0x0001)
	unsigned char                                      AllowRenamingAtMaxUpgrade;                                // 0x0095(0x0001)
	unsigned char                                      bCantBeDropped;                                           // 0x0096(0x0001)
	unsigned char                                      bCantBeSold;                                              // 0x0097(0x0001)
	unsigned char                                      bAutoLockInItemBox;                                       // 0x0098(0x0001)
	unsigned char                                      bDidOnetimeEffect;                                        // 0x0099(0x0001)
	unsigned char                                      bIsLocked;                                                // 0x009A(0x0001)
	unsigned char                                      ManualLR;                                                 // 0x009B(0x0001)
	struct FLinearColor                                PrimaryColorOverride;                                     // 0x009C(0x0010)
	struct FLinearColor                                SecondaryColorOverride;                                   // 0x00AC(0x0010)
	struct FString                                     UserEquipmentName;                                        // 0x00BC(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UserForgerName;                                           // 0x00C8(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Description;                                              // 0x00D4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     EquipmentTemplate;                                        // 0x00E0(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                FolderID;                                                 // 0x00EC(0x0004)
	unsigned long                                      bIsSecondary : 1;                                         // 0x00F0(0x0004)
};

// ScriptStruct UDKGame.DunDefGameStorage.HeroAndEquipment_40
// 0x0120
struct FHeroAndEquipment_40
{
	struct FHeroSaveInfo                               HeroData;                                                 // 0x0000(0x0114) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_40>               Equipment;                                                // 0x0114(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.ShopSetSaveInfo_40
// 0x000C
struct FShopSetSaveInfo_40
{
	TArray<struct FEquipmentSaveInfo_40>               Shop_Equipment;                                           // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.PlayerShopEntrySaveInfo_40
// 0x00F8
struct FPlayerShopEntrySaveInfo_40
{
	struct FEquipmentSaveInfo_40                       EquipmentEntry;                                           // 0x0000(0x00F4) (NeedCtorLink)
	int                                                SellAmount;                                               // 0x00F4(0x0004)
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage_40
// 0x020C
struct FGameStorage_40
{
	struct FOptionsInfo_42                             GameOptions;                                              // 0x0000(0x00EC) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_40>                Heroes;                                                   // 0x00EC(0x000C) (NeedCtorLink)
	struct FAchievementInfo_40                         Achievements;                                             // 0x00F8(0x0050)
	struct FCoreUnlockInfo_43                          Core_Info;                                                // 0x0148(0x0020)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x0168(0x0034)
	TArray<struct FLevelProgressInfo>                  Beaten_Levels;                                            // 0x019C(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo>                  Unlocked_Levels;                                          // 0x01A8(0x000C) (NeedCtorLink)
	struct FItemBoxInfo_44                             Item_Box;                                                 // 0x01B4(0x0004)
	TArray<struct FEquipmentSaveInfo_40>               Equipment;                                                // 0x01B8(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_40>               Hero_Equipment;                                           // 0x01C4(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_40>               Lobby_Equipment;                                          // 0x01D0(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_40>                 Shop_Sets;                                                // 0x01DC(0x000C) (NeedCtorLink)
	TArray<struct FPlayerShopEntrySaveInfo_40>         Player_Shop_Entries;                                      // 0x01E8(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         ItemFolders;                                              // 0x01F4(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         LocalShopItemFolders;                                     // 0x0200(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.EquipmentSaveInfo_41
// 0x00F4
struct FEquipmentSaveInfo_41
{
	unsigned long                                      IsInitialized : 1;                                        // 0x0000(0x0004)
	unsigned char                                      DamageReductionIndex[0x4];                                // 0x0004(0x0001)
	unsigned char                                      DamageReductionPercentage[0x4];                           // 0x0008(0x0001)
	int                                                StatModifiers[0xB];                                       // 0x000C(0x0004)
	int                                                WeaponDamageBonus;                                        // 0x0038(0x0004)
	unsigned char                                      WeaponNumberOfProjectilesBonus;                           // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	int                                                WeaponSpeedOfProjectilesBonus;                            // 0x0040(0x0004)
	unsigned char                                      WeaponAdditionalDamageTypeIndex;                          // 0x0044(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	int                                                WeaponAdditionalDamageAmount;                             // 0x0048(0x0004)
	float                                              WeaponDrawScaleMultiplier;                                // 0x004C(0x0004)
	float                                              WeaponSwingSpeedMultiplier;                               // 0x0050(0x0004)
	unsigned char                                      Level;                                                    // 0x0054(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	int                                                StoredMana;                                               // 0x0058(0x0004)
	unsigned char                                      WeaponBlockingBonus;                                      // 0x005C(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	int                                                WeaponAltDamageBonus;                                     // 0x0060(0x0004)
	int                                                WeaponClipAmmoBonus;                                      // 0x0064(0x0004)
	unsigned char                                      WeaponReloadSpeedBonus;                                   // 0x0068(0x0001)
	unsigned char                                      WeaponKnockbackBonus;                                     // 0x0069(0x0001)
	unsigned char                                      WeaponChargeSpeedBonus;                                   // 0x006A(0x0001)
	unsigned char                                      WeaponShotsPerSecondBonus;                                // 0x006B(0x0001)
	unsigned char                                      NameIndex_Base;                                           // 0x006C(0x0001)
	unsigned char                                      NameIndex_DamageReduction;                                // 0x006D(0x0001)
	unsigned char                                      NameIndex_QualityDescriptor;                              // 0x006E(0x0001)
	unsigned char                                      PrimaryColorSet;                                          // 0x006F(0x0001)
	unsigned char                                      SecondaryColorSet;                                        // 0x0070(0x0001)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                EquipmentID1;                                             // 0x0074(0x0004)
	int                                                EquipmentID2;                                             // 0x0078(0x0004)
	int                                                MinimumSellWorth;                                         // 0x007C(0x0004)
	int                                                MaximumSellWorth;                                         // 0x0080(0x0004)
	int                                                MaxEquipmentLevel;                                        // 0x0084(0x0004)
	int                                                DroppedLocationX;                                         // 0x0088(0x0004)
	int                                                DroppedLocationY;                                         // 0x008C(0x0004)
	int                                                DroppedLocationZ;                                         // 0x0090(0x0004)
	unsigned char                                      bCanBeUpgraded;                                           // 0x0094(0x0001)
	unsigned char                                      AllowRenamingAtMaxUpgrade;                                // 0x0095(0x0001)
	unsigned char                                      bCantBeDropped;                                           // 0x0096(0x0001)
	unsigned char                                      bCantBeSold;                                              // 0x0097(0x0001)
	unsigned char                                      bAutoLockInItemBox;                                       // 0x0098(0x0001)
	unsigned char                                      bDidOnetimeEffect;                                        // 0x0099(0x0001)
	unsigned char                                      bIsLocked;                                                // 0x009A(0x0001)
	unsigned char                                      ManualLR;                                                 // 0x009B(0x0001)
	struct FLinearColor                                PrimaryColorOverride;                                     // 0x009C(0x0010)
	struct FLinearColor                                SecondaryColorOverride;                                   // 0x00AC(0x0010)
	struct FString                                     UserEquipmentName;                                        // 0x00BC(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UserForgerName;                                           // 0x00C8(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Description;                                              // 0x00D4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     EquipmentTemplate;                                        // 0x00E0(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                FolderID;                                                 // 0x00EC(0x0004)
	unsigned long                                      bIsSecondary : 1;                                         // 0x00F0(0x0004)
};

// ScriptStruct UDKGame.DunDefGameStorage.HeroAndEquipment_41
// 0x0120
struct FHeroAndEquipment_41
{
	struct FHeroSaveInfo                               HeroData;                                                 // 0x0000(0x0114) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_41>               Equipment;                                                // 0x0114(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.AchievementInfo_43
// 0x0064
struct FAchievementInfo_43
{
	unsigned char                                      Achievements[0x64];                                       // 0x0000(0x0001)
};

// ScriptStruct UDKGame.DunDefGameStorage.ShopSetSaveInfo_41
// 0x000C
struct FShopSetSaveInfo_41
{
	TArray<struct FEquipmentSaveInfo_41>               Shop_Equipment;                                           // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.PlayerShopEntrySaveInfo_41
// 0x00F8
struct FPlayerShopEntrySaveInfo_41
{
	struct FEquipmentSaveInfo_41                       EquipmentEntry;                                           // 0x0000(0x00F4) (NeedCtorLink)
	int                                                SellAmount;                                               // 0x00F4(0x0004)
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage_41
// 0x0220
struct FGameStorage_41
{
	struct FOptionsInfo_42                             GameOptions;                                              // 0x0000(0x00EC) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_41>                Heroes;                                                   // 0x00EC(0x000C) (NeedCtorLink)
	struct FAchievementInfo_43                         Achievements;                                             // 0x00F8(0x0064)
	struct FCoreUnlockInfo_43                          Core_Info;                                                // 0x015C(0x0020)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x017C(0x0034)
	TArray<struct FLevelProgressInfo>                  Beaten_Levels;                                            // 0x01B0(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo>                  Unlocked_Levels;                                          // 0x01BC(0x000C) (NeedCtorLink)
	struct FItemBoxInfo_44                             Item_Box;                                                 // 0x01C8(0x0004)
	TArray<struct FEquipmentSaveInfo_41>               Equipment;                                                // 0x01CC(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_41>               Hero_Equipment;                                           // 0x01D8(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_41>               Lobby_Equipment;                                          // 0x01E4(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_41>                 Shop_Sets;                                                // 0x01F0(0x000C) (NeedCtorLink)
	TArray<struct FPlayerShopEntrySaveInfo_41>         Player_Shop_Entries;                                      // 0x01FC(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         ItemFolders;                                              // 0x0208(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         LocalShopItemFolders;                                     // 0x0214(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.OptionsFixedStruct_45
// 0x0090
struct FOptionsFixedStruct_45
{
	unsigned long                                      AutoShowLevelUp : 1;                                      // 0x0000(0x0004)
	unsigned long                                      AllowFriendlyFire : 1;                                    // 0x0000(0x0004)
	unsigned long                                      UseGamepad : 1;                                           // 0x0000(0x0004)
	unsigned long                                      AutoAdjustCameraForPhase : 1;                             // 0x0000(0x0004)
	unsigned long                                      ShowTutorials : 1;                                        // 0x0000(0x0004)
	int                                                ShownTutorials[0xA];                                      // 0x0004(0x0004)
	float                                              VolumeSFX;                                                // 0x002C(0x0004)
	float                                              VolumeMusic;                                              // 0x0030(0x0004)
	float                                              VoicePlayVolume;                                          // 0x0034(0x0004)
	float                                              VoiceCaptureVolume;                                       // 0x0038(0x0004)
	unsigned long                                      PushToTalk : 1;                                           // 0x003C(0x0004)
	unsigned long                                      IncomingVoice : 1;                                        // 0x003C(0x0004)
	unsigned long                                      OutgoingVoice : 1;                                        // 0x003C(0x0004)
	float                                              Gamma;                                                    // 0x0040(0x0004)
	float                                              SaturationIntensity;                                      // 0x0044(0x0004)
	float                                              UIScalePercent;                                           // 0x0048(0x0004)
	unsigned long                                      PostProcessing : 1;                                       // 0x004C(0x0004)
	unsigned long                                      ShowFloatingDamageNumbers : 1;                            // 0x004C(0x0004)
	unsigned long                                      bRightStickTurnsCameraScheme : 1;                         // 0x004C(0x0004)
	unsigned long                                      bInvertCameraPitch : 1;                                   // 0x004C(0x0004)
	unsigned long                                      bSwapTriggersAndButtons : 1;                              // 0x004C(0x0004)
	unsigned long                                      FullScreen : 1;                                           // 0x004C(0x0004)
	unsigned char                                      SplitScreenConfig;                                        // 0x0050(0x0001)
	unsigned char                                      CurrentDifficulty;                                        // 0x0051(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	unsigned long                                      LobbyItemLock : 1;                                        // 0x0054(0x0004)
	unsigned long                                      bDefaultChaseCamera : 1;                                  // 0x0054(0x0004)
	float                                              DefaultCameraTargetDistance;                              // 0x0058(0x0004)
	float                                              DefaultPlacingTowerCameraDistance;                        // 0x005C(0x0004)
	float                                              MouseCameraRotationSpeed;                                 // 0x0060(0x0004)
	int                                                MinimumLevel;                                             // 0x0064(0x0004)
	unsigned long                                      SavedLoginInfo : 1;                                       // 0x0068(0x0004)
	TArray<unsigned char>                              CustomGameMetaFlags;                                      // 0x006C(0x000C) (NeedCtorLink)
	TArray<int>                                        CustomeUnlocks;                                           // 0x0078(0x000C) (NeedCtorLink)
	TArray<int>                                        HeroUnlocks;                                              // 0x0084(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.OptionsInfo_45
// 0x00F0
struct FOptionsInfo_45
{
	struct FOptionsFixedStruct_45                      fixedSizeOptions;                                         // 0x0000(0x0090) (NeedCtorLink)
	struct FString                                     Resolution;                                               // 0x0090(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     lastLevelTag;                                             // 0x009C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UserName;                                                 // 0x00A8(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Password;                                                 // 0x00B4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FSearchFilterSettings                       searchFilters;                                            // 0x00C0(0x0024) (NeedCtorLink)
	TArray<int>                                        installedDLCEquipments;                                   // 0x00E4(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.EquipmentSaveInfo_46
// 0x00F4
struct FEquipmentSaveInfo_46
{
	unsigned long                                      IsInitialized : 1;                                        // 0x0000(0x0004)
	unsigned char                                      DamageReductionIndex[0x4];                                // 0x0004(0x0001)
	unsigned char                                      DamageReductionPercentage[0x4];                           // 0x0008(0x0001)
	int                                                StatModifiers[0xB];                                       // 0x000C(0x0004)
	int                                                WeaponDamageBonus;                                        // 0x0038(0x0004)
	unsigned char                                      WeaponNumberOfProjectilesBonus;                           // 0x003C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	int                                                WeaponSpeedOfProjectilesBonus;                            // 0x0040(0x0004)
	unsigned char                                      WeaponAdditionalDamageTypeIndex;                          // 0x0044(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	int                                                WeaponAdditionalDamageAmount;                             // 0x0048(0x0004)
	float                                              WeaponDrawScaleMultiplier;                                // 0x004C(0x0004)
	float                                              WeaponSwingSpeedMultiplier;                               // 0x0050(0x0004)
	int                                                Level;                                                    // 0x0054(0x0004)
	int                                                StoredMana;                                               // 0x0058(0x0004)
	unsigned char                                      WeaponBlockingBonus;                                      // 0x005C(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	int                                                WeaponAltDamageBonus;                                     // 0x0060(0x0004)
	int                                                WeaponClipAmmoBonus;                                      // 0x0064(0x0004)
	unsigned char                                      WeaponReloadSpeedBonus;                                   // 0x0068(0x0001)
	unsigned char                                      WeaponKnockbackBonus;                                     // 0x0069(0x0001)
	unsigned char                                      WeaponChargeSpeedBonus;                                   // 0x006A(0x0001)
	unsigned char                                      WeaponShotsPerSecondBonus;                                // 0x006B(0x0001)
	unsigned char                                      NameIndex_Base;                                           // 0x006C(0x0001)
	unsigned char                                      NameIndex_DamageReduction;                                // 0x006D(0x0001)
	unsigned char                                      NameIndex_QualityDescriptor;                              // 0x006E(0x0001)
	unsigned char                                      PrimaryColorSet;                                          // 0x006F(0x0001)
	unsigned char                                      SecondaryColorSet;                                        // 0x0070(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                EquipmentID1;                                             // 0x0074(0x0004)
	int                                                EquipmentID2;                                             // 0x0078(0x0004)
	int                                                MinimumSellWorth;                                         // 0x007C(0x0004)
	int                                                MaximumSellWorth;                                         // 0x0080(0x0004)
	int                                                MaxEquipmentLevel;                                        // 0x0084(0x0004)
	int                                                DroppedLocationX;                                         // 0x0088(0x0004)
	int                                                DroppedLocationY;                                         // 0x008C(0x0004)
	int                                                DroppedLocationZ;                                         // 0x0090(0x0004)
	unsigned char                                      bCanBeUpgraded;                                           // 0x0094(0x0001)
	unsigned char                                      AllowRenamingAtMaxUpgrade;                                // 0x0095(0x0001)
	unsigned char                                      bCantBeDropped;                                           // 0x0096(0x0001)
	unsigned char                                      bCantBeSold;                                              // 0x0097(0x0001)
	unsigned char                                      bAutoLockInItemBox;                                       // 0x0098(0x0001)
	unsigned char                                      bDidOnetimeEffect;                                        // 0x0099(0x0001)
	unsigned char                                      bIsLocked;                                                // 0x009A(0x0001)
	unsigned char                                      ManualLR;                                                 // 0x009B(0x0001)
	struct FLinearColor                                PrimaryColorOverride;                                     // 0x009C(0x0010)
	struct FLinearColor                                SecondaryColorOverride;                                   // 0x00AC(0x0010)
	struct FString                                     UserEquipmentName;                                        // 0x00BC(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UserForgerName;                                           // 0x00C8(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Description;                                              // 0x00D4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     EquipmentTemplate;                                        // 0x00E0(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                FolderID;                                                 // 0x00EC(0x0004)
	unsigned long                                      bIsSecondary : 1;                                         // 0x00F0(0x0004)
};

// ScriptStruct UDKGame.DunDefGameStorage.HeroAndEquipment_46
// 0x0120
struct FHeroAndEquipment_46
{
	struct FHeroSaveInfo                               HeroData;                                                 // 0x0000(0x0114) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_46>               Equipment;                                                // 0x0114(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.ShopSetSaveInfo_46
// 0x000C
struct FShopSetSaveInfo_46
{
	TArray<struct FEquipmentSaveInfo_46>               Shop_Equipment;                                           // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.PlayerShopEntrySaveInfo_46
// 0x00F8
struct FPlayerShopEntrySaveInfo_46
{
	struct FEquipmentSaveInfo_46                       EquipmentEntry;                                           // 0x0000(0x00F4) (NeedCtorLink)
	int                                                SellAmount;                                               // 0x00F4(0x0004)
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage_43
// 0x0224
struct FGameStorage_43
{
	struct FOptionsInfo_45                             GameOptions;                                              // 0x0000(0x00F0) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_46>                Heroes;                                                   // 0x00F0(0x000C) (NeedCtorLink)
	struct FAchievementInfo_43                         Achievements;                                             // 0x00FC(0x0064)
	struct FCoreUnlockInfo_43                          Core_Info;                                                // 0x0160(0x0020)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x0180(0x0034)
	TArray<struct FLevelProgressInfo>                  Beaten_Levels;                                            // 0x01B4(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo>                  Unlocked_Levels;                                          // 0x01C0(0x000C) (NeedCtorLink)
	struct FItemBoxInfo_44                             Item_Box;                                                 // 0x01CC(0x0004)
	TArray<struct FEquipmentSaveInfo_46>               Equipment;                                                // 0x01D0(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_46>               Hero_Equipment;                                           // 0x01DC(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_46>               Lobby_Equipment;                                          // 0x01E8(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_46>                 Shop_Sets;                                                // 0x01F4(0x000C) (NeedCtorLink)
	TArray<struct FPlayerShopEntrySaveInfo_46>         Player_Shop_Entries;                                      // 0x0200(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         ItemFolders;                                              // 0x020C(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         LocalShopItemFolders;                                     // 0x0218(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.AchievementInfo_47
// 0x0078
struct FAchievementInfo_47
{
	unsigned char                                      Achievements[0x78];                                       // 0x0000(0x0001)
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage_44
// 0x0240
struct FGameStorage_44
{
	struct FOptionsInfo_45                             GameOptions;                                              // 0x0000(0x00F0) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_46>                Heroes;                                                   // 0x00F0(0x000C) (NeedCtorLink)
	struct FAchievementInfo_47                         Achievements;                                             // 0x00FC(0x0078)
	struct FCoreUnlockInfo                             Core_Info;                                                // 0x0174(0x0028)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x019C(0x0034)
	TArray<struct FLevelProgressInfo>                  Beaten_Levels;                                            // 0x01D0(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo>                  Unlocked_Levels;                                          // 0x01DC(0x000C) (NeedCtorLink)
	struct FItemBoxInfo_44                             Item_Box;                                                 // 0x01E8(0x0004)
	TArray<struct FEquipmentSaveInfo_46>               Equipment;                                                // 0x01EC(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_46>               Hero_Equipment;                                           // 0x01F8(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_46>               Lobby_Equipment;                                          // 0x0204(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_46>                 Shop_Sets;                                                // 0x0210(0x000C) (NeedCtorLink)
	TArray<struct FPlayerShopEntrySaveInfo_46>         Player_Shop_Entries;                                      // 0x021C(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         ItemFolders;                                              // 0x0228(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         LocalShopItemFolders;                                     // 0x0234(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage_45
// 0x024C
struct FGameStorage_45
{
	struct FOptionsInfo_45                             GameOptions;                                              // 0x0000(0x00F0) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_46>                Heroes;                                                   // 0x00F0(0x000C) (NeedCtorLink)
	struct FAchievementInfo_47                         Achievements;                                             // 0x00FC(0x0078)
	struct FCoreUnlockInfo                             Core_Info;                                                // 0x0174(0x0028)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x019C(0x0034)
	TArray<struct FLevelProgressInfo>                  Beaten_Levels;                                            // 0x01D0(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo>                  Unlocked_Levels;                                          // 0x01DC(0x000C) (NeedCtorLink)
	struct FItemBoxInfo                                Item_Box;                                                 // 0x01E8(0x0010)
	TArray<struct FEquipmentSaveInfo_46>               Equipment;                                                // 0x01F8(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_46>               Hero_Equipment;                                           // 0x0204(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_46>               Lobby_Equipment;                                          // 0x0210(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_46>                 Shop_Sets;                                                // 0x021C(0x000C) (NeedCtorLink)
	TArray<struct FPlayerShopEntrySaveInfo_46>         Player_Shop_Entries;                                      // 0x0228(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         ItemFolders;                                              // 0x0234(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         LocalShopItemFolders;                                     // 0x0240(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.OptionsFixedStruct_46
// 0x0098
struct FOptionsFixedStruct_46
{
	unsigned long                                      AutoShowLevelUp : 1;                                      // 0x0000(0x0004)
	unsigned long                                      AllowFriendlyFire : 1;                                    // 0x0000(0x0004)
	unsigned long                                      UseGamepad : 1;                                           // 0x0000(0x0004)
	unsigned long                                      AutoAdjustCameraForPhase : 1;                             // 0x0000(0x0004)
	unsigned long                                      ShowTutorials : 1;                                        // 0x0000(0x0004)
	int                                                ShownTutorials[0xA];                                      // 0x0004(0x0004)
	float                                              VolumeSFX;                                                // 0x002C(0x0004)
	float                                              VolumeMusic;                                              // 0x0030(0x0004)
	float                                              VoicePlayVolume;                                          // 0x0034(0x0004)
	float                                              VoiceCaptureVolume;                                       // 0x0038(0x0004)
	unsigned long                                      PushToTalk : 1;                                           // 0x003C(0x0004)
	unsigned long                                      IncomingVoice : 1;                                        // 0x003C(0x0004)
	unsigned long                                      OutgoingVoice : 1;                                        // 0x003C(0x0004)
	float                                              Gamma;                                                    // 0x0040(0x0004)
	float                                              SaturationIntensity;                                      // 0x0044(0x0004)
	float                                              UIScalePercent;                                           // 0x0048(0x0004)
	unsigned long                                      PostProcessing : 1;                                       // 0x004C(0x0004)
	unsigned long                                      ShowFloatingDamageNumbers : 1;                            // 0x004C(0x0004)
	unsigned long                                      bRightStickTurnsCameraScheme : 1;                         // 0x004C(0x0004)
	unsigned long                                      bInvertCameraPitch : 1;                                   // 0x004C(0x0004)
	unsigned long                                      bSwapTriggersAndButtons : 1;                              // 0x004C(0x0004)
	unsigned long                                      FullScreen : 1;                                           // 0x004C(0x0004)
	unsigned char                                      SplitScreenConfig;                                        // 0x0050(0x0001)
	unsigned char                                      CurrentDifficulty;                                        // 0x0051(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	unsigned long                                      LobbyItemLock : 1;                                        // 0x0054(0x0004)
	unsigned long                                      bDefaultChaseCamera : 1;                                  // 0x0054(0x0004)
	float                                              DefaultCameraTargetDistance;                              // 0x0058(0x0004)
	float                                              DefaultPlacingTowerCameraDistance;                        // 0x005C(0x0004)
	float                                              MouseCameraRotationSpeed;                                 // 0x0060(0x0004)
	int                                                ItemQualityFilter;                                        // 0x0064(0x0004)
	unsigned long                                      bHideAccessory : 1;                                       // 0x0068(0x0004)
	int                                                MinimumLevel;                                             // 0x006C(0x0004)
	unsigned long                                      SavedLoginInfo : 1;                                       // 0x0070(0x0004)
	TArray<unsigned char>                              CustomGameMetaFlags;                                      // 0x0074(0x000C) (NeedCtorLink)
	TArray<int>                                        CustomeUnlocks;                                           // 0x0080(0x000C) (NeedCtorLink)
	TArray<int>                                        HeroUnlocks;                                              // 0x008C(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.OptionsInfo_46
// 0x00F8
struct FOptionsInfo_46
{
	struct FOptionsFixedStruct_46                      fixedSizeOptions;                                         // 0x0000(0x0098) (NeedCtorLink)
	struct FString                                     Resolution;                                               // 0x0098(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     lastLevelTag;                                             // 0x00A4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UserName;                                                 // 0x00B0(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Password;                                                 // 0x00BC(0x000C) (AlwaysInit, NeedCtorLink)
	struct FSearchFilterSettings                       searchFilters;                                            // 0x00C8(0x0024) (NeedCtorLink)
	TArray<int>                                        installedDLCEquipments;                                   // 0x00EC(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage_46
// 0x0254
struct FGameStorage_46
{
	struct FOptionsInfo_46                             GameOptions;                                              // 0x0000(0x00F8) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_46>                Heroes;                                                   // 0x00F8(0x000C) (NeedCtorLink)
	struct FAchievementInfo_47                         Achievements;                                             // 0x0104(0x0078)
	struct FCoreUnlockInfo                             Core_Info;                                                // 0x017C(0x0028)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x01A4(0x0034)
	TArray<struct FLevelProgressInfo>                  Beaten_Levels;                                            // 0x01D8(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo>                  Unlocked_Levels;                                          // 0x01E4(0x000C) (NeedCtorLink)
	struct FItemBoxInfo                                Item_Box;                                                 // 0x01F0(0x0010)
	TArray<struct FEquipmentSaveInfo_46>               Equipment;                                                // 0x0200(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_46>               Hero_Equipment;                                           // 0x020C(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_46>               Lobby_Equipment;                                          // 0x0218(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_46>                 Shop_Sets;                                                // 0x0224(0x000C) (NeedCtorLink)
	TArray<struct FPlayerShopEntrySaveInfo_46>         Player_Shop_Entries;                                      // 0x0230(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         ItemFolders;                                              // 0x023C(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         LocalShopItemFolders;                                     // 0x0248(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage_47
// 0x0254
struct FGameStorage_47
{
	struct FOptionsInfo_46                             GameOptions;                                              // 0x0000(0x00F8) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_46>                Heroes;                                                   // 0x00F8(0x000C) (NeedCtorLink)
	struct FAchievementInfo_47                         Achievements;                                             // 0x0104(0x0078)
	struct FCoreUnlockInfo                             Core_Info;                                                // 0x017C(0x0028)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x01A4(0x0034)
	TArray<struct FLevelProgressInfo>                  Beaten_Levels;                                            // 0x01D8(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo>                  Unlocked_Levels;                                          // 0x01E4(0x000C) (NeedCtorLink)
	struct FItemBoxInfo                                Item_Box;                                                 // 0x01F0(0x0010)
	TArray<struct FEquipmentSaveInfo_46>               Equipment;                                                // 0x0200(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_46>               Hero_Equipment;                                           // 0x020C(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_46>               Lobby_Equipment;                                          // 0x0218(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_46>                 Shop_Sets;                                                // 0x0224(0x000C) (NeedCtorLink)
	TArray<struct FPlayerShopEntrySaveInfo_46>         Player_Shop_Entries;                                      // 0x0230(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         ItemFolders;                                              // 0x023C(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         LocalShopItemFolders;                                     // 0x0248(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.OptionsFixedStruct_48
// 0x009C
struct FOptionsFixedStruct_48
{
	unsigned long                                      AutoShowLevelUp : 1;                                      // 0x0000(0x0004)
	unsigned long                                      AllowFriendlyFire : 1;                                    // 0x0000(0x0004)
	unsigned long                                      UseGamepad : 1;                                           // 0x0000(0x0004)
	unsigned long                                      AutoAdjustCameraForPhase : 1;                             // 0x0000(0x0004)
	unsigned long                                      ShowTutorials : 1;                                        // 0x0000(0x0004)
	int                                                ShownTutorials[0xA];                                      // 0x0004(0x0004)
	float                                              VolumeSFX;                                                // 0x002C(0x0004)
	float                                              VolumeMusic;                                              // 0x0030(0x0004)
	float                                              VoicePlayVolume;                                          // 0x0034(0x0004)
	float                                              VoiceCaptureVolume;                                       // 0x0038(0x0004)
	unsigned long                                      PushToTalk : 1;                                           // 0x003C(0x0004)
	unsigned long                                      IncomingVoice : 1;                                        // 0x003C(0x0004)
	unsigned long                                      OutgoingVoice : 1;                                        // 0x003C(0x0004)
	float                                              Gamma;                                                    // 0x0040(0x0004)
	float                                              SaturationIntensity;                                      // 0x0044(0x0004)
	float                                              UIScalePercent;                                           // 0x0048(0x0004)
	unsigned long                                      PostProcessing : 1;                                       // 0x004C(0x0004)
	unsigned long                                      ShowFloatingDamageNumbers : 1;                            // 0x004C(0x0004)
	unsigned long                                      bRightStickTurnsCameraScheme : 1;                         // 0x004C(0x0004)
	unsigned long                                      bInvertCameraPitch : 1;                                   // 0x004C(0x0004)
	unsigned long                                      bSwapTriggersAndButtons : 1;                              // 0x004C(0x0004)
	unsigned long                                      FullScreen : 1;                                           // 0x004C(0x0004)
	unsigned char                                      SplitScreenConfig;                                        // 0x0050(0x0001)
	unsigned char                                      CurrentDifficulty;                                        // 0x0051(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	unsigned long                                      LobbyItemLock : 1;                                        // 0x0054(0x0004)
	unsigned long                                      bDefaultChaseCamera : 1;                                  // 0x0054(0x0004)
	float                                              DefaultCameraTargetDistance;                              // 0x0058(0x0004)
	float                                              DefaultPlacingTowerCameraDistance;                        // 0x005C(0x0004)
	float                                              MouseCameraRotationSpeed;                                 // 0x0060(0x0004)
	int                                                ItemQualityFilter;                                        // 0x0064(0x0004)
	unsigned long                                      bHideAccessory : 1;                                       // 0x0068(0x0004)
	unsigned long                                      EnableOutlineEffect : 1;                                  // 0x0068(0x0004)
	unsigned char                                      GraphicsQuality;                                          // 0x006C(0x0001)
	unsigned char                                      InventorySortingFilter;                                   // 0x006D(0x0001)
	unsigned char                                      UnknownData01[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
	int                                                MinimumLevel;                                             // 0x0070(0x0004)
	unsigned long                                      SavedLoginInfo : 1;                                       // 0x0074(0x0004)
	TArray<unsigned char>                              CustomGameMetaFlags;                                      // 0x0078(0x000C) (NeedCtorLink)
	TArray<int>                                        CustomeUnlocks;                                           // 0x0084(0x000C) (NeedCtorLink)
	TArray<int>                                        HeroUnlocks;                                              // 0x0090(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.OptionsInfo_48
// 0x00FC
struct FOptionsInfo_48
{
	struct FOptionsFixedStruct_48                      fixedSizeOptions;                                         // 0x0000(0x009C) (NeedCtorLink)
	struct FString                                     Resolution;                                               // 0x009C(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     lastLevelTag;                                             // 0x00A8(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UserName;                                                 // 0x00B4(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Password;                                                 // 0x00C0(0x000C) (AlwaysInit, NeedCtorLink)
	struct FSearchFilterSettings                       searchFilters;                                            // 0x00CC(0x0024) (NeedCtorLink)
	TArray<int>                                        installedDLCEquipments;                                   // 0x00F0(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.EquipmentSaveInfo_48
// 0x0134
struct FEquipmentSaveInfo_48
{
	unsigned long                                      IsInitialized : 1;                                        // 0x0000(0x0004)
	unsigned char                                      DamageReductionIndex[0x4];                                // 0x0004(0x0001)
	unsigned char                                      DamageReductionPercentage[0x4];                           // 0x0008(0x0001)
	int                                                StatModifiers[0xB];                                       // 0x000C(0x0004)
	int                                                SpawnStatModifiers[0xB];                                  // 0x0038(0x0004)
	int                                                WeaponDamageBonus;                                        // 0x0064(0x0004)
	unsigned char                                      WeaponNumberOfProjectilesBonus;                           // 0x0068(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                WeaponSpeedOfProjectilesBonus;                            // 0x006C(0x0004)
	unsigned char                                      WeaponAdditionalDamageTypeIndex;                          // 0x0070(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	int                                                WeaponAdditionalDamageAmount;                             // 0x0074(0x0004)
	float                                              WeaponDrawScaleMultiplier;                                // 0x0078(0x0004)
	float                                              WeaponSwingSpeedMultiplier;                               // 0x007C(0x0004)
	int                                                Level;                                                    // 0x0080(0x0004)
	int                                                StoredMana;                                               // 0x0084(0x0004)
	float                                              SpawnQuality;                                             // 0x0088(0x0004)
	float                                              SpawnRandomizerMultiplier;                                // 0x008C(0x0004)
	unsigned char                                      WeaponBlockingBonus;                                      // 0x0090(0x0001)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	int                                                WeaponAltDamageBonus;                                     // 0x0094(0x0004)
	int                                                WeaponClipAmmoBonus;                                      // 0x0098(0x0004)
	unsigned char                                      WeaponReloadSpeedBonus;                                   // 0x009C(0x0001)
	unsigned char                                      WeaponKnockbackBonus;                                     // 0x009D(0x0001)
	unsigned char                                      WeaponChargeSpeedBonus;                                   // 0x009E(0x0001)
	unsigned char                                      WeaponShotsPerSecondBonus;                                // 0x009F(0x0001)
	unsigned char                                      NameIndex_Base;                                           // 0x00A0(0x0001)
	unsigned char                                      NameIndex_DamageReduction;                                // 0x00A1(0x0001)
	unsigned char                                      NameIndex_QualityDescriptor;                              // 0x00A2(0x0001)
	unsigned char                                      PrimaryColorSet;                                          // 0x00A3(0x0001)
	unsigned char                                      SecondaryColorSet;                                        // 0x00A4(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	int                                                EquipmentID1;                                             // 0x00A8(0x0004)
	int                                                EquipmentID2;                                             // 0x00AC(0x0004)
	int                                                MinimumSellWorth;                                         // 0x00B0(0x0004)
	int                                                MaximumSellWorth;                                         // 0x00B4(0x0004)
	int                                                MaxEquipmentLevel;                                        // 0x00B8(0x0004)
	int                                                DroppedLocationX;                                         // 0x00BC(0x0004)
	int                                                DroppedLocationY;                                         // 0x00C0(0x0004)
	int                                                DroppedLocationZ;                                         // 0x00C4(0x0004)
	unsigned char                                      bCanBeUpgraded;                                           // 0x00C8(0x0001)
	unsigned char                                      AllowRenamingAtMaxUpgrade;                                // 0x00C9(0x0001)
	unsigned char                                      bCantBeDropped;                                           // 0x00CA(0x0001)
	unsigned char                                      bCantBeSold;                                              // 0x00CB(0x0001)
	unsigned char                                      bAutoLockInItemBox;                                       // 0x00CC(0x0001)
	unsigned char                                      bDidOnetimeEffect;                                        // 0x00CD(0x0001)
	unsigned char                                      bIsLocked;                                                // 0x00CE(0x0001)
	unsigned char                                      ManualLR;                                                 // 0x00CF(0x0001)
	struct FLinearColor                                PrimaryColorOverride;                                     // 0x00D0(0x0010)
	struct FLinearColor                                SecondaryColorOverride;                                   // 0x00E0(0x0010)
	struct FString                                     UserEquipmentName;                                        // 0x00F0(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     UserForgerName;                                           // 0x00FC(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     Description;                                              // 0x0108(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     EquipmentTemplate;                                        // 0x0114(0x000C) (AlwaysInit, NeedCtorLink)
	struct FString                                     EquipmentTimeStamp;                                       // 0x0120(0x000C) (AlwaysInit, NeedCtorLink)
	int                                                FolderID;                                                 // 0x012C(0x0004)
	unsigned long                                      bIsSecondary : 1;                                         // 0x0130(0x0004)
};

// ScriptStruct UDKGame.DunDefGameStorage.HeroAndEquipment_48
// 0x0120
struct FHeroAndEquipment_48
{
	struct FHeroSaveInfo                               HeroData;                                                 // 0x0000(0x0114) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_48>               Equipment;                                                // 0x0114(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.ShopSetSaveInfo_48
// 0x000C
struct FShopSetSaveInfo_48
{
	TArray<struct FEquipmentSaveInfo_48>               Shop_Equipment;                                           // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.PlayerShopEntrySaveInfo_48
// 0x0138
struct FPlayerShopEntrySaveInfo_48
{
	struct FEquipmentSaveInfo_48                       EquipmentEntry;                                           // 0x0000(0x0134) (NeedCtorLink)
	int                                                SellAmount;                                               // 0x0134(0x0004)
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage_48
// 0x03D4
struct FGameStorage_48
{
	struct FOptionsInfo_48                             GameOptions;                                              // 0x0000(0x00FC) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_48>                Heroes;                                                   // 0x00FC(0x000C) (NeedCtorLink)
	struct FAchievementInfo                            Achievements;                                             // 0x0108(0x01F4)
	struct FCoreUnlockInfo                             Core_Info;                                                // 0x02FC(0x0028)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x0324(0x0034)
	TArray<struct FLevelProgressInfo>                  Beaten_Levels;                                            // 0x0358(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo>                  Unlocked_Levels;                                          // 0x0364(0x000C) (NeedCtorLink)
	struct FItemBoxInfo                                Item_Box;                                                 // 0x0370(0x0010)
	TArray<struct FEquipmentSaveInfo_48>               Equipment;                                                // 0x0380(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_48>               Hero_Equipment;                                           // 0x038C(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_48>               Lobby_Equipment;                                          // 0x0398(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_48>                 Shop_Sets;                                                // 0x03A4(0x000C) (NeedCtorLink)
	TArray<struct FPlayerShopEntrySaveInfo_48>         Player_Shop_Entries;                                      // 0x03B0(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         ItemFolders;                                              // 0x03BC(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         LocalShopItemFolders;                                     // 0x03C8(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.ShopSetSaveInfo
// 0x000C
struct FShopSetSaveInfo
{
	TArray<struct FEquipmentSaveInfo>                  Shop_Equipment;                                           // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage
// 0x03DC
struct FGameStorage
{
	struct FOptionsInfo                                GameOptions;                                              // 0x0000(0x0104) (NeedCtorLink)
	TArray<struct FHeroAndEquipment>                   Heroes;                                                   // 0x0104(0x000C) (NeedCtorLink)
	struct FAchievementInfo                            Achievements;                                             // 0x0110(0x01F4)
	struct FCoreUnlockInfo                             Core_Info;                                                // 0x0304(0x0028)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x032C(0x0034)
	TArray<struct FLevelProgressInfo>                  Beaten_Levels;                                            // 0x0360(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo>                  Unlocked_Levels;                                          // 0x036C(0x000C) (NeedCtorLink)
	struct FItemBoxInfo                                Item_Box;                                                 // 0x0378(0x0010)
	TArray<struct FEquipmentSaveInfo>                  Equipment;                                                // 0x0388(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo>                  Hero_Equipment;                                           // 0x0394(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo>                  Lobby_Equipment;                                          // 0x03A0(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo>                    Shop_Sets;                                                // 0x03AC(0x000C) (NeedCtorLink)
	TArray<struct FPlayerShopEntrySaveInfo>            Player_Shop_Entries;                                      // 0x03B8(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         ItemFolders;                                              // 0x03C4(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         LocalShopItemFolders;                                     // 0x03D0(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.CosmeticSetBonus.CosmeticSetAnimEventInfo
// 0x0028
struct FCosmeticSetAnimEventInfo
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit)
	struct FName                                       AnimName;                                                 // 0x0008(0x0008) (Edit)
	float                                              Rate;                                                     // 0x0010(0x0004) (Edit)
	float                                              BlendInTime;                                              // 0x0014(0x0004) (Edit)
	float                                              BlendOutTime;                                             // 0x0018(0x0004) (Edit)
	unsigned long                                      bLooping : 1;                                             // 0x001C(0x0004) (Edit)
	unsigned long                                      bOverride : 1;                                            // 0x001C(0x0004) (Edit)
	float                                              StartTime;                                                // 0x0020(0x0004) (Edit)
	unsigned long                                      bReplicated : 1;                                          // 0x0024(0x0004) (Edit)
};

// ScriptStruct UDKGame.CosmeticSetBonus.CosmeticSetAttachmentInfo
// 0x0028
struct FCosmeticSetAttachmentInfo
{
	unsigned long                                      bAttachToSocket : 1;                                      // 0x0000(0x0004) (Edit)
	unsigned long                                      bAttachToBone : 1;                                        // 0x0000(0x0004) (Edit)
	unsigned long                                      bSetAsCollisionComponent : 1;                             // 0x0000(0x0004) (Edit)
	struct FName                                       AttachToSocketOrBoneName;                                 // 0x0004(0x0008) (Edit)
	unsigned long                                      bUseLightEnvironment : 1;                                 // 0x000C(0x0004) (Edit)
	struct FName                                       AnimSlotName;                                             // 0x0010(0x0008) (Edit)
	TArray<struct FCosmeticSetAnimEventInfo>           AnimEvents;                                               // 0x0018(0x000C) (Edit, NeedCtorLink)
	class UActorComponent*                             ComponentToAttach;                                        // 0x0024(0x0004) (Edit, ExportObject, Component, EditInline)
};

// ScriptStruct UDKGame.DunDefEnemy.ElementalDamageModifier
// 0x0008
struct FElementalDamageModifier
{
	class UClass*                                      DamageType;                                               // 0x0000(0x0004) (Edit)
	float                                              DamageMultiplier;                                         // 0x0004(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefEnemy.EnemyElementalEntry
// 0x0010
struct FEnemyElementalEntry
{
	class UClass*                                      ElementalDamageType;                                      // 0x0000(0x0004) (Edit)
	float                                              UsageChance;                                              // 0x0004(0x0004) (Edit)
	class UParticleSystem*                             elementalEffect;                                          // 0x0008(0x0004) (Edit)
	float                                              ElementalEffectScale;                                     // 0x000C(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefGameStats.NewBestStats
// 0x0018
struct FNewBestStats
{
	int                                                statPlayerIndex;                                          // 0x0000(0x0004)
	TArray<int>                                        bestOfStats;                                              // 0x0004(0x000C) (NeedCtorLink)
	struct FUniqueNetId                                playerUniqueNetId;                                        // 0x0010(0x0008)
};

// ScriptStruct UDKGame.DunDefGameStats.StatHeroInfo
// 0x0050
struct FStatHeroInfo
{
	struct FString                                     HeroName;                                                 // 0x0000(0x000C) (Localized, NeedCtorLink)
	struct FString                                     heroClassName;                                            // 0x000C(0x000C) (NeedCtorLink)
	struct FName                                       heroTemplateName;                                         // 0x0018(0x0008)
	struct FLinearColor                                color1;                                                   // 0x0020(0x0010)
	struct FLinearColor                                color2;                                                   // 0x0030(0x0010)
	struct FLinearColor                                color3;                                                   // 0x0040(0x0010)
};

// ScriptStruct UDKGame.DunDefInput.MobileInput
// 0x0004
struct FMobileInput
{
	unsigned long                                      bTouchHolding : 1;                                        // 0x0000(0x0004)
	unsigned long                                      bCameraLeftPressed : 1;                                   // 0x0000(0x0004)
	unsigned long                                      bCameraRightPressed : 1;                                  // 0x0000(0x0004)
};

// ScriptStruct UDKGame.DunDefInput.KeyDescription
// 0x0018
struct FKeyDescription
{
	struct FName                                       KeyName;                                                  // 0x0000(0x0008)
	struct FString                                     KeyDescription;                                           // 0x0008(0x000C) (Localized, NeedCtorLink)
	class UTexture2D*                                  KeyIcon;                                                  // 0x0014(0x0004)
};

// ScriptStruct UDKGame.DunDefInput.BindingDescription
// 0x0018
struct FBindingDescription
{
	struct FString                                     Binding;                                                  // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Description;                                              // 0x000C(0x000C) (Localized, NeedCtorLink)
};

// ScriptStruct UDKGame.UI_OptionsMenu.PanelProperties
// 0x000C
struct FPanelProperties
{
	class UUIObject*                                   panel;                                                    // 0x0000(0x0004) (Edit)
	class UUIToggleButton*                             panelToggle;                                              // 0x0004(0x0004) (Edit)
	unsigned long                                      defaultPanel : 1;                                         // 0x0008(0x0004) (Edit)
	unsigned long                                      PC : 1;                                                   // 0x0008(0x0004) (Edit)
	unsigned long                                      PS3 : 1;                                                  // 0x0008(0x0004) (Edit)
	unsigned long                                      XBox : 1;                                                 // 0x0008(0x0004) (Edit)
	unsigned long                                      PCOnlyWhenUsingGamepad : 1;                               // 0x0008(0x0004) (Edit)
	unsigned long                                      PCOnlyWhenUsingKeyboard : 1;                              // 0x0008(0x0004) (Edit)
	unsigned long                                      bIsGamepadControlPanel : 1;                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct UDKGame.DDGRI_Competitive.TeamData
// 0x0010
struct FTeamData
{
	TArray<class APlayerController*>                   TeamPCs;                                                  // 0x0000(0x000C) (NeedCtorLink)
	int                                                TeamTowerUnits;                                           // 0x000C(0x0004)
};

// ScriptStruct UDKGame.DunDefBuffManager.sBuffArchetypeInstances
// 0x0010
struct FsBuffArchetypeInstances
{
	class UObject*                                     BuffArchetype;                                            // 0x0000(0x0004)
	TArray<class UDunDefBuff*>                         BuffInstances;                                            // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefBuffManager.sBuffArchetypePerOwnerSpawnCount
// 0x000C
struct FsBuffArchetypePerOwnerSpawnCount
{
	class UDunDefBuff*                                 BuffArchetype;                                            // 0x0000(0x0004)
	class UObject*                                     BuffOwner;                                                // 0x0004(0x0004)
	int                                                SpawnCount;                                               // 0x0008(0x0004)
};

// ScriptStruct UDKGame.UI_GameStats.StatRenderEntry
// 0x0010
struct FStatRenderEntry
{
	struct FString                                     renderString;                                             // 0x0000(0x000C) (NeedCtorLink)
	class UTexture2D*                                  renderTexture;                                            // 0x000C(0x0004)
};

// ScriptStruct UDKGame.UI_GameStats.TowerStatInfo
// 0x0030
struct UUI_GameStats_FTowerStatInfo
{
	struct FName                                       towerClassName;                                           // 0x0000(0x0008)
	class UTexture2D*                                  Texture;                                                  // 0x0008(0x0004)
	struct FString                                     towerName;                                                // 0x000C(0x000C) (NeedCtorLink)
	int                                                NumKills;                                                 // 0x0018(0x0004)
	int                                                numBuilt;                                                 // 0x001C(0x0004)
	int                                                numDestroyed;                                             // 0x0020(0x0004)
	int                                                numRepaired;                                              // 0x0024(0x0004)
	int                                                numSold;                                                  // 0x0028(0x0004)
	int                                                numUpgraded;                                              // 0x002C(0x0004)
};

// ScriptStruct UDKGame.UI_GameStats.EnemyStatInfo
// 0x002C
struct UUI_GameStats_FEnemyStatInfo
{
	struct FName                                       enemyClassName;                                           // 0x0000(0x0008)
	class UTexture2D*                                  Texture;                                                  // 0x0008(0x0004)
	struct FString                                     enemyName;                                                // 0x000C(0x000C) (NeedCtorLink)
	int                                                numSpawned;                                               // 0x0018(0x0004)
	int                                                numKilled;                                                // 0x001C(0x0004)
	int                                                numKilledByTowers;                                        // 0x0020(0x0004)
	int                                                numKilledByPlayers;                                       // 0x0024(0x0004)
	int                                                TotalDamage;                                              // 0x0028(0x0004)
};

// ScriptStruct UDKGame.UI_GameStats.AwardRenderEntry
// 0x0040
struct FAwardRenderEntry
{
	struct FString                                     labelString;                                              // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     renderString;                                             // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     bestOfString;                                             // 0x0018(0x000C) (NeedCtorLink)
	struct FString                                     bestOfPartTwo;                                            // 0x0024(0x000C) (NeedCtorLink)
	class UTexture2D*                                  renderTexture;                                            // 0x0030(0x0004)
	class UTexture2D*                                  HeroIcon;                                                 // 0x0034(0x0004)
	unsigned long                                      isNew : 1;                                                // 0x0038(0x0004)
	unsigned long                                      recent : 1;                                               // 0x0038(0x0004)
	int                                                Count;                                                    // 0x003C(0x0004)
};

// ScriptStruct UDKGame.UI_GameStats.HeroAward
// 0x0010
struct UUI_GameStats_FHeroAward
{
	TEnumAsByte<EHeroAwardEnum>                        Type;                                                     // 0x0000(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Count;                                                    // 0x0004(0x0004)
	float                                              Time;                                                     // 0x0008(0x0004)
	int                                                Wave;                                                     // 0x000C(0x0004)
};

// ScriptStruct UDKGame.UI_GameStats.HeroStatInfo
// 0x0098
struct FHeroStatInfo
{
	struct FString                                     UserName;                                                 // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     HeroName;                                                 // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     heroOnlyName;                                             // 0x0018(0x000C) (NeedCtorLink)
	struct FString                                     heroClassName;                                            // 0x0024(0x000C) (NeedCtorLink)
	struct FString                                     HeroLevel;                                                // 0x0030(0x000C) (NeedCtorLink)
	int                                                statPlayerIndex;                                          // 0x003C(0x0004)
	int                                                numTotalKills;                                            // 0x0040(0x0004)
	int                                                numPlayerKills;                                           // 0x0044(0x0004)
	int                                                numTowerKills;                                            // 0x0048(0x0004)
	int                                                numTowerRepairs;                                          // 0x004C(0x0004)
	int                                                Score;                                                    // 0x0050(0x0004)
	int                                                numChests;                                                // 0x0054(0x0004)
	int                                                numDamage;                                                // 0x0058(0x0004)
	int                                                numDeaths;                                                // 0x005C(0x0004)
	int                                                mana;                                                     // 0x0060(0x0004)
	int                                                Exp;                                                      // 0x0064(0x0004)
	int                                                Dist;                                                     // 0x0068(0x0004)
	unsigned long                                      bIsRemote : 1;                                            // 0x006C(0x0004)
	class UMaterialInstanceConstant*                   heroMIC;                                                  // 0x0070(0x0004)
	class UTexture2D*                                  TinyIcon;                                                 // 0x0074(0x0004)
	struct FUniqueNetId                                PlayerID;                                                 // 0x0078(0x0008)
	TArray<struct FLevelProgressInfo>                  beatenLevels;                                             // 0x0080(0x000C) (NeedCtorLink)
	TArray<struct UUI_GameStats_FHeroAward>            awards;                                                   // 0x008C(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.UI_GameStats.IntRange
// 0x0014
struct FIntRange
{
	int                                                Start;                                                    // 0x0000(0x0004) (Edit)
	int                                                Stop;                                                     // 0x0004(0x0004) (Edit)
	struct FString                                     feedbackString;                                           // 0x0008(0x000C) (Edit, Localized, NeedCtorLink)
};

// ScriptStruct UDKGame.UI_GameStats.StatPanelProperties
// 0x003C
struct FStatPanelProperties
{
	class UUIObject*                                   panel;                                                    // 0x0000(0x0004) (Edit)
	float                                              ColumnPositions[0x4];                                     // 0x0004(0x0004) (Edit)
	TArray<struct FIntRange>                           SelectorPositions;                                        // 0x0014(0x000C) (Edit, NeedCtorLink)
	class UUIToggleButton*                             panelToggle;                                              // 0x0020(0x0004) (Edit)
	struct FName                                       sceneState;                                               // 0x0024(0x0008) (Edit)
	unsigned long                                      defaultPanel : 1;                                         // 0x002C(0x0004) (Edit)
	TArray<class UUIObject*>                           subObjects;                                               // 0x0030(0x000C) (Edit, NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGasCloud.ActorTypeDamageMultiplier
// 0x0008
struct FActorTypeDamageMultiplier
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0004) (Edit)
	float                                              DamageMultiplier;                                         // 0x0004(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefWaveBillboard.WaveDisplayEntry
// 0x0010
struct FWaveDisplayEntry
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004)
	class ADunDefEnemy*                                WaveEnemyArchetype;                                       // 0x0004(0x0004)
	unsigned char                                      EnemyDifficultyIndex;                                     // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                NumberOfEnemies;                                          // 0x000C(0x0004)
};

// ScriptStruct UDKGame.UILabel_ScoreIndicator.ScoreAwardEntry
// 0x0030
struct FScoreAwardEntry
{
	struct FString                                     ScoreAwardReason;                                         // 0x0000(0x000C) (NeedCtorLink)
	struct FLinearColor                                ScoreAwardColor;                                          // 0x000C(0x0010)
	float                                              playSpeed;                                                // 0x001C(0x0004)
	int                                                ScoreTagReason;                                           // 0x0020(0x0004)
	int                                                ScoreTagAdditionalNum;                                    // 0x0024(0x0004)
	int                                                ScoreTagSecondaryNum;                                     // 0x0028(0x0004)
	class AActor*                                      ActorArchetype;                                           // 0x002C(0x0004)
};

// ScriptStruct UDKGame.DunDef_SeqVar_TutorialData.TutorialData
// 0x0014
struct FTutorialData
{
	unsigned long                                      IsUsed : 1;                                               // 0x0000(0x0004) (Edit)
	unsigned long                                      bConsoleDefault : 1;                                      // 0x0000(0x0004) (Edit)
	struct FString                                     TutorialText;                                             // 0x0004(0x000C) (Edit, Localized, NeedCtorLink)
	class USoundCue*                                   TutorialSound;                                            // 0x0010(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDef_SeqAct_GiveEquipmentToPlayers.GiveEquipmentEntry
// 0x0034
struct FGiveEquipmentEntry
{
	class UDunDefHero*                                 ForHeroArchetype;                                         // 0x0000(0x0004) (Edit)
	class UHeroEquipment*                              EquipmentArchetype;                                       // 0x0004(0x0004) (Edit)
	TArray<class UHeroEquipment*>                      EquipmentArchetypesRandom;                                // 0x0008(0x000C) (Edit, NeedCtorLink)
	float                                              BaseForceRandomizationQuality;                            // 0x0014(0x0004) (Edit)
	float                                              MaxRandomizationQuality;                                  // 0x0018(0x0004) (Edit)
	float                                              RandomizerMultiplierOverride;                             // 0x001C(0x0004) (Edit)
	unsigned long                                      bUseEquipmentArchetypeAsTemplate : 1;                     // 0x0020(0x0004) (Edit)
	unsigned long                                      bRandomGlobalDontUseAdditionalItemEntries : 1;            // 0x0020(0x0004) (Edit)
	unsigned long                                      ForceHeroArchetypeExactMatch : 1;                         // 0x0020(0x0004) (Edit)
	unsigned long                                      bDontIgnoreEquipmentMinUpgradeLevels : 1;                 // 0x0020(0x0004) (Edit)
	unsigned long                                      bGetRandomGlobalEquipmentDrop : 1;                        // 0x0020(0x0004) (Edit)
	unsigned long                                      bRandomGlobalDontUseShopDrops : 1;                        // 0x0020(0x0004) (Edit)
	float                                              RandomGlobalEquipmentDropExtraRarityWeighting;            // 0x0024(0x0004) (Edit)
	float                                              RandomGlobalEquipmentDropValueMin;                        // 0x0028(0x0004) (Edit)
	float                                              RandomGlobalEquipmentDropValueMax;                        // 0x002C(0x0004) (Edit)
	unsigned long                                      bUsed : 1;                                                // 0x0030(0x0004)
};

// ScriptStruct UDKGame.UI_MainMenu.myUIKeyRepeatData
// 0x000C
struct FmyUIKeyRepeatData
{
	struct FName                                       CurrentRepeatKey;                                         // 0x0000(0x0008) (AlwaysInit)
	float                                              NextRepeatTime;                                           // 0x0008(0x0004) (AlwaysInit)
};

// ScriptStruct UDKGame.DunDefPlayerController.ParticleSystemInfo
// 0x0008
struct FParticleSystemInfo
{
	class UParticleSystem*                             forSystem;                                                // 0x0000(0x0004)
	int                                                tally;                                                    // 0x0004(0x0004)
};

// ScriptStruct UDKGame.DunDef_SeqAct_TogglePostProcessEffects.PostProcessEffectToggle
// 0x0028
struct FPostProcessEffectToggle
{
	struct FName                                       EffectName;                                               // 0x0000(0x0008) (Edit)
	unsigned long                                      bMatEffectInterpScalarParameter : 1;                      // 0x0008(0x0004) (Edit)
	unsigned long                                      MatEffectDisableWhenFinishedInterpOff : 1;                // 0x0008(0x0004) (Edit)
	struct FName                                       MatEffectToggleScalarParameterName;                       // 0x000C(0x0008) (Edit)
	float                                              MatEffectOnScalarSpeed;                                   // 0x0014(0x0004) (Edit)
	float                                              MatEffectOnScalarParameterValue;                          // 0x0018(0x0004) (Edit)
	float                                              MatEffectOffScalarSpeed;                                  // 0x001C(0x0004) (Edit)
	float                                              MatEffectOffScalarParameterValue;                         // 0x0020(0x0004) (Edit)
	class UPostProcessEffect*                          PPEffect;                                                 // 0x0024(0x0004) (Transient)
};

// ScriptStruct UDKGame.DunDef_SeqAct_UnlockCostumes.GiveCostumeEntry
// 0x0010
struct FGiveCostumeEntry
{
	class UDunDefHero*                                 OnlyUnlockForHeroArchetype;                               // 0x0000(0x0004) (Edit)
	class UDunDefHero*                                 ForHeroArchetype;                                         // 0x0004(0x0004) (Edit)
	int                                                costumeIndex;                                             // 0x0008(0x0004) (Edit)
	unsigned long                                      bIsHeroUnlock : 1;                                        // 0x000C(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefTower_ChainLightning.EnemyChainLink
// 0x0014
struct FEnemyChainLink
{
	class AActor*                                      EnemyLink;                                                // 0x0000(0x0004)
	struct FVector                                     LastEnemyPos;                                             // 0x0004(0x000C)
	class UParticleSystemComponent*                    LightningChainComponent;                                  // 0x0010(0x0004) (ExportObject, Component, EditInline)
};

// ScriptStruct UDKGame.UI_PlayerStats.EnemyStatInfo
// 0x0028
struct UUI_PlayerStats_FEnemyStatInfo
{
	struct FName                                       enemyClassName;                                           // 0x0000(0x0008)
	class UTexture2D*                                  Texture;                                                  // 0x0008(0x0004)
	struct FString                                     enemyName;                                                // 0x000C(0x000C) (Localized, NeedCtorLink)
	int                                                numKilled;                                                // 0x0018(0x0004)
	int                                                numKilledByTowers;                                        // 0x001C(0x0004)
	int                                                numKilledByPlayers;                                       // 0x0020(0x0004)
	int                                                TotalDamage;                                              // 0x0024(0x0004)
};

// ScriptStruct UDKGame.UI_PlayerStats.TowerStatInfo
// 0x0030
struct UUI_PlayerStats_FTowerStatInfo
{
	struct FName                                       towerClassName;                                           // 0x0000(0x0008)
	class UTexture2D*                                  Texture;                                                  // 0x0008(0x0004)
	struct FString                                     towerName;                                                // 0x000C(0x000C) (NeedCtorLink)
	int                                                NumKills;                                                 // 0x0018(0x0004)
	int                                                numBuilt;                                                 // 0x001C(0x0004)
	int                                                numDestroyed;                                             // 0x0020(0x0004)
	int                                                numRepaired;                                              // 0x0024(0x0004)
	int                                                numSold;                                                  // 0x0028(0x0004)
	int                                                numUpgraded;                                              // 0x002C(0x0004)
};

// ScriptStruct UDKGame.UI_PlayerStats.ClassToTextureMapping
// 0x0018
struct FClassToTextureMapping
{
	struct FName                                       ClassName;                                                // 0x0000(0x0008) (Edit)
	class UTexture2D*                                  Texture;                                                  // 0x0008(0x0004) (Edit)
	struct FString                                     LocalizedName;                                            // 0x000C(0x000C) (Edit, Localized, NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefGameStorage.GameStorage_42
// 0x0220
struct FGameStorage_42
{
	struct FOptionsInfo_42                             GameOptions;                                              // 0x0000(0x00EC) (NeedCtorLink)
	TArray<struct FHeroAndEquipment_46>                Heroes;                                                   // 0x00EC(0x000C) (NeedCtorLink)
	struct FAchievementInfo_43                         Achievements;                                             // 0x00F8(0x0064)
	struct FCoreUnlockInfo_43                          Core_Info;                                                // 0x015C(0x0020)
	struct FCrystalCoreOptions                         Core_Options;                                             // 0x017C(0x0034)
	TArray<struct FLevelProgressInfo>                  Beaten_Levels;                                            // 0x01B0(0x000C) (NeedCtorLink)
	TArray<struct FLevelProgressInfo>                  Unlocked_Levels;                                          // 0x01BC(0x000C) (NeedCtorLink)
	struct FItemBoxInfo_44                             Item_Box;                                                 // 0x01C8(0x0004)
	TArray<struct FEquipmentSaveInfo_46>               Equipment;                                                // 0x01CC(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_46>               Hero_Equipment;                                           // 0x01D8(0x000C) (NeedCtorLink)
	TArray<struct FEquipmentSaveInfo_46>               Lobby_Equipment;                                          // 0x01E4(0x000C) (NeedCtorLink)
	TArray<struct FShopSetSaveInfo_46>                 Shop_Sets;                                                // 0x01F0(0x000C) (NeedCtorLink)
	TArray<struct FPlayerShopEntrySaveInfo_46>         Player_Shop_Entries;                                      // 0x01FC(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         ItemFolders;                                              // 0x0208(0x000C) (NeedCtorLink)
	TArray<struct FItemFolder>                         LocalShopItemFolders;                                     // 0x0214(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefPlayerAbility_AreaOfEffect.AffectedActor
// 0x0008
struct FAffectedActor
{
	class AActor*                                      TheActor;                                                 // 0x0000(0x0004)
	class UParticleSystemComponent*                    theEffectComponent;                                       // 0x0004(0x0004) (ExportObject, Component, EditInline)
};

// ScriptStruct UDKGame.DunDefPlayerStats.StatEntryArray
// 0x000C
struct FStatEntryArray
{
	TArray<struct FStatEntry>                          theArray;                                                 // 0x0000(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.DunDefTower_ProjectileType.TargetClassWeight
// 0x0008
struct FTargetClassWeight
{
	class UClass*                                      TargetClass;                                              // 0x0000(0x0004) (Edit)
	float                                              Weight;                                                   // 0x0004(0x0004) (Edit)
};

// ScriptStruct UDKGame.DunDefTower_MagicMissile.ProjectileEntry
// 0x0008
struct FProjectileEntry
{
	class ADunDefProjectile*                           theProjectile;                                            // 0x0000(0x0004) (Edit)
	float                                              chanceToSpawn;                                            // 0x0004(0x0004) (Edit)
};

// ScriptStruct UDKGame.HeroEquipment_Familiar_WithProjectileAI.DelayedShot
// 0x0024
struct UHeroEquipment_Familiar_WithProjectileAI_FDelayedShot
{
	float                                              Timer;                                                    // 0x0000(0x0004) (Edit)
	class ADunDefProjectile*                           Projectile;                                               // 0x0004(0x0004) (Edit)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit)
	struct FVector                                     Direction;                                                // 0x0014(0x000C) (Edit)
	float                                              Damage;                                                   // 0x0020(0x0004) (Edit)
};

// ScriptStruct UDKGame.ProfanityFilter.WordEntry
// 0x0010
struct FWordEntry
{
	struct FString                                     DirtyWord;                                                // 0x0000(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned long                                      exactOnly : 1;                                            // 0x000C(0x0004)
};

// ScriptStruct UDKGame.SaveHelper.ThreadQueuedSave
// 0x0038
struct FThreadQueuedSave
{
	int                                                UserID;                                                   // 0x0000(0x0004)
	TArray<unsigned char>                              saveData;                                                 // 0x0004(0x000C) (AlwaysInit, NeedCtorLink)
	unsigned long                                      bIsRemote : 1;                                            // 0x0010(0x0004)
	struct FStatProxyBuffer                            StatBuffer;                                               // 0x0014(0x0024) (AlwaysInit, NeedCtorLink)
};

// ScriptStruct UDKGame.UI_CreateHeroBase.HeroClassInfo
// 0x0018
struct UUI_CreateHeroBase_FHeroClassInfo
{
	struct FString                                     DisplayName;                                              // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     Description;                                              // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.UIScriptWidget_MaterialInstance.MICVectorParam
// 0x0018
struct FMICVectorParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit)
	struct FLinearColor                                ParamValue;                                               // 0x0008(0x0010) (Edit)
};

// ScriptStruct UDKGame.UIScriptWidget_MaterialInstance.MICFloatParam
// 0x000C
struct FMICFloatParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit)
	float                                              ParamValue;                                               // 0x0008(0x0004) (Edit)
};

// ScriptStruct UDKGame.UIPanel_Leaderboard.ArchetypeToHeroClassMapping
// 0x0024
struct FArchetypeToHeroClassMapping
{
	struct FString                                     archetypeName;                                            // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     heroClassName;                                            // 0x000C(0x000C) (NeedCtorLink)
	struct FString                                     iconPath;                                                 // 0x0018(0x000C) (NeedCtorLink)
};

// ScriptStruct UDKGame.UIScriptWidget_Combobox.BoxOverlay
// 0x000C
struct FBoxOverlay
{
	float                                              Width;                                                    // 0x0000(0x0004) (Edit)
	struct FColor                                      Color;                                                    // 0x0004(0x0004) (Edit)
	unsigned long                                      bEnabled : 1;                                             // 0x0008(0x0004) (Edit)
};

// ScriptStruct UDKGame.UIScriptWidget_Combobox.ComboboxFlags
// 0x000C
struct FComboboxFlags
{
	unsigned long                                      bPushSelectionToTitle : 1;                                // 0x0000(0x0004) (Edit)
	unsigned long                                      bPreventExpansionOnTitleClick : 1;                        // 0x0000(0x0004) (Edit)
	unsigned long                                      bRotateToggleBtnWhenExpanded : 1;                         // 0x0000(0x0004) (Edit)
	unsigned long                                      bRenderLastElementOverBorder : 1;                         // 0x0000(0x0004) (Edit)
	unsigned long                                      bForceSquareToggleBtn : 1;                                // 0x0000(0x0004) (Edit)
	unsigned long                                      bDrawFullElementBackground : 1;                           // 0x0000(0x0004) (Edit)
	unsigned long                                      bDontDrawToggleIcon : 1;                                  // 0x0000(0x0004) (Edit)
	float                                              TitleWidth;                                               // 0x0004(0x0004) (Edit)
	int                                                DefaultSelection;                                         // 0x0008(0x0004) (Edit, Const)
};

// ScriptStruct UDKGame.UI_SearchFilters.HeroClassInfo
// 0x0010
struct UUI_SearchFilters_FHeroClassInfo
{
	struct FString                                     DisplayName;                                              // 0x0000(0x000C) (NeedCtorLink)
	int                                                Id;                                                       // 0x000C(0x0004)
};

// ScriptStruct UDKGame.UIScriptWidget_ButtonMultiImage.MultiImageEntry
// 0x0024
struct FMultiImageEntry
{
	class USurface*                                    ImageRef;                                                 // 0x0000(0x0004) (Edit)
	float                                              CenterOffsetX;                                            // 0x0004(0x0004) (Edit)
	float                                              CenterOffsetY;                                            // 0x0008(0x0004) (Edit)
	float                                              SizeX;                                                    // 0x000C(0x0004) (Edit)
	float                                              SizeY;                                                    // 0x0010(0x0004) (Edit)
	struct FLinearColor                                ImageColor;                                               // 0x0014(0x0010) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
