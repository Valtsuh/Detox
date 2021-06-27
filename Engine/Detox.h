// #define DETOX // To-do
#define DETOX_VAR
#define DETOX_OVERING_SPACE								"       "
#define DETOX_DEFAULT_TITLE								L"Detoxing"
#define DETOX_NONE			
#define DETOX_UNDEFINED									-1
#define DETOX_EXIT										0
#define DETOX_EXIST										1
#define DETOX_TEST										DETOX_EXIT
#define DETOX_WINDOW_CHARACTERS							8
#define DETOX_WINDOW_PIXELS								16
#define DETOX_WINDOW_CONSOLE							20
#define DETOX_WINDOW_DESKTOP							21
#define DETOX_WINDOW_HEIGHT_MINIMUM						28
#define DETOX_ERROR_EXIT								5
#define DETOX_ERROR_TOO_LONG							6
#define DETOX_ERROR_POSITION							7
#define DETOX_ERROR_POSITION_WARM						70
#define DETOX_ERROR_BUFFER								8
#define DETOX_ERROR_BUFFER_WINDOW_INFO					80
#define DETOX_ERROR_BUFFER_SCREEN_SIZE					81
#define DETOX_ERROR_DESKTOP_AREA						9
#define DETOX_ERROR_CONSOLE_AREA						10
#define DETOX_ERROR_LENGTH								64
#define DETOX_NUMERICS_NOT_AVAILABLE					3435973836

#define DETOX_BUFFER_ATTEMPTS							3
#define DETOX_BUFFER_HANDLE								4
#define DETOX_BUFFER_HANDLE_CURRENT						41
#define DETOX_BUFFER_HANDLE_CURRENT_ERROR				410
#define DETOX_BUFFER_HANDLE_CREATED						42
#define DETOX_BUFFER_HANDLE_INPUT						43
#define DETOX_BUFFER_HANDLE_INPUT_DEFAULT				-10
#define DETOX_BUFFER_HANDLE_OUTPUT						44
#define DETOX_BUFFER_HANDLE_OUTPUT_DEFAULT				-11
#define DETOX_BUFFER_HANDLE_GET_ERROR					5
#define DETOX_MENU										DETOX_EXIST
#define DETOX_MENU_BEGIN								113		// Q
#define DETOX_MENU_OPTIONS								99		// C

#define DETOX_MENU_OPTIONS_SIZE							117		// U

#define DETOX_MENU_OPTIONS_SIZE_TINY					49		// 1
#define DETOX_MENU_OPTIONS_SIZE_TINY_VALUE				1
#define DETOX_MENU_OPTIONS_SIZE_TINY_WIDTH				16
#define DETOX_MENU_OPTIONS_SIZE_TINY_HEIGHT				8

#define DETOX_MENU_OPTIONS_SIZE_SMALL					50		// 2
#define DETOX_MENU_OPTIONS_SIZE_SMALL_VALUE				2
#define DETOX_MENU_OPTIONS_SIZE_SMALL_WIDTH				32
#define DETOX_MENU_OPTIONS_SIZE_SMALL_HEIGHT			16

#define DETOX_MENU_OPTIONS_SIZE_AVERAGE					51		// 3
#define DETOX_MENU_OPTIONS_SIZE_AVERAGE_VALUE			3
#define DETOX_MENU_OPTIONS_SIZE_AVERAGE_WIDTH			48
#define DETOX_MENU_OPTIONS_SIZE_AVERAGE_HEIGHT			24

#define DETOX_MENU_OPTIONS_SIZE_LARGE					52		// 4
#define DETOX_MENU_OPTIONS_SIZE_LARGE_VALUE				4
#define DETOX_MENU_OPTIONS_SIZE_LARGE_WIDTH				64
#define DETOX_MENU_OPTIONS_SIZE_LARGE_HEIGHT			32

#define DETOX_OPTIONS_SIZE_DEFAULT						DETOX_MENU_OPTIONS_SIZE_SMALL_VALUE

#define DETOX_MENU_OPTIONS_VIEW							99
#define DETOX_MENU_OPTIONS_VIEW_WHOLE					49
#define DETOX_MENU_OPTIONS_VIEW_WHOLE_VALUE				1
#define DETOX_MENU_OPTIONS_VIEW_CAMERA					50
#define DETOX_MENU_OPTIONS_VIEW_CAMERA_VALUE			2

#define DETOX_MENU_OPTIONS_MODE							109		// M
#define DETOX_MENU_OPTIONS_MODE_AUTO					49
#define DETOX_MENU_OPTIONS_MODE_MANUAL					50
#define DETOX_MENU_OPTIONS_MODE_NOMINAL					51
#define DETOX_MENU_BACK									98		// B
#define DETOX_MENU_CREATOR								118		// V
#define DETOX_MENU_EXIT									120		// X

#define DETOX_MENU_OPTIONS_CREATURE						100		// D
#define DETOX_MENU_OPTIONS_CREATURES_VERY_FEW			49
#define DETOX_MENU_OPTIONS_CREATURES_VERY_FEW_VALUE		4
#define DETOX_MENU_OPTIONS_CREATURES_FEW				50
#define DETOX_MENU_OPTIONS_CREATURES_FEW_VALUE			8
#define DETOX_MENU_OPTIONS_CREATURES_MODERATELY			51
#define DETOX_MENU_OPTIONS_CREATURES_MODERATELY_VALUE	12
#define DETOX_MENU_OPTIONS_CREATURES_MUCH				52
#define DETOX_MENU_OPTIONS_CREATURES_MUCH_VALUE			16
#define DETOX_MENU_OPTIONS_CREATURES_VERY_MUCH			53
#define DETOX_MENU_OPTIONS_CREATURES_VERY_MUCH_VALUE	20

#define DETOX_MENU_OPTIONS_RATE							102		// F
#define DETOX_MENU_OPTIONS_RATE_VERY_SLOW				49
#define DETOX_MENU_OPTIONS_RATE_VERY_SLOW_VALUE			10000.0000f
#define DETOX_MENU_OPTIONS_RATE_SLOW					50
#define DETOX_MENU_OPTIONS_RATE_SLOW_VALUE				5000.0000f
#define DETOX_MENU_OPTIONS_RATE_AVERAGE					51
#define DETOX_MENU_OPTIONS_RATE_AVERAGE_VALUE			2500.0000f //2500.0000f
#define DETOX_MENU_OPTIONS_RATE_FAST					52
#define DETOX_MENU_OPTIONS_RATE_FAST_VALUE				1000.0000f
#define DETOX_MENU_OPTIONS_RATE_VERY_FAST				53
#define DETOX_MENU_OPTIONS_RATE_VERY_FAST_VALUE			500.0000f


#define DETOX_PLAYER_NAME_LENGTH						32
#define DETOX_PLAYER_IDENTIFIER							-1
#define DETOX_PLAYER_STATUS_DEFAULT						7
#define DETOX_PLAYER_SKILLS								10
#define DETOX_PLAYER_CREATURE_COLLISION_MOVE_CHANCE		8
#define DETOX_PLAYER_SPEED								50
#define DETOX_PLAYER_OFFENSIVE_RANGE					5

#define DETOX_CREATURES									20
#define DETOX_CREATURES_MAX								DETOX_MENU_OPTIONS_CREATURES_VERY_MUCH_VALUE
#define DETOX_CREATURES_MAX_DEFAULT						DETOX_MENU_OPTIONS_CREATURES_FEW_VALUE
#define DETOX_CREATURES_DEFAULT							0
#define DETOX_CREATURE_APPEARANCE						25
#define DETOX_CREATURE_LOCATIONS						3
#define DETOX_CREATURE_NAME_LENGTH						8
#define DETOX_CREATURE_SKILLS							2
#define DETOX_CREATURE_SPEED							25

#define DETOX_SKILL_GAIN								1
#define DETOX_SKILL_LOSS								-1
#define DETOX_SKILL_GAIN_MODIFIER						0.000001f
#define DETOX_SKILL_BASE_GAIN							0.000127f
#define DETOX_SKILL_BOOST								0.0003f
#define DETOX_SKILL_VELOCITY							1
#define DETOX_SKILL_ENDURANCE							2
#define DETOX_SKILL_TRADING								3
#define DETOX_SKILL_COOKING								4
#define DETOX_SKILL_ADAPTING							5
#define DETOX_SKILL_ADAPTING_CHANCE						25
#define DETOX_SKILL_ADAPTING_NEUTRAL					7
#define DETOX_SKILL_ADAPTING_UNFRIENDLY					4
#define DETOX_SKILL_ADAPTING_FRIENDLY					6
#define DETOX_SKILL_ADAPTING_UNDECISIVE					9
#define DETOX_SKILL_FARMING								6
#define DETOX_SKILL_FARMING_CHANCE						25
#define DETOX_SKILL_NAME_LENGTH							32
#define DETOX_SKILLS_MAX								8
#define DETOX_SKILLS_TOTAL								6

#define DETOX_BUFFS										2
#define DETOX_BUFFS_MAX									2
#define DETOX_BUFF_APPEARANCE_CHANCE					25
#define DETOX_BUFF_NAME_LENGTH							32
#define DETOX_BUFF_BASE_DURATION						12
#define DETOX_BUFF_BASE_DURATION_APPEARANCE				36

#define DETOX_RESOURCES_MAX								8
#define DETOX_GEARS_MAX									2
#define DETOX_PROJECTILES_MAX							2

#define DETOX_PLANTS									8
#define DETOX_PLANTS_MAX								8
#define DETOX_PLANTS_DEFAULT							0
#define DETOX_PLANT_SEED								7
#define DETOX_PLANT_ROOTED								8
#define DETOX_PLANT_SMALL								9
#define DETOX_PLANT_AVERAGE								10
#define DETOX_PLANT_GROWN								11
#define DETOX_PLANT_OVERGROWTH							12

#define DETOX_NO_COLLISION								0
#define DETOX_COLLISION_PLAYER							1
#define DETOX_COLLISION_BUFF							2
#define DETOX_COLLISION_CREATURE						3
#define DETOX_COLLISION_CREATURE_LOSS_TINY				0.000751f // 0.00171f
#define DETOX_COLLISION_CREATURE_LOSS_SMALL				0.000343f
#define DETOX_COLLISION_CREATURE_LOSS_AVERAGE			0.000151f
#define DETOX_COLLISION_CREATURE_LOSS_LARGE				0.000061f
#define DETOX_COLLISION_CREATURE_NORTH					2
#define DETOX_COLLISION_CREAUTRE_SOUTH					3
#define DETOX_COLLISION_CREATURE_WEST					4
#define DETOX_COLLISION_CREATURE_EAST					5
#define DETOX_COLLISION_RESOURCE						4
#define DETOX_COLLISION_RESOURCE_PLANT					40
#define DETOX_COLLISION_RESOURCE_CURRENCY				41
#define DETOX_COLLISION_RESOURCE_PREPAREMENT			42
#define DETOX_COLLISION_RESOURCE_REFRESHMENT			43
#define DETOX_COLLISION_OVER							-1
#define DETOX_COLLISION_SWEEP							-2
#define DETOX_COLLISION_GEAR							5
#define DETOX_COLLISION_GEAR_SHURIKEN					50

#define DETOX_MESSAGE_UP								"You try to move up."
#define DETOX_MESSAGE_DOWN								"You slide a bit down."
#define DETOX_MESSAGE_LEFT								"You attempt to the left."
#define DETOX_MESSAGE_RIGHT								"You move to the right."
#define DETOX_MESSAGE_NOTICE_DISTANCE					"You notice something at the distance"
#define DETOX_MESSAGE_NOTICE_PLANT						"You notice a little plant growing"
#define DETOX_MESSAGE_SENSED							"You sensed something"
#define DETOX_MESSAGE_BUFF_VALJURIAN_WINGS_GAINED		"Wings gained"
#define DETOX_MESSAGE_BUFF_WAVY_LENGTHS_GAINED			"Gains increased"
#define DETOX_MESSAGE_BUFF_AVAILABLE					"You devel towards a buff" // Note to myself: Devel(?)
#define DETOX_MESSAGE_RESOURCE_AVAILABLE				"You vale towards something"
#define DETOX_MESSAGE_RESOURCE_PLANT_NOTICE				"You notice a little plant growing"
#define DETOX_MESSAGE_RESOURCE_CURRENCY_NOTICE			"Something glaring at the distance" // Likely to change
#define DETOX_MESSAGE_RESOURCE_PREPAREMENT_NOTICE		"A helpful looking sight" // Likely to change
#define DETOX_MESSAGE_RESOURCE_REFRESHMENT_NOTICE		"A delight at a distance"
#define DETOX_MESSAGE_GEAR_AVAILABLE					"You swiff towards ease"
#define DETOX_MESSAGE_GEAR_SHURIKEN_NOTICE				"You notice something sharp by the distance"
#define DETOX_MESSAGE_CREATURE_APPEARANCE				"A mysterious creature has appeared"
#define DETOX_MESSAGE_CREATURE_COLLISION				"You bumped into a creature."
#define DETOX_MESSAGE_CREATURE_COLLIDED					"Creature bumped into player."
#define DETOX_MESSAGE_CREATURE_FRIENDLY					"Creatures lets you move close, seems friendly"
#define DETOX_MESSAGE_CREATURE_UNFRIENDLY				"Creature stares ominously at you"
#define DETOX_MESSAGE_CREATURE_UNDECISIVE				"Creature wonders around"
#define DETOX_MESSAGE_CREATURE_TO_CREATURE_BUMP			"Creatures bumped into each other"
//#define DETOX_MESSAGE_CREATURE_SCAVE					"Creature scaved " // Scaved, because makes sense
#define DETOX_MESSAGE_CREATURE_ATTACK_BASE				"Creature damaged for" // likely to change
#define DETOX_MESSAGE_CREATURE_DEFEATED_BASE			"Creature defeated" // likely to change
#define DETOX_MESSAGE_ENDURANCE_FELL					"Creature got to bit, Endurance fell"			//
#define DETOX_MESSAGE_ENDURANCE_GAINED					"Very sustainable, Endurance gained"			//
#define DETOX_MESSAGE_ENDURANCE_FLOW					"Current went through you, Endurance refreshed" // Max 32 width ( ...? )
#define DETOX_MESSAGE_ENDURANCE_SELF					"A moment to rest, Endurance recovered"			// Max 24 width
#define DETOX_MESSAGE_ENDURANCE_PICKUP					"You picked up some supplies"
#define DETOX_MESSAGE_POOR								"Very poorly treated, -ADT -END +TDG"
#define DETOX_MESSAGE_VELOCITY_FELL						"Creature spotted you, Velocity fell"			//
#define DETOX_MESSAGE_VELOCITY_GAINED					"Too quick, Velocity gained"					//
#define DETOX_MESSAGE_VELOCITY_FLOW						"Easy bits, Velocity refreshed"
#define DETOX_MESSAGE_TRADING_FELL						"Bit crumbled, Trading fell"					//
#define DETOX_MESSAGE_TRADING_GAINED					"Creature through, Trading gained"				//
#define DETOX_MESSAGE_TRADING_SELF						"Well gain, Trading recovered"					//
#define DETOX_MESSAGE_TRADING_CURRENCY_PICKUP			"Gained some currency"
#define DETOX_MESSAGE_TRADING_CURRENCY_LOST				"You lost a little bit of currency"
#define DETOX_MESSAGE_COOKING_FELL						"Food bit burned, Cooking fell"					//
#define DETOX_MESSAGE_COOKING_TRIP						"Food on the floor, -TDG -END -CKG"		//
#define DETOX_MESSAGE_COOKING_GAINED					"Food cooked, Cooking gained"					// 
#define DETOX_MESSAGE_COOKING_BOOST						"Meat very tender, Cooking boosted"				// 
#define DETOX_MESSAGE_REFRESHMENT_PICKUP				"Managed to gather some refreshments"
#define DETOX_MESSAGE_ADAPTING_SUCCESS					"You got a scent, Adapting succeeded"
#define DETOX_MESSAGE_ADAPTING_FAILED					"Creature murred ominously, Adapting failed"
#define DETOX_MESSAGE_ADAPTING_FELL						"Rarely bumped to any creatures, Adapting fell"
#define DETOX_MESSAGE_ADAPTING_CREATURE					"Creature attempted adapting"			
#define DETOX_MESSAGE_CKG_TDG_SELF						"Self sufficient, Cooking and Trading gained"	//
#define DETOX_MESSAGE_FARMING_SUCCEEDED					"Handled some plants, Farming rose"
#define DETOX_MESSAGE_FARMING_FAILED					"Plant got damaged, Farming fell"
#define DETOX_MESSAGE_FARMING_PICKUP					"Picked up some plants, Farming grewth"
#define DETOX_MESSAGE_FARMING_WATER						"You used a refreshment to water the plants (* -1)"

#define DETOX_MESSAGE_PLAYER_ARRIVAL					"You arrive in an unknown location."

#define DETOX_MESSAGE_SHURIKEN_PICKUP					"You found some stars to throw"

#define DETOX_MESSAGE_ATTACK_PLAYER						"You damage the creature"
#define DETOX_MESSAGE_ATTACK_CREATURE					"Creature attacked"
#define DETOX_MESSAGE_DAMAGE_NONE						"Attack failed"
#define DETOX_MESSAGE_DEAD_CREATURE						"Creature died"
#define DETOX_MESSAGE_LENGTH							64

#define DETOX_MESSAGE_PLAYER_TARGETING					"You targeted a creature"
#define DETOX_MAP_SIZE_WIDTH_DEFAULT					16
#define DETOX_MAP_SIZE_HEIGHT_DEFAULT					8
#define DETOX_MAP_TILE_GROUND							0
#define DETOX_MAP_TILE_PLAYER							1
#define DETOX_MAP_TILE_CREATURE							2
#define DETOX_MAP_TILE_PLANT							3
#define DETOX_MAP_TILE_BUFF								4

#define DETOX_RESOURCE_DEFAULT							7

#define DETOX_TYPE_OVERALL								-2
#define DETOX_TYPE_EVENT								-1
#define DETOX_TYPE_PLAYER								1
#define DETOX_TYPE_PLAYER_TO_CREATURE					11
#define DETOX_TYPE_PLAYER_ATTACK						12
#define DETOX_TYPE_PLAYER_ATTACK_PROJECTILE				13
#define DETOX_TYPE_CREATURE								2
#define DETOX_TYPE_CREATURE_TO_CREATURE					21
#define DETOX_TYPE_CREATURE_ATTACK						22
#define DETOX_TYPE_ITEM									3
#define DETOX_TYPE_ITEM_RESOURCE						30
#define DETOX_TYPE_ITEM_RESOURCE_PLANT					301
#define DETOX_TYPE_ITEM_RESOURCE_PLANT_CHARACTER		','
#define DETOX_TYPE_ITEM_RESOURCE_CURRENCY				302
#define DETOX_TYPE_ITEM_RESOURCE_CURRENCY_CHARACTER		'+'
#define DETOX_TYPE_ITEM_RESOURCE_CURRENCY_LOSS			1
#define DETOX_TYPE_ITEM_RESOURCE_PREPAREMENT			303
#define DETOX_TYPE_ITEM_RESOURCE_PREPAREMENT_CHARACTER	'='
#define DETOX_TYPE_ITEM_RESOURCE_REFRESHMENT			304
#define DETOX_TYPE_ITEM_RESOURCE_REFRESHMENT_CHARACTER	'*'
#define DETOX_TYPE_ITEM_GEAR							31
#define DETOX_TYPE_ITEM_GEAR_SHURIKEN					311
#define DETOX_TYPE_ITEM_GEAR_SHURIKEN_CHARACTER			'x'
#define DETOX_TYPE_ITEM_GEAR_SHURIKEN_RANGE				3
#define DETOX_TYPE_ITEM_GEAR_SHURIKEN_DAMAGE_MIN		1
#define DETOX_TYPE_ITEM_GEAR_SHURIKEN_DAMAGE_MAX		2	
#define DETOX_TYPE_GROUND								4
#define DETOX_TYPE_BUFF									5
#define DETOX_TYPE_BUFF_VALJURIAN_WINGS					51 // Subjective to change
#define DETOX_TYPE_BUFF_VALJURIAN_WINGS_STATUS			1
#define DETOX_TYPE_BUFF_VALJURIAN_WINGS_EFFECT			0.1f
#define DETOX_TYPE_BUFF_WAVY_LENGTHS					52
#define DETOX_TYPE_BUFF_WAVY_LENGTHS_EFFECT				0.000075f
#define DETOX_TYPE_BUFF_WAVY_LENGTHS_STATUS				2
#define DETOX_TYPE_BUFF_PLAYER							501
#define DETOX_TYPE_BUFF_MAP								502
#define DETOX_TYPE_SKILL								6
#define DETOX_TYPE_SEX									7
#define DETOX_TYPE_SEX_FEMALE							71
#define DETOX_TYPE_SEX_MALE								72
#define DETOX_TYPE_SEX_SELF								73
#define DETOX_TYPE_SEX_NONE								74
#define DETOX_TYPE_SEX_OTHER							75
#define DETOX_TYPE_SEX_UNDECISIVE						76
#define DETOX_TYPE_SEX_BISEXUAL							77
//#define DETOX_TYPE_SEX_ANY								78
#define DETOX_TYPE_RELIGION								8
#define DETOX_TYPE_RELIGION_NONE						801
#define DETOX_TYPE_RELIGION_SELF						802
#define DETOX_TYPE_RELIGION_OTHER						803
#define DETOX_TYPE_RELIGION_JEWISH						804
#define DETOX_TYPE_RELIGION_ATHEIST						805
#define DETOX_TYPE_RELIGION_BUDDHIST					806
#define DETOX_TYPE_RELIGION_CHRISTIAN					807
#define DETOX_TYPE_RELIGION_ORTHODOX					808
#define DETOX_TYPE_RELIGION_HINDUIST					809
#define DETOX_TYPE_RELIGION_CATHOLIC					810
#define DETOX_TYPE_RACE									9	// Very likely to change
#define DETOX_TYPE_RACE_YELLOW							91
#define DETOX_TYPE_RACE_WHITE							92
#define DETOX_TYPE_RACE_BLACK							93
#define DETOX_TYPE_RACE_RED								84
#define DETOX_TYPE_RACE_BROWN							95
#define DETOX_TYPE_ERROR								10
#define DETOX_TYPE_MESSAGE								11
#define DETOX_TYPE_MESSAGE_DEBUG						111
#define DETOX_TYPE_READ									12
#define DETOX_TYPE_WRITE								13
#define DETOX_TYPE_DEBUG								14
#define DETOX_TYPE_MOVE									15
#define DETOX_TYPE_MOVE_HALTED							151
#define DETOX_TYPE_MELEE								16
#define DETOX_TYPE_MELEE_DAMAGE_MIN						0
#define DETOX_TYPE_MELEE_DAMAGE_MAX						1
#define DETOX_TYPE_PROJECTILE							17
#define DETOX_TYPE_ATTACK								18
#define DETOX_TYPE_ATTACK_PLAYER						181
#define DETOX_TYPE_ATTACK_PLAYER_PROJECTILE				1811
#define DETOX_TYPE_ATTACK_CREATURE						19
#define DETOX_TYPE_COMMON								20
#define DETOX_TYPE_OVERVIEW								25	

#define DETOX_INTERFACE									0
#define DETOX_INTERFACE_PADDING							2
#define DETOX_INTERFACE_GAME							0

#define DETOX_INTERFACE_MESSAGE_STATUS					1
#define DETOX_INTERFACE_MESSAGE_PLAYER					2
#define DETOX_INTERFACE_MESSAGE_MAP						3
#define DETOX_INTERFACE_MESSAGE_CREATURE				4
#define DETOX_INTERFACE_MESSAGE_DEBUG					5
#define DETOX_INTERFACE_MESSAGE_LINES					6

#define DETOX_INTERFACE_DEBUG							-1

#define DETOX_INTERFACE_TOP								1
#define DETOX_INTERFACE_TOP_WIDTH						72
#define DETOX_INTERFACE_TOP_HEIGHT						DETOX_INTERFACE_MESSAGE_LINES

#define DETOX_INTERFACE_MAP								2
#define DETOX_INTERFACE_MAP_DEFAULT_WIDTH				DETOX_MAP_SIZE_WIDTH_DEFAULT
#define DETOX_INTERFACE_MAP_DEFAULT_HEIGHT				DETOX_MAP_SIZE_HEIGHT_DEFAULT

#define DETOX_INTERFACE_STATISTICS						3
#define DETOX_INTERFACE_STATISTICS_WIDTH				64
#define DETOX_INTERFACE_STATISTICS_HEIGHT				8
#define DETOX_INTERFACE_STATISTICS_DISPLAY_CREATURES	5

#define DETOX_INTERFACE_INVENTORY						4
#define DETOX_INTERFACE_INVENTORY_WIDTH					8
#define DETOX_INTERFACE_INVENTORY_HEIGHT				5

#define DETOX_INTERFACE_LOG								5
#define DETOX_INTERFACE_LOG_WIDTH						82
#define DETOX_INTERFACE_LOG_HEIGHT						16
#define DETOX_INTERFACE_LOG_UP							-1
#define DETOX_INTERFACE_LOG_DOWN						1

#define DETOX_INTERFACE_PLAYER							6
#define DETOX_INTERFACE_PLAYER_WIDTH					64
#define DETOX_INTERFACE_PLAYER_HEIGHT					DETOX_SKILLS_TOTAL + 4

#define DETOX_INTERFACE_CAMERA							7
#define DETOX_INTERFACE_CAMERA_PLAYER					8
#define DETOX_INTERFACE_CAMERA_IDLE						9

#define DETOX_INTERFACE_PARTS							10
#define DETOX_INTERFACE_ADDITIONAL_WIDTH				8
#define DETOX_INTERFACE_ADDITIONAL_HEIGHT				8

#define DETOX_INVENTORY_SLOTS							6

#define DETOX_SORT_LOW									-1
#define DETOX_SORT_HIGH									1
#define DETOX_SORT_RE									2

#define DETOX_DICE_DEFAULT								100
#define DETOX_DICE_BUFF									25
#define DETOX_DICE_PLAYER_MOVEMENT_TINY					54
#define DETOX_DICE_PLAYER_MOVEMENT_SMALL				46
#define DETOX_DICE_PLAYER_MOVEMENT_AVERAGE				38
#define DETOX_DICE_PLAYER_MOVEMENT_LARGE				30
#define DETOX_DICE_PLAYER_ATTACK						35
#define DETOX_DICE_COLLIDED								100
#define DETOX_DICE_NON_COLLIDED							600
#define DETOX_DICE_MINOR								25
#define DETOX_DICE_EVENT								75  // Any over 150 (ish) values are comparable to Stranded, The Long Dark, Banished (for example) "hard modes"
#define DETOX_DICE_EVENT_CREATURE						100
#define DETOX_DICE_CREATURE_TO_CREATURE					10
#define DETOX_DICE_RESOURCE_APPEARANCE					10
#define DETOX_DICE_GEAR_APPEARANCE						10
#define DETOX_DICE_BUFF_APPEARANCE_MIN					0
#define DETOX_DICE_BUFF_APPEARANCE_MAX					100
#define DETOX_DICE_CREATURE_APPEARANCE					DETOX_CREATURE_APPEARANCE * 2
#define DETOX_DICE_RELIGION_MIN							DETOX_TYPE_RELIGION_NONE
#define DETOX_DICE_RELIGION_MAX							DETOX_TYPE_RELIGION_OTHER
#define DETOX_DICE_SEX_MIN								DETOX_TYPE_SEX_FEMALE
#define DETOX_DICE_SEX_MAX								DETOX_TYPE_SEX_BISEXUAL
#define DETOX_DICE_RACE_MIN								DETOX_TYPE_RACE_YELLOW
#define DETOX_DICE_RACE_MAX								DETOX_TYPE_RACE_BROWN
#define DETOX_DICE_RESOURCE_MIN							DETOX_TYPE_ITEM_RESOURCE_PLANT
#define DETOX_DICE_RESOURCE_MAX							DETOX_TYPE_ITEM_RESOURCE_REFRESHMENT
#define DETOX_DICE_PROJECTILE_REUSABLE					10

#define DETOX_CONTROLS_UP								119 | 'w'
#define DETOX_CONTROLS_DOWN								115 | 's'
#define DETOX_CONTROLS_LEFT								97 | 'a'
#define DETOX_CONTROLS_RIGHT							100 | 'd'

#define DETOX_CHARACTER_CLEAR							' '
#define DETOX_CHARACTER_PLAYER							'@'
#define DETOX_CHARACTER_CREATURE						'u'
#define DETOX_CHARACTER_MAP_CORNER						'+'
#define DETOX_CHARACTER_MAP_HORIZONTAL					'|'
#define DETOX_CHARACTER_MAP_VERTICAL					'-'

#define DETOX_EXPERIENCE_BASE_PLAYER					25
#define DETOX_EXPERIENCE_BASE_CREATURE					15

#define DETOX_DAMAGE_BASE_PLAYER						2
#define DETOX_DAMAGE_BASE_CREATURE						1

#define DETOX_HEALTH_RECOVERY_BASE_PLAYER				1
#define DETOX_HEALTH_RECOVERY_BASE_CREATURE				1
#define DETOX_HEALTH_BASE_PLAYER						5
#define DETOX_HEALTH_BASE_CREATURE						4

#define DETOX_CAMERA_CENTER								1 // Amount of tiles before camera moves
#define DETOX_CAMERA_RADIUS_NONE						0
#define DETOX_CAMERA_MODE_TINY							1
#define DETOX_CAMERA_RADIUS_TINY						1
#define DETOX_CAMERA_MODE_SMALL							2
#define DETOX_CAMERA_RADIUS_SMALL						2
#define DETOX_CAMERA_MODE_AVERAGE						3
#define DETOX_CAMERA_RADIUS_AVERAGE						3
#define DETOX_CAMERA_MODE_LARGE							4
#define DETOX_CAMERA_RADIUS_LARGE						4
#define DETOX_CAMERA_MODE_DEFAULT						DETOX_CAMERA_MODE_SMALL
#define DETOX_CAMERA_PLAYER								1
#define DETOX_CAMERA_IDLE								2
#define DETOX_CAMERAS_MAX								4

#define DETOX_CONNECTOR_ADDRESS_FAMILY					AF_INET
#define DETOX_CONNECTOR_TYPE							SOCK_STREAM
#define DETOX_CONNECTOR_PROTOCOL						IPPROTO_TCP
#define DETOX_CONNECTOR_PORT_DEFAULT					27015
#define DETOX_CONNECTOR_SUCCESS							0
#define DETOX_CONNECTOR_CONNECTED						0
#define DETOX_CONNECTOR_EXIST							DETOX_EXIST
#define DETOX_CONNECTOR_VERIFY							DETOX_UNDEFINED
#define DETOX_CONNECTOR_SOCKET_INVALID					INVALID_SOCKET
#define DETOX_CONNECTOR_SOCKET_VERIFY					DETOX_UNDEFINED
#define DETOX_CONNECTOR_SOCKET_ERROR					SOCKET_ERROR
#define DETOX_CONNECTOR_SOCKET_EXIST					1
#define DETOX_CONNECTOR_WAIT							3
#define DETOX_CONNECTOR_ATTEMPT							4
#define DETOX_CONNECTOR_MAX_ATTEMPTS					5

#define DETOX_STATUS_DEFAULT							7
#define DETOX_STATUS_RESOURCE_DEFAULT					7
#define DETOX_STATUS_INVENTORY_UNVISIBLE				8
#define DETOX_STATUS_ITEM_THROWN						3

#define DETOX_TEXT_MAX_LENGTH							64
#define DETOX_TITLE_LENGTH								32
#define DETOX_NAME_LENGTH								8
#define DETOX_MAX_NAME_LENGTH							24
#define DETOX_ADDRESS_LENGTH							16
#define DETOX_READ_LENGTH								8
#define DETOX_LOG_MESSAGE_LENGTH						DETOX_MESSAGE_LENGTH
#define DETOX_LETTERS									"ABCDEFGHIJKLMNOPQRSTUVWXYZ"

#define DETOX_MODE_DEFAULT								0
#define DETOX_MODE_AUTO									1
#define DETOX_MODE_MANUAL								2
#define DETOX_MODE_RANDOM								3
#define DETOX_MODE_UNDEFINED							4
#define DETOX_MODE_NOMINAL								5 // Note to self: The between of manual - auto, still fresh
#define DETOX_MODE_TEST									DETOX_MODE_AUTO
#define DETOX_MODE_TEST_AMMO							8
#define DETOX_MODE_TEST_RATE							5.0000f

#define DETOX_MODE_CAMERA_DEFAULT						DETOX_MENU_OPTIONS_VIEW_CAMERA_VALUE

#define DETOX_MODE_PRIVATE								DETOX_EXIT
#define DETOX_MODE_PRIVATE_RELIGION						DETOX_TYPE_RELIGION_SELF
#define DETOX_MODE_PRIVATE_SEX							DETOX_TYPE_SEX_SELF


#ifdef DETOX_RUN // To-do, #define *_*
#define _X86_
#pragma comment(lib, "Ws2_32.lib")
// Development increments
#include <iostream>
#include <processenv.h>
#include <consoleapi3.h>
#include <consoleapi2.h>
#include <winuser.h>
#include <processthreadsapi.h>
#include <synchapi.h>
#include <errhandlingapi.h>
#include <winsock2.h>
#include <tlhelp32.h>
#define DETOX_MAIN int main
#else
#include <windows.h>
#define DETOX_MAIN int __stdcall WinMain
#endif

typedef int DETOX_NUMBER; // dbr / DBR, essentially would represent a number and behave similarly to int
typedef char DETOX_TILE; // To-do, expand (...?)
typedef float DETOX_DECIMAL;
namespace detox {

	struct DBX { // To-do, proper value handling
		template <typename DETOX_VALUE>
		DETOX_VALUE _value(DETOX_VALUE value) {
			return (char)this;
		}
		
	};
	struct DETOX_TIME {
		DETOX_NUMBER year, month, day, hours, minutes, seconds, milliseconds, success;
		SYSTEMTIME system;
		void _clock() {
			GetLocalTime(&this->system);
			this->year = this->system.wYear;
			this->month = this->system.wMonth;
			this->day = this->system.wDay;
			this->hours = this->system.wHour;
			this->minutes = this->system.wMinute;
			this->seconds = this->system.wSecond;
			this->milliseconds = this->system.wMilliseconds;
		}
	};
	struct DETOX_DATA {
		int size = 0;
		int status;
		DETOX_DATA _self(DETOX_DATA data = { 0 }) {
			this->status = DETOX_EXIT;
			if (this->size > data.size) {
				this->status = DETOX_EXIST;
			}
			return *this;
		}
	};
	class DETOX_RANDOM {
	public:
		int value;
		void _init() {
			srand((unsigned int)time(NULL));// Note to myself: Makes sense
		}
		void _self() {
			DETOX_RANDOM rdx = { 0 };
			this->value = rand();
			std::cout << this->value << " " << rdx.value << std::endl;
			if (this->value != rdx.value) {
				this->value = rdx.value;
			}
			else {
				this->_self();
			}
		}
	};
	struct DETOX_POSITION {
		DETOX_NUMBER x, y, identifier, type;
		void _clear() {
			this->x = DETOX_UNDEFINED;
			this->y = DETOX_UNDEFINED;
		}
	};
	struct DETOX_SIZE {
		DETOX_NUMBER width = DETOX_UNDEFINED, height = DETOX_UNDEFINED, radius = DETOX_UNDEFINED, mode = DETOX_UNDEFINED;
	};
	struct DETOX_DIMENSION {
		DETOX_POSITION position;
		DETOX_SIZE size;
	};
	struct DETOX_SOCKET {
		SOCKET identifier;
		DETOX_NUMBER status = DETOX_UNDEFINED, stability = DETOX_UNDEFINED, wait = 0, type = DETOX_UNDEFINED;
	};
	struct DETOX_ADDRESS {
		DETOX_NUMBER a, b, c, d, length = 0, counter = 0, block = 0, port = DETOX_CONNECTOR_PORT_DEFAULT; // likely to change
		char holder[4], separator = '.', address[DETOX_ADDRESS_LENGTH] = {};
		in_addr addr;
		void _direct(const char address[]) {
			*this->address = *address;
			do {
				if (address[this->length] != this->separator) {
					this->holder[this->counter] = address[this->length];
					this->counter++;
				}
				else {
					this->counter = 0;
					switch (this->block) {
					case 0:
						this->addr.S_un.S_un_b.s_b1 = *this->holder;
						this->a = (DETOX_NUMBER)this->holder;
						break;
					case 1:
						this->addr.S_un.S_un_b.s_b2 = *this->holder;
						this->b = (DETOX_NUMBER)this->holder;
						break;
					case 2:
						this->addr.S_un.S_un_b.s_b3 = *this->holder;
						this->c = (DETOX_NUMBER)this->holder;
						break;
					case 3:
						this->addr.S_un.S_un_b.s_b4 = *this->holder;
						this->d = (DETOX_NUMBER)this->holder;
						break;
					}
					do {
						this->holder[this->counter] = this->separator;
						this->counter++;
					} while (this->holder[this->counter] != '\0');
					this->block++;
				}
				this->length++;
			} while (address[this->length] != '\0');

		}
	};
	struct DETOX_CONNECTION {
		//char address[DETOX_ADDRESS_LENGTH];
		DETOX_ADDRESS address;
		sockaddr sockaddr;
		DETOX_NUMBER length = 0, port = DETOX_CONNECTOR_PORT_DEFAULT, status = DETOX_UNDEFINED, wait = DETOX_UNDEFINED, stability = DETOX_UNDEFINED;

		void _set(const char address[], DETOX_NUMBER af = DETOX_CONNECTOR_ADDRESS_FAMILY) {
			/*
			do {
				this->address[this->length] = address[this->length];
				this->length++;
			} while (address[this->length] != '\0');
			*/
			this->address._direct(address);
			this->sockaddr.sa_family = af;
			this->length = 0;
		}
	};
	struct DETOX_CONNECTOR {
		char read[DETOX_READ_LENGTH] = {}, message[DETOX_MESSAGE_LENGTH] = {}, error[DETOX_ERROR_LENGTH] = {};
		DETOX_SOCKET sock;
		DETOX_CONNECTION connection;
		DETOX_NUMBER length = 0, status = DETOX_UNDEFINED, stability = DETOX_UNDEFINED, wait = 0, type = DETOX_UNDEFINED, attempt = 0;
		WSADATA wsadata;
		void _to(const char address[]) {
		}
		void _message(const char message[], DETOX_NUMBER type = DETOX_TYPE_MESSAGE) {
			for (DETOX_NUMBER t = 0; t < DETOX_MESSAGE_LENGTH; t++) this->message[t] = ' ';
			this->type = type;
			do {
				switch (this->type) {
				case DETOX_TYPE_MESSAGE:
					this->message[this->length] = message[this->length];
					break;
				case DETOX_TYPE_ERROR:
					this->error[this->length] = message[this->length];
					break;
				}
				this->length++;
			} while (message[this->length] != '\0');
			this->length = 0;
		}
		void _sock(DETOX_NUMBER af = DETOX_CONNECTOR_ADDRESS_FAMILY, DETOX_NUMBER type = DETOX_CONNECTOR_TYPE, DETOX_NUMBER protocol = DETOX_CONNECTOR_PROTOCOL) {
			this->status = DETOX_CONNECTOR_ATTEMPT;
			if (this->sock.wait == 0) {
				this->sock.status = WSAStartup(MAKEWORD(2, 2), &this->wsadata);
				if (this->sock.status != DETOX_CONNECTOR_SUCCESS) {
					this->_message("WSA startup failed", DETOX_TYPE_ERROR);
					this->sock.status = WSAGetLastError();
					this->sock.stability = DETOX_CONNECTOR_SOCKET_VERIFY;
				}
				else {
					this->sock.identifier = socket(af, type, protocol);
					if (this->sock.identifier != DETOX_CONNECTOR_SOCKET_INVALID) {
						this->sock.status = DETOX_CONNECTOR_SOCKET_EXIST;
						this->sock.stability = DETOX_CONNECTOR_SOCKET_EXIST;
						this->_message("Socket up, attempting to connect.");
					}
					else {
						this->sock.status = WSAGetLastError();
						this->sock.stability = DETOX_CONNECTOR_SOCKET_VERIFY;
						this->sock.wait = DETOX_CONNECTOR_WAIT;
						this->_message("Socket error.");
					}
				}
			}
			else {
				if (this->sock.wait == (DETOX_CONNECTOR_WAIT - 1)) {
					this->_message("Attempting to resock", DETOX_TYPE_MESSAGE);
				}
				this->sock.wait--;
			}

		}

		void _connect(const char address[], DETOX_NUMBER port = DETOX_CONNECTOR_PORT_DEFAULT, DETOX_NUMBER af = DETOX_CONNECTOR_ADDRESS_FAMILY) {
			if (this->sock.stability == DETOX_CONNECTOR_SOCKET_EXIST) {
				if (this->connection.status != DETOX_CONNECTOR_CONNECTED) {
					if (this->wait == 0) {
						this->connection._set(address);
						this->connection.status = connect(this->sock.identifier, &this->connection.sockaddr, 16);
						switch (this->connection.status) {
						case DETOX_CONNECTOR_CONNECTED:
							this->_message("Connected.", DETOX_TYPE_MESSAGE);
							this->connection.stability = DETOX_CONNECTOR_EXIST;
							this->connection.wait = 0;
							break;
						case DETOX_CONNECTOR_SOCKET_ERROR:
							this->_message("Connection failed.", DETOX_TYPE_ERROR);
							this->connection.stability = DETOX_CONNECTOR_VERIFY;
							this->connection.status = WSAGetLastError();
							this->wait = DETOX_CONNECTOR_WAIT;
							break;
						}
						this->attempt++;
					}
					else {
						this->_message("Attempting to reconnect.", DETOX_TYPE_MESSAGE);
						this->connection.status = DETOX_CONNECTOR_ATTEMPT;
						this->wait--;
					}
				}
			}
			else {
				this->_sock();
			}
		}

	};
	struct DETOX_BUFFER {

		DETOX_NUMBER length, success, identifier, attempts, error = DETOX_UNDEFINED, warm, clean = DETOX_UNDEFINED;
		CONSOLE_SCREEN_BUFFER_INFO info, stored, show;
		DETOX_SIZE size, desk;
		DETOX_DIMENSION temp;
		COORD cursor, largest; // buffer->cursor
		HANDLE current, in, out, created;
		void _new() {


		}
		void _default() {
			this->in = GetStdHandle(DETOX_BUFFER_HANDLE_INPUT_DEFAULT); 
			this->out = GetStdHandle(DETOX_BUFFER_HANDLE_OUTPUT_DEFAULT);			
			this->current = out;
			this->largest = GetLargestConsoleWindowSize(this->current);
			this->desk.width = GetSystemMetrics(SM_CXMAXIMIZED);
			this->desk.height = GetSystemMetrics(SM_CYMAXIMIZED);
			this->_cursor(0, 0);
			GetConsoleScreenBufferInfo(this->current, &this->info);
		}

		void _switch(DETOX_NUMBER handle = DETOX_UNDEFINED) {
			switch (handle) {
			default:
			case DETOX_BUFFER_HANDLE_OUTPUT:
				this->current = this->out;
				this->identifier = DETOX_BUFFER_HANDLE_OUTPUT;
				break;
			case DETOX_BUFFER_HANDLE_INPUT:
				this->current = this->in;
				this->identifier = DETOX_BUFFER_HANDLE_INPUT;
				break;
			case DETOX_BUFFER_HANDLE_CURRENT:
				this->identifier = handle;
				break;
			case DETOX_BUFFER_HANDLE_CREATED:
				this->current = this->created;
				this->identifier = DETOX_BUFFER_HANDLE_CREATED;
				break;
			}
		}


		void _cursor(int x = -1, int y = -1) {
			if (x >= 0) this->cursor.X = x;
			if (y >= 0) this->cursor.Y = y;
			SetConsoleCursorPosition(this->current, this->cursor);
		}

		void _size(DETOX_NUMBER width = DETOX_UNDEFINED, DETOX_NUMBER height = DETOX_UNDEFINED) {

			 // E: 87 -> window is too small in pixel size
			this->length = 0;
			this->success = 0;
			this->info.srWindow.Top = 0; // Increasing decreases size, relative to current window coordinates (+1).
			this->info.srWindow.Left = 0;
			this->info.srWindow.Right = width - 1;
			this->info.srWindow.Bottom = height - 1;
			this->info.dwSize.X = width;
			this->info.dwSize.Y = height;
			this->info.dwMaximumWindowSize.X = width - 1;
			this->info.dwMaximumWindowSize.Y = height - 1;
			this->size.width = width;
			this->size.height = height;
			SetConsoleScreenBufferSize(this->current, this->info.dwSize);
			SetConsoleWindowInfo(this->current, DETOX_EXIST, &this->info.srWindow);
			/*
			this->error = GetLastError();
			
			if (this->identifier == 0 || this->error > 0) {
				this->error = GetLastError();
				std::cout << " Failed at DETOX_BUFFER (info.srWindow, window info), E: " << this->error << ", identifier: " << this->identifier << ", success: " << this->success << std::endl;
				system("pause");
			}
			else {
				this->success++;
				this->identifier = SetConsoleScreenBufferSize(this->current, this->info.dwSize);
				this->error = GetLastError();
				if (identifier == 0 || this->error > 0) {
					this->error = GetLastError();
					std::cout << " Failed at DETOX_BUFFER (info.dwSize, screen buffer size), E: " << this->error << ",  identifier: " << this->identifier << ", success: " << this->success << std::endl;
					system("pause");
				}
				else {
					this->success++;
				}
				if (this->error > 0) {
					this->_info(0);
					system("pause");
				}
			}
			*/
		}

		void _clear(DETOX_NUMBER x = DETOX_UNDEFINED, DETOX_NUMBER y = DETOX_UNDEFINED, DETOX_NUMBER w = DETOX_UNDEFINED, DETOX_NUMBER h = DETOX_UNDEFINED, DETOX_NUMBER mode = DETOX_UNDEFINED) {
			this->temp.position.x = x;
			this->temp.position.y = y;
			if (w == DETOX_UNDEFINED) w = this->size.width;
			if (h == DETOX_UNDEFINED) h = 0;
			this->temp.size.width = w;
			this->temp.size.height = h;
			do {
				if (y > this->size.height - 1) break;
				this->_cursor(this->temp.position.x, this->temp.position.y + h);
				do {
					if (x > this->size.width - 1) break;
					if (mode == DETOX_EXIST) {
						std::cout << ',';
					}
					else {
						std::cout << DETOX_CHARACTER_CLEAR;
					}
					x++;


				} while (x < this->temp.position.x + w);
				y++;
				x = this->temp.position.x;
				if (mode == DETOX_EXIST) {
					std::cout << "-" << x << ", " << y << "," << w << "/" << this->size.width << ", " << h << "/" << this->size.height << "-";
					system("pause");
				}
			} while (y < this->temp.position.y + h);

			this->_cursor(this->temp.position.x, this->temp.position.y);
		}

		void _text(DETOX_NUMBER x = DETOX_UNDEFINED, DETOX_NUMBER y = DETOX_UNDEFINED) {

		}

		template <typename DETOX_VALUE>
		void _type(DETOX_VALUE character, DETOX_NUMBER status = DETOX_UNDEFINED, DETOX_NUMBER mode = DETOX_UNDEFINED) {
			if (mode == DETOX_EXIST) {
				std::cout << "-" << character << "-";
				system("pause");
			}
			else {
				if (status != DETOX_UNDEFINED) SetConsoleTextAttribute(this->current, status);
				std::cout << character;
				if (status != DETOX_STATUS_DEFAULT) SetConsoleTextAttribute(this->current, DETOX_STATUS_DEFAULT);
			}

		}
		
		void _info(DETOX_NUMBER type = DETOX_UNDEFINED) {
			switch (type) {
			case 0:
				std::cout << "Info" << std::endl;
				std::cout << "dwSize: " << std::endl;
				std::cout << "X: " << this->info.dwSize.X << ", Y: " << this->info.dwSize.Y << std::endl;
				std::cout << "\nsrWindow: " << std::endl;
				std::cout << "Top: " << this->info.srWindow.Top << ", Bottom: " << this->info.srWindow.Bottom << ", Left: " << this->info.srWindow.Left << ", Right: " << this->info.srWindow.Right << std::endl;
				std::cout << "\ndwMaximumWindowSize: " << std::endl;
				std::cout << "X: " << this->info.dwMaximumWindowSize.X << " Y: " << this->info.dwMaximumWindowSize.Y << std::endl;
				std::cout << "\nSize: " << std::endl;
				std::cout << "Width: " << this->size.width << ", Height: " << this->size.height << std::endl;
				std::cout << "\n" << std::endl;
				break;
			case 1:
				std::cout << "Stored: " << std::endl;
				std::cout << "dwSize: " << std::endl;
				std::cout << "X: " << this->stored.dwSize.X << ", Y: " << this->stored.dwSize.Y << std::endl;
				std::cout << "\nsrWindow: " << std::endl;
				std::cout << "Top: " << this->stored.srWindow.Top << ", Bottom: " << this->stored.srWindow.Bottom << ", Left: " << this->stored.srWindow.Left << ", Right: " << this->stored.srWindow.Right << std::endl;
				std::cout << "\ndwMaximumWindowSize: " << std::endl;
				std::cout << "X: " << this->stored.dwMaximumWindowSize.X << " Y: " << this->stored.dwMaximumWindowSize.Y << std::endl;
				std::cout << "\nSize: " << std::endl;
				std::cout << "Width: " << this->size.width << ", Height: " << this->size.height << std::endl;
				std::cout << "\n" << std::endl;
				break;
			}
		}
	};
	struct DETOX_TITLE {
		DETOX_NUMBER length = 0, error = DETOX_UNDEFINED;
		wchar_t value[DETOX_TITLE_LENGTH] = {};

		void _write(const wchar_t text[]) {
			do {
				if (this->length > DETOX_TITLE_LENGTH) {
					this->error = DETOX_ERROR_TOO_LONG;
					break;
				}
				else {
					this->value[this->length] = text[this->length];
					this->length++;
				}
			} while (text[this->length] != '\0');
			if (this->error != DETOX_UNDEFINED) {
				throw this->error;
			}
		}
	};
	struct DETOX_KEYER {
		HANDLE handle;
		HOOKPROC proc;
		LPARAM info;
		WPARAM sender;
		MSG msg;
		DETOX_NUMBER exist = DETOX_UNDEFINED, message = DETOX_UNDEFINED, status = DETOX_UNDEFINED;
		void _hook() {
			this->handle = SetWindowsHook(WH_KEYBOARD, this->proc);
			this->status = (DETOX_NUMBER)this->handle;
			this->exist = this->status;
		}

	};
	struct DETOX_WINDOW {
		HWND desktop, console;
		DETOX_KEYER keyer;
		DETOX_SIZE desk;
		DETOX_TITLE title;
		DETOX_POSITION position;
		DETOX_BUFFER buffer;
		DETOX_NUMBER success, identifier, warm, error, clean = DETOX_UNDEFINED, self = DETOX_EXIT;
		void _open() {
			this->buffer._default(); // Defaults current == out
			this->desk = this->buffer.desk;
			this->desktop = GetDesktopWindow();
			this->console = GetConsoleWindow();
			this->keyer._hook();
		}

		void _hooker() {
			this->identifier = GetMessage(&this->keyer.msg, this->console, 0, 0);
			this->keyer.message = this->identifier;
		}

		void _name(const wchar_t name[]) {
			this->title._write(name);
			SetConsoleTitle(this->title.value);
		}

		void _size(DETOX_NUMBER width, DETOX_NUMBER height) { // To-do, mode switch (pixel / char)
			SetWindowPos(this->console, HWND_TOP, 0, 0, width, height, SWP_NOREDRAW);
		}

		void _set(DETOX_NUMBER width, DETOX_NUMBER height, DETOX_NUMBER mode = DETOX_UNDEFINED, DETOX_NUMBER x = 5, DETOX_NUMBER y = 5) {
			this->buffer._default();
			this->buffer.info.srWindow.Top = 0; // Increasing decreases size, relative to current window coordinates (+1).
			this->buffer.info.srWindow.Left = 0;
			this->buffer.info.srWindow.Right = width - 1;
			this->buffer.info.srWindow.Bottom = height - 1;
			this->buffer.info.dwSize.X = width;
			this->buffer.info.dwSize.Y = height;
			this->buffer.info.dwMaximumWindowSize.X = width - 1;
			this->buffer.info.dwMaximumWindowSize.Y = height - 1;
			this->buffer.size.width = width;
			this->buffer.size.height = height;
			SetWindowPos(this->console, HWND_TOP, x, y, this->desk.width, this->desk.height, SWP_HIDEWINDOW);
			SetConsoleWindowInfo(this->buffer.current, DETOX_EXIST, &this->buffer.info.srWindow);
			SetForegroundWindow(this->console);
			SetConsoleScreenBufferSize(this->buffer.current, this->buffer.info.dwSize);
			SetWindowPos(this->console, HWND_TOP, x, y, 0, 0, SWP_NOSIZE | SWP_SHOWWINDOW);
		}
	};
	struct DETOX_THREAD {
		DETOX_NUMBER identifier, priority;
		HANDLE handle;
		DETOX_THREAD _needle() {
			this->handle = GetCurrentThread();
			this->identifier = (DETOX_NUMBER)GetCurrentThreadId();
			this->priority = GetThreadPriority(this->handle);
			return *this;
		}
	};
	struct DETOX_PROCESS {
		DETOX_NUMBER identifier, priority, success = DETOX_UNDEFINED;
		HANDLE handle;
		DETOX_PROCESS _puzzle() {
			this->handle = GetCurrentProcess();
			this->identifier = (DETOX_NUMBER)GetCurrentProcessId();
			return *this;
		}
		DETOX_PROCESS _hook() {
			// Note to myself... .............................
			this->handle = GetCurrentProcess();
			return *this;
		}
	};
	struct DETOX_TOUCH {
		DETOX_NUMBER value = DETOX_UNDEFINED, identifier = DETOX_UNDEFINED, error = DETOX_UNDEFINED;
		tagTOUCHINPUT info;
		HWND window;
		void _init(HWND window) {
			this->window = window;
			this->value = GetSystemMetrics(SM_DIGITIZER);
			this->identifier = RegisterTouchWindow(this->window, TWF_FINETOUCH);
			if (this->identifier == 0) this->error = GetLastError(); else this->error = DETOX_EXIT;
		}

		void _status() {
			if (this->value != DETOX_UNDEFINED){
				switch (this->value) {
				default:
					break;
				case NID_INTEGRATED_TOUCH:
					
					break;
				}
			}
		}
	};
	struct DETOX_SAVE {
		DETOX_NUMBER exist = DETOX_UNDEFINED;
	};
	struct DETOX_EXECUTABLE {
		DETOX_TIME time;
		DETOX_WINDOW window;
		DETOX_BUFFER buffer;
		DETOX_PROCESS process;
		DETOX_THREAD thread;
		DETOX_TITLE title;
		DETOX_CONNECTOR receiver, connector;
		DETOX_TOUCH touch;
		DETOX_RANDOM rdx;
		DETOX_NUMBER exist, debugging, error, warm = DETOX_UNDEFINED, mode = DETOX_UNDEFINED, success;
		DETOX_SAVE save;
		void _get() {
			this->time._clock();
			this->rdx._init();
			this->window._open();
			this->thread._needle();
			this->process._puzzle();
			this->debugging = DETOX_DEBUGGING;
			this->receiver._sock();
			this->connector._sock();
			this->exist = DETOX_EXIST;
		}
	};
	class DETOX {
	public:
		void _self(DETOX_NUMBER mode = DETOX_WINDOW_PIXELS, DETOX_DECIMAL rate = DETOX_MENU_OPTIONS_RATE_AVERAGE_VALUE, DETOX_NUMBER x = 5, DETOX_NUMBER y = 5) {
			//SwitchToThread(); 
			// To-do: SetWindowsHook

			if (this->exe.warm == DETOX_UNDEFINED) {
				this->exe._get();
				this->exe.window._name(DETOX_DEFAULT_TITLE);
				this->options._default(DETOX_TEST);
			}
			if (this->options.view == DETOX_MENU_OPTIONS_VIEW_CAMERA_VALUE) {
				this->options._film(DETOX_CAMERA_PLAYER);
				this->options._film(DETOX_CAMERA_IDLE);
			}
			switch (mode) {
			case DETOX_WINDOW_CHARACTERS:
				this->display.interface_part[DETOX_INTERFACE_TOP]._padding(1,1,1,0);
				this->display._set(DETOX_INTERFACE_TOP, 0, 0, DETOX_INTERFACE_TOP_WIDTH, DETOX_INTERFACE_TOP_HEIGHT, DETOX_EXIST);

				switch (this->options.view) {
				case DETOX_MENU_OPTIONS_VIEW_CAMERA_VALUE:
					this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER]._padding(0,0,3,1);
					this->display._set(DETOX_INTERFACE_CAMERA_PLAYER, 0, this->display.interface_part[DETOX_INTERFACE_TOP].height, 1 + (this->options.camera[DETOX_CAMERA_PLAYER].scale.size.radius * 2), 1 + (this->options.camera[DETOX_CAMERA_PLAYER].scale.size.radius * 2));

					this->display.interface_part[DETOX_INTERFACE_CAMERA_IDLE]._padding(1,0,1,1);
					this->display._set(DETOX_INTERFACE_CAMERA_IDLE, this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].width, this->display.interface_part[DETOX_INTERFACE_TOP].height, 1 + (this->options.camera[DETOX_CAMERA_IDLE].scale.size.radius * 2), 1 + (this->options.camera[DETOX_CAMERA_IDLE].scale.size.radius * 2));

					this->display.interface_part[DETOX_INTERFACE_INVENTORY]._padding(0,0,1,1);
					this->display._set(DETOX_INTERFACE_INVENTORY, this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].width + this->display.interface_part[DETOX_INTERFACE_CAMERA_IDLE].width, this->display.interface_part[DETOX_INTERFACE_TOP].height, DETOX_INTERFACE_INVENTORY_WIDTH, DETOX_INTERFACE_INVENTORY_HEIGHT);

					this->display.interface_part[DETOX_INTERFACE_PLAYER]._padding(1,0,2,1);
					this->display._set(DETOX_INTERFACE_PLAYER, 0, this->display.interface_part[DETOX_INTERFACE_TOP].height + this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].height, DETOX_INTERFACE_PLAYER_WIDTH, DETOX_INTERFACE_PLAYER_HEIGHT);

					break;
				case DETOX_MENU_OPTIONS_VIEW_WHOLE_VALUE:
					this->display.interface_part[DETOX_INTERFACE_MAP]._padding(0,0,3,1);
					this->display._set(DETOX_INTERFACE_MAP, 0, this->display.interface_part[DETOX_INTERFACE_TOP].height, this->options.size.width, this->options.size.height);

					this->display.interface_part[DETOX_INTERFACE_INVENTORY]._padding(1,0,1,1);
					this->display._set(DETOX_INTERFACE_INVENTORY, this->display.interface_part[DETOX_INTERFACE_MAP].width, this->display.interface_part[DETOX_INTERFACE_TOP].height, DETOX_INTERFACE_INVENTORY_WIDTH, DETOX_INTERFACE_INVENTORY_HEIGHT);

					this->display.interface_part[DETOX_INTERFACE_PLAYER]._padding(1,0,2,1);
					this->display._set(DETOX_INTERFACE_PLAYER, 0, this->display.interface_part[DETOX_INTERFACE_TOP].height + this->display.interface_part[DETOX_INTERFACE_MAP].height, DETOX_INTERFACE_PLAYER_WIDTH, DETOX_INTERFACE_PLAYER_HEIGHT);
				//	std::cout << this->display.interface_part[DETOX_INTERFACE_PLAYER].x << ", " << this->display.interface_part[DETOX_INTERFACE_MAP].height << "," << this->options.size.width << ", " << this->options.size.height;
				//	system("pause");
					
					break;
				}
				this->display.interface_part[DETOX_INTERFACE_LOG]._padding(1,0,1,1);
				this->display._set(DETOX_INTERFACE_LOG, this->display.interface_part[DETOX_INTERFACE_TOP].width, 0, DETOX_INTERFACE_LOG_WIDTH, DETOX_INTERFACE_LOG_HEIGHT);

				this->display.interface_part[DETOX_INTERFACE_STATISTICS]._padding(1,0,1,1);
				this->display._set(DETOX_INTERFACE_STATISTICS, this->display.interface_part[DETOX_INTERFACE_PLAYER].width, this->display.interface_part[DETOX_INTERFACE_LOG].height, DETOX_INTERFACE_STATISTICS_WIDTH, DETOX_INTERFACE_STATISTICS_HEIGHT);
				this->display.x = x;
				this->display.y = y;
				//this->exe.buffer._size(this->display.width, this->display.height);

				break;
			case DETOX_WINDOW_PIXELS:
				// To-do-test
				//SetWindowPos(this->console, HWND_TOP, x, y, width, height, SWP_DRAWFRAME);

				break;
			case DETOX_TEST:
				CONSOLE_SCREEN_BUFFER_INFO bInfo;
				GetConsoleScreenBufferInfo(this->exe.window.buffer.created, &bInfo);
				std::cout << bInfo.dwSize.X << " " << bInfo.dwSize.Y << std::endl;
				break;
			}
			if (this->display.height < DETOX_WINDOW_HEIGHT_MINIMUM) this->display.height = DETOX_WINDOW_HEIGHT_MINIMUM;
			this->exe.window._set(this->display.width, this->display.height, mode);
			/*
			* 
			* NOTE TO SELF: WORKS, DO NOT REMOVE
			* Is a nightmare to set up.
			* 
			this->exe.window.buffer._default();
			this->exe.window.buffer.info.srWindow.Top = 0; // Increasing decreases size, relative to current window coordinates (+1).
			this->exe.window.buffer.info.srWindow.Left = 0;
			this->exe.window.buffer.info.srWindow.Right = this->display.width - 1;
			this->exe.window.buffer.info.srWindow.Bottom = this->display.height - 1;
			this->exe.window.buffer.info.dwSize.X = this->display.width;
			this->exe.window.buffer.info.dwSize.Y = this->display.height;
			this->exe.window.buffer.info.dwMaximumWindowSize.X = this->display.width - 1;
			this->exe.window.buffer.info.dwMaximumWindowSize.Y = this->display.height - 1;
			this->exe.window.buffer.size.width = this->display.width;
			this->exe.window.buffer.size.height = this->display.height;

			SetWindowPos(this->exe.window.console, HWND_TOP, 5, 5, this->exe.window.desk.width, this->exe.window.desk.height, SWP_HIDEWINDOW);
			SetConsoleWindowInfo(this->exe.window.buffer.current, DETOX_EXIST, &this->exe.window.buffer.info.srWindow);
			SetForegroundWindow(this->exe.window.console);
			SetConsoleScreenBufferSize(this->exe.window.buffer.current, this->exe.window.buffer.info.dwSize);
			SetWindowPos(this->exe.window.console, HWND_TOP, 0, 0, 0, 0, SWP_NOSIZE | SWP_SHOWWINDOW);
			*/
			this->played = DETOX_EXIST;
			this->exe.warm = DETOX_EXIST;
			this->exe.window.self++;
		}

		struct VERSION {
			DETOX_NUMBER large, average, minor, outer, counter = 0;
			DETOX_TITLE title;
			void _self(DETOX_NUMBER large, DETOX_NUMBER average, DETOX_NUMBER minor, DETOX_NUMBER outer) {
				this->large = large;
				this->average = average;
				this->minor = minor;
				this->outer = outer;
				this->counter = 0;
			}
		};
		struct RANGE {
			DETOX_POSITION position;
			DETOX_NUMBER length = DETOX_UNDEFINED;
		};
		struct LOCATION {
			DETOX_NUMBER move = DETOX_UNDEFINED;
			RANGE range;
			DETOX_POSITION from, current, to;

			void _new(DETOX_SIZE size, DETOX_NUMBER mode = DETOX_UNDEFINED, DETOX_NUMBER x = -1, DETOX_NUMBER y = -1) {
				switch(mode){
				case DETOX_MODE_UNDEFINED:
					this->current.x = DETOX_UNDEFINED;
					this->current.y = DETOX_UNDEFINED;
					break;
				case DETOX_MODE_RANDOM:
					this->current.x = 1 + rand() % size.width - 1;
					this->current.y = 1 + rand() % size.height - 1;
					break;
				case DETOX_MODE_MANUAL:
					this->current.x = x;
					this->current.y = y;
					break;
				}
				this->from.x = this->current.x;
				this->from.y = this->current.y;
				this->to.x = this->current.x;
				this->to.y = this->current.y;
			}
			void _distance(DETOX_POSITION position) {
				if (this->current.x > position.x) {
					this->range.position.x = this->current.x - position.x;
				}
				else {
					this->range.position.x = position.x - this->current.x;
				}
				if (this->current.y > position.y) {
					this->range.position.y = this->current.y - position.y;
				}
				else {
					this->range.position.y = position.y - this->current.y;
				}
				if (this->range.position.y > this->range.position.x) {
					this->range.length = this->range.position.y;
				}
				else {
					this->range.length = this->range.position.x;
				}

			}
			void _halt() {
				this->current.x = this->from.x;
				this->current.y = this->from.y;
				this->to.x = this->from.x;
				this->to.y = this->from.y;
			}
			void _advance() {
				this->from.x = this->current.x;
				this->from.y = this->current.y;
				this->current.x = this->to.x;
				this->current.y = this->to.y;
			}
			void _towards(LOCATION to) {
				this->from.x = this->current.x;
				this->from.y = this->current.y;
				if (this->current.x != to.current.x) {
					if (this->current.x < to.current.x) this->to.x += 1;
					if (this->current.x > to.current.x) this->to.x -= 1;
				}
				if (this->current.y != to.current.y) {
					if (this->current.y < to.current.y) this->to.y += 1;
					if (this->current.y > to.current.y) this->to.y -= 1;
				}
			}
			void _up() {
				this->from.y = this->current.y;
				this->to.y = this->current.y - 1;
			}
			void _down() {
				this->from.y = this->current.y;
				this->to.y = this->current.y + 1;
			}
			void _left() {
				this->from.x = this->current.x;
				this->to.x = this->current.x - 1;
			}
			void _right() {
				this->from.x = this->current.x;
				this->to.x = this->current.x + 1;
			}
			void _disappear() {
				this->from.x = this->current.x;
				this->from.y = this->current.y;
				this->current.x = -1;
				this->current.y = -1;
				this->to.x = this->current.x;
				this->to.y = this->current.y;
			}
		};
		struct COLLISION {
			DETOX_NUMBER identifier = DETOX_UNDEFINED, type = DETOX_NO_COLLISION;
			LOCATION location;
			void _update(DETOX_NUMBER identifier = DETOX_UNDEFINED, DETOX_NUMBER type = DETOX_UNDEFINED){
				this->identifier = identifier;
				this->type = type;
		
			}

		};
		struct TILE {
			DETOX_NUMBER exist = DETOX_UNDEFINED, status = DETOX_UNDEFINED, identifier = DETOX_UNDEFINED, type = DETOX_UNDEFINED;
			LOCATION location = {};
			COLLISION collision;
			DETOX_TILE character;

			void _disappear() {
				this->exist = DETOX_UNDEFINED;
				this->status = DETOX_UNDEFINED;
				this->identifier = DETOX_UNDEFINED;
				this->type = DETOX_UNDEFINED;
				this->location._disappear();
				this->character = '.';
			}
			void _init(DETOX_SIZE size, DETOX_NUMBER type = DETOX_UNDEFINED) {
				this->exist = DETOX_EXIST;
				this->status = DETOX_STATUS_DEFAULT;
				this->identifier = DETOX_UNDEFINED;
				this->location._new(size, DETOX_UNDEFINED);
				this->type = type;
				this->character = '.';
			}
			void _new(DETOX_NUMBER type, DETOX_NUMBER identifier, DETOX_SIZE size, DETOX_NUMBER status = DETOX_STATUS_DEFAULT) {
				switch (type) {
				default:
					this->character = '.';
					break;
				case DETOX_TYPE_GROUND:
					this->character = '.';
					break;
				case DETOX_TYPE_CREATURE:
					this->character = 'u';
					break;
				case DETOX_TYPE_PLAYER:
					this->character = '@';
					break;
				case DETOX_TYPE_ITEM_RESOURCE_PLANT:
					this->character = DETOX_TYPE_ITEM_RESOURCE_PLANT_CHARACTER;
					break;
				case DETOX_TYPE_ITEM_RESOURCE_CURRENCY:
					this->character = DETOX_TYPE_ITEM_RESOURCE_CURRENCY_CHARACTER;
					break;
				case DETOX_TYPE_ITEM_RESOURCE_PREPAREMENT:
					this->character = DETOX_TYPE_ITEM_RESOURCE_PREPAREMENT_CHARACTER;
					break;
				case DETOX_TYPE_ITEM_RESOURCE_REFRESHMENT:
					this->character = DETOX_TYPE_ITEM_RESOURCE_REFRESHMENT_CHARACTER;
					break;
				case DETOX_TYPE_ITEM_GEAR_SHURIKEN:
					this->character = DETOX_TYPE_ITEM_GEAR_SHURIKEN_CHARACTER;
					break;
				case DETOX_TYPE_BUFF:
					this->character = '!';
					break;
				}
				this->identifier = identifier;
				this->location._new(size, DETOX_MODE_RANDOM); // To-do, redundant
				this->type = type;
				this->status = status;
				this->exist = DETOX_EXIST;
			}
			TILE _update() {
				return *this;
			}
		};
		struct PADDING {
			DETOX_NUMBER top = 0, bottom = 0, left = 0, right = 0;
		};
		struct INTERFACE_PART {
			DETOX_NUMBER x = 0, y = 0, width = 0, height = 0, identifier = DETOX_UNDEFINED, exist = DETOX_UNDEFINED;
			PADDING padding;
			DETOX_POSITION begin;
			void _position(DETOX_NUMBER identifier, DETOX_NUMBER x, DETOX_NUMBER y, DETOX_NUMBER width, DETOX_NUMBER height) {
				this->x = x;
				this->y = y;
				this->width = width + this->padding.left + this->padding.right;
				this->height = height + this->padding.top + this->padding.bottom;
				this->begin.x = x + this->padding.left;
				this->begin.y = y + this->padding.top;
				this->exist = DETOX_EXIST;
			}
			void _padding(DETOX_NUMBER top = 0, DETOX_NUMBER bottom = 0, DETOX_NUMBER left = 0, DETOX_NUMBER right = 0) {
				this->padding.top = top;
				this->padding.bottom = bottom;
				this->padding.left = left;
				this->padding.right = right;
			}

		};
		struct DISPLAY {
			INTERFACE_PART interface_part[DETOX_INTERFACE_PARTS]; // menu ... ?
			DETOX_NUMBER x = 0, y = 0, width = 0, height = 0, evener = DETOX_EXIT;

			void _set(DETOX_NUMBER identifier, DETOX_NUMBER x, DETOX_NUMBER y, DETOX_NUMBER width, DETOX_NUMBER height, DETOX_NUMBER reset = DETOX_UNDEFINED) {
				if (reset == DETOX_EXIST) {
					this->height = 0;
					this->width = 0;
				}
				this->interface_part[identifier]._position(identifier, x, y, width, height);
				/*
				if (y == 0) {
					if (this->width == 0 || this->width < width) {
						this->width = this->interface_part[identifier].width;
					}
					else {
						this->width += this->interface_part[identifier].width;
					}
				}
				else {
				}
				*/
				if (x == 0) {
					this->height += this->interface_part[identifier].height;
				}
				if (identifier == DETOX_INTERFACE_TOP || identifier == DETOX_INTERFACE_LOG) {
					this->width += width;
				}
				if (identifier == DETOX_INTERFACE_STATISTICS) {
					this->height += 4;
				}
			}
		};
		struct STYLE {// Interface to-do
			DETOX_NUMBER version;
		};
		struct RATE {
			DETOX_DECIMAL base = 0.0f, current = 0.0f;

			DETOX_DECIMAL _update(DETOX_DECIMAL modifier = -0.0f) {
				DETOX_DECIMAL rate = 0.0f;
				return rate;
			}
		};
		struct SCALE {
			DETOX_NUMBER movement, mode = DETOX_UNDEFINED;
			DETOX_SIZE size;
		};
		struct DICE {
			DETOX_NUMBER value = DETOX_UNDEFINED;
			void _roll(int min = -1, int max = -1) {
				if (min == 0) {
					max += 1;
					this->value = rand() % max; // 0 to max - 1
				}
				else {
					max += 1;
					this->value = rand() % (max - min) + min; // ? - ?
				}
			}
		};
		struct NAME {
			char text[DETOX_TEXT_MAX_LENGTH] = {};
			DICE dice;
			DETOX_NUMBER length = 0, letters = 0;

			void _write(const char name[]) {
				do {
					this->text[this->length] = name[this->length];
					this->length++;
				} while (name[this->length] != '\0');
			}

			void _new() {
				this->dice._roll(0, DETOX_NAME_LENGTH - 1);
				this->length = this->dice.value;
				do {
					this->letters++;
				} while (DETOX_LETTERS[letters] != '\0');
				for (DETOX_NUMBER l = 0; l < this->length; l++) {
					//this->dice._roll()
				}
				

			}
		};
		struct SEX {
			DETOX_NUMBER identifier = DETOX_UNDEFINED, towards = DETOX_UNDEFINED;
			DICE dice;
			char sign = 'c';
			void _decide(DETOX_NUMBER mode = DETOX_MODE_AUTO, DETOX_NUMBER identifier = DETOX_UNDEFINED) {
				switch (mode) {
				case DETOX_MODE_AUTO:
					this->dice._roll(DETOX_DICE_SEX_MIN, DETOX_DICE_SEX_MAX);
					this->identifier = this->dice.value;
					break;
				case DETOX_MODE_MANUAL:
					this->identifier = identifier;
					break;
				}
				switch (this->identifier) {
				case DETOX_TYPE_SEX_FEMALE:
					this->sign = 'f';
					break;
				case DETOX_TYPE_SEX_MALE:
					this->sign = 'm';
					break;
				case DETOX_TYPE_SEX_NONE:
					this->sign = 'n';
					break;
				case DETOX_TYPE_SEX_OTHER:
					this->sign = 'o';
					break;
				case DETOX_TYPE_SEX_SELF:
					this->sign = 's';
					break;
				case DETOX_TYPE_SEX_UNDECISIVE:
					this->sign = 'q';
					break;
				case DETOX_TYPE_SEX_BISEXUAL:
					this->sign = 'b';
					break;
				}
			}
		};
		struct RELIGION {
			DETOX_NUMBER identifier = DETOX_UNDEFINED; // belief
			char sign;
			DICE dice;
			void _decide(DETOX_NUMBER identifier = DETOX_UNDEFINED) {
				switch (identifier) {
				case DETOX_UNDEFINED:
					this->dice._roll(DETOX_DICE_RELIGION_MIN, DETOX_DICE_RELIGION_MAX);
					this->identifier = this->dice.value;
					break;
				case DETOX_TYPE_RELIGION_NONE:
					this->identifier = DETOX_TYPE_RELIGION_NONE;
					break;
				case DETOX_TYPE_RELIGION_OTHER:
					this->identifier = DETOX_TYPE_RELIGION_OTHER;
					break;
				case DETOX_TYPE_RELIGION_SELF:
					this->identifier = DETOX_TYPE_RELIGION_SELF;
					break;
				}
			}
		};
		struct RACE {
			DETOX_NUMBER identifier = DETOX_UNDEFINED;
			char sign;
			DICE dice;
			void _decide() {
				this->dice._roll(DETOX_DICE_RACE_MIN, DETOX_DICE_RACE_MAX);
				this->identifier = this->dice.value;
			}
		};
		struct PERSONALITY {
			RELIGION religion;

			void _personalize() {
				if (DETOX_MODE_PRIVATE == DETOX_EXIST) {
					this->religion._decide(DETOX_MODE_PRIVATE_RELIGION);
				}
				else {
					this->religion._decide();
				}
			}
		};
		struct SKILL
		{
			char name[DETOX_SKILL_NAME_LENGTH] = {};
			char abbreviation[4] = {};
			DETOX_NUMBER identifier, counter, exist, length;
			DETOX_DECIMAL change = 0.0f, experience = 0.0f;

			SKILL _gain(DETOX_DECIMAL exp = 0, const char msg[] = "") {
				if (exp > 0) {
					this->experience += exp;
				}
				std::cout << msg;
				return *this;
			}
			SKILL _loss(DETOX_DECIMAL exp = 0, const char msg[] = "") {
				if (exp > 0) {
					this->experience -= exp;
				}
				std::cout << msg;
				return *this;
			}
			void _self(DETOX_NUMBER identifier, const char name[], const char abrv[]) {
				this->identifier = identifier;
				this->length = 0;
				do {
					this->name[this->length] = name[this->length];
					this->length++;
				} while (name[this->length] != '\0');
				this->length = 0;
				do {
					this->abbreviation[length] = abrv[length];
					length++;
				} while (abrv[length] != '\0');
				this->experience = 0;
				this->exist = DETOX_EXIST;
			}
		};
		struct ABILITY {

		};
		struct BUFF { // Subjective to change
			char name[DETOX_BUFF_NAME_LENGTH] = {}, character = '!';
			DETOX_NUMBER type = DETOX_UNDEFINED, status = DETOX_UNDEFINED, exist = DETOX_UNDEFINED, duration = DETOX_UNDEFINED;
			DICE dice;
			TILE tile;
			void _appear(DETOX_SIZE size, DETOX_NUMBER identifier) {
				this->dice._roll(0, DETOX_DICE_DEFAULT);
				switch (this->dice.value) {
				case DETOX_TYPE_BUFF_VALJURIAN_WINGS:
					this->type = DETOX_TYPE_BUFF_VALJURIAN_WINGS;
					this->status = DETOX_TYPE_BUFF_VALJURIAN_WINGS_STATUS;
					break;
				case DETOX_TYPE_BUFF_WAVY_LENGTHS:
					this->type = DETOX_TYPE_BUFF_WAVY_LENGTHS;
					this->status = DETOX_TYPE_BUFF_WAVY_LENGTHS_STATUS;
					break;
				}
				this->exist = DETOX_EXIST;

				this->duration = DETOX_BUFF_BASE_DURATION_APPEARANCE;
				this->tile._new(DETOX_TYPE_BUFF, identifier, size);
			}
			void _over() {
				this->tile._disappear(); // Leaves a black tile
				this->exist = DETOX_UNDEFINED;
				this->status = DETOX_UNDEFINED;
				this->type = DETOX_UNDEFINED;
			}
			void _update(DETOX_NUMBER type = DETOX_UNDEFINED, DETOX_NUMBER duration = DETOX_UNDEFINED) {

				if (this->exist == DETOX_EXIST) {
					switch(this->type){
					default:
						break;
					case DETOX_TYPE_BUFF_VALJURIAN_WINGS:
						break;
					case DETOX_TYPE_BUFF_WAVY_LENGTHS:
						break;
					}
					if (duration != DETOX_UNDEFINED) {
						this->duration = duration;
					}
					else {

						if (this->duration > 0) {
							this->duration--;
						}

						if (this->duration == 0) {
							this->_over();
						}

					}
				}
				else {
					this->status = DETOX_EXIST;
					this->type = type;
					this->duration = duration;
				}
			}
		};
		struct MESSAGE {
			/*
				char *sentence;
				void _sentence(char &msgs){
				sentence = {["abc"], 'a', 1, DETOX_EXIST};
					do{
						do{
							this->sentence = ?
						}while(msgs[length][l] != '\0');

					}while(msgs[length] != '\0');
				}
			
			*/
			char text[DETOX_MESSAGE_LENGTH] = {};
			DETOX_POSITION position;
			DETOX_NUMBER type, identifier[2], exist = DETOX_UNDEFINED, length = 0;

			void _add(const char message[]) {
				DETOX_NUMBER length = 0;
				do {
					this->text[this->length] = message[length];
					this->length++;
					length++;
				} while (message[length] != '\0');
			}

			void _new(const char msg[], DETOX_NUMBER from = DETOX_UNDEFINED, DETOX_NUMBER to = DETOX_UNDEFINED, DETOX_NUMBER type = DETOX_UNDEFINED) {
				this->length = 0;
				//for (DETOX_NUMBER n = 0; n < DETOX_MESSAGE_LENGTH; n++) this->text[n] = ' ';
				do {
					if (this->length > DETOX_MESSAGE_LENGTH - 1) break;
					this->text[this->length] = msg[this->length];
					this->length++;
				} while (msg[this->length] != '\0');
				if (from != DETOX_UNDEFINED) this->identifier[0] = from;
				if (to != DETOX_UNDEFINED) this->identifier[1] = to;
			}

			void _clear() {
				for (DETOX_NUMBER n = 0; n < DETOX_MESSAGE_LENGTH; n++) this->text[n] = ' ';
				this->position._clear();
				this->type = DETOX_UNDEFINED;
				this->identifier[0] = DETOX_UNDEFINED;
				this->identifier[1] = DETOX_UNDEFINED;
				this->exist = DETOX_UNDEFINED;
				this->length = 0;

			}
		};
		struct LOG {
			MESSAGE messages[DETOX_INTERFACE_LOG_HEIGHT];
			void _new(const char msg[], DETOX_NUMBER identifier = DETOX_UNDEFINED, DETOX_NUMBER type = DETOX_UNDEFINED, DETOX_NUMBER target = DETOX_UNDEFINED) {
				this->_shift(DETOX_INTERFACE_LOG_DOWN);
				this->messages[0]._clear();
				this->messages[0].position.y = 0;
				this->messages[0].identifier[0] = identifier;
				this->messages[0].identifier[1] = target;
				this->messages[0].type = type;
				this->messages[0]._add(msg);
				this->messages[0].exist = DETOX_EXIST;
			}

			void _shift(DETOX_NUMBER direction = DETOX_UNDEFINED) {
				switch (direction) {
				case DETOX_INTERFACE_LOG_UP:
					for (DETOX_NUMBER m = 0; m < DETOX_INTERFACE_LOG_HEIGHT; m++) {
						if (m < DETOX_INTERFACE_LOG_HEIGHT - 1) {
							this->messages[m] = this->messages[m + 1]; // Untested
						}
					}
					break;
				case DETOX_INTERFACE_LOG_DOWN:
					for (DETOX_NUMBER m = DETOX_INTERFACE_LOG_HEIGHT; m > 0; m--) {
						if (m > 0) {
							if (this->messages[m - 1].exist == DETOX_EXIST) {
								this->messages[m] = this->messages[m - 1];
								this->messages[m - 1]._clear();
							}
						}
					}
					break;
				}
			}


		};
		struct EXPERIENCE {
			DETOX_NUMBER current = 0, total = 0, level = 1, required = DETOX_UNDEFINED;

			void _gain(DETOX_NUMBER amount, DETOX_NUMBER receiver) {
				this->current += amount;
				this->total += amount;

				if (this->current > this->required) {
					this->level++;
					this->current = this->current - this->required;
					this->_require(receiver);
				}
			}

			void _require(DETOX_NUMBER type) {
				switch (type) {
				case DETOX_TYPE_PLAYER:
					this->required = (DETOX_EXPERIENCE_BASE_PLAYER * this->level) / 2;
					break;
				case DETOX_TYPE_CREATURE:
					this->required = (DETOX_EXPERIENCE_BASE_CREATURE * this->level) / 2;
					break;
				}
			}
		};
		struct HEALTH {
			DETOX_NUMBER current, total, modifier;

			void _fresh(DETOX_NUMBER type = DETOX_UNDEFINED) {
				switch (type) {
				case DETOX_TYPE_PLAYER:
					this->total = DETOX_HEALTH_BASE_PLAYER;
					break;
				case DETOX_TYPE_CREATURE:
					this->total = DETOX_HEALTH_BASE_CREATURE;
					break;
				}
				this->current = this->total;
				this->modifier = DETOX_UNDEFINED;
			}

			void _loss(DETOX_NUMBER amount = DETOX_UNDEFINED) {
				this->current -= amount;
			}
		};
		struct DAMAGE {
			DETOX_NUMBER min = DETOX_UNDEFINED, max = DETOX_UNDEFINED, range = DETOX_UNDEFINED, type = DETOX_UNDEFINED;
			DICE dice;
			void _prepare(DETOX_NUMBER type = DETOX_UNDEFINED) {
				this->type = type;
				switch (this->type) {
				default:
					break;
				case DETOX_TYPE_PLAYER:
					this->min = 0;
					this->max = DETOX_DAMAGE_BASE_PLAYER;
					this->range = 1;
					break;
				case DETOX_TYPE_CREATURE:
					this->min = 0;
					this->max = DETOX_DAMAGE_BASE_CREATURE;
					this->range = 1;
					break;
				case DETOX_TYPE_ITEM_GEAR_SHURIKEN:
					this->min = DETOX_TYPE_ITEM_GEAR_SHURIKEN_DAMAGE_MIN;
					this->max = DETOX_TYPE_ITEM_GEAR_SHURIKEN_DAMAGE_MAX;
					this->range = DETOX_TYPE_ITEM_GEAR_SHURIKEN_RANGE;
					break;
				case DETOX_TYPE_MELEE:
					this->min = DETOX_TYPE_MELEE_DAMAGE_MIN;
					this->max = DETOX_TYPE_MELEE_DAMAGE_MAX;
					this->range = 1;
					break;
				}
			}
		};
		struct ITEM {
			TILE tile;
			DICE dice;
			DETOX_NUMBER type = DETOX_UNDEFINED, amount = DETOX_UNDEFINED, visible = DETOX_UNDEFINED, exist = DETOX_UNDEFINED, status = DETOX_UNDEFINED;
			
			void _set(DETOX_NUMBER type = DETOX_UNDEFINED, DETOX_NUMBER amount = 0){
				this->type = type;
				this->tile.type = type;
				switch (this->type) {
				case DETOX_TYPE_ITEM_RESOURCE_PLANT:
					this->tile.character = DETOX_TYPE_ITEM_RESOURCE_PLANT_CHARACTER;
					break;
				case DETOX_TYPE_ITEM_RESOURCE_CURRENCY:
					this->tile.character = DETOX_TYPE_ITEM_RESOURCE_CURRENCY_CHARACTER;
					break;
				case DETOX_TYPE_ITEM_RESOURCE_PREPAREMENT:
					this->tile.character = DETOX_TYPE_ITEM_RESOURCE_PREPAREMENT_CHARACTER;
					break;
				case DETOX_TYPE_ITEM_RESOURCE_REFRESHMENT:
					this->tile.character = DETOX_TYPE_ITEM_RESOURCE_REFRESHMENT_CHARACTER;
					break;
				case DETOX_TYPE_ITEM_GEAR_SHURIKEN:
					this->tile.character = DETOX_TYPE_ITEM_GEAR_SHURIKEN_CHARACTER;
					break;
				}
				this->tile.status = DETOX_STATUS_RESOURCE_DEFAULT;
				this->status = this->tile.status;
				this->amount = amount;
				this->visible = 0;
				this->exist = DETOX_EXIST;

			}
			void _appear(DETOX_NUMBER type, DETOX_NUMBER identifier, DETOX_SIZE size) {
				this->dice._roll(1, 2);
				this->amount = this->dice.value;
				this->status = DETOX_STATUS_RESOURCE_DEFAULT;
				this->type = type;
				this->tile._new(this->type, identifier, size);
				this->exist = DETOX_EXIST;
			}
			void _removal(DETOX_NUMBER remove = DETOX_UNDEFINED) {
				if (remove == DETOX_EXIST || this->tile.type != this->type) {
					this->tile._disappear();
					this->exist = DETOX_UNDEFINED;
					this->amount = DETOX_UNDEFINED;
					this->visible = DETOX_UNDEFINED;
					this->type = DETOX_UNDEFINED;
				}
			}

		};
		struct RESOURCE {
			ITEM item;
			DETOX_NUMBER type = DETOX_UNDEFINED, amount = DETOX_UNDEFINED;
		};
		struct GEAR {
			ITEM item;
			DETOX_NUMBER type = DETOX_UNDEFINED, amount = DETOX_UNDEFINED, thrown = DETOX_UNDEFINED;
			DAMAGE damage;

		};
		struct INVENTORY {
			DETOX_NUMBER slots = 0, gears = 0, resources = 0;
			RESOURCE resource[DETOX_INVENTORY_SLOTS];
			GEAR gear[DETOX_INVENTORY_SLOTS], weapon;
			void _organize(DETOX_NUMBER item = DETOX_UNDEFINED, DETOX_NUMBER amount = 0) {
				if (item != DETOX_UNDEFINED) {
					switch (item) {
					case DETOX_TYPE_ITEM_RESOURCE_PLANT:
					case DETOX_TYPE_ITEM_RESOURCE_CURRENCY:
					case DETOX_TYPE_ITEM_RESOURCE_PREPAREMENT:
					case DETOX_TYPE_ITEM_RESOURCE_REFRESHMENT:
						this->resource[this->resources].item._set(item, amount);
						this->resources++;
						break;
					case DETOX_TYPE_ITEM_GEAR_SHURIKEN:
						this->gear[this->gears].item._set(item, amount);
						this->gear[this->gears].type = item;
						this->gear[this->gears].amount = amount;
						this->gear[this->gears].thrown = DETOX_EXIST;
						this->gears++;
						break;
					}
					this->slots += 1;
				}
			}

			void _prepare(DETOX_NUMBER type = DETOX_UNDEFINED) {
				if (type == DETOX_UNDEFINED) {
					this->weapon.type = DETOX_TYPE_MELEE;
					for (DETOX_NUMBER g = 0; g < this->gears; g++) {
						if (this->gear[g].thrown == DETOX_EXIST) {
							if (this->gear[g].item.amount > 3) {
								this->weapon.type = this->gear[g].type;
								this->weapon.thrown = DETOX_EXIST;
								break;
							}
						}
					}
				}
				else {
					this->weapon.type = type;
				}
				
				this->weapon.damage._prepare(this->weapon.type);
			}
		};
		struct CONTROLS {
			DETOX_NUMBER button = DETOX_UNDEFINED, exist = DETOX_UNDEFINED;

			void _input() {
				char button;
				std::cin >> button;
				this->button = (int)button;
			}
		};
		struct TARGET {
			DETOX_NUMBER identifier = DETOX_UNDEFINED, type = DETOX_UNDEFINED, exist = DETOX_UNDEFINED;
			//	DETOX_POSITION position;
			void _acquire(DETOX_NUMBER identifier = DETOX_UNDEFINED, DETOX_NUMBER type = DETOX_UNDEFINED) {
				this->identifier = identifier;
				this->type = type;
				this->exist = DETOX_EXIST;
			}

			void _untarget() {
				this->identifier = DETOX_UNDEFINED;
				this->type = DETOX_UNDEFINED;
				this->exist = DETOX_UNDEFINED;
			}

		};
		struct CAMERA {
			DETOX_POSITION position;
			DETOX_SIZE map;
			SCALE scale;
			DETOX_NUMBER center = DETOX_UNDEFINED, type = DETOX_UNDEFINED, exist = DETOX_UNDEFINED, status = DETOX_UNDEFINED, timer = 0;
			TARGET target;
			void _focus(DETOX_POSITION position, DETOX_NUMBER identifier = DETOX_UNDEFINED, DETOX_NUMBER type = DETOX_UNDEFINED, DETOX_NUMBER status = DETOX_UNDEFINED) {
				this->position.x = position.x;
				this->position.y = position.y;
				this->position.identifier = identifier;
				this->position.type = type;
			}

			void _zoom(DETOX_NUMBER size = DETOX_UNDEFINED) {
				if (size != DETOX_UNDEFINED) {
					this->scale.mode = size;
				}
				else {
					if(this->scale.mode == DETOX_UNDEFINED) this->scale.mode = DETOX_MODE_CAMERA_DEFAULT;
				}
				switch (this->scale.mode) {
				case DETOX_CAMERA_MODE_TINY:
					this->scale.size.radius = DETOX_CAMERA_RADIUS_TINY;
					break;
				case DETOX_CAMERA_MODE_SMALL:
					this->scale.size.radius = DETOX_CAMERA_RADIUS_SMALL;
					break;
				case DETOX_CAMERA_MODE_AVERAGE:
					this->scale.size.radius = DETOX_CAMERA_RADIUS_AVERAGE;
					break;
				case DETOX_CAMERA_MODE_LARGE:
					this->scale.size.radius = DETOX_CAMERA_RADIUS_LARGE;
					break;
				}
			}

			void _init(DETOX_NUMBER radius = DETOX_UNDEFINED, DETOX_NUMBER width = DETOX_UNDEFINED, DETOX_NUMBER height = DETOX_UNDEFINED, DETOX_NUMBER type = DETOX_UNDEFINED, DETOX_NUMBER center = DETOX_CAMERA_CENTER) {
				this->map.width = width;
				this->map.height = height;
				this->_zoom(radius); // Radius mode
				this->center = center;
				this->type = type;
				this->exist = DETOX_EXIST;
			}

			void _follow() {

			}

			void _center(DETOX_POSITION position) {
				if (position.x > this->scale.size.radius) {
					if (position.x > this->map.width - this->scale.size.radius) {
						this->position.x = this->map.width - (this->scale.size.radius * 2) + 1;
					}
					else {
						this->position.x = position.x - this->scale.size.radius; // render begins
					}
				}
				else {
					this->position.x = 0;
				}
				if (position.y > this->scale.size.radius) {
					if (position.y > this->map.height - this->scale.size.radius) {
						this->position.y = this->map.height - (this->scale.size.radius * 2) + 1;
					}
					else {
						this->position.y = position.y - this->scale.size.radius; // Doesn't center, 7 - 3 != 3, Note to self: Isn't supposed to center, 8 height
					}
				}
				else {
					this->position.y = 0;
				}
			}

		};
		struct OPTIONS {
			DETOX_DECIMAL loss;
			DETOX_NUMBER mode, creatures, buffs, resources, test = DETOX_EXIT, view = DETOX_UNDEFINED;
			SCALE player, creature;
			CAMERA camera[DETOX_CAMERAS_MAX];
			DETOX_SIZE size;
			char selection;
			char input;
			RATE rate;
			TILE tile;

			void _film(DETOX_NUMBER identifier = DETOX_UNDEFINED) {
				switch (identifier) {
				default:
					break;
				case DETOX_CAMERA_PLAYER:
					this->camera[identifier]._init(this->player.mode, this->size.width, this->size.height, DETOX_CAMERA_PLAYER);
					break;
				case DETOX_CAMERA_IDLE:
					this->camera[identifier]._init(DETOX_CAMERA_MODE_TINY, this->size.width, this->size.height, DETOX_CAMERA_IDLE);
					break;
				}
			}

			void _select(char msg[]) {
				this->selection = msg[0];
			}

			void _configure(DETOX_NUMBER selection = DETOX_MENU_OPTIONS_SIZE_AVERAGE_VALUE) {
				this->size.mode = selection;
				switch (this->size.mode) {
				case DETOX_MENU_OPTIONS_SIZE_TINY_VALUE:
					this->loss = DETOX_COLLISION_CREATURE_LOSS_TINY;
					this->size.width = DETOX_MENU_OPTIONS_SIZE_TINY_WIDTH;
					this->size.height = DETOX_MENU_OPTIONS_SIZE_TINY_HEIGHT;
					this->player.movement = DETOX_DICE_PLAYER_MOVEMENT_TINY;
					this->player.mode = DETOX_CAMERA_MODE_TINY;
					break;
				case DETOX_MENU_OPTIONS_SIZE_SMALL_VALUE:
					this->loss = DETOX_COLLISION_CREATURE_LOSS_SMALL;
					this->size.width = DETOX_MENU_OPTIONS_SIZE_SMALL_WIDTH;
					this->size.height = DETOX_MENU_OPTIONS_SIZE_SMALL_HEIGHT;
					this->player.movement = DETOX_DICE_PLAYER_MOVEMENT_SMALL;
					this->player.mode = DETOX_CAMERA_MODE_SMALL;
					break;
				case DETOX_MENU_OPTIONS_SIZE_AVERAGE_VALUE:
					this->loss = DETOX_COLLISION_CREATURE_LOSS_AVERAGE;
					this->size.width = DETOX_MENU_OPTIONS_SIZE_AVERAGE_WIDTH;
					this->size.height = DETOX_MENU_OPTIONS_SIZE_AVERAGE_HEIGHT;
					this->player.movement = DETOX_DICE_PLAYER_MOVEMENT_AVERAGE;
					this->player.mode = DETOX_CAMERA_MODE_AVERAGE;
					break;
				case DETOX_MENU_OPTIONS_SIZE_LARGE_VALUE:
					this->loss = DETOX_COLLISION_CREATURE_LOSS_LARGE;
					this->size.width = DETOX_MENU_OPTIONS_SIZE_LARGE_WIDTH;
					this->size.height = DETOX_MENU_OPTIONS_SIZE_LARGE_HEIGHT;
					this->player.movement = DETOX_DICE_PLAYER_MOVEMENT_LARGE;
					this->player.mode = DETOX_CAMERA_MODE_LARGE;
					break;
				}
			}

			void _default(DETOX_NUMBER test = DETOX_EXIT) {
				switch (test) {
				case DETOX_EXIT:
					this->_configure(DETOX_OPTIONS_SIZE_DEFAULT);
					this->mode = DETOX_MODE_AUTO;
					this->view = DETOX_MENU_OPTIONS_VIEW_CAMERA_VALUE;
					this->creatures = DETOX_CREATURES_MAX_DEFAULT;
					this->buffs = 0;
					this->resources = 0;
					this->rate.base = DETOX_MENU_OPTIONS_RATE_AVERAGE_VALUE;
					this->selection = DETOX_EXIST;
					break;
				case DETOX_EXIST:
					this->_configure(DETOX_MENU_OPTIONS_SIZE_TINY_VALUE);
					this->mode = DETOX_MODE_TEST;
					this->view = DETOX_MENU_OPTIONS_VIEW_CAMERA_VALUE;
					this->creatures = DETOX_CREATURES_MAX_DEFAULT;
					this->buffs = 0;
					this->resources = 0;
					this->rate.base = DETOX_MODE_TEST_RATE;
					this->selection = DETOX_EXIST;
					break;
				}
				this->rate.current = this->rate.base;
			}
		};
		struct CREATURE {
			NAME name;
			SEX gender;
			PERSONALITY personality;
			HEALTH health;
			DAMAGE damage;
			EXPERIENCE experience;
			INVENTORY inventory;
			BUFF buff;
			CONTROLS controls;
			DETOX_NUMBER exist = DETOX_UNDEFINED, identifier = DETOX_UNDEFINED, status = DETOX_UNDEFINED, attacking = DETOX_UNDEFINED, skills = 0;
			DETOX_DECIMAL bumps = 0.0f;
			DICE dice;
			SKILL skill[DETOX_SKILLS_MAX];
			MESSAGE message;
			TILE tile;
			TARGET target;

			void _self(DETOX_NUMBER type, DETOX_NUMBER identifier = DETOX_UNDEFINED) {
				switch (type) {
				case DETOX_TYPE_PLAYER:
					this->skill[DETOX_SKILL_VELOCITY]._self(DETOX_SKILL_VELOCITY, "Velocity", "VEL");
					this->skills++;
					this->skill[DETOX_SKILL_ENDURANCE]._self(DETOX_SKILL_ENDURANCE, "Endurance", "END");
					this->skills++;
					this->skill[DETOX_SKILL_TRADING]._self(DETOX_SKILL_TRADING, "Trading", "TDG");
					this->skills++;
					this->skill[DETOX_SKILL_COOKING]._self(DETOX_SKILL_COOKING, "Cooking", "CKG");
					this->skills++;
					this->skill[DETOX_SKILL_ADAPTING]._self(DETOX_SKILL_ADAPTING, "Adapting", "ADT");
					this->skills++;
					this->skill[DETOX_SKILL_FARMING]._self(DETOX_SKILL_FARMING, "Farming", "FMG");
					this->skills++;
					if (DETOX_MODE_PRIVATE == DETOX_EXIST) this->gender._decide(DETOX_MODE_MANUAL, DETOX_MODE_PRIVATE_SEX); else this->gender._decide();
					this->inventory._organize(DETOX_TYPE_ITEM_RESOURCE_CURRENCY);
					this->inventory._organize(DETOX_TYPE_ITEM_RESOURCE_PLANT);
					this->inventory._organize(DETOX_TYPE_ITEM_RESOURCE_PREPAREMENT);
					this->inventory._organize(DETOX_TYPE_ITEM_RESOURCE_REFRESHMENT);
					if (DETOX_TEST == DETOX_EXIST) this->inventory._organize(DETOX_TYPE_ITEM_GEAR_SHURIKEN, DETOX_MODE_TEST_AMMO); else this->inventory._organize(DETOX_TYPE_ITEM_GEAR_SHURIKEN);
					this->personality._personalize();
					this->experience._require(DETOX_TYPE_PLAYER);
					this->health._fresh(DETOX_TYPE_PLAYER);
					this->identifier = DETOX_TYPE_PLAYER;
					break;
				case DETOX_TYPE_CREATURE:
					this->skill[DETOX_SKILL_ENDURANCE]._self(DETOX_SKILL_ENDURANCE, "Endurance", "END");
					if (DETOX_MODE_PRIVATE == DETOX_EXIST) this->gender._decide(DETOX_MODE_MANUAL, DETOX_TYPE_SEX_FEMALE); else this->gender._decide();
					this->personality._personalize();
					this->experience._require(DETOX_TYPE_CREATURE);
					this->health._fresh(DETOX_TYPE_CREATURE);
					this->identifier = identifier;
					this->damage._prepare(DETOX_TYPE_CREATURE);
					this->bumps = 0.0f;
					break;
				}
				this->exist = DETOX_EXIST;
				this->status = DETOX_STATUS_DEFAULT;
			}

			void _message(const char msg[]) {
				this->message._new(msg);
			}

			void _skill(DETOX_NUMBER type, DETOX_NUMBER skill, DETOX_DECIMAL amount, const char message[]) {
				switch (type) {
				default:
					break;
				case DETOX_SKILL_GAIN:
					if (this->status == DETOX_TYPE_BUFF_WAVY_LENGTHS_STATUS) amount += DETOX_TYPE_BUFF_WAVY_LENGTHS_EFFECT;
					this->skill[skill].experience += amount;
					this->skill[skill].change += amount;
					break;
				case DETOX_SKILL_LOSS:
					this->skill[skill].experience -= amount;
					this->skill[skill].change -= amount;
					break;
				}
				this->_message(message);
			}

			void _update(DETOX_NUMBER type = DETOX_UNDEFINED) {
				switch (type) {
				case DETOX_TYPE_OVERVIEW:
					if (this->buff.exist == DETOX_EXIST) {
						if (this->buff.duration > 0) {
							this->buff.duration--;
						}

						if (this->buff.duration == 0) {
							this->buff._over();
							this->tile.status = DETOX_STATUS_DEFAULT;
							this->status = DETOX_STATUS_DEFAULT;
						}
					}

					for (DETOX_NUMBER s = 0; s < DETOX_SKILLS_MAX; s++) {
						if (this->skill[s].exist == DETOX_EXIST) {
							if (this->skill[s].change != 0.0f) {
								this->skill[s].change = 0.0f;
							}
						}
					}

					for (DETOX_NUMBER r = 0; r < this->inventory.resources; r++) {
						if (this->inventory.resource[r].item.exist == DETOX_EXIST) {
							if (this->inventory.resource[r].item.amount > 9) {
								this->inventory.resource[r].item.status = DETOX_STATUS_INVENTORY_UNVISIBLE;
								this->inventory.resource[r].item.visible = 9;
							}
							else {
								this->inventory.resource[r].item.status = DETOX_STATUS_DEFAULT;
								this->inventory.resource[r].item.visible = this->inventory.resource[r].item.amount;
							}
						}
					}
					for (DETOX_NUMBER g = 0; g < this->inventory.gears; g++) {
						if (this->inventory.gear[g].item.exist == DETOX_EXIST) {
							if (this->inventory.gear[g].item.amount > 9) {
								this->inventory.gear[g].item.status = DETOX_STATUS_INVENTORY_UNVISIBLE;
								this->inventory.gear[g].item.visible = 9;
							}
							else {
								this->inventory.gear[g].item.status = DETOX_STATUS_DEFAULT;
								this->inventory.gear[g].item.visible = this->inventory.gear[g].item.amount;
							}
						}
					}
					break;
				}
			}

			void _gain(DETOX_NUMBER type = DETOX_UNDEFINED, DETOX_NUMBER sub = DETOX_UNDEFINED, DETOX_NUMBER amount = DETOX_UNDEFINED) {
				switch (type) {
				default:
					break;
				case DETOX_TYPE_BUFF:
					this->buff._update(sub, amount);
					this->tile.status = sub;
					this->status = sub;
					break;
				case DETOX_TYPE_ITEM_RESOURCE:
					for (DETOX_NUMBER i = 0; i < this->inventory.resources; i++) {
						if (this->inventory.resource[i].item.exist == DETOX_EXIST) {
							if (this->inventory.resource[i].item.type == sub) {
								this->inventory.resource[i].item.amount += amount;
								break;
							}
						}
					}
					break;
				case DETOX_TYPE_ITEM_GEAR:
					for (DETOX_NUMBER g = 0; g < this->inventory.gears; g++) {
						if (this->inventory.gear[g].item.exist == DETOX_EXIST) {
							if (this->inventory.gear[g].item.type == sub) {
								this->inventory.gear[g].item.amount += amount;
								break;
							}
						}
					}
					break;
				}
			}

			void _loss(DETOX_NUMBER type = DETOX_UNDEFINED) {
				switch (type) {
				case DETOX_TYPE_BUFF:
					this->status = DETOX_STATUS_DEFAULT;
					break;
				}
			}

			void _die() {
				this->tile._disappear();
				this->exist = DETOX_UNDEFINED;
			}

		};
		struct PROJECTILE {
			ITEM item;
			DAMAGE damage;
			DETOX_NUMBER identifier = DETOX_UNDEFINED, speed = DETOX_UNDEFINED, exist = DETOX_UNDEFINED;
			CREATURE target;
			void _throw(CREATURE target, DETOX_SIZE size, DETOX_POSITION position, DETOX_NUMBER type = DETOX_UNDEFINED) {
				this->item.type = type;
				this->target = target;
				this->item.status = DETOX_STATUS_ITEM_THROWN;
				this->item.amount = 1; // Multi-throw
				this->item.tile._new(this->item.type, this->item.type, size, this->item.status);
				this->item.tile.location._new(size, DETOX_MODE_MANUAL, position.x, position.y);
				this->damage._prepare(this->item.type);
				this->exist = DETOX_EXIST;
			}

			void _update(CREATURE target) {
				this->target = target;
				this->item.tile.location._distance(this->target.tile.location.current);
				this->item.tile.location._towards(this->target.tile.location);
				this->item.tile.location._advance();
			}

			void _remove() {
				this->item.tile._disappear();
				this->item._removal();
				this->identifier = DETOX_UNDEFINED;
				this->target.exist = DETOX_UNDEFINED;
				this->exist = DETOX_UNDEFINED;
			}
		};
		struct MAP {
			CREATURE player, creatures[DETOX_CREATURES_MAX];
			OPTIONS options;
			LOG log;
			RESOURCE resources[DETOX_RESOURCES_MAX];
			GEAR gears[DETOX_GEARS_MAX];
			PROJECTILE projectiles[DETOX_PROJECTILES_MAX];
			MESSAGE message;
			BUFF buffs[DETOX_BUFFS_MAX];
			DICE dice;
			DETOX_NUMBER tiles = 0;
			TILE* area[];

			void _lurk() {
				std::cout << this->player.controls.button;
				switch (this->player.controls.button) {
				case DETOX_CONTROLS_UP:
					if (this->player.tile.location.current.y > 0) {
						this->player.tile.location._up();
						this->player._message(DETOX_MESSAGE_UP);
					}
					break;
				case DETOX_CONTROLS_DOWN:
					if (this->player.tile.location.current.y < this->options.size.height - 1) {
						this->player.tile.location._down();
						this->player._message(DETOX_MESSAGE_DOWN);
					}
					break;
				case DETOX_CONTROLS_LEFT:
					if (this->player.tile.location.current.x > 0) {
						this->player.tile.location._left();
						this->player._message(DETOX_MESSAGE_LEFT);
					}
					break;
				case DETOX_CONTROLS_RIGHT:
					if (this->player.tile.location.current.x < this->options.size.width - 1) {
						this->player.tile.location._right();
						this->player._message(DETOX_MESSAGE_RIGHT);
					}
					break;
				}
			}
			void _assemble() {

				this->options.camera[DETOX_CAMERA_PLAYER]._center(this->player.tile.location.current);
				//this->options.camera[DETOX_CAMERA_IDLE]._center(this->player.tile.location.from);
				if (this->options.camera[DETOX_CAMERA_IDLE].target.exist == DETOX_EXIST) this->options.camera[DETOX_CAMERA_IDLE].target._untarget();
				for (DETOX_NUMBER p = 0; p < DETOX_PROJECTILES_MAX; p++) {
					if (this->projectiles[p].exist == DETOX_EXIST) {
						this->options.camera[DETOX_CAMERA_IDLE].target._acquire(p, DETOX_TYPE_PROJECTILE);
						this->options.camera[DETOX_CAMERA_IDLE]._center(this->projectiles[p].item.tile.location.current);
						break;
					}
				}
				if (this->options.camera[DETOX_CAMERA_IDLE].target.exist == DETOX_UNDEFINED) {
					for (DETOX_NUMBER c = 0; c < this->options.creatures; c++) {
						if (this->creatures[c].exist == DETOX_EXIST) {
							this->options.camera[DETOX_CAMERA_IDLE].target._acquire(c, DETOX_TYPE_CREATURE);
							this->options.camera[DETOX_CAMERA_IDLE]._center(this->creatures[c].tile.location.current);
							break;
						}
					}
				}
				if (this->options.camera[DETOX_CAMERA_IDLE].target.exist == DETOX_UNDEFINED) this->options.camera[DETOX_CAMERA_IDLE]._center(this->player.tile.location.from);

			}
			void _update(DETOX_NUMBER type = DETOX_TYPE_OVERALL) {
				switch (type) {
				default:
					break;
				case DETOX_TYPE_OVERALL:
					if (this->player.target.exist == DETOX_EXIST) {
						if (this->creatures[this->player.target.identifier].exist == DETOX_UNDEFINED) this->player.target._untarget();
					}
					for (DETOX_NUMBER c = 0; c < this->options.creatures; c++) {
						if (this->creatures[c].exist == DETOX_EXIST) {
							if (this->creatures[c].target.exist == DETOX_EXIST) {
								if (this->creatures[this->creatures[c].target.identifier].exist == DETOX_UNDEFINED) this->creatures[c].target._untarget();
							}
						}
					}
					for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
						if (this->buffs[b].exist == DETOX_EXIST) {
							this->buffs[b]._update();
						}
					}
					for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
						if (this->resources[r].item.exist == DETOX_EXIST) {
							this->resources[r].item._removal();
						}
					}
					for (DETOX_NUMBER g = 0; g < DETOX_GEARS_MAX; g++) {
						if (this->gears[g].item.exist == DETOX_EXIST) {
							this->gears[g].item._removal();
						}
					}
					for (DETOX_NUMBER p = 0; p < DETOX_PROJECTILES_MAX; p++) {
						if (this->projectiles[p].exist == DETOX_EXIST) {
							if (this->creatures[this->player.target.identifier].exist == DETOX_EXIST) {
								this->projectiles[p]._update(this->creatures[this->player.target.identifier]);
								if (this->projectiles[p].item.tile.location.range.length <= 1) {
									this->projectiles[p].damage.dice._roll(this->projectiles[p].damage.min, this->projectiles[p].damage.max);
									if (this->projectiles[p].damage.dice.value > 0) {
										this->creatures[this->projectiles[p].target.identifier].health._loss(this->projectiles[p].damage.dice.value);
										if (this->creatures[this->projectiles[p].target.identifier].health.current <= 0) {
											this->log._new(DETOX_MESSAGE_CREATURE_DEFEATED_BASE, this->projectiles[p].damage.dice.value, DETOX_TYPE_ATTACK_PLAYER_PROJECTILE, this->projectiles[p].target.identifier);
											this->creatures[this->projectiles[p].target.identifier]._die();
											this->player.target._untarget();
											this->player.experience._gain(1, DETOX_TYPE_PLAYER);
										}
										else {
											this->log._new(DETOX_MESSAGE_ATTACK_PLAYER, this->projectiles[p].damage.dice.value, DETOX_TYPE_ATTACK_PLAYER_PROJECTILE, this->projectiles[p].target.identifier);
										}
									}
									else {
										this->log._new(DETOX_MESSAGE_DAMAGE_NONE, p, DETOX_TYPE_PLAYER_TO_CREATURE, this->projectiles[p].target.identifier);
									}
									this->projectiles[p]._remove();
								}
							}
							else {
								this->player.target._untarget();
								this->projectiles[p]._remove();
							}
						}
					}
					break;
				}
				//this->camera._update(this->player.tile.location.current);
				/*
						// To-do, CPU heavy, nested fors
				for (DETOX_NUMBER t = 0; t < this->size.height * this->size.width; t++) {
					if (this->area[t]->exist == DETOX_EXIST) {
					
					}
				}
				*/
			}
			CREATURE _sortee(DETOX_NUMBER mode = DETOX_SORT_HIGH) {
				CREATURE creature = this->creatures[0];
				for (DETOX_NUMBER c = 0; c < DETOX_CREATURES_MAX; c++) {
					switch (mode) {
					default:
						break;
					case DETOX_SORT_LOW:
						if (this->creatures[c].bumps < creature.bumps) creature = this->creatures[c];
						break;
					case DETOX_SORT_HIGH:
						if (this->creatures[c].bumps > creature.bumps) creature = this->creatures[c];
						break;
					case DETOX_SORT_RE:
						break;
					}
				}
				return creature;
			}
			void _new(DETOX_NUMBER type, DETOX_NUMBER identifier = DETOX_UNDEFINED) {
				switch (type) {
				case DETOX_TYPE_PLAYER:
					if (this->options.mode == DETOX_MODE_MANUAL) this->player.controls.exist = DETOX_EXIST;
					this->player._self(DETOX_TYPE_PLAYER);
					this->player.tile._new(DETOX_TYPE_PLAYER, DETOX_EXIST, this->options.size);
					break;
				case DETOX_TYPE_CREATURE:
					for (DETOX_NUMBER c = 0; c < this->options.creatures; c++) {
						if (this->creatures[c].exist != DETOX_EXIST) {
							this->creatures[c]._self(DETOX_TYPE_CREATURE, c);
							this->creatures[c].tile._new(DETOX_TYPE_CREATURE, DETOX_EXIST, this->options.size);

							break;
						}
					}
					break;
				}
			}
			void _message(const char msg[]) {
				this->message._new(msg);
			}
			void _movement(DETOX_NUMBER type) {
				switch (type) {
				default:
					break;
				case DETOX_TYPE_PLAYER:
					switch (this->options.mode) {
					case DETOX_MODE_NOMINAL:
					case DETOX_MODE_AUTO:
						this->player.dice._roll(0, this->options.player.movement);
						switch (this->player.dice.value) {
						default:
							break;
						case 1:
							if (this->player.tile.location.current.y > 0) {
								this->player.tile.location._up();
								this->player._message(DETOX_MESSAGE_UP);
							}
							break;
						case 2:
							if (this->player.tile.location.current.y < this->options.size.height - 1) {
								this->player.tile.location._down();
								this->player._message(DETOX_MESSAGE_DOWN);
							}
							break;
						case 3:
							if (this->player.tile.location.current.x > 0) {
								this->player.tile.location._left();
								this->player._message(DETOX_MESSAGE_LEFT);
							}
							break;
						case 4:
							if (this->player.tile.location.current.x < this->options.size.width - 1) {
								this->player.tile.location._right();
								this->player._message(DETOX_MESSAGE_RIGHT);
							}
							break;
						case 5:
							//this->_message(DETOX_MESSAGE_PLANT_SEED_NOTICE);
							//this->collision.collided = DETOX_PLANT_COLLISION;
							break;
						case 8:
							for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
								if (this->buffs[b].exist == DETOX_EXIST) {
									this->player.tile.location._towards(this->buffs[b].tile.location);
									this->player._message(DETOX_MESSAGE_BUFF_AVAILABLE);
									break;
								}
							}
							break;
						case 21:
							if (this->player.target.exist == DETOX_UNDEFINED) {								
								for (DETOX_NUMBER c = 0; c < this->options.creatures; c++) {
									if (this->creatures[c].exist == DETOX_EXIST) {
										this->creatures[c].tile.location._distance(this->player.tile.location.current);
										if (this->creatures[c].tile.location.range.length < DETOX_PLAYER_OFFENSIVE_RANGE) {
											this->player.target._acquire(c, DETOX_TYPE_CREATURE);
											this->log._new(DETOX_MESSAGE_PLAYER_TARGETING, DETOX_TYPE_PLAYER, DETOX_TYPE_PLAYER_TO_CREATURE, this->player.target.identifier);
											break;
										}
									}
								}
							}
							
							break;
						case 25:
							for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
								if (this->resources[r].item.exist == DETOX_EXIST) {
									this->player.tile.location._towards(this->resources[r].item.tile.location);
									this->player._message(DETOX_MESSAGE_RESOURCE_AVAILABLE);
									break;
								}
							}
							break;
						case 30:
							for (DETOX_NUMBER g = 0; g < DETOX_GEARS_MAX; g++) {
								if (this->gears[g].item.exist == DETOX_EXIST) {
									this->player.tile.location._towards(this->gears[g].item.tile.location);
									this->player._message(DETOX_MESSAGE_GEAR_AVAILABLE);
									break;
								}
							}
						}
						break;
					case DETOX_MODE_MANUAL:
						this->_lurk();
						break;
					}
					break;
				case DETOX_TYPE_CREATURE:
					for (DETOX_NUMBER c = 0; c < this->options.creatures; c++) {
						if (this->creatures[c].exist == DETOX_EXIST) {
							if (this->creatures[c].tile.collision.type != DETOX_NO_COLLISION) this->creatures[c].tile.collision.type = DETOX_NO_COLLISION;
							if(this->creatures[c].tile.location.move != DETOX_TYPE_MOVE) this->creatures[c].tile.location.move = DETOX_TYPE_MOVE;
							this->dice._roll(0, DETOX_CREATURE_SPEED);
							switch (this->dice.value) {
							case 1:
								if (this->creatures[c].tile.location.current.y > 0) {
									this->creatures[c].tile.location._up();
								}
								break;
							case 2:
								if (this->creatures[c].tile.location.current.y < this->options.size.height - 1) {
									this->creatures[c].tile.location._down();
								}
								break;
							case 3:
								if (this->creatures[c].tile.location.current.x > 0) {
									this->creatures[c].tile.location._left();
								}
								break;
							case 4:
								if (this->creatures[c].tile.location.current.x < this->options.size.width - 1) {
									this->creatures[c].tile.location._right();
								}
								break;
							}
							if (this->creatures[c].tile.location.to.x == this->player.tile.location.current.x && this->creatures[c].tile.location.to.y == this->player.tile.location.current.y) {
								// Creature collided with player
								this->creatures[c].tile.collision._update(DETOX_TYPE_PLAYER, DETOX_COLLISION_PLAYER);
								this->creatures[c].tile.location._halt();
								this->creatures[c].bumps += 1;
								if (this->creatures[c].bumps >= DETOX_SKILL_ADAPTING_CHANCE) {
									this->dice._roll(0, DETOX_SKILL_ADAPTING_CHANCE);
									switch (this->dice.value) {
									default:
										this->log._new(DETOX_MESSAGE_ADAPTING_CREATURE, c, DETOX_TYPE_CREATURE);
										break;
									case 4:
										this->creatures[c].tile.status = DETOX_SKILL_ADAPTING_FRIENDLY;
										this->log._new(DETOX_MESSAGE_CREATURE_FRIENDLY, c, DETOX_TYPE_CREATURE);
										break;
									case 10:
										this->creatures[c].tile.status = DETOX_SKILL_ADAPTING_UNDECISIVE;
										this->log._new(DETOX_MESSAGE_CREATURE_UNDECISIVE, c, DETOX_TYPE_CREATURE);
										break;
									case 20:
										this->creatures[c].tile.status = DETOX_SKILL_ADAPTING_UNFRIENDLY;
										this->log._new(DETOX_MESSAGE_CREATURE_UNFRIENDLY, c, DETOX_TYPE_CREATURE);
										break;
									}
								}
								else {
									this->log._new(DETOX_MESSAGE_CREATURE_COLLIDED, c, DETOX_TYPE_CREATURE);
								}

							}
							else {
								this->creatures[c].bumps -= this->options.loss; // To-do a complexity
								if (this->creatures[c].bumps < 5 && this->creatures[c].tile.status != DETOX_SKILL_ADAPTING_NEUTRAL) this->creatures[c].tile.status = DETOX_SKILL_ADAPTING_NEUTRAL;
								

								for (DETOX_NUMBER d = 0; d < this->options.creatures; d++) {
									if (this->creatures[d].exist == DETOX_EXIST && c != d) {
										if (this->creatures[c].tile.location.to.x == this->creatures[d].tile.location.current.x && this->creatures[c].tile.location.to.y == this->creatures[d].tile.location.current.y) {
											this->log._new(DETOX_MESSAGE_CREATURE_TO_CREATURE_BUMP, c, DETOX_TYPE_CREATURE_TO_CREATURE, d);
											this->creatures[c].tile.location.move = DETOX_TYPE_MOVE_HALTED;
											this->creatures[c].tile.collision._update(d, DETOX_COLLISION_CREATURE);
											break;
										}
									}
								}
								switch (this->creatures[c].tile.location.move) {
								case DETOX_TYPE_MOVE:
									this->creatures[c].tile.location._advance();
									break;
								case DETOX_TYPE_MOVE_HALTED:
									this->creatures[c].tile.location._halt();
									break;
								}
							}
						}
					}
					break;
				}
			}
			void _events(DETOX_NUMBER type = DETOX_TYPE_EVENT) {
				switch (type) {
				case DETOX_TYPE_EVENT:
					this->dice._roll(0, DETOX_DICE_EVENT);
					switch (this->dice.value) {
					default:
						break;
					case 3:
						for (DETOX_NUMBER c = 0; c < this->options.creatures; c++) {
							if (this->creatures[c].exist != DETOX_EXIST) {
								if (DETOX_TEST == DETOX_EXIST) {
									this->dice._roll(24, 26);
								} else {
									this->dice._roll(0, DETOX_DICE_CREATURE_APPEARANCE);
								}
								if (this->dice.value == DETOX_CREATURE_APPEARANCE) {
									this->_new(DETOX_TYPE_CREATURE, c);
									this->log._new(DETOX_MESSAGE_CREATURE_APPEARANCE, c, DETOX_TYPE_CREATURE);
								}
								break;
							}						
						}
						break;
					case 8:
						for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
							if (this->resources[r].item.exist != DETOX_EXIST) {
								this->dice._roll(0, DETOX_DICE_RESOURCE_APPEARANCE);
								switch (this->dice.value) {
								default:
									this->_message(DETOX_MESSAGE_SENSED);
									break;
								case 1:
									this->resources[r].item._appear(DETOX_TYPE_ITEM_RESOURCE_PLANT, r, this->options.size);
									this->_message(DETOX_MESSAGE_RESOURCE_PLANT_NOTICE);
									break;
								case 3:
									this->resources[r].item._appear(DETOX_TYPE_ITEM_RESOURCE_CURRENCY, r, this->options.size);
									this->_message(DETOX_MESSAGE_RESOURCE_CURRENCY_NOTICE);
									break;
								case 7:
									this->resources[r].item._appear(DETOX_TYPE_ITEM_RESOURCE_PREPAREMENT, r, this->options.size);
									this->_message(DETOX_MESSAGE_RESOURCE_PREPAREMENT_NOTICE);
									break;
								case 10:
									this->resources[r].item._appear(DETOX_TYPE_ITEM_RESOURCE_REFRESHMENT, r, this->options.size);
									this->_message(DETOX_MESSAGE_RESOURCE_REFRESHMENT_NOTICE);
									break;
								}
								break;
							}

						}
						break;

					case 23:
						for (DETOX_NUMBER g = 0; g < DETOX_GEARS_MAX; g++) {
							if (this->gears[g].item.exist != DETOX_EXIST) {
								this->dice._roll(0, DETOX_DICE_GEAR_APPEARANCE);
								switch (this->dice.value) {
								default:
									this->_message(DETOX_MESSAGE_SENSED);
									break;
								case 3:
									this->gears[g].item._appear(DETOX_TYPE_ITEM_GEAR_SHURIKEN, g, this->options.size);
									this->message._new(DETOX_MESSAGE_GEAR_SHURIKEN_NOTICE);
									break;
								}
							}
						}
						break;
					case 25:
						for(DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++){
							if (this->buffs[b].exist != DETOX_EXIST) {
								this->dice._roll(DETOX_DICE_BUFF_APPEARANCE_MIN, DETOX_DICE_BUFF_APPEARANCE_MAX);
								switch (this->dice.value) {
								default:
									this->_message(DETOX_MESSAGE_SENSED);
									break;
								case DETOX_TYPE_BUFF_VALJURIAN_WINGS:
									this->buffs[b].exist = DETOX_EXIST;
									this->buffs[b].tile._new(DETOX_TYPE_BUFF, b, this->options.size, DETOX_TYPE_BUFF_VALJURIAN_WINGS_STATUS);
									this->buffs[b].duration = DETOX_BUFF_BASE_DURATION_APPEARANCE;
									this->_message(DETOX_MESSAGE_NOTICE_DISTANCE);
									break;
								case DETOX_TYPE_BUFF_WAVY_LENGTHS:
									this->buffs[b].exist = DETOX_EXIST;
									this->buffs[b].tile._new(DETOX_TYPE_BUFF, b, this->options.size, DETOX_TYPE_BUFF_WAVY_LENGTHS_STATUS);
									this->buffs[b].duration = DETOX_BUFF_BASE_DURATION_APPEARANCE;
									this->_message(DETOX_MESSAGE_NOTICE_DISTANCE);
									break;

								}
								break; // <- Note to self
							}
							this->_message(""); // ->
						}
					case 30:
						break;
					}

					break;
				case DETOX_TYPE_PLAYER:
					break;
				case DETOX_TYPE_CREATURE:
					for (DETOX_NUMBER c = 0; c < this->options.creatures; c++) {
						if (this->creatures[c].exist == DETOX_EXIST) {
							for (DETOX_NUMBER d = 0; d < this->options.creatures; d++) {
								if (this->creatures[d].exist == DETOX_EXIST) {
									if (c != d) {
										this->creatures[c].tile.location._distance(this->creatures[d].tile.location.current);
										if (this->creatures[c].tile.location.range.length <= 1) {
											this->dice._roll(0, DETOX_DICE_CREATURE_TO_CREATURE);
											switch (this->dice.value) {
											default:
												break;
											case 3:
												this->creatures[c].attacking = DETOX_EXIST;
												this->creatures[c].target._acquire(d, DETOX_TYPE_CREATURE);
												break;
											}
										}
									}
								}
							}
						}
					}
					break;
				}
			}
			void _collision(DETOX_NUMBER collider = DETOX_UNDEFINED,  DETOX_NUMBER type = DETOX_UNDEFINED) {
				switch (collider) {
				case DETOX_TYPE_PLAYER:
					switch (type) {
					case DETOX_COLLISION_SWEEP:
						this->player.tile.collision.type = DETOX_NO_COLLISION;
						for (DETOX_NUMBER c = 0; c < DETOX_CREATURES_MAX; c++) {
							if (this->creatures[c].exist == DETOX_EXIST) {
								if (this->player.tile.location.to.x == this->creatures[c].tile.location.current.x && this->player.tile.location.to.y == this->creatures[c].tile.location.current.y) {
									this->player.tile.collision.type = DETOX_COLLISION_CREATURE;
									this->dice._roll(0, DETOX_DICE_DEFAULT);
									switch (this->dice.value) {
									default:
										break;
									case 1:
										this->player._skill(DETOX_SKILL_LOSS, DETOX_SKILL_ENDURANCE, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_ENDURANCE_FELL);
										break;
									case 2:
										this->player._skill(DETOX_SKILL_GAIN, DETOX_SKILL_ENDURANCE, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_ENDURANCE_GAINED);
										break;
									case 11:
										this->player._skill(DETOX_SKILL_LOSS, DETOX_SKILL_VELOCITY, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_VELOCITY_FELL);
										break;
									case 12:
										this->player._skill(DETOX_SKILL_GAIN, DETOX_SKILL_VELOCITY, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_VELOCITY_GAINED);
										break;
									case 21:
										this->player._skill(DETOX_SKILL_GAIN, DETOX_SKILL_TRADING, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_TRADING_GAINED);
										break;
									case 22:
										this->player._skill(DETOX_SKILL_LOSS, DETOX_SKILL_TRADING, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_TRADING_FELL);
										break;
									case 31:
										this->player._skill(DETOX_SKILL_GAIN, DETOX_SKILL_ADAPTING, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_ADAPTING_SUCCESS);
										break;
									case 32:
										this->player._skill(DETOX_SKILL_LOSS, DETOX_SKILL_ADAPTING, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_ADAPTING_FAILED);
										break;
									case 75:
										this->_message(DETOX_MESSAGE_POOR);
										this->player.skill[DETOX_SKILL_ADAPTING].experience -= DETOX_SKILL_BASE_GAIN;
										this->player.skill[DETOX_SKILL_ADAPTING].change -= DETOX_SKILL_BASE_GAIN;
										this->player.skill[DETOX_SKILL_ENDURANCE].experience -= DETOX_SKILL_BASE_GAIN;
										this->player.skill[DETOX_SKILL_ENDURANCE].change -= DETOX_SKILL_BASE_GAIN;
										this->player.skill[DETOX_SKILL_TRADING].experience += DETOX_SKILL_BASE_GAIN;
										this->player.skill[DETOX_SKILL_TRADING].change += DETOX_SKILL_BASE_GAIN;
										break;
									}
									break;
								}
							}
						}
				
						if (this->player.tile.collision.type == DETOX_NO_COLLISION) {
							for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
								if (this->buffs[b].exist == DETOX_EXIST) {
									if (this->player.tile.location.to.x == this->buffs[b].tile.location.current.x && this->player.tile.location.to.y == this->buffs[b].tile.location.current.y) {
										this->player._gain(DETOX_TYPE_BUFF, this->buffs[b].tile.status, DETOX_BUFF_BASE_DURATION);
										this->buffs[b]._over();
										this->player.tile.collision.type = DETOX_COLLISION_BUFF;
										break;
									}
								}
							}
						}
						if (this->player.tile.collision.type == DETOX_NO_COLLISION) {
							for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
								if (this->resources[r].item.exist == DETOX_EXIST) {
									if (this->player.tile.location.to.x == this->resources[r].item.tile.location.current.x && this->player.tile.location.to.y == this->resources[r].item.tile.location.current.y) {
										switch (this->resources[r].item.tile.type) {
										default:
											break;
										case DETOX_TYPE_ITEM_RESOURCE_PLANT:
											this->dice._roll(0, DETOX_DICE_MINOR);
											switch (this->dice.value) {
											case 3:
												this->player._gain(DETOX_TYPE_ITEM_RESOURCE, this->resources[r].item.type, this->resources[r].item.amount);
												this->player._skill(DETOX_SKILL_GAIN, DETOX_SKILL_FARMING, DETOX_SKILL_GAIN_MODIFIER, DETOX_MESSAGE_FARMING_PICKUP);
												this->resources[r].item._removal(DETOX_EXIST);
												this->player.tile.collision.type = DETOX_COLLISION_RESOURCE_PLANT;
												break;
											case 6:
												this->player._skill(DETOX_SKILL_GAIN, DETOX_SKILL_FARMING, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_FARMING_SUCCEEDED);
												this->player.tile.collision.type = DETOX_COLLISION_RESOURCE_PLANT;
												break;
											case 9:
												this->player._skill(DETOX_SKILL_LOSS, DETOX_SKILL_FARMING, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_FARMING_FAILED);
												this->player.tile.collision.type = DETOX_COLLISION_RESOURCE_PLANT;
												break;
											case 12:
												for (DETOX_NUMBER r = 0; r < this->player.inventory.resources; r++) {
													if (this->player.inventory.resource[r].type == DETOX_TYPE_ITEM_RESOURCE_PLANT) {
														if (this->player.inventory.resource[r].item.amount > 0) {
															this->player._skill(DETOX_SKILL_GAIN, DETOX_SKILL_FARMING, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_FARMING_WATER);
															this->player.tile.collision.type = DETOX_COLLISION_RESOURCE_PLANT;
															this->player.inventory.resource[r].item.amount--;
														}
													}
												}
												
											}
											break;
										case DETOX_TYPE_ITEM_RESOURCE_CURRENCY:
											this->player._gain(DETOX_TYPE_ITEM_RESOURCE, this->resources[r].item.type, this->resources[r].item.amount);
											this->player._message(DETOX_MESSAGE_TRADING_CURRENCY_PICKUP);
											this->resources[r].item._removal(DETOX_EXIST);
											this->player.tile.collision.type = DETOX_COLLISION_RESOURCE_CURRENCY;
											break;
										case DETOX_TYPE_ITEM_RESOURCE_PREPAREMENT:
											this->player._gain(DETOX_TYPE_ITEM_RESOURCE, this->resources[r].item.type, this->resources[r].item.amount);
											this->player._message(DETOX_MESSAGE_ENDURANCE_PICKUP);
											this->resources[r].item._removal(DETOX_EXIST);
											this->player.tile.collision.type = DETOX_COLLISION_RESOURCE_PREPAREMENT;
											break;
										case DETOX_TYPE_ITEM_RESOURCE_REFRESHMENT:
											this->player._gain(DETOX_TYPE_ITEM_RESOURCE, this->resources[r].item.type, this->resources[r].item.amount);
											this->player._message(DETOX_MESSAGE_REFRESHMENT_PICKUP);
											this->resources[r].item._removal(DETOX_EXIST);
											this->player.tile.collision.type = DETOX_COLLISION_RESOURCE_REFRESHMENT;
											break;
										}
										break;
									}
								}
							}
						}
						if (this->player.tile.collision.type == DETOX_NO_COLLISION) {
							for (DETOX_NUMBER g = 0; g < DETOX_GEARS_MAX; g++) {
								if (this->gears[g].item.exist == DETOX_EXIST) {
									if (this->player.tile.location.to.x == this->gears[g].item.tile.location.current.x && this->player.tile.location.to.y == this->gears[g].item.tile.location.current.y) {
										switch (this->gears[g].item.type) {
										default:
											break;
										case DETOX_TYPE_ITEM_GEAR_SHURIKEN:
											this->player._gain(DETOX_TYPE_ITEM_GEAR, this->gears[g].item.type, this->gears[g].item.amount);
											this->player._message(DETOX_MESSAGE_SHURIKEN_PICKUP);
											this->gears[g].item._removal(DETOX_EXIST);
											this->player.tile.collision.type = DETOX_COLLISION_GEAR_SHURIKEN;
											break;
										}
									}
								}
							}
						}
						if (this->player.tile.collision.type == DETOX_NO_COLLISION) {
							this->dice._roll(0, DETOX_DICE_NON_COLLIDED);
							switch (this->dice.value) {
							default:
								break;
							case 3:
								this->player._skill(DETOX_SKILL_GAIN, DETOX_SKILL_COOKING, DETOX_SKILL_BOOST, DETOX_MESSAGE_COOKING_BOOST);
								break;
							case 11:
								this->player._skill(DETOX_SKILL_GAIN, DETOX_SKILL_COOKING, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_COOKING_GAINED);
								break;
							case 18:
								this->player._skill(DETOX_SKILL_LOSS, DETOX_SKILL_COOKING, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_COOKING_FELL);
								break;
							case 24:
								this->_message(DETOX_MESSAGE_COOKING_TRIP);
								this->player.skill[DETOX_SKILL_COOKING].experience -= DETOX_SKILL_BOOST;
								this->player.skill[DETOX_SKILL_COOKING].change -= DETOX_SKILL_BOOST;
								this->player.skill[DETOX_SKILL_TRADING].experience -= DETOX_SKILL_BOOST;
								this->player.skill[DETOX_SKILL_TRADING].change -= DETOX_SKILL_BOOST;
								this->player.skill[DETOX_SKILL_ENDURANCE].experience -= DETOX_SKILL_BASE_GAIN;
								this->player.skill[DETOX_SKILL_ENDURANCE].change -= DETOX_SKILL_BASE_GAIN;
								break;
							case 25:
								this->player._skill(DETOX_SKILL_LOSS, DETOX_SKILL_ADAPTING, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_ADAPTING_FELL);
								break;
							case 52:
								this->_message(DETOX_MESSAGE_CKG_TDG_SELF);
								this->player.skill[DETOX_SKILL_COOKING].experience += DETOX_SKILL_BASE_GAIN;
								this->player.skill[DETOX_SKILL_COOKING].change += DETOX_SKILL_BASE_GAIN;
								this->player.skill[DETOX_SKILL_TRADING].experience += DETOX_SKILL_BASE_GAIN;
								this->player.skill[DETOX_SKILL_TRADING].change += DETOX_SKILL_BASE_GAIN;
								break;
							case 70:
								this->player._skill(DETOX_SKILL_GAIN, DETOX_SKILL_ENDURANCE, DETOX_SKILL_BOOST, DETOX_MESSAGE_ENDURANCE_GAINED);
								break;
							case 71:
								this->player._skill(DETOX_SKILL_GAIN, DETOX_SKILL_TRADING, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_TRADING_SELF);
								break;
							case 88:
								this->player._skill(DETOX_SKILL_GAIN, DETOX_SKILL_ENDURANCE, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_ENDURANCE_FLOW);
								break;
							case 89:
								this->player._skill(DETOX_SKILL_GAIN, DETOX_SKILL_VELOCITY, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_VELOCITY_FLOW);
								break;
							case 101:
								for (DETOX_NUMBER i = 0; i < DETOX_INVENTORY_SLOTS; i++) {
									if (this->player.inventory.resource[i].item.type == DETOX_TYPE_ITEM_RESOURCE_CURRENCY) {
										if (this->player.inventory.resource[i].item.amount > 0) {
											this->player._skill(DETOX_SKILL_LOSS, DETOX_SKILL_TRADING, DETOX_SKILL_GAIN_MODIFIER, DETOX_MESSAGE_TRADING_CURRENCY_LOST);
											this->player.inventory.resource[i].item.amount -= DETOX_TYPE_ITEM_RESOURCE_CURRENCY_LOSS; // Doesn't work
										}
										break;
									}
								}
								break;
							}
						}

						if (this->player.tile.collision.type == DETOX_COLLISION_CREATURE) {
							this->player.tile.location._halt();
						}
						else {
							this->player.tile.location._advance();
						}
						break;
					}
					break;
				}
			}
			void _attack(DETOX_NUMBER type = DETOX_UNDEFINED) {
				switch (type) {
				default:
					break;
				case DETOX_TYPE_PLAYER:
					if (this->player.target.exist == DETOX_EXIST) {
						this->player.inventory._prepare();

						this->player.tile.location._distance(this->creatures[this->player.target.identifier].tile.location.current);
						if (this->player.inventory.weapon.damage.range >= this->player.tile.location.range.length) {
							if (this->player.inventory.weapon.thrown == DETOX_EXIST) {
								for (DETOX_NUMBER p = 0; p < DETOX_PROJECTILES_MAX; p++) {
									if (this->projectiles[p].exist == DETOX_UNDEFINED) {
										this->projectiles[p]._throw(this->creatures[this->player.target.identifier], this->options.size, this->player.tile.location.current, this->player.inventory.weapon.type);
										for (DETOX_NUMBER t = 0; t < this->player.inventory.gears; t++) {
											if (this->player.inventory.gear[t].type == this->projectiles[p].item.type) {
												this->player.inventory.gear[t].item.amount--;
												break;
											}
										}
										break;
									}
								}
							}
							else {
								this->player.inventory.weapon.damage.dice._roll(this->player.inventory.weapon.damage.min, this->player.inventory.weapon.damage.max);
								if (this->player.inventory.weapon.damage.dice.value > 0) {
									this->creatures[this->player.target.identifier].health._loss(this->player.inventory.weapon.damage.dice.value);
									if (this->creatures[this->player.target.identifier].health.current <= 0) {
										this->creatures[this->player.target.identifier]._die();
										this->player.target._untarget();
										this->log._new(DETOX_MESSAGE_CREATURE_DEFEATED_BASE, DETOX_TYPE_PLAYER, DETOX_TYPE_ATTACK_PLAYER, this->player.target.identifier);
										this->player.experience._gain(1, DETOX_TYPE_PLAYER);
									}
									else {
										this->log._new(DETOX_MESSAGE_ATTACK_PLAYER, DETOX_TYPE_PLAYER, DETOX_TYPE_ATTACK_PLAYER, this->player.target.identifier);
									}
								}
								else {
									this->log._new(DETOX_MESSAGE_DAMAGE_NONE, DETOX_TYPE_PLAYER, DETOX_TYPE_PLAYER_TO_CREATURE, this->player.target.identifier);
								}
							}
						}
						this->player.attacking = DETOX_UNDEFINED;
					}
					break;
				case DETOX_TYPE_CREATURE:
					for (DETOX_NUMBER c = 0; c < this->options.creatures; c++) {
						if (this->creatures[c].exist == DETOX_EXIST) {
							if(this->creatures[c].target.exist == DETOX_EXIST){
								if (this->creatures[c].attacking == DETOX_EXIST) {
									this->creatures[c].inventory._prepare(DETOX_TYPE_MELEE);
									this->creatures[c].damage.dice._roll(this->creatures[c].damage.min, this->creatures[c].damage.max);
									//this->log._new(this->creatures[c].dice.value, c, DETOX_TYPE_MESSAGE_DEBUG, this->creatures[c].target.identifier);
									if (this->creatures[c].damage.dice.value > 0) {
										this->creatures[this->creatures[c].target.identifier].health._loss(this->creatures[c].damage.dice.value);
										if (this->creatures[this->creatures[c].target.identifier].health.current <= 0) {
											this->log._new(DETOX_MESSAGE_CREATURE_DEFEATED_BASE, c, DETOX_TYPE_ATTACK_CREATURE, this->creatures[c].target.identifier);
											this->creatures[this->creatures[c].target.identifier]._die();
											this->creatures[c].target._untarget();
											this->creatures[c].experience._gain(1, DETOX_TYPE_CREATURE);
										}
										else {
											this->log._new(DETOX_MESSAGE_ATTACK_CREATURE, c, DETOX_TYPE_ATTACK_CREATURE, this->creatures[c].target.identifier);
										}
									}
									else {
										this->log._new(DETOX_MESSAGE_DAMAGE_NONE, c, DETOX_TYPE_CREATURE_TO_CREATURE, this->creatures[c].target.identifier);
									}
									this->creatures[c].attacking = DETOX_UNDEFINED;
									// break; // One creature / spin (?), attack chain (...?)
								}
							}
						}
					}
					break;
				}
			}
			void _init() {
				for (DETOX_NUMBER y = 0; y < this->options.size.height; y++) {
					for (DETOX_NUMBER x = 0; x < this->options.size.width; x++) {
						this->area[tiles] = new TILE;
						this->area[tiles]->_new(DETOX_TYPE_GROUND, tiles, this->options.size, DETOX_STATUS_DEFAULT);
						this->area[tiles]->location._new(this->options.size, DETOX_MODE_MANUAL, x, y);
						//std::cout << " " << this->tiles << ": "  << this->area[tiles]->character << this->area[tiles]->location.current.x << " / " << this->area[tiles]->location.current.y;
						this->tiles++;
					}
				}
				//std::cout << std::endl;
				//system("pause");
			}
		};

		DETOX_NUMBER played = DETOX_UNDEFINED, started = DETOX_EXIT;
		DETOX_EXECUTABLE exe;
		VERSION version;
		DISPLAY display;
		OPTIONS options;
		CONTROLS controls;
		MAP map;

		void _sweep() {
			//SwitchToThread();
			this->exe.window.buffer._clear(0, 0, this->display.width, this->display.height);
			this->exe.window.buffer._cursor(0, 0);
		}
		void _menu() {
			this->exe.window.buffer._clear(0, 0, this->display.width, this->display.height);
			this->exe.window.buffer._cursor(0, 1);
			
			switch (this->options.selection) {
			case DETOX_MENU:
			case DETOX_MENU_BACK:
				std::cout << " [Q] Begin" << std::endl;
				std::cout << " [C] Options" << std::endl;
				std::cout << " [V] Creator" << std::endl;
				std::cout << " [X] Exit" << std::endl;

				std::cin >> this->options.selection;
				break;
			case DETOX_MENU_BEGIN:
				this->_begin();
				break;
			case DETOX_MENU_OPTIONS:
				std::cout << " [U] Change size" << std::endl;
				std::cout << " [M] Play mode" << std::endl; // M
				std::cout << " [C] View mode" << std::endl;
				std::cout << " [D] Creatures" << std::endl; // D
				if(this->options.mode == DETOX_MODE_AUTO) std::cout << " [F] Game rate" << std::endl;
				std::cout << " [B] Go back" << std::endl;
				std::cin >> this->options.selection;
				switch (this->options.selection) {
				case DETOX_MENU_OPTIONS_SIZE:
					this->_options(DETOX_MENU_OPTIONS_SIZE);
					break;
				case DETOX_MENU_OPTIONS_MODE:
					this->_options(DETOX_MENU_OPTIONS_MODE);
					break;
				case DETOX_MENU_OPTIONS_CREATURE:
					this->_options(DETOX_MENU_OPTIONS_CREATURE);
					break;
				case DETOX_MENU_OPTIONS_VIEW:
					this->_options(DETOX_MENU_OPTIONS_VIEW);
					break;
				case DETOX_MENU_OPTIONS_RATE:
					if(this->options.mode == DETOX_MODE_AUTO) this->_options(DETOX_MENU_OPTIONS_RATE);
					break;
				}
				break;
			case DETOX_MENU_CREATOR:
				std::cout << " Created by Valtsu" << std::endl;
				std::cout << " Email: valtsu@pelihuuma.fi\n" << std::endl;
				std::cout << "   Warning: " << std::endl;
				std::cout << "    May cause eye-straining, if looked at and or played for\n";
				std::cout << "    longer periods of time. If possible, consider lowering\n";
				std::cout << "    your screens brightness.\n" << std::endl;
				std::cout << "   Caution: " << std::endl;
				std::cout << "    Likely sensitive content.\n" << std::endl;
				std::cout << "   Credits:" << std::endl;
				std::cout << "    Microsoft\n\n" << std::endl;
				std::cout << "   Other:" << std::endl;
				std::cout << "    Window: " << std::endl;
				//std::cout << "     Console: " << this->exe.window.console << " - " << &this->exe.window.console << std::endl;
				//std::cout << "     Desktop: " << this->exe.window.desktop << " - " << &this->exe.window.desktop << std::endl;
				std::cout << "    Thread: " << this->exe.thread.identifier << " - " << &this->exe.thread.handle << std::endl;
				std::cout << "    Process: " << this->exe.process.identifier << " - " << &this->exe.process.handle << std::endl;
				std::cout << "    Sockets:" << std::endl;
				std::cout << "     Connector: " << this->exe.connector.sock.identifier << std::endl;
				std::cout << "     Receiver: " << this->exe.receiver.sock.identifier << std::endl;
				std::cout << "    Touch: ";
				if (this->exe.touch.identifier == 0) {
					std::cout << "Error " << this->exe.touch.error << " - " << this->exe.touch.value;
				} else {
					std::cout << this->exe.touch.identifier << " - " << this->exe.touch.value;
				}
				std::cout << std::endl;
				std::cout << " [B] Go back" << std::endl;
				std::cin >> this->options.selection;
				break;
			case DETOX_MENU_EXIT:
				this->played = DETOX_EXIT;
				break;
			default:
				this->options.selection = DETOX_MENU;
				break;
			}
		}

		void _begin() {
			if (this->exe.save.exist == DETOX_UNDEFINED) {
				if (DETOX_MODE_PRIVATE == DETOX_EXIT) {
					std::cout << "Who goes there? ..." << std::endl;
					std::cin >> this->map.player.name.text;
					//this->map.player.name._write(name); 
				}
				else {
					this->map.player.name._write("Valtsuh.Open.Private");
				}
				//std::cout << "1x:" << this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].x << ", y:" << this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].y << ", E:" << this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].exist << ".";
				//system("pause");
				this->options.tile._init(this->map.options.size, DETOX_TYPE_GROUND);
				this->map.options = this->options;
				this->map._init();
				this->map._new(DETOX_TYPE_PLAYER);
				if (DETOX_TEST == DETOX_EXIST) {
					this->map._new(DETOX_TYPE_CREATURE);
					this->map._new(DETOX_TYPE_CREATURE);
					this->map._new(DETOX_TYPE_CREATURE);
					this->map._new(DETOX_TYPE_CREATURE);
				}
				// Weird collision with new tile random number generator, possibly array too short (this->display.interface[])
				//std::cout << "x2x:" << this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].x << ", y:" << this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].y << ", E:" << this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].exist << ".";
				//system("pause");
				std::cout << "Hello, " << this->map.player.name.text << std::endl;
				std::cout << "Your adventure begins shortly..." << std::endl;
				this->map.log._new(DETOX_MESSAGE_PLAYER_ARRIVAL, DETOX_TYPE_PLAYER, DETOX_TYPE_PLAYER);
			}
			Sleep(3000);
			this->_sweep();
			this->started = DETOX_EXIST;
		}
	 	void _options(DETOX_NUMBER option = DETOX_MENU_OPTIONS) {
			switch (option) {
			default:
				break;
			case DETOX_MENU_OPTIONS_MODE:
				std::cout << "Play mode:" << std::endl;
				std::cout << " [1] Auto" << std::endl;
				std::cout << " [2] Manual" << std::endl;
				std::cout << " [3] Nominal" << std::endl;
				std::cout << " [B] Go back" << std::endl;
				std::cin >> this->options.selection;
				switch (this->options.selection) {
				case DETOX_MENU_OPTIONS_MODE_AUTO:
					this->options.mode = DETOX_MODE_AUTO;
					break;
				case DETOX_MENU_OPTIONS_MODE_MANUAL:
					this->options.mode = DETOX_MODE_MANUAL;
					break;
				case DETOX_MENU_OPTIONS_MODE_NOMINAL:
					this->options.mode = DETOX_MODE_NOMINAL;
					break;
				case DETOX_MENU_BACK:
					this->options.selection = DETOX_MENU_OPTIONS;
					break;
				default:
					this->options.selection = DETOX_MENU;
					break;
				}
				break;

			case DETOX_MENU_OPTIONS_VIEW:
				std::cout << "View mode: " << std::endl;
				std::cout << " [1] Whole map" << std::endl;
				std::cout << " [2] Camera" << std::endl; // Likely to change
				std::cout << " [B] Go back" << std::endl;
				std::cin >> this->options.selection;
				switch (this->options.selection) {
				case DETOX_MENU_OPTIONS_VIEW_WHOLE:
					this->options.view = DETOX_MENU_OPTIONS_VIEW_WHOLE_VALUE;
					this->_self(DETOX_WINDOW_CHARACTERS, this->options.rate.current);
					break;
				case DETOX_MENU_OPTIONS_VIEW_CAMERA:
					this->options.view = DETOX_MENU_OPTIONS_VIEW_CAMERA_VALUE;
					this->_self(DETOX_WINDOW_CHARACTERS, this->options.rate.current);
					break;
				case DETOX_MENU_BACK:
					this->options.selection = DETOX_MENU_OPTIONS;
					break;
				default:
					this->options.selection = DETOX_MENU;
					break;
				}
				break;
			case DETOX_MENU_OPTIONS_SIZE:							// To-do, add to show current / default map sizes
				std::cout << "Map size: \n" << std::endl;
				std::cout << "Default: 32, 16" << std::endl;
				std::cout << "\n [1] Tiny (" << DETOX_MENU_OPTIONS_SIZE_TINY_WIDTH << ", " << DETOX_MENU_OPTIONS_SIZE_TINY_HEIGHT << ")" << std::endl;
				std::cout << " [2] Small (" << DETOX_MENU_OPTIONS_SIZE_SMALL_WIDTH << ", " << DETOX_MENU_OPTIONS_SIZE_SMALL_HEIGHT << ")" << std::endl;
				std::cout << " [3] Average (" << DETOX_MENU_OPTIONS_SIZE_AVERAGE_WIDTH << ", " << DETOX_MENU_OPTIONS_SIZE_AVERAGE_HEIGHT << ")" << std::endl;
				std::cout << " [4] Large (" << DETOX_MENU_OPTIONS_SIZE_LARGE_WIDTH << ", " << DETOX_MENU_OPTIONS_SIZE_LARGE_HEIGHT << ")\n" << std::endl;
				std::cout << " Current: " << this->options.size.width << ", " << this->options.size.height << std::endl;
				std::cout << "\n [B] Go back" << std::endl;
				std::cin >> this->options.selection;
				switch (this->options.selection) {
				case DETOX_MENU_OPTIONS_SIZE_TINY:
					this->options._configure(DETOX_MENU_OPTIONS_SIZE_TINY_VALUE);
					this->_self(DETOX_WINDOW_CHARACTERS, this->options.rate.current, 5, 5);
					break;
				case DETOX_MENU_OPTIONS_SIZE_SMALL:
					this->options._configure(DETOX_MENU_OPTIONS_SIZE_SMALL_VALUE);
					this->_self(DETOX_WINDOW_CHARACTERS, this->options.rate.current, 5, 5);
					break;
				case DETOX_MENU_OPTIONS_SIZE_AVERAGE:
					this->options._configure(DETOX_MENU_OPTIONS_SIZE_AVERAGE_VALUE);
					this->_self(DETOX_WINDOW_CHARACTERS, this->options.rate.current, 5, 5);
					break;
				case DETOX_MENU_OPTIONS_SIZE_LARGE:
					this->options._configure(DETOX_MENU_OPTIONS_SIZE_LARGE_VALUE);
					this->_self(DETOX_WINDOW_CHARACTERS, this->options.rate.current, 5, 5);
					break;
				case DETOX_MENU_BACK:
					this->options.selection = DETOX_MENU_OPTIONS;
					break;
				default:
					this->options.selection = DETOX_MENU;
					break;
				}
				break;
			case DETOX_MENU_OPTIONS_CREATURE:
				std::cout << "Maximum amount of creatures(Currently " << this->options.creatures << "): " << std::endl;
				std::cout << " [1] 4 Creatures" << std::endl;
				std::cout << " [2] 8 Creatures" << std::endl;
				std::cout << " [3] 12 Creatures" << std::endl;
				std::cout << " [4] 16 Creatures" << std::endl;
				std::cout << " [5] 20 Creatures" << std::endl;
				std::cout << " [B] Go back" << std::endl;
				std::cin >> this->options.selection;
				switch (this->options.selection) {
				case DETOX_MENU_OPTIONS_CREATURES_VERY_FEW:
					this->options.creatures = DETOX_MENU_OPTIONS_CREATURES_VERY_FEW_VALUE;
					break;
				case DETOX_MENU_OPTIONS_CREATURES_FEW:
					this->options.creatures = DETOX_MENU_OPTIONS_CREATURES_FEW_VALUE;
					break;
				case DETOX_MENU_OPTIONS_CREATURES_MODERATELY:
					this->options.creatures = DETOX_MENU_OPTIONS_CREATURES_MODERATELY_VALUE;
					break;
				case DETOX_MENU_OPTIONS_CREATURES_MUCH:
					this->options.creatures = DETOX_MENU_OPTIONS_CREATURES_MUCH_VALUE;
					break;
				case DETOX_MENU_OPTIONS_CREATURES_VERY_MUCH:
					this->options.creatures = DETOX_MENU_OPTIONS_CREATURES_VERY_MUCH_VALUE;
					break;
				case DETOX_MENU_BACK:
					this->options.selection = DETOX_MENU_OPTIONS;
					break;
				default:
					this->options.selection = DETOX_MENU;
					break;
				}
				break;
			case DETOX_MENU_OPTIONS_RATE:
				std::cout << "Base rate for a game spin: " << std::endl; // Subjective to change, other examples: Round, tick, loop... 
				std::cout << " [1] Very slow (10.0 seconds)" << std::endl;
				std::cout << " [2] Slow (5.0 seconds)" << std::endl;
				std::cout << " [3] Average (2.5 seconds)" << std::endl;
				std::cout << " [4] Fast (1.0 second)" << std::endl;
				std::cout << " [5] Very fast (0.5 seconds)" << std::endl;
				std::cout << " [B] Go back" << std::endl;
				std::cin >> this->options.selection;
				switch (this->options.selection) {
				case DETOX_MENU_OPTIONS_RATE_VERY_SLOW:
					this->options.rate.base = DETOX_MENU_OPTIONS_RATE_VERY_SLOW_VALUE;
					break;
				case DETOX_MENU_OPTIONS_RATE_SLOW:
					this->options.rate.base = DETOX_MENU_OPTIONS_RATE_SLOW_VALUE;
					break;
				case DETOX_MENU_OPTIONS_RATE_AVERAGE:
					this->options.rate.base = DETOX_MENU_OPTIONS_RATE_AVERAGE_VALUE;
					break;
				case DETOX_MENU_OPTIONS_RATE_FAST:
					this->options.rate.base = DETOX_MENU_OPTIONS_RATE_FAST_VALUE;
					break;
				case DETOX_MENU_OPTIONS_RATE_VERY_FAST:
					this->options.rate.base = DETOX_MENU_OPTIONS_RATE_VERY_FAST_VALUE;
					break;
				case DETOX_MENU_BACK:
					this->options.selection = DETOX_MENU_OPTIONS;
					break;
				default:
					this->options.selection = DETOX_MENU;
					break;
				}
				this->options.rate.current = this->options.rate.base;
				break;
			//case DETOX_MENU_OPTIONS_GAME: // Enable / disable interface[s]
			}
		}
		void _play() {
			SwitchToThread();
			this->map._assemble();
			this->map._events();
			this->map._movement(DETOX_TYPE_PLAYER);
			this->map._collision(DETOX_TYPE_PLAYER, DETOX_COLLISION_SWEEP);
			this->map._movement(DETOX_TYPE_CREATURE);
			this->map._events(DETOX_TYPE_CREATURE);
			this->map.dice._roll(0, 1);
			switch (this->map.dice.value) {
			default:
				break;
			case 0:
				this->map._attack(DETOX_TYPE_PLAYER);
				this->map._attack(DETOX_TYPE_CREATURE);
				break;
			case 1:
				this->map._attack(DETOX_TYPE_CREATURE);
				this->map._attack(DETOX_TYPE_PLAYER);
				break;
			}
			// Apparently rendering should be ordered from top to bottom (right to left), otherwise causes blinking of lines ...Note to self(after thought).
			this->_render(DETOX_INTERFACE_TOP);
			switch (this->options.view) {
			case DETOX_MENU_OPTIONS_VIEW_CAMERA_VALUE:
				this->_render(DETOX_INTERFACE_CAMERA_PLAYER);
				this->_render(DETOX_INTERFACE_CAMERA_IDLE);
				break;
			case DETOX_MENU_OPTIONS_VIEW_WHOLE_VALUE:
				this->_render(DETOX_INTERFACE_MAP);
				break;
			}
			this->_render(DETOX_INTERFACE_INVENTORY);
			this->_render(DETOX_INTERFACE_PLAYER);
			this->_render(DETOX_INTERFACE_LOG);
			this->_render(DETOX_INTERFACE_STATISTICS);
			this->map.player._update(DETOX_TYPE_OVERVIEW);
			this->map._update(DETOX_TYPE_OVERALL);
		}
		void _render(DETOX_NUMBER interface_part){
			// To-do gfx if
			switch (interface_part) {
			case DETOX_INTERFACE_PLAYER:
				if (this->display.interface_part[DETOX_INTERFACE_PLAYER].exist == DETOX_EXIST) {
					this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_PLAYER].begin.x, this->display.interface_part[DETOX_INTERFACE_PLAYER].begin.y, DETOX_INTERFACE_PLAYER_WIDTH);
					std::cout << this->map.player.name.text;
					for (DETOX_NUMBER s = 0; s < this->map.player.skills; s++) {
						if (this->map.player.skill[s].exist == DETOX_EXIST) {
							this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_PLAYER].begin.x + 1, this->display.interface_part[DETOX_INTERFACE_PLAYER].begin.y + 1 + s, DETOX_INTERFACE_PLAYER_WIDTH);

							std::cout << "[" << this->map.player.skill[s].abbreviation << "]";
							std::cout << " " << this->map.player.skill[s].name << ": ";
							std::cout << " " << this->map.player.skill[s].experience;
							std::cout << " (" << this->map.player.skill[s].change << ")";
						}
					}

				}
				break;
			case DETOX_INTERFACE_TOP:
				if (this->display.interface_part[DETOX_INTERFACE_TOP].exist == DETOX_EXIST) {
					// Status
					this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_TOP].begin.x, this->display.interface_part[DETOX_INTERFACE_TOP].begin.y, DETOX_INTERFACE_TOP_WIDTH);
					std::cout << "| Detox " << this->version.large << "." << this->version.average << "." << this->version.minor << "." << this->version.outer;

					std::cout << " IP (C" << this->exe.connector.sock.identifier << " - " << this->exe.connector.connection.status << "/" << this->exe.connector.stability;
					std::cout << ", R" << this->exe.receiver.sock.identifier << " - " << this->exe.receiver.connection.status << "/" << this->exe.receiver.stability;
					std::cout << "): ";
					std::cout << std::endl;
					this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_TOP].begin.x, this->display.interface_part[DETOX_INTERFACE_TOP].begin.y + DETOX_INTERFACE_MESSAGE_STATUS, DETOX_INTERFACE_TOP_WIDTH);
					std::cout << "| ";
					//std::cout << this->options.mode << " ";
					std::cout << this->map.player.tile.character << this->map.player.gender.sign << this->map.player.personality.religion.identifier << " (" << this->map.player.tile.location.current.x << ", " << this->map.player.tile.location.current.y << ", " << this->options.rate.current << ")";
					std::cout << " - " << this->map.options.size.width << " / " << this->map.options.size.height << " " << this->version.counter;
					//std::cout << DETOX_OVERING_SPACE << std::endl;

					// Player event
					this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_TOP].begin.x, this->display.interface_part[DETOX_INTERFACE_TOP].begin.y + DETOX_INTERFACE_MESSAGE_PLAYER, DETOX_INTERFACE_TOP_WIDTH);
					std::cout << "| ";
					std::cout << this->map.player.message.text;
					//std::cout << DETOX_OVERING_SPACE << std::endl;

					// Map event
					this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_TOP].begin.x, this->display.interface_part[DETOX_INTERFACE_TOP].begin.y + DETOX_INTERFACE_MESSAGE_MAP, DETOX_INTERFACE_TOP_WIDTH);
					std::cout << "| ";
					std::cout << this->map.message.text;
					//std::cout << DETOX_OVERING_SPACE << std::endl;
					
					// Creature
					this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_TOP].begin.x, this->display.interface_part[DETOX_INTERFACE_TOP].begin.y + DETOX_INTERFACE_MESSAGE_CREATURE, DETOX_INTERFACE_TOP_WIDTH);
					std::cout << "| ";
					std::cout << this->map.player.inventory.weapon.type;
					std::cout << " - " << this->map.player.inventory.weapon.damage.range << " >";
					DETOX_NUMBER creatures = 0;
					for (DETOX_NUMBER c = 0; c < this->options.creatures; c++) {
						if (this->map.creatures[c].exist == DETOX_EXIST) creatures++;
					}
					CREATURE low = this->map._sortee(DETOX_SORT_LOW);
					CREATURE high = this->map._sortee(DETOX_SORT_HIGH);
					std::cout << creatures << " / " << this->map.options.creatures;
					std::cout << ":  " << low.identifier << low.gender.sign << "@ " << low.tile.location.current.x << ", " << low.tile.location.current.y << " -> " << low.bumps;
					std::cout << ", " << high.identifier << high.gender.sign << "@ " << high.tile.location.current.x << ", " << high.tile.location.current.y << " -> " << high.bumps;
					std::cout << std::endl;

					// Debug
					this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_TOP].begin.x, this->display.interface_part[DETOX_INTERFACE_TOP].begin.y + DETOX_INTERFACE_MESSAGE_DEBUG, DETOX_INTERFACE_TOP_WIDTH);
					std::cout << "| ";
					std::cout << this->map.options.camera[DETOX_CAMERA_PLAYER].position.x;
					std::cout << ", " << this->map.options.camera[DETOX_CAMERA_PLAYER].position.y << "  ";

					std::cout << this->map.player.status;
					std::cout << this->map.player.tile.status;
					std::cout << " " << this->map.player.buff.status;
					std::cout << " " << this->map.player.buff.type;
					std::cout << " " << this->map.player.buff.duration;
					std::cout << ": ";
					for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
						std::cout << this->map.buffs[b].tile.status << ".";
						std::cout << this->map.buffs[b].tile.location.current.x << ", " << this->map.buffs[b].tile.location.current.y;
						std::cout << this->map.buffs[b].status;
						std::cout << this->map.buffs[b].exist;
						std::cout << " - ";
					}
				}
				break;

			case DETOX_INTERFACE_STATISTICS:
				if (this->display.interface_part[DETOX_INTERFACE_STATISTICS].exist == DETOX_EXIST) {
					//this->map._sortee(DETOX_SORT_RE);
					for (DETOX_NUMBER c = 0; c < DETOX_INTERFACE_STATISTICS_DISPLAY_CREATURES; c++) {
						this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_STATISTICS].begin.x, this->display.interface_part[DETOX_INTERFACE_STATISTICS].begin.y + c + 2);
						//system("pause");
						if (this->map.creatures[c].exist == DETOX_EXIST) {
							std::cout << c << this->map.creatures[c].gender.sign << this->map.creatures[c].personality.religion.identifier;
							std::cout << " " << this->map.creatures[c].health.current << "/" << this->map.creatures[c].health.total;
							std::cout << " @ " << this->map.creatures[c].tile.location.current.x << "," << this->map.creatures[c].tile.location.current.y;
							std::cout << " (" << this->map.creatures[c].bumps << ")";
						}
						if (this->map.creatures[c].exist == DETOX_UNDEFINED) {
							this->map.creatures[c] = this->map.creatures[c + 1];
							this->map.creatures[c + 1].exist = DETOX_UNDEFINED;
						}
					}
				}
				break;

			case DETOX_INTERFACE_INVENTORY:
				if (this->display.interface_part[DETOX_INTERFACE_INVENTORY].exist == DETOX_EXIST) {
					// Resource
					this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_INVENTORY].begin.x, this->display.interface_part[DETOX_INTERFACE_INVENTORY].begin.y, DETOX_INTERFACE_INVENTORY_WIDTH);
					for (DETOX_NUMBER item = 0; item < this->map.player.inventory.resources; item++) {
						this->exe.window.buffer._type(this->map.player.inventory.resource[item].item.tile.character, DETOX_STATUS_DEFAULT);
					}
					std::cout << " ";
					for (DETOX_NUMBER item = 0; item < this->map.player.inventory.gears; item++) {
						this->exe.window.buffer._type(this->map.player.inventory.gear[item].item.tile.character, DETOX_STATUS_DEFAULT);
					}
					this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_INVENTORY].begin.x, this->display.interface_part[DETOX_INTERFACE_INVENTORY].begin.y + 1, DETOX_INTERFACE_INVENTORY_WIDTH);
					for (DETOX_NUMBER amount = 0; amount < this->map.player.inventory.resources; amount++) {
						if (this->map.player.inventory.resource[amount].item.exist == DETOX_EXIST) {			
							this->exe.window.buffer._type(this->map.player.inventory.resource[amount].item.visible, this->map.player.inventory.resource[amount].item.status);
						}
					}
					std::cout << " ";
					for (DETOX_NUMBER amount = 0; amount < this->map.player.inventory.gears; amount++) {
						if (this->map.player.inventory.gear[amount].item.exist == DETOX_EXIST) {
							this->exe.window.buffer._type(this->map.player.inventory.gear[amount].item.visible, this->map.player.inventory.gear[amount].item.status);
						}
					}

				}
				break;

			case DETOX_INTERFACE_CAMERA_PLAYER:
				if (this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].exist == DETOX_EXIST) {
					TILE tile;
					DETOX_NUMBER rend;
					DETOX_NUMBER h;
					rend = 0;
					h = 0;
					for (DETOX_NUMBER y = this->map.options.camera[DETOX_CAMERA_PLAYER].position.y; y < this->map.options.camera[DETOX_CAMERA_PLAYER].position.y + (this->map.options.camera[DETOX_CAMERA_PLAYER].scale.size.radius * 2) + 1; y++) {
						this->exe.window.buffer._cursor(this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].begin.x, this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].begin.y + h);
						for (DETOX_NUMBER x = this->map.options.camera[DETOX_CAMERA_PLAYER].position.x; x < this->map.options.camera[DETOX_CAMERA_PLAYER].position.x + (this->map.options.camera[DETOX_CAMERA_PLAYER].scale.size.radius * 2) + 1; x++) {
							tile = this->options.tile;
							for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
								if (this->map.resources[r].item.exist == DETOX_EXIST) {
									if (x == this->map.resources[r].item.tile.location.current.x && y == this->map.resources[r].item.tile.location.current.y) {
										tile = this->map.resources[r].item.tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER g = 0; g < DETOX_GEARS_MAX; g++) {
								if (this->map.gears[g].item.exist == DETOX_EXIST) {
									if (x == this->map.gears[g].item.tile.location.current.x && y == this->map.gears[g].item.tile.location.current.y) {
										tile = this->map.gears[g].item.tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
								if (this->map.buffs[b].exist == DETOX_EXIST) {
									if (x == this->map.buffs[b].tile.location.current.x && y == this->map.buffs[b].tile.location.current.y) {
										tile = this->map.buffs[b].tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER p = 0; p < DETOX_PROJECTILES_MAX; p++) {
								if (this->map.projectiles[p].exist == DETOX_EXIST) {
									if (x == this->map.projectiles[p].item.tile.location.current.x && y == this->map.projectiles[p].item.tile.location.current.y) {
										tile = this->map.projectiles[p].item.tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER c = 0; c < DETOX_CREATURES_MAX; c++) {
								/*
								* Note to self: Missing "existance", causing a blank space/draw at 0,0.
								*
								*
								*
									if (w == this->map.creatures[c].tile.location.current.x && h == this->map.creatures[c].tile.location.current.y) {
										//rend = this->map.creatures[c].tile;
										break;
									}

								*/
								if (this->map.creatures[c].exist == DETOX_EXIST) {
									if (x == this->map.creatures[c].tile.location.current.x && y == this->map.creatures[c].tile.location.current.y) {
										tile = this->map.creatures[c].tile;
										break;
									}
								}
							}
							if (x == this->map.player.tile.location.current.x && y == this->map.player.tile.location.current.y) {
								tile = this->map.player.tile;
							}

							this->exe.window.buffer._type(tile.character, tile.status);
						}
						rend++;
						h++;
					}
				}
				break;
			case DETOX_INTERFACE_CAMERA_IDLE:
				if (this->display.interface_part[DETOX_INTERFACE_CAMERA_IDLE].exist == DETOX_EXIST) {

					TILE tile;
					DETOX_NUMBER rend;
					DETOX_NUMBER h;
					rend = 0;
					h = 0;

					// Can not keep up if player moves too often.
					for (DETOX_NUMBER y = this->map.options.camera[DETOX_CAMERA_IDLE].position.y; y < this->map.options.camera[DETOX_CAMERA_IDLE].position.y + (this->map.options.camera[DETOX_CAMERA_IDLE].scale.size.radius * 2) + 1; y++) {
						this->exe.window.buffer._cursor(this->display.interface_part[DETOX_INTERFACE_CAMERA_IDLE].begin.x, this->display.interface_part[DETOX_INTERFACE_CAMERA_IDLE].begin.y + h);
						for (DETOX_NUMBER x = this->map.options.camera[DETOX_CAMERA_IDLE].position.x; x < this->map.options.camera[DETOX_CAMERA_IDLE].position.x + (this->map.options.camera[DETOX_CAMERA_IDLE].scale.size.radius * 2) + 1; x++) {
							tile = this->options.tile;
							for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
								if (this->map.resources[r].item.exist == DETOX_EXIST) {
									if (x == this->map.resources[r].item.tile.location.current.x && y == this->map.resources[r].item.tile.location.current.y) {
										tile = this->map.resources[r].item.tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER g = 0; g < DETOX_GEARS_MAX; g++) {
								if (this->map.gears[g].item.exist == DETOX_EXIST) {
									if (x == this->map.gears[g].item.tile.location.current.x && y == this->map.gears[g].item.tile.location.current.y) {
										tile = this->map.gears[g].item.tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
								if (this->map.buffs[b].exist == DETOX_EXIST) {
									if (x == this->map.buffs[b].tile.location.current.x && y == this->map.buffs[b].tile.location.current.y) {
										tile = this->map.buffs[b].tile;
										break;
									}
								}
							}

							for (DETOX_NUMBER p = 0; p < DETOX_PROJECTILES_MAX; p++) {
								if (this->map.projectiles[p].exist == DETOX_EXIST) {
									if (x == this->map.projectiles[p].item.tile.location.current.x && y == this->map.projectiles[p].item.tile.location.current.y) {
										tile = this->map.projectiles[p].item.tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER c = 0; c < DETOX_CREATURES_MAX; c++) {
								if (this->map.creatures[c].exist == DETOX_EXIST) {
									if (x == this->map.creatures[c].tile.location.current.x && y == this->map.creatures[c].tile.location.current.y) {
										tile = this->map.creatures[c].tile;
										break;
									}
								}
							}
							if (x == this->map.player.tile.location.current.x && y == this->map.player.tile.location.current.y) {
								tile = this->map.player.tile;
							}
							this->exe.window.buffer._type(tile.character, tile.status);
						}
						rend++;
						h++;
					}
				}
				break;

			case DETOX_INTERFACE_MAP:
				if (this->display.interface_part[DETOX_INTERFACE_MAP].exist == DETOX_EXIST) {
					TILE rend;
					DETOX_NUMBER tile;
					DETOX_NUMBER color;
					tile = 0;
					color = DETOX_STATUS_DEFAULT;
					for (int h = 0; h < this->map.options.size.height; h++) {
						this->exe.window.buffer._cursor(this->display.interface_part[DETOX_INTERFACE_MAP].begin.x, this->display.interface_part[DETOX_INTERFACE_MAP].begin.y + h);
						for (int w = 0; w < this->map.options.size.width; w++) {
							rend = *this->map.area[tile];

							//std::cout << rend.character << " " << rend.location.current.x << "/" << rend.location.current.y;
							//system("pause");
							for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
								if (this->map.resources[r].item.exist == DETOX_EXIST) {
									if (w == this->map.resources[r].item.tile.location.current.x && h == this->map.resources[r].item.tile.location.current.y) {
										rend = this->map.resources[r].item.tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER g = 0; g < DETOX_GEARS_MAX; g++) {
								if (this->map.gears[g].item.exist == DETOX_EXIST) {
									if (w == this->map.gears[g].item.tile.location.current.x && h == this->map.gears[g].item.tile.location.current.y) {
										rend = this->map.gears[g].item.tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
								if (this->map.buffs[b].exist == DETOX_EXIST) {
									if (w == this->map.buffs[b].tile.location.current.x && h == this->map.buffs[b].tile.location.current.y) {
										rend = this->map.buffs[b].tile;
										break;
									}
								}
							}

							for (DETOX_NUMBER p = 0; p < DETOX_PROJECTILES_MAX; p++) {
								if (this->map.projectiles[p].exist == DETOX_EXIST) {
									if (w == this->map.projectiles[p].item.tile.location.current.x && h == this->map.projectiles[p].item.tile.location.current.y) {
										rend = this->map.projectiles[p].item.tile;
										break;
									}
								}
							}

							for (DETOX_NUMBER c = 0; c < DETOX_CREATURES_MAX; c++) {
								/*
								* Note to self: Missing "existance", causing a blank space/draw at 0,0.
								*
								*
								*
									if (w == this->map.creatures[c].tile.location.current.x && h == this->map.creatures[c].tile.location.current.y) {
										//rend = this->map.creatures[c].tile;
										break;
									}

								*/
								if (this->map.creatures[c].exist == DETOX_EXIST) {
									if (w == this->map.creatures[c].tile.location.current.x && h == this->map.creatures[c].tile.location.current.y) {
										rend = this->map.creatures[c].tile;
										break;
									}
								}
							}
							if (w == this->map.player.tile.location.current.x && h == this->map.player.tile.location.current.y) {
								rend = this->map.player.tile;
							}
							this->exe.window.buffer._type(rend.character, rend.status);
							tile++;
						}
					}
				}
				break;

			case DETOX_INTERFACE_LOG:
				if (this->display.interface_part[DETOX_INTERFACE_LOG].exist == DETOX_EXIST) {
					this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_LOG].begin.x, this->display.interface_part[DETOX_INTERFACE_LOG].begin.y, DETOX_INTERFACE_LOG_WIDTH);
					
					std::cout << "Logging" << " (" << DETOX_INTERFACE_LOG_HEIGHT << " lines)";
					MESSAGE message = {0};
					for (DETOX_NUMBER m = 0; m < DETOX_INTERFACE_LOG_HEIGHT; m++) {
						this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_LOG].begin.x, this->display.interface_part[DETOX_INTERFACE_LOG].begin.y + m + 2, DETOX_INTERFACE_LOG_WIDTH);
						if (this->map.log.messages[m].exist == DETOX_EXIST) {
							message = this->map.log.messages[m];
							switch (this->map.log.messages[m].type) {
							case DETOX_TYPE_DEBUG:
								std::cout << "->" << message.text;
								break;
							case DETOX_TYPE_COMMON:
								std::cout << message.text;
								break;
							case DETOX_TYPE_CREATURE:
								std::cout << message.identifier[0] << ": " << message.text;
								break;
							case DETOX_TYPE_PLAYER:
								std::cout << DETOX_CHARACTER_PLAYER << ": " << message.text;
								break;
							case DETOX_TYPE_CREATURE_TO_CREATURE:
								std::cout << message.identifier[0] << " > " << message.identifier[1] << ": " << message.text;
								break;
							case DETOX_TYPE_PLAYER_TO_CREATURE:
								std::cout << "@ > " << message.identifier[1] << ": " << message.text;
								break;
							case DETOX_TYPE_ATTACK_CREATURE:
								std::cout << message.identifier[0] << " > " << message.identifier[1];
								std::cout << "(" << this->map.creatures[message.identifier[0]].damage.dice.value << "): ";
								std::cout << message.text;
								break;
							case DETOX_TYPE_ATTACK_PLAYER:
								std::cout << "@ > " << message.identifier[1];
								std::cout << "(" << this->map.player.damage.dice.value << "): ";
								std::cout << message.text;
								break;
							case DETOX_TYPE_ATTACK_PLAYER_PROJECTILE:
								std::cout << "@ > " << message.identifier[1];
								std::cout << "(" << message.identifier[0] << "): ";
								std::cout << message.text;
								break;
							}
						}
					}
					
					/*
					for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
						this->_clearText(this->display.interface_part[DETOX_INTERFACE_LOG].x, this->display.interface_part[DETOX_INTERFACE_LOG].y + r);
						std::cout << this->map.resources[r].status;
						std::cout << " " << this->map.resources[r].type;
						std::cout << " - " << this->map.resources[r].tile.status;
						std::cout << " " << this->map.resources[r].tile.type;
						std::cout << " : " << this->map.resources[r].tile.location.current.x << ", " << this->map.resources[r].tile.location.current.y;
					}
					*/
				}
				break;
			}
		}
		void _gather() {
			/*
			if (this->exe.connector.status != DETOX_UNDEFINED) {
				if (this->exe.connector.attempt < DETOX_CONNECTOR_MAX_ATTEMPTS) {
					switch (this->exe.connector.type) {
					case DETOX_TYPE_MESSAGE:
						this->map.log._new(this->exe.connector.message, DETOX_UNDEFINED, DETOX_TYPE_DEBUG, DETOX_UNDEFINED);
						break;
					case DETOX_TYPE_ERROR:
						this->map.log._new(this->exe.connector.error, DETOX_UNDEFINED, DETOX_TYPE_DEBUG, DETOX_UNDEFINED);
						break;
					case DETOX_TYPE_DEBUG:
						std::cout << this->exe.connector.connection.address.a;
						std::cout << " / " << this->exe.connector.connection.address.addr.S_un.S_un_b.s_b1 << ".";
						std::cout << this->exe.connector.connection.address.b;
						std::cout << " / " << this->exe.connector.connection.address.addr.S_un.S_un_b.s_b2;
						break;
					}
				}
				//else {
					//std::cout << "Unable to connect (5 attempts)";
				//}
			}
			*/
		//	if (this->exe.connector.connection.status != DETOX_CONNECTOR_CONNECTED && this->exe.connector.attempt < DETOX_CONNECTOR_MAX_ATTEMPTS) this->exe.connector._connect("192.168.1.101");
				// E: 10049, invalid address
				// E: 10060, timeout
			this->map.player.message = {};
			this->map.message = {};
			//this->exe.window._hooker();
			//std::cout << "H: " << this->exe.window.keyer.handle << ", " << this->exe.window.keyer.status;
			//std::cout << "\n M: " << this->exe.window.keyer.message;

			if(this->map.log.messages[16].exist == DETOX_EXIST) this->map.log.messages[16] = {};
			switch (this->map.options.mode) {
			case DETOX_MODE_MANUAL:
				this->_controls();
				break;
			case DETOX_MODE_AUTO:
				if (this->map.player.tile.status == DETOX_TYPE_BUFF_VALJURIAN_WINGS) {
					this->options.rate.current = this->options.rate.base - this->map.player.skill[DETOX_SKILL_VELOCITY].experience - DETOX_TYPE_BUFF_VALJURIAN_WINGS_EFFECT;
				}
				else {
					this->options.rate.current = this->options.rate.base - this->map.player.skill[DETOX_SKILL_VELOCITY].experience;
				}
				Sleep(this->options.rate.current);
				break;
			case DETOX_MODE_NOMINAL:
				system("pause");
				break;
			}

			//this->_clearText(0, this->display.interface_part[DETOX_INTERFACE_GAME].height); // Causes odd double buffering, to-do
			this->version.counter++;
		}

		void _controls() {
			// To-do windows hook
			this->map.player.controls._input();
		}

	};
}

