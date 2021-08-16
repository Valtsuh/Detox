// #define DETOX // To-do
#define DETOX_VAR
#define DETOX_OVERING_SPACE								"       "
#define DETOX_DEFAULT_TITLE								L"Detoxing"
#define DETOX_NONE			
#define DETOX_UNDEFINED									-1
#define DETOX_EXIT										0
#define DETOX_EXIST										1
#define DETOX_WINDOW_CHARACTERS							8
#define DETOX_WINDOW_PIXELS								16
#define DETOX_WINDOW_CONSOLE							20
#define DETOX_WINDOW_DESKTOP							21
#define DETOX_WINDOW_HEIGHT_MINIMUM						32
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
#define DETOX_UNABLE_TO_GET_HANDLE						-16

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
#define DETOX_MENU										DETOX_EXIT
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
#define DETOX_MESSAGE_PLAYER_ATTACKING					"You snatt towards a creature"
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
//#define DETOX_MESSAGE_CREATURE_SCAVE					"Creature scaved " // Scaved, because makes sense (&)
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
#define DETOX_TYPE_ITEM_GEAR_SHURIKEN_RANGE				5
#define DETOX_TYPE_ITEM_GEAR_SHURIKEN_DAMAGE_MIN		1
#define DETOX_TYPE_ITEM_GEAR_SHURIKEN_DAMAGE_MAX		2
#define DETOX_TYPE_ITEM_GEAR_
#define DETOX_TYPE_GROUND								4
#define DETOX_TYPE_BUFF									5
#define DETOX_TYPE_BUFF_VALJURIAN_WINGS					51 // Subjective to change
#define DETOX_TYPE_BUFF_VALJURIAN_WINGS_STATUS			1
#define DETOX_TYPE_BUFF_VALJURIAN_WINGS_EFFECT			0.1f
#define DETOX_TYPE_BUFF_VALJURIAN_WINGS_CHARACTER		'!'
#define DETOX_TYPE_BUFF_WAVY_LENGTHS					52
#define DETOX_TYPE_BUFF_WAVY_LENGTHS_EFFECT				0.000075f
#define DETOX_TYPE_BUFF_WAVY_LENGTHS_STATUS				2
#define DETOX_TYPE_BUFF_WAVY_LENGTHS_CHARACTER			'!'
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
#define DETOX_TYPE_CONNECT								30
#define DETOX_TYPE_CONNECT_CONNECTOR					301

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
#define DETOX_INTERFACE_TOP_WIDTH						96
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
#define DETOX_INTERFACE_LOG_TIME						16
#define DETOX_INTERFACE_LOG_WIDTH						82 + DETOX_INTERFACE_LOG_TIME
#define DETOX_INTERFACE_LOG_HEIGHT						16
#define DETOX_INTERFACE_LOG_UP							-1
#define DETOX_INTERFACE_LOG_DOWN						1

#define DETOX_INTERFACE_PLAYER							6
#define DETOX_INTERFACE_PLAYER_WIDTH					64
#define DETOX_INTERFACE_PLAYER_HEIGHT					DETOX_SKILLS_TOTAL + 4

#define DETOX_INTERFACE_CAMERA							7
#define DETOX_INTERFACE_CAMERA_PLAYER					8
#define DETOX_INTERFACE_CAMERA_IDLE						9
#define DETOX_INTERFACE_CAMERA_RANDOM					10// Vision -radius

#define DETOX_INTERFACE_PARTS							11
#define DETOX_INTERFACE_ADDITIONAL_WIDTH				8
#define DETOX_INTERFACE_ADDITIONAL_HEIGHT				8

#define DETOX_INVENTORY_SLOTS							6

#define DETOX_SORT_LOW									-1
#define DETOX_SORT_HIGH									1
#define DETOX_SORT_RE									2
#define DETOX_SORT_NEXT									3
#define DETOX_SORT_IDENTIFIER							4

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
#define DETOX_DICE_CREATURE_IDENTIFIER_MIN				0
#define DETOX_DICE_CREATURE_IDENTIFIER_MAX				100
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
#define DETOX_CHARACTER_GROUND							'.'
#define DETOX_CHARACTER_PLAYER							'@'
#define DETOX_CHARACTER_CREATURE						'u'
#define DETOX_CHARACTER_MAP_CORNER						'+'
#define DETOX_CHARACTER_MAP_HORIZONTAL					'|'
#define DETOX_CHARACTER_MAP_VERTICAL					'-'
#define DETOX_CHARACTER_BUFF							'!'

#define DETOX_EXPERIENCE_BASE_PLAYER					25
#define DETOX_EXPERIENCE_BASE_CREATURE					15

#define DETOX_DAMAGE_BASE_PLAYER						2
#define DETOX_DAMAGE_BASE_CREATURE						1

#define DETOX_HEALTH_RECOVERY_SPIN_PLAYER				25
#define DETOX_HEALTH_RECOVERY_SPIN_CREATURE				30
#define DETOX_HEALTH_RECOVERY_BASE_PLAYER				1
#define DETOX_HEALTH_RECOVERY_PLAYER_ENABLED			DETOX_EXIST
#define DETOX_HEALTH_RECOVERY_BASE_CREATURE				1
#define DETOX_HEALTH_RECOVERY_CREATURE_ENABLED			DETOX_EXIST
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

#define DETOX_CONNECTOR_CONNECT							DETOX_EXIST
#define DETOX_CONNECTOR_ADDRESS_FAMILY					AF_INET
#define DETOX_CONNECTOR_TYPE							SOCK_STREAM
#define DETOX_CONNECTOR_PROTOCOL						IPPROTO_TCP
#define DETOX_CONNECTOR_SUCCESS							0
#define DETOX_CONNECTOR_CONNECTED						32
#define DETOX_CONNECTOR_EXIST							DETOX_EXIST
#define DETOX_CONNECTOR_VERIFY							DETOX_UNDEFINED
#define DETOX_CONNECTOR_SOCKET_INVALID					INVALID_SOCKET
#define DETOX_CONNECTOR_SOCKET_VERIFY					DETOX_UNDEFINED
#define DETOX_CONNECTOR_SOCKET_ERROR					SOCKET_ERROR
#define DETOX_CONNECTOR_SOCKET_EXIST					1
#define DETOX_CONNECTOR_SOCKET_BOUND					7
#define DETOX_CONNECTOR_WAIT							3
#define DETOX_CONNECTOR_ATTEMPT							4
#define DETOX_CONNECTOR_MAX_ATTEMPTS					2
#define DETOX_CONNECTOR_ADDRESS							"192.168.0.101" //"rx.unmineable.com" //"rvn.2miners.com"
#define DETOX_CONNECTOR_PORT							"80"
#define DETOX_CONNECTOR_PORT_DEFAULT					8080
#define DETOX_CONNECTOR_RESULTS							8
#define DETOX_CONNECTOR_INVALID_ADDRESS					10049
#define DETOX_CONNECTOR_TIMEOUT							10060
#define DETOX_CONNECTOR_RETRY							10035 // Needs non-blocking
#define DETOX_CONNECTOR_UNSUPPORTED						10047
#define DETOX_CONNECTOR_BAD_ADDRESS						10014
#define DETOX_CONNECTOR_NONSOCKET						10038
#define DETOX_CONNECTOR_ADDRESS_ALREADY					10048
#define DETOX_CONNECTOR_NO_HOST							11001
#define DETOX_CONNECTOR_NOT_CONNECTED					10057
#define DETOX_CONNECTOR_UNREACHABLE						10051
#define DETOX_CONNECTOR_REJECT							10061
#define DETOX_CONNECTOR_ALREADY_CONNECTING				10037
#define DETOX_CONNECTOR_ALREADY_CONNECTED				10056
#define DETOX_CONNECTOR_NO_ACCESS						10013
#define DETOX_CONNECTOR_INVALID_DATA					10022
#define DETOX_CONNECTOR_UNABLE							-8
#define DETOX_CONNECTOR_LISTENING						16
#define DETOX_CONNECTOR_BOUND							24
#define DETOX_CONNECTOR_LISTEN_MAX						2
#define DETOX_CONNECTOR_REMOTE_PORT						135 // LAN (1-134 -> 10061)
#define DETOX_CONNECTOR_CONNECTION_EXIST				8
#define DETOX_CONNECTOR_HALT							-16
#define DETOX_CONNECTOR_CONNECTION_LOST					-32


#define DETOX_STATUS_DEFAULT							7
#define DETOX_STATUS_RESOURCE_DEFAULT					7
#define DETOX_STATUS_INVENTORY_UNVISIBLE				8
#define DETOX_STATUS_ITEM_THROWN						3

#define DETOX_TEXT_MAX_LENGTH							64
#define DETOX_TITLE_LENGTH								64
#define DETOX_NAME_LENGTH								8
#define DETOX_MAX_NAME_LENGTH							24
#define DETOX_ADDRESS_LENGTH							16
#define DETOX_READ_LENGTH								8
#define DETOX_LOG_MESSAGE_LENGTH						DETOX_MESSAGE_LENGTH
#define DETOX_LETTERS									"ABCDEFGHIJKLMNOPQRSTUVWXYZ"

#define DETOX_SOUND_UP									1
#define DETOX_SOUND_DOWN								-1
#define DETOX_SOUND_LENGTH								0

#define DETOX_MODE_DEFAULT								0
#define DETOX_MODE_AUTO									1
#define DETOX_MODE_MANUAL								2
#define DETOX_MODE_RANDOM								3
#define DETOX_MODE_UNDEFINED							4
#define DETOX_MODE_NOMINAL								5 // Note to self: The between of manual - auto, still fresh
#define DETOX_MODE_TEST									DETOX_MODE_AUTO
#define DETOX_MODE_TEST_AMMO							16
#define DETOX_MODE_TEST_RATE							50.0000f
#define DETOX_MODE_TEST_CAMERA							DETOX_MENU_OPTIONS_VIEW_WHOLE_VALUE
#define DETOX_MODE_TEST_HEALTH_RECOVERY_PLAYER			DETOX_UNDEFINED
#define DETOX_MODE_TEST_HEALTH_RECOVERY_CREATURE		DETOX_UNDEFINED
#define DETOX_MODE_CAMERA_DEFAULT						DETOX_MENU_OPTIONS_VIEW_CAMERA_VALUE
#define DETOX_MODE_SOUND								

#define DETOX_MODE_PRIVATE								DETOX_EXIT
#define DETOX_MODE_PRIVATE_RELIGION						DETOX_TYPE_RELIGION_SELF
#define DETOX_MODE_PRIVATE_SEX							DETOX_TYPE_SEX_SELF

#define DETOX_MODE_DEWER								DETOX_EXIT

#define DETOX_MODE_DEVEL								DETOX_EXIST

#define SOUND_FREQUENCY_MIN									37
#define SOUND_FREQUENCY_MAX									32767

#define DETOX_SOUND_CASHY									2005 // Cashiery
#define DETOX_SOUND_PHONEY									405	// Button pressy
#define DETOX_SOUND_GROUNDY									19000 // And up

#define DETOX_FREQUENCY_CONNECTOR							125
#define DETOX_FREQUENCY_RECEIVER							333
#define DETOX_FREQUENCY_BOOTH								250

#define DETOX_SOUND_LENGTH_DEFAULT							75	// One

//#define DETOX_SOUND_APPEAR_MIN								1200
//#define DETOX_SOUND_APPEAR_MAX								

#define DETOX_RUN

#ifdef DETOX_RUN // To-do, #define *_*
#define _X86_
#pragma comment(lib, "Ws2_32.lib")
// Development increments
#include <Detox.database.h>
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
#include <ws2tcpip.h>
#include <psapi.h>
//#include <ws2bth.h>
#include <utilapiset.h> // sound
#define DETOX_WINDOW_MODE DETOX_WINDOW_CHARACTERS
#define DETOX_MAIN int main
#else
#include <windows.h>
#define DETOX_WINDOW_MODE DETOX_WINDOW_PIXELS
#define DETOX_MAIN int __stdcall WinMain
#endif

typedef int DETOX_NUMBER; // dbr / DBR, essentially would represent a number and behave similarly to int
typedef char DETOX_TILE; // To-do, expand (...?)
typedef float DETOX_DECIMAL;

typedef struct DETOX_DATABASE_TYPE { float identifier; };

namespace detox {

	struct NUMBERS {
		struct SET {
			SET(int a = DETOX_UNDEFINED, int b = DETOX_UNDEFINED, char c = '\0', int d = DETOX_UNDEFINED) { this->character = c; this->value = b; this->digit = a; this->init = d; };
			~SET() {};
			int init = DETOX_UNDEFINED, digit, value;
			char character;
		};
		NUMBERS(int result = DETOX_UNDEFINED, SET zero = {}, SET one = {}, SET two = {}, SET three = {}, SET four = {}, SET five = {}, SET six = {}, SET seven = {}, SET eight = {}, SET nine = {}) {
			this->result = result;
			this->zero = zero;
			this->one = one;
			this->two = two;
			this->three = three;
			this->four = four;
			this->five = five;
			this->six = six;
			this->seven = seven;
			this->eight = eight;
			this->nine = nine;
			//*this = DETOX_DATABASE_NUMERICS;
			//this->zero = { 0, 48, '0' };
			//this->zero = { 0, 48, '0' };
			//zero(0, 48, '0', 1);

		};
		~NUMBERS() {};
		DETOX_NUMBER result;
		SET zero, one, two, three, four, five, six, seven, eight, nine;


		DETOX_NUMBER _confirm(char character) {
			if (character == this->zero.character) return DETOX_EXIST;
			if (character == this->one.character) return DETOX_EXIST;
			if (character == this->two.character) return DETOX_EXIST;
			if (character == this->three.character) return DETOX_EXIST;
			if (character == this->four.character) return DETOX_EXIST;
			if (character == this->five.character) return DETOX_EXIST;
			if (character == this->six.character) return DETOX_EXIST;
			if (character == this->seven.character) return DETOX_EXIST;
			if (character == this->eight.character) return DETOX_EXIST;
			if (character == this->nine.character) return DETOX_EXIST;
			return DETOX_EXIT;
		}

		char _char(DETOX_NUMBER value) {
			SET val = this->_get(value);
			return val.character;
		}

		int _value(DETOX_NUMBER value) {
			SET val = this->_get(value);
			return val.value;
		}

		int _digit(DETOX_NUMBER value) {
			SET val = this->_get(value);
			return val.digit;
		}

		SET _get(DETOX_NUMBER value) {
			SET set;
			switch (value) {
			case 0:
				set = this->zero;
				break;
			case 1:
				set = this->one;
				break;
			case 2:
				set = this->two;
				break;
			case 3:
				set = this->three;
				break;
			case 4:
				set = this->four;
				break;
			case 5:
				set = this->five;
				break;
			case 6:
				set = this->six;
				break;
			case 7:
				set = this->seven;
				break;
			case 8:
				set = this->eight;
				break;
			case 9:
				set = this->nine;
				break;
			}
			return set;
		}

		void _values() {
			std::cout << this->zero.digit << ": " << this->zero.character << "(" << this->zero.value << ", (char)" << (char)this->zero.value << ")\n";
			std::cout << this->one.digit << ": " << this->one.character << "(" << this->one.value << ", (char)" << (char)this->one.value << ")\n";
			std::cout << this->two.digit << ": " << this->two.character << "(" << this->two.value << ", (char)" << (char)this->two.value << ")\n";
			std::cout << this->three.digit << ": " << this->three.character << "(" << this->three.value << ", (char)" << (char)this->three.value << ")\n";
			std::cout << this->four.digit << ": " << this->four.character << "(" << this->four.value << ", (char)" << (char)this->four.value << ")\n";
			std::cout << this->five.digit << ": " << this->five.character << "(" << this->five.value << ", (char)" << (char)this->five.value << ")\n";
			std::cout << this->six.digit << ": " << this->six.character << "(" << this->six.value << ", (char)" << (char)this->six.value << ")\n";
			std::cout << this->seven.digit << ": " << this->seven.character << "(" << this->seven.value << ", (char)" << (char)this->seven.value << ")\n";
			std::cout << this->eight.digit << ": " << this->eight.character << "(" << this->eight.value << ", (char)" << (char)this->eight.value << ")\n";
			std::cout << this->nine.digit << ": " << this->nine.character << "(" << this->nine.value << ", (char)" << (char)this->nine.value << ")\n";
		}
	};

	struct DBX { // To-do, proper value handling
		template <typename DETOX_VALUE>
		DETOX_VALUE _value(DETOX_VALUE value) {
			return (char)this;
		}

	};
	struct DETOX_TIME {
		DETOX_TIME() { 
			this->milliseconds = DETOX_UNDEFINED;
			this->seconds = DETOX_UNDEFINED;
			this->minutes = DETOX_UNDEFINED;
			this->hours = DETOX_UNDEFINED;
			this->day = DETOX_UNDEFINED;
			this->month = DETOX_UNDEFINED;
			this->year = DETOX_UNDEFINED;
			this->success = DETOX_UNDEFINED;
			this->precision = DETOX_EXIST;
		};
		~DETOX_TIME() {};
		DETOX_NUMBER year, month, day, hours, minutes, seconds, milliseconds, success, precision;
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

		void _stamp() {
			this->_clock();
			std::cout << this->hours << ":" << this->minutes << ":" << this->seconds << ":" << this->milliseconds << std::endl;
		}

		void _difference(DETOX_TIME time) {
			this->_clock();
			this->hours -= time.hours;
			//if (this->hours > 0) std::cout << this->hours << ":";
			this->minutes -= time.minutes;
			//if (this->minutes > 0) std::cout << this->minutes << ":";
			this->seconds -= time.seconds;
			//if (this->seconds > 0) std::cout << this->seconds << ".";
			if (time.milliseconds > this->milliseconds) {
				this->milliseconds = time.milliseconds - this->milliseconds;
			}
			else {
				this->milliseconds -= time.milliseconds;
			}
			//if (this->milliseconds > 0) std::cout << this->milliseconds;
		}
	};
	struct DETOX_RANDOM {
		DETOX_RANDOM() {
			srand((unsigned int)time(NULL));
			this->value = DETOX_UNDEFINED;
			this->attempt = 0;
		};
		~DETOX_RANDOM() {

		}
		DETOX_NUMBER value, attempt;
		void _generate(DETOX_NUMBER min = DETOX_EXIT, DETOX_NUMBER max = 9999, DETOX_NUMBER compare = DETOX_UNDEFINED) {
			if (min == 0) {
				max += 1;
				this->value = rand() % max; // 0 to max  // Note to self (- 1)?
			}
			else {
				max += 1;
				this->value = rand() % (max - min) + min; // ? - ?
			}
			if (this->value < min || this->value > max || compare != DETOX_UNDEFINED || compare == DETOX_EXIT) {
				this->_generate(min, max, this->value);
			}
		}
	};

	struct DETOX_SOUND {
		DETOX_SOUND() {
			this->exist = DETOX_UNDEFINED;
			this->success = DETOX_UNDEFINED;
			this->temp = DETOX_UNDEFINED;
			this->rand = {};
		};
		~DETOX_SOUND() {};
		DETOX_NUMBER exist, success, temp;
		DETOX_RANDOM rand;
		void _generator(DETOX_NUMBER frequency = DETOX_UNDEFINED) {
			this->temp = 0;
			switch (frequency) {
			default:
				this->temp = frequency;
				break;
			case DETOX_UNDEFINED:
				this->rand._generate(SOUND_FREQUENCY_MIN, SOUND_FREQUENCY_MAX);
				this->temp = this->rand.value;
				break;
			}
			this->success = Beep(this->temp, 250);
			Sleep(10);
			if (this->success != DETOX_EXIT) {

				std::cout << "\nSound generated at " << this->temp << "hz";
				//std::cout << "Genning ..." << std::endl;
				//for (DETOX_NUMBER s = SOUND_FREQUENCY_MIN; s < SOUND_FREQUENCY_MAX; s++) {
				//	Beep(s, 0.00000001f);
				//	std::cout << s << "hz" << std::endl;
					//Sleep(1);
				//}

				//this->_wave(DETOX_SOUND_CASHY, DETOX_SOUND_CASHY + 1, DETOX_SOUND_LENGTH_DEFAULT);
				//this->_wave(DETOX_SOUND_GROUNDY, DETOX_SOUND_GROUNDY + 1, DETOX_SOUND_LENGTH_DEFAULT);
				//this->_wave(DETOX_SOUND_PHONEY, DETOX_SOUND_PHONEY + 1, DETOX_SOUND_LENGTH_DEFAULT);
				//this->_wave(DETOX_SOUND_CASHY, DETOX_SOUND_CASHY + 15, 100);
				this->exist = DETOX_EXIST;
			}
			else this->_generator(frequency);
		}

		void _wave(DETOX_NUMBER min, DETOX_NUMBER max, DETOX_NUMBER length = 3, DETOX_NUMBER mode = DETOX_SOUND_UP) {
			if (max == DETOX_UNDEFINED) max = min + 10;
			switch (mode) {
			default:
			case DETOX_SOUND_UP:
				do {
					Beep(min, length);
					//std::cout << min << "hz" << std::endl;
					min++;
				} while (min < max);
				break;
			case DETOX_SOUND_DOWN:
				do {
					Beep(min, length);
					//std::cout << min << "hz" << std::endl;
					min--;
				} while (min > max);
				break;
			case DETOX_SOUND_LENGTH:
				Beep(min, length);
				break;
			}
		}

		void _appear() {
			this->_wave(4000, 4400, 25, DETOX_SOUND_UP);
		}

		void _defeat() {
			this->_wave(4400, 4000, 25, DETOX_SOUND_DOWN);
		}

	};

	struct DETOX_POSITION {
		DETOX_POSITION() {
			this->x = DETOX_UNDEFINED;
			this->y = DETOX_UNDEFINED;
			this->identifier = DETOX_UNDEFINED;
			this->type = DETOX_UNDEFINED;
		}
		~DETOX_POSITION() {}
		DETOX_NUMBER x, y, identifier, type;
		void _clear() {
			this->x = DETOX_UNDEFINED;
			this->y = DETOX_UNDEFINED;
		}
	};
	struct DETOX_SIZE {
		DETOX_SIZE() {
			this->width = DETOX_UNDEFINED;
			this->height = DETOX_UNDEFINED;
			this->radius = DETOX_UNDEFINED;
			this->mode = DETOX_UNDEFINED;
			this->total = DETOX_UNDEFINED;
		}
		DETOX_NUMBER width, height, radius, mode, total;
	};
	struct DETOX_DIMENSION {
		DETOX_POSITION position;
		DETOX_SIZE size;
	};
	struct DETOX_TICKET {
		DETOX_NUMBER initiator = DETOX_UNDEFINED, supporter = DETOX_UNDEFINED, validater = DETOX_UNDEFINED, modifier = DETOX_UNDEFINED;
		void _valid(DETOX_NUMBER initiator = DETOX_UNDEFINED, DETOX_NUMBER supporter = DETOX_UNDEFINED, DETOX_NUMBER validator = DETOX_UNDEFINED, DETOX_NUMBER modifier = DETOX_UNDEFINED) {
			// Do something with the bits, "verify" (...?)
		}
	};
	template <typename DHND>
	struct DETOX_HANDLE {
		DETOX_HANDLE() {
			this->error = DETOX_EXIT;
		};
		~DETOX_HANDLE(){}
		DHND identifier, parent, owner;
		DETOX_NUMBER error;
	};
	struct DETOX_ADDRESS {
		char caddr[32], current[32];
		sockaddr saddr;
		DETOX_NUMBER length = DETOX_UNDEFINED;
		DETOX_NUMBER exist = DETOX_UNDEFINED;
		void _write(const char address[]) {
			this->length = 0;
			do {
				this->caddr[this->length] = address[this->length];
				this->length++;
			} while (address[this->length] != '\0');
			this->caddr[this->length] = '\0';
			//std::cout << address << " / " << this->caddr;
			//system("pause");
			this->exist = DETOX_EXIST;
			*this->current = *this->caddr;
		}
	};
	struct DETOX_SOCKET {
		SOCKET identifier;
		DETOX_ADDRESS address;
		DETOX_NUMBER status = DETOX_UNDEFINED, stability = DETOX_UNDEFINED, wait = 0, type = DETOX_UNDEFINED;
		unsigned long block = 0; // 1 off (non-block) - 0 on ( blocked)
	};
	struct DETOX_PORT {
		DETOX_PORT() {
			this->digits = {};
			this->reverse = {};
			this->value = {};
			this->given = DETOX_UNDEFINED;
			this->length = 0;
			this->position = 0;
			this->max = 5;
			this->current = 0;
			this->numerics = DETOX_DATABASE_NUMERICS;
			this->handle = "-1";
			this->develed = DETOX_UNDEFINED;
			this->result = DETOX_UNDEFINED;
		};
		~DETOX_PORT() {};
		char* text;
		DETOX_NUMBER *digits, *reverse, *value, given, length, position, max, current, develed, result;
		NUMBERS numerics;
		PCSTR handle;
		void _reset() {
			this->value = {};
			this->text = {};
			this->digits = {};
			this->reverse = {};
			this->length = 0;
			this->position = 0;
		}

		void _iport(DETOX_NUMBER port = DETOX_CONNECTOR_PORT_DEFAULT) {
			//if (this->numerics.zero.init == DETOX_UNDEFINED) this->numerics._init();
			this->given = port;
			//std::cout << port << ": ";
			this->_reset();
			DETOX_NUMBER* digits = new DETOX_NUMBER[5];
			DETOX_NUMBER* reverse = new DETOX_NUMBER[5];
			for (DETOX_NUMBER d = 0; d < 5; d++) {
				digits[d] = 0;
				reverse[d] = 0;
			}
			for (; port > 9999; port -= 10000) {
				digits[0]++;
				reverse[4]++;
			}
			//std::cout << ", " << port << "(" << this->digits[0] << ")";
			if (digits[0] > 0) this->length = 5;

			for (; port > 999; port -= 1000) {
				digits[1]++;
				reverse[3]++;
			}
			//std::cout << ", " << port << "(" << this->digits[1] << ")";
			if (digits[1] > 0 && this->length == 0) this->length = 4;

			for (; port > 99; port -= 100) {
				digits[2]++;
				reverse[2]++;
			}
			//std::cout << ", " << port << "(" << this->digits[2] << ")";
			if (digits[2] > 0 && this->length == 0) this->length = 3;

			for (; port > 9; port -= 10) {
				digits[3]++;
				reverse[1]++;
			}
			//std::cout << ", " << port << "(" << this->digits[3] << ")";
			if (digits[3] > 0 && this->length == 0) this->length = 2;

			for (; port > 0; port -= 1) {
				digits[4]++;
				reverse[0]++;
			}
			//std::cout << ", " << port << "(" << this->digits[4] << ")";
			if (digits[4] > 0 && this->length == 0) this->length = 1;

			//std::cout << this->length << "/" << this->max << ": ";
			DETOX_NUMBER* value = new DETOX_NUMBER[this->length];
			char* text = new char[this->length];

			for (DETOX_NUMBER v = this->length; v > 0; v--) {
				value[v] = reverse[v - 1];
				text[this->position] = this->numerics._char(value[v]);
				this->position++;
			}

			for (DETOX_NUMBER c = 0; text[c] != '\0'; c++) {
				if (this->numerics._confirm(text[c]) != DETOX_EXIST) text[c] = '\0';
			}
			this->value = value;
			this->text = text;
			this->reverse = reverse;
			this->digits = digits;
			this->handle = this->text;
			value = {};
			reverse = {};
			digits = {};
			text = {};
			delete[] value;
			delete[] text;
			delete[] reverse;
			delete[] digits;
			//std::cout << this->text << "/" << this->handle;
		}
	};
	
	template <typename DETOX_LIST_ITEM>
	struct DETOX_LIST {
		DETOX_LIST() {
			this->items = {};
			this->identifier = DETOX_UNDEFINED;
			this->status = DETOX_UNDEFINED;
			this->length = 0;
		};
		~DETOX_LIST() {

		};

		DETOX_NUMBER identifier, status, length;
		DETOX_LIST_ITEM *items;
		void _add(DETOX_LIST_ITEM item) {
			DETOX_LIST_ITEM* temp;
			this->length++;
			//std::cout << "<" << this->length;
			//temp = new DETOX_LIST_ITEM[this->length];
			//this->items = &this->items[this->length + 1];
			//this->items[this->length] = (DETOX_LIST_ITEM)item;
			for (DETOX_NUMBER c = 0; c < this->length - 1; c++) {
				//std::cout << c;
				//system("pause");
				//temp[c] = this->items[c];
			}
			//std::cout << ">";
			//system("pause");
			//temp[this->length - 1] = item;
			//system("pause");
			//temp[this->length] = item;
			// To-do item validation ( new -> this )
			//this->items = {};
			//this->items = temp; // this
			//delete[] temp;
			
		}

		void _view() {
			//std::cout << this->length << " ";
			for (DETOX_NUMBER i = 0; i < this->length; i++) {
			}
		}

	};
	
	struct DETOX_CONNECTION {
		DETOX_ADDRESS address;
		DETOX_NUMBER length = DETOX_UNDEFINED, status = DETOX_UNDEFINED, stability = DETOX_UNDEFINED, attempts = DETOX_UNDEFINED;
		DETOX_SOCKET sock;
		char* message, destination[32];
		void _direct(SOCKADDR address, DETOX_NUMBER length) {
			if (this->status == DETOX_CONNECTOR_INVALID_ADDRESS) {
				std::cout << "[INVALID]: ";
				for (DETOX_NUMBER d = 0; address.sa_data[d] != '\0'; d++) {
					std::cout << this->address.saddr.sa_data[d] << ", " << (int)this->address.saddr.sa_data[d];
				}
				system("pause");
			}
			else {
				for (DETOX_NUMBER c = 0; address.sa_data[c] != '\0'; c++) {
					this->address.saddr.sa_data[c] = address.sa_data[c];
					std::cout << address.sa_data[c] << ", " << this->address.saddr.sa_data[c] << ", (int)" << (int)this->address.saddr.sa_data[c];
				}
				//system("pause");
			}
			this->address.saddr.sa_family = AF_INET;
			this->length = length;
		}

		void _attempt(DETOX_SOCKET sock, PADDRINFOA results, DETOX_NUMBER close = DETOX_UNDEFINED) {
			this->sock = sock;
			this->_direct(*results->ai_addr, results->ai_addrlen);
			this->status = connect(this->sock.identifier, results->ai_addr, results->ai_addrlen);

			std::cout << this->status;
			system("pause");
		}
	};
	struct DETOX_CONNECTOR {
		DETOX_CONNECTOR() {;
			this->ports = {};
			this->time = {};
			this->sock = {};
			this->connection = {};
			this->length = 0;
			this->status = DETOX_UNDEFINED;
			this->stability = DETOX_UNDEFINED;
			this->type = DETOX_UNDEFINED;
			this->attempt = 0;
			this->attempts = 0;
			this->result = DETOX_UNDEFINED;
			this->halt = DETOX_UNDEFINED;
			this->tries = DETOX_UNDEFINED;
			this->current = DETOX_UNDEFINED;
			this->wsadata = {};
			this->info = {};
			this->results = {};
		};
		~DETOX_CONNECTOR() {};
		char read[DETOX_READ_LENGTH] = {}, message[DETOX_MESSAGE_LENGTH] = {}, error[DETOX_ERROR_LENGTH] = {};
		DETOX_TIME time;
		DETOX_LIST<DETOX_PORT> ports;
		DETOX_PORT port;
		DETOX_SOCKET sock;
		DETOX_SOUND frequency;
		DETOX_CONNECTION connection;
		DETOX_NUMBER length, status, stability, type, attempt, result, attempts, halt, tries, current;
		WSADATA wsadata;
		addrinfo info;
		PADDRINFOA results;
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
		void _sock(DETOX_NUMBER af = DETOX_CONNECTOR_ADDRESS_FAMILY, DETOX_NUMBER type = DETOX_CONNECTOR_TYPE, DETOX_NUMBER protocol = DETOX_CONNECTOR_PROTOCOL, DETOX_NUMBER latch = DETOX_EXIT) {
			if (this->sock.status != DETOX_CONNECTOR_SOCKET_BOUND) {					
				if(this->sock.status == DETOX_UNDEFINED) this->sock.status = WSAStartup(MAKEWORD(2, 2), &this->wsadata);
				if(this->sock.status == DETOX_EXIT){
					this->sock.identifier = socket(af, type, protocol);
					if (this->sock.identifier != DETOX_CONNECTOR_SOCKET_INVALID) {
						this->sock.status = DETOX_CONNECTOR_SOCKET_EXIST;
						this->sock.stability = DETOX_CONNECTOR_SOCKET_EXIST;
						this->_devel("127.0.0.1", 8, DETOX_EXIST, DETOX_EXIST, latch);
						switch (this->status) {
						default:
							std::cout << this->status << "(" << WSAGetLastError() << ") ";
							this->_message("Unable to bind socket, unknown.", DETOX_TYPE_MESSAGE);
							break;

						case DETOX_EXIT:
							this->_message("No noticeable errors.");
							break;
						case DETOX_CONNECTOR_RESULTS:
							this->_message("Sock got results.");
							break;
						case DETOX_CONNECTOR_BOUND:
							this->_message("Socket up.", DETOX_TYPE_MESSAGE);
							this->sock.status = DETOX_CONNECTOR_SOCKET_BOUND;
							this->status = DETOX_CONNECTOR_SOCKET_BOUND;
							break;
						case DETOX_CONNECTOR_NO_ACCESS:
							this->_message("Unable to access");
							break;
						case DETOX_CONNECTOR_ADDRESS_ALREADY:
							this->_message("Address already socketed");
							break;
						case DETOX_CONNECTOR_UNSUPPORTED:
							this->_message("No support available", DETOX_TYPE_MESSAGE);
							break;
						case DETOX_CONNECTOR_BAD_ADDRESS:
							this->_message("Address junk (invalid)", DETOX_TYPE_MESSAGE);
							break;
						}
						this->connection.address.length = DETOX_UNDEFINED;
						this->results = {};
						this->info = {};
						this->connection.address.exist = DETOX_UNDEFINED;
					}
				}
			}
			std::cout << " -> " << WSAGetLastError() << ", " << this->message << "\n";
			 
		}
		void _dew(DETOX_NUMBER view = DETOX_EXIT) {
			this->result = this->_send();
			//std::cout << this->result << ", " << WSAGetLastError();
			//system("pause");
			if (this->result != DETOX_CONNECTOR_SOCKET_ERROR) {
				this->result = this->_recv();
				if (this->result != DETOX_CONNECTOR_SOCKET_ERROR) {
					this->status = DETOX_CONNECTOR_CONNECTED;
					this->_message("Connection up.");
				}
				else {
					this->status = DETOX_CONNECTOR_UNABLE;
					this->_message("Connection unable to receive.");
				}
			}
			else {
				this->status = DETOX_CONNECTOR_CONNECTION_LOST;
				this->_message("Connection lost.");
			}
			if (view == DETOX_EXIST) std::cout << " -> " << this->message;
		}
		void _devel(const char addr[], DETOX_NUMBER attempts = 8, DETOX_NUMBER view = DETOX_EXIST, DETOX_NUMBER halt = DETOX_EXIST, DETOX_NUMBER latch = DETOX_EXIT, DETOX_NUMBER block = DETOX_EXIST) {
			if (this->port.current == DETOX_UNDEFINED) this->port.current = 0;
			if (this->port.current == DETOX_EXIT) this->port.current = 1;
			if (this->connection.address.exist == DETOX_UNDEFINED) this->connection.address._write(addr);
			this->tries = this->port.current + attempts;
			std::cout << "\n" << addr << ", A:" << attempts << ", V:" << view << ", H:" << halt << ", L:" << latch << ", B:" << block << "\n";

			this->ports._view();
			do {
				if(view == DETOX_EXIST) std::cout << "\n " << this->port.current << "/" << this->tries << ": ";
				this->port._iport(this->port.current);
				this->info = {};
				this->results = {};
				if (view == DETOX_EXIST) {
					std::cout << this->sock.identifier << " -> ";
					std::cout << this->connection.address.caddr << ":" << this->port.current << "(" << this->port.handle << ") -> ";
				}
				this->result = getaddrinfo(this->connection.address.caddr, this->port.handle, &this->info, &this->results);
				if (view == DETOX_EXIST) {
					std::cout << "(";
					std::cout << WSAGetLastError() << ", " << GetLastError();
					std::cout << ", ";
					std::cout << this->result << "[";
					std::cout << this->results->ai_addr << ", ";
					for (DETOX_NUMBER c = 0; c < 14; c++) {
						std::cout << (int)this->results->ai_addr->sa_data[c];
					}
					std::cout <<  "], " << this->results->ai_addrlen << ")";
				}
				if (this->result == DETOX_EXIT) {
					this->ports._add(this->port);
					this->status = DETOX_CONNECTOR_RESULTS;
					if (latch == DETOX_EXIST) {
						if (block == DETOX_EXIT) {
							this->sock.block = ~block;
							std::cout << "(" << this->sock.block << ")";
							ioctlsocket(this->sock.identifier, FIONBIO, &this->sock.block);
						}
						this->result = bind(this->sock.identifier, this->results->ai_addr, this->results->ai_addrlen);
						if (this->result == DETOX_EXIT) {
							this->status = DETOX_CONNECTOR_BOUND;
							std::cout << " -> " << this->result << " (" << WSAGetLastError() << ")";
							if(halt == DETOX_EXIST) break;
						}
						else {
							this->result = WSAGetLastError();
							if (view == DETOX_EXIST) std::cout << " " << this->result;
						}
						this->status = this->result;

					}
					if(halt == DETOX_EXIST) break;
				}
				Sleep(1);
				this->port.current++;
			} while (this->status != DETOX_CONNECTOR_RESULTS && this->port.current < this->tries);
			std::cout << " Develed. ";
			this->tries = DETOX_UNDEFINED;
			this->connection.address.exist = DETOX_UNDEFINED;
		}
		
		/*
		void _devel(const char addr[], DETOX_NUMBER amount = DETOX_UNDEFINED, DETOX_NUMBER halt = DETOX_UNDEFINED, DETOX_NUMBER view = DETOX_UNDEFINED) {
			if (view == DETOX_EXIST) this->time._stamp();
			if (amount == DETOX_UNDEFINED) this->tries = 8 + this->attempt; else this->tries = amount + this->attempt;
			if (halt != DETOX_UNDEFINED && this->halt == DETOX_UNDEFINED) this->halt = halt;
			if (this->current == DETOX_UNDEFINED) this->current = this->attempt;
			if (this->connection.address.length == DETOX_UNDEFINED) this->connection.address._write(addr);
			std::cout << this->connection.address.caddr << ", " << addr;
			if (*this->connection.address.caddr != *addr) *this->connection.address.caddr = *addr;
			std::cout << this->connection.address.caddr << ", " << addr;

			system("pause");
			if (view == DETOX_EXIST) std::cout << "... " << this->sock.identifier << " Attempting to devel " << this->connection.address.caddr << ":" << this->attempt << " - " << this->tries << "(" << this->connection.status << ", " << this->status << ")";
			//std::cout << " ... " << sock.identifier << " develing " << this->connection.address.caddr << " ...";
			this->attempt++;
			this->current = this->attempt;
			do {
				if (this->connection.status == DETOX_CONNECTOR_ATTEMPT) break;
				//if (this->connection.address.exist == DETOX_EXIST) std::cout << ", ";
				this->port._iport(this->current);
				this->info = {};
				this->results = {};
				this->connection.status = getaddrinfo(this->connection.address.caddr, this->port.handle, &this->info, &this->results);
				switch (this->connection.status) {
				default:
					if (view == DETOX_EXIST) std::cout << "Nothing at " << this->current;
					break;
				case DETOX_CONNECTOR_NO_HOST:
					if (view == DETOX_EXIST) std::cout << "Host not available";
					this->connection.status = DETOX_CONNECTOR_ATTEMPT;
					break;
				case DETOX_EXIT:
					if (view == DETOX_EXIST) std::cout << "@ " << this->current << " ";
					this->connection.status = DETOX_CONNECTOR_RESULTS;
					break;
				}
				//std::cout << this->current;
				if (this->halt == DETOX_EXIST) {
					this->attempt = this->current;
					this->port.current = this->current;
					break;
				}
				//Sleep(25);
				//if(this->attempt % 10 * (DETOX_CONNECTOR_PORT_DEFAULT / 100))
				std::cout << std::endl;
				this->attempt++;
			} while (this->attempt <= this->tries);
			if (view == DETOX_EXIST) this->time._difference(this->time);
			this->halt = DETOX_UNDEFINED;
			this->connection.address.length = DETOX_UNDEFINED;
			*this->connection.address.caddr = {};
		}
		*/
		void _get() {
			if (this->sock.status == DETOX_UNDEFINED) {
				this->_sock();
			}
			this->status = listen(this->sock.identifier, DETOX_CONNECTOR_LISTEN_MAX);
			switch (this->status) {
			default:
			case DETOX_UNDEFINED:
				this->status = GetLastError();
				this->_message("Unable listen", DETOX_TYPE_MESSAGE);
				break;

			case DETOX_EXIT:
				this->status = DETOX_CONNECTOR_LISTENING;
				this->_message("Socket listening.", DETOX_TYPE_MESSAGE);
				break;
			}
		}

		DETOX_NUMBER _send() {
			DETOX_TILE sendin = 'q';
			return send(this->sock.identifier, &sendin, 1, MSG_OOB);
		}

		DETOX_NUMBER _recv() {
			DETOX_TILE checkin;
			return recv(this->sock.identifier, &checkin, 1, MSG_OOB);
		}

		void _connect(const char address[], DETOX_NUMBER port = DETOX_UNDEFINED, DETOX_NUMBER range = 8, DETOX_NUMBER halt = DETOX_EXIST) {
			if (this->sock.status == DETOX_UNDEFINED) {
				this->_sock();
				this->attempt = 0; 
			}
			//std::cout << address << ":" << port << "(" << this->port.current << ", " << range << ")";
			//system("pause");
			if (this->status != DETOX_CONNECTOR_HALT) {
				if (this->status != DETOX_CONNECTOR_CONNECTED) {
					this->results = {};
					this->info = {};
					this->time = {};
					this->time._clock();
					//Sleep(1);
					//if (this->port.current % 25 == 1) Sleep(500);
					std::cout << "\n -> " << this->port.current << "(" << this->status << ", " << this->sock.block << ")";
					if (port != DETOX_UNDEFINED) {
						this->port.current = port;
					}
					else {
						if (this->port.current == DETOX_UNDEFINED) {
							this->port.current = 1;
						}
					}
					if (halt > 0) halt = DETOX_EXIST;
					this->_devel(address, range, DETOX_EXIST, halt, DETOX_EXIST);
					Sleep(100);
					this->result = connect(this->sock.identifier, this->results->ai_addr, this->results->ai_addrlen);
					
					this->time._difference(this->time);
				

					std::cout << " ";
				
					switch (this->status) {
					default:
						if (this->result == DETOX_EXIT) {
							DETOX_NUMBER length;
							length = 0;
							const DETOX_TILE* sendin;
							sendin = "qwasd123x+";
							do {
								length++;
							} while (sendin[length] != '\0');
							DETOX_TILE checkin;
							this->result = send(this->sock.identifier, &*sendin, length, MSG_OOB);
							std::cout << " ... -> " << sendin << " (" << this->result << ", " << WSAGetLastError() << ")";

							if (this->result != DETOX_CONNECTOR_SOCKET_ERROR) {
								if (length == this->result) this->stability = DETOX_CONNECTOR_CONNECTION_EXIST; else this->stability = DETOX_CONNECTOR_EXIST;
								this->status = DETOX_CONNECTOR_CONNECTED;
								std::cout << " ...";
								//this->sock.block = DETOX_EXIST;
								//ioctlsocket(this->sock.identifier, FIONBIO, &this->sock.block);
								this->result = recv(this->sock.identifier, &checkin, length, MSG_OOB);
								std::cout << ", <- " << this->result << " (" << checkin << ", " << WSAGetLastError() << ")";
							}
							this->_message("Connector connected.");
							break;
						}
						break;
					case DETOX_CONNECTOR_INVALID_DATA:
						std::cout << "[Invalid or no data sent]";
						this->status = DETOX_CONNECTOR_HALT;
						break;
					case DETOX_CONNECTOR_INVALID_ADDRESS:
						std::cout << "[Invalid address]";
						break;
					case DETOX_CONNECTOR_UNSUPPORTED:
						std::cout << "[Not supported]";						
						this->status = DETOX_CONNECTOR_HALT;
						break;
					case DETOX_CONNECTOR_CONNECTED:
						std::cout << "connected ... (?)";
						system("pause");
						break;
					case DETOX_CONNECTOR_NO_ACCESS:
						std::cout << "[No access]";
						this->status = DETOX_CONNECTOR_HALT;
						break;
					case DETOX_CONNECTOR_ALREADY_CONNECTED:
						std::cout << "[Already connecting]";
						this->status = DETOX_CONNECTOR_CONNECTED;
						break;
					case DETOX_CONNECTOR_RETRY:
						std::cout << "[Retrying]";
						break;
					case DETOX_CONNECTOR_ALREADY_CONNECTING:
						Sleep(100);
						std::cout << "[Connecting]";
						break;
					case DETOX_CONNECTOR_REJECT:
						std::cout << "[Rejected]";
						if (this->attempt < 5) {
							this->attempt++;
						}
						else {
							std::cout << "Trying non-blocking... ";
							this->sock.block = DETOX_EXIST;
							ioctlsocket(this->sock.identifier, FIONBIO, &this->sock.block);
							this->attempt = 0;
						}
						break;
					case DETOX_CONNECTOR_UNREACHABLE:
						std::cout << "[Unreachable]";
						if (this->attempt < 5) {
							this->attempt++;
						}
						else {
							std::cout << " Trying non-blocking... ";
							this->sock.block = DETOX_EXIST;
							ioctlsocket(this->sock.identifier, FIONBIO, &this->sock.block);
							this->attempt = 0;
						}
						break;
					}
					std::cout << " -> [" << this->result << " (" << this->status << ", " << GetLastError() << ")]";
					this->_dew(DETOX_EXIST);
					system("pause");
					this->_connect(address, this->port.current, range, halt);
				}

			}
			this->_dew(DETOX_EXIST);
		}

	};
	struct DETOX_BUFFER {
		DETOX_BUFFER() {
			this->in.identifier = GetStdHandle(DETOX_BUFFER_HANDLE_INPUT_DEFAULT);
			this->out.identifier = GetStdHandle(DETOX_BUFFER_HANDLE_OUTPUT_DEFAULT);
			//this->current.identifier = this->out.identifier;

			//this->access.lpSecurityDescriptor = DETOX_EXIT;
			//this->access.bInheritHandle = DETOX_EXIST;
			//this->access.nLength = sizeof(this->access);
			//this->created.identifier = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, &this->access, CONSOLE_TEXTMODE_BUFFER, NULL);
			this->_current(this->out);
			this->largest = GetLargestConsoleWindowSize(this->current.identifier);
			this->_cursor(0, 0);
			GetConsoleScreenBufferInfo(this->current.identifier, &this->info);
		};
		~DETOX_BUFFER() {

		}
		DETOX_NUMBER length, success, identifier, attempts, error = DETOX_UNDEFINED, warm, clean = DETOX_UNDEFINED;
		CONSOLE_SCREEN_BUFFER_INFO info, stored, show;
		DETOX_SIZE size;
		DETOX_DIMENSION temp;
		COORD cursor, largest; // buffer->cursor
		DETOX_HANDLE<HANDLE> current, in, out, created;
		//SECURITY_ATTRIBUTES access;
		void _current(DETOX_HANDLE<HANDLE> handle) {
			this->current = handle;
			SetConsoleActiveScreenBuffer(this->current.identifier);
		}

		void _switch(DETOX_NUMBER handle) {
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
			if (handle != DETOX_BUFFER_HANDLE_CURRENT) this->_current(this->current);
		}


		void _cursor(int x = -1, int y = -1) {
			if (x >= 0) this->cursor.X = x;
			if (y >= 0) this->cursor.Y = y;
			SetConsoleCursorPosition(this->current.identifier, this->cursor);
		}

		/*
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
			SetConsoleScreenBufferSize(this->current.identifier, this->info.dwSize);
			SetConsoleWindowInfo(this->current.identifier, DETOX_EXIST, &this->info.srWindow);
		}
		*/
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
				if (status != DETOX_UNDEFINED) SetConsoleTextAttribute(this->current.identifier, status);
				std::cout << character;
				if (status != DETOX_STATUS_DEFAULT) SetConsoleTextAttribute(this->current.identifier, DETOX_STATUS_DEFAULT);
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
		char text[DETOX_TITLE_LENGTH] = {};

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
		DETOX_KEYER() {
			this->handle = {};
			this->rand = {};
			this->rand._generate();
			this->unique = this->rand.value;
			this->status = DETOX_UNDEFINED;
			this->error = DETOX_UNDEFINED;
			this->exist = DETOX_UNDEFINED;
			this->msg = {};

		};
		~DETOX_KEYER() {

		};
		DETOX_HANDLE<HANDLE> handle;
		DETOX_RANDOM rand;
		HOOKPROC proc;
		LPARAM info;
		WPARAM sender;
		MSG msg;
		DETOX_NUMBER exist, status, error, unique;
		void _rummage() {
			this->handle.identifier = SetWindowsHook(WH_KEYBOARD, this->proc);
			
			this->error = GetLastError();
			this->exist = DETOX_EXIST;
		}

	};

	struct DETOX_WINDOW {
		DETOX_WINDOW() {
			this->desk.width = GetSystemMetrics(SM_CXMAXIMIZED);
			this->desk.height = GetSystemMetrics(SM_CYMAXIMIZED);
			this->buffer = {};
			this->desktop.identifier = GetDesktopWindow();
			this->console.identifier = GetConsoleWindow();
		};
		~DETOX_WINDOW() {

		};
		DETOX_HANDLE<HWND> desktop, console;
		DETOX_KEYER keyer;
		DETOX_SIZE desk;
		DETOX_TITLE title;
		DETOX_POSITION position;
		DETOX_BUFFER buffer;
		DETOX_NUMBER success, identifier, warm, error, clean = DETOX_UNDEFINED, self = DETOX_EXIT;
		void _open() {
			this->keyer._rummage();
		}

		void _hooker() {
			this->keyer.status = PeekMessage(&this->keyer.msg, this->console.identifier, 0, 0, PM_NOREMOVE);
			//std::cout << this->keyer.status;
		}

		void _name(const wchar_t name[]) {
			this->title._write(name);
			SetConsoleTitle(this->title.value);
		}

		void _size(DETOX_NUMBER width, DETOX_NUMBER height) { // To-do, mode switch (pixel / char)
			SetWindowPos(this->console.identifier, HWND_TOP, 0, 0, width, height, SWP_NOREDRAW);
		}

		void _set(DETOX_NUMBER width, DETOX_NUMBER height, DETOX_NUMBER mode = DETOX_UNDEFINED, DETOX_NUMBER x = 5, DETOX_NUMBER y = 5) {
			this->buffer.info = {  };
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
			SetForegroundWindow(this->console.identifier);
			SetWindowPos(this->console.identifier, HWND_TOP, x, y, this->desk.width, this->desk.height, SWP_DRAWFRAME | SWP_HIDEWINDOW);
			SetConsoleWindowInfo(this->buffer.current.identifier, DETOX_EXIST, &this->buffer.info.srWindow);

			SetConsoleScreenBufferSize(this->buffer.current.identifier, this->buffer.info.dwSize);
			SetWindowPos(this->console.identifier, HWND_TOP, x, y, 0, 0, SWP_NOSIZE | SWP_SHOWWINDOW);
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
		DETOX_NUMBER diff[3], identifier = DETOX_UNDEFINED, current = DETOX_UNDEFINED, priority, success = DETOX_UNDEFINED, result = DETOX_UNDEFINED, duplicates = 0, dexs = 0;
		DETOX_TITLE name;
		HANDLE handle, snap;
		HMODULE mod;
		DWORD need;
		DETOX_PROCESS* list;
		DETOX_PROCESS* detoxers;

		DETOX_PROCESS _puzzle() {
			this->identifier = (DETOX_NUMBER)GetCurrentProcessId();
			this->_well();
			this->diff[0] = 1; // sock port separators
			this->diff[1] = 2;
			this->diff[2] = 3;
			return *this;
		}

		void _snap(DETOX_NUMBER mode = DETOX_UNDEFINED, DETOX_NUMBER identifier = DETOX_UNDEFINED) {
			if (identifier == DETOX_UNDEFINED) identifier = this->identifier;
			if (mode == DETOX_UNDEFINED) mode = TH32CS_SNAPHEAPLIST;
			this->snap = CreateToolhelp32Snapshot(mode, identifier);
			if (this->snap != INVALID_HANDLE_VALUE) this->success = DETOX_EXIST;
		}



		// void _imp(){...} //... mmmh (?)
		void _well(DETOX_NUMBER view = DETOX_EXIT) {
			this->handle = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_READ, DETOX_EXIT, this->identifier);
			if (this->handle != DETOX_EXIT) {
				this->result = EnumProcessModules(this->handle, &this->mod, sizeof(this->mod), &this->need);
				if (this->result != DETOX_EXIT) {
					this->result = GetModuleBaseName(this->handle, this->mod, this->name.value, DETOX_TITLE_LENGTH);
					if (this->result != DETOX_EXIT) {
						for (DETOX_NUMBER l = 0; l < this->result; l++) this->name.text[l] = this->name.value[l];
						this->current = this->identifier;
						//std::cout << view;
						if (view == DETOX_EXIST) std::cout << this->identifier << " [" << this->name.text << "]: H" << this->handle << ", M" << this->mod << std::endl;
					}
				}
			}
		}

		void _duplicate() {

			//this->current.identifier = &this->identifier;

			DWORD pcs[1024], need, size = 1024;
			DETOX_NUMBER result, count = 0, detoxers = 0, dpcs[16];
			result = EnumProcesses(pcs, size * 8, &need);
			if (result != 0) {
				//std::cout << need;
				do {
					count++;
				} while (pcs[count] != DETOX_NUMERICS_NOT_AVAILABLE);
				this->list = new DETOX_PROCESS[count];
				for (DETOX_NUMBER p = 0; p < count; p++) {
					this->list[p].identifier = pcs[p];
					if (this->list[p].identifier != this->identifier) {
						this->list[p]._well();
						if (this->list[p].current != DETOX_UNDEFINED) {
							result = 0;
							for (DETOX_NUMBER l = 0; l < this->list[p].result; l++) {
								if (this->list[p].name.text[l] == this->name.text[l]) result++;
							}
							if (result == this->list[p].result) {
								dpcs[detoxers] = this->list[p].identifier;
								detoxers++;
								this->duplicates++;
							}
						}
					}

				}
				this->diff[0] += detoxers * 3;
				this->diff[1] += detoxers * 3;
				this->diff[2] += detoxers * 3;
				if (detoxers > 0) {
					this->detoxers = new DETOX_PROCESS[detoxers];
					for (DETOX_NUMBER c = 0; c < detoxers; c++) {
						this->detoxers[c].identifier = dpcs[c];
						this->detoxers[c]._well();
					}
				}
				this->dexs = detoxers;
			}
		}
		DETOX_PROCESS _hook() {
			// Note to myself... ............................. ..................
			this->handle = GetCurrentProcess();
			return *this;
		}

	};
	struct DETOX_TOUCH {
		DETOX_TOUCH() {
			this->rand._generate();
			this->unique = this->rand.value;
			this->rand = {};
			this->info = {};
			this->_status();
		};
		~DETOX_TOUCH() {};
		DETOX_NUMBER value, unique, identifier, error, status;
		DETOX_RANDOM rand;
		tagTOUCHINPUT info;
		DETOX_HANDLE<HWND> window;

		void _wald(DETOX_HANDLE<HWND> handle) {
			this->window = handle;
			this->value = GetSystemMetrics(SM_DIGITIZER);
			this->identifier = RegisterTouchWindow(this->window.identifier, TWF_FINETOUCH);
			this->error = GetLastError();
		}
		void _status() {
			if (this->value != DETOX_UNDEFINED) {
				switch (this->value) {
				default:
					this->status = DETOX_UNDEFINED;
					break;
				case NID_INTEGRATED_TOUCH:
					this->status = DETOX_EXIST;
					break;
				}
			}
		}
	};
	struct DETOX_SAVE {
		DETOX_NUMBER exist = DETOX_UNDEFINED;


	};
	struct DETOX_EXECUTABLE {
		DETOX_EXECUTABLE() {
			this->exist = DETOX_UNDEFINED; 
			this->debugging = 0;
			this->error = DETOX_UNDEFINED;
			this->warm = DETOX_EXIT;
			this->mode = DETOX_UNDEFINED;
			this->success = DETOX_UNDEFINED;
			this->exist = DETOX_UNDEFINED;
			this->window = {};
			this->touch = {};
			this->thread = {};
		};
		~DETOX_EXECUTABLE() {};
		DETOX_TIME time;
		DETOX_WINDOW window;
		DETOX_PROCESS process;
		DETOX_THREAD thread;
		DETOX_TITLE title;
		DETOX_CONNECTOR receiver, connector, booth, alter, switcher;
		DETOX_TOUCH touch;
		DETOX_RANDOM rdx;
		DETOX_NUMBER exist, debugging, error, warm, mode, success;
		DETOX_SAVE save;
		DETOX_SOUND sound;
		DETOX_RANDOM rand;
		void _get() {
			this->time._clock();
			this->thread._needle();
			this->process._puzzle();
			this->process._duplicate();
			this->window._open();
			this->touch._wald(this->window.desktop);
			//this->_trash("192.168.1.101", "qwasd");
			//system("pause");
			//this->connector._connect("192.168.1.101");
			//this->_trash("91.145.103.142", "qwasd");
			if (DETOX_MODE_DEWER == DETOX_EXIST) {
				this->receiver.port.current = 1 + (5 * this->process.dexs);
				this->receiver._sock(AF_INET, SOCK_STREAM, IPPROTO_TCP, DETOX_EXIST);
				this->receiver.frequency._generator(DETOX_DATABASE_FREQUENCY_RECEIVER);

				this->connector.port.current = 2 + (5 * this->process.dexs); // -> next
				this->connector._sock();
				this->connector.frequency._generator(DETOX_DATABASE_FREQUENCY_CONNECTOR);

				//this->connector._devel("192.168.1.101", 16, DETOX_EXIST, DETOX_EXIT, DETOX_EXIT);
				//system("pause");
				//this->connector._devel("rx.unmineable.com", 8, DETOX_EXIST, DETOX_EXIT, DETOX_EXIST, DETOX_EXIT); // Outs rx.unmineable.cor (?) --> \n
				//this->connector._devel("rvn.2miners.com", 8, DETOX_EXIST, DETOX_EXIT, DETOX_EXIST, DETOX_EXIT);
				//this->connector._devel("google.fi", 8, DETOX_EXIST, DETOX_EXIT, DETOX_EXIST, DETOX_EXIT);
				//this->connector._devel("192.168.1.101", 8, DETOX_EXIST, DETOX_EXIST, DETOX_EXIST);
				this->booth.port.current = 3 + (5 * this->process.dexs);
				this->booth._sock(AF_BTH, DETOX_CONNECTOR_TYPE, 3);
				//this->booth._devel("41:42:dd:94:d5:00", 24, 1, 0, 0, 0);
				this->booth.frequency._generator(DETOX_DATABASE_FREQUENCY_BOOTH);

				this->alter.port.current = 4 + (5 * this->process.dexs);
				this->alter._sock();
				this->alter.frequency._generator(DETOX_DATABASE_FREQUENCY_ALTER);

				this->switcher.port.current = 5 + (5 * this->process.dexs);
				this->switcher._sock();
				this->switcher.frequency._generator(DETOX_DATABASE_FREQUENCY_SWITCHER);

				system("pause");
			}
			this->sound._generator();
			this->exist = DETOX_EXIST;
		}

		void _trash(const char address[], const DETOX_TILE value[]) {
			
			DETOX_CONNECTOR trash;
			DETOX_TILE checkin, sendin = *value;
			DETOX_NUMBER result;
			trash.attempt += this->process.dexs * 3;
			trash.port.current = 135;
			WSADATA wsa;
			WSAStartup(MAKEWORD(2, 2), &wsa);
			
			trash.sock.identifier = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
			ADDRINFOA info;
			PADDRINFOA results;
			std::cout << trash.sock.identifier;
			std::cout << "\n" << trash.sock.status;
			for (DETOX_NUMBER c = 1; c < 512; c++) {
				info = {};
				results = {};
				trash.port._iport(c);
				trash.sock.status = getaddrinfo("127.0.0.1", trash.port.handle, &info, &results);
				std::cout << trash.sock.identifier << ": " << trash.port.handle << " -> " << trash.sock.status << "\n";
				if (trash.sock.status == 0) break;
			}
			trash.sock.status = bind(trash.sock.identifier, results->ai_addr, results->ai_addrlen);

			//trash._sock();
			std::cout << "\n" << trash.sock.identifier << "(" << trash.sock.status << ")" << ": " << trash.message << std::endl;
			//trash._devel(address, 8, DETOX_EXIST);
			
			result = connect(trash.sock.identifier, results->ai_addr, results->ai_addrlen);
			std::cout << result << " (" << WSAGetLastError() << ", " << GetLastError << ")";
			if (result == DETOX_EXIT) {
				std::cout << "Connected to " << address << ", for suring...\n";
				result = send(trash.sock.identifier, &sendin, 8, MSG_OOB);
				if (result != DETOX_CONNECTOR_SOCKET_ERROR) {
					std::cout << " ... address received \"" << sendin << "\" (" << result << " bytes), attempting to receive...\n";
					result = recv(trash.sock.identifier, &checkin, 8, MSG_OOB);
					if (result != DETOX_CONNECTOR_SOCKET_ERROR) {
						std::cout << " ... sock received \"" << checkin << "\" (" << result << " bytes)\n";
						send(trash.sock.identifier, "x", 1, MSG_OOB);
						result = recv(trash.sock.identifier, &checkin, 1, MSG_OOB);

						std::cout << " ... disconnecting (" << checkin << ", " << result << ")\n";
						result = closesocket(trash.sock.identifier);
						if(result == DETOX_EXIT) std::cout << trash.sock.identifier << " disconnected.";
					}
					else {
						std::cout << " ... E: " << WSAGetLastError() << ", " << GetLastError() << "\n";
					}
				}
				else {
					std::cout << " ... E: " << WSAGetLastError() << ", " << GetLastError() << "\n";
				}
			}
			
		}
	};
	class DETOX {
	public:
		DETOX() {};
		~DETOX() {};
		void _self(DETOX_NUMBER mode = DETOX_WINDOW_PIXELS, DETOX_DECIMAL rate = DETOX_MENU_OPTIONS_RATE_AVERAGE_VALUE, DETOX_NUMBER x = 5, DETOX_NUMBER y = 5) {
			//SwitchToThread(); 
			// To-do: SetWindowsHook

			if (this->exe.warm != DETOX_EXIST) {
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
				this->display = {};
				this->display.interface_part[DETOX_INTERFACE_TOP]._padding(1, 1, 1, 0);
				this->display._set(DETOX_INTERFACE_TOP, 0, 0, DETOX_INTERFACE_TOP_WIDTH, DETOX_INTERFACE_TOP_HEIGHT, DETOX_EXIST);

				switch (this->options.view) {
				case DETOX_MENU_OPTIONS_VIEW_CAMERA_VALUE:
					this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER]._padding(0, 0, 3, 1);
					this->display._set(DETOX_INTERFACE_CAMERA_PLAYER, 0, this->display.interface_part[DETOX_INTERFACE_TOP].height, 1 + (this->options.camera[DETOX_CAMERA_PLAYER].scale.size.radius * 2), 1 + (this->options.camera[DETOX_CAMERA_PLAYER].scale.size.radius * 2));

					this->display.interface_part[DETOX_INTERFACE_CAMERA_IDLE]._padding(this->options.player.mode - DETOX_CAMERA_RADIUS_TINY, 0, 1, 1);
					this->display._set(DETOX_INTERFACE_CAMERA_IDLE, this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].width, this->display.interface_part[DETOX_INTERFACE_TOP].height, 1 + (this->options.camera[DETOX_CAMERA_IDLE].scale.size.radius * 2), 1 + (this->options.camera[DETOX_CAMERA_IDLE].scale.size.radius * 2));

					this->display.interface_part[DETOX_INTERFACE_INVENTORY]._padding(0, 0, 1, 1);
					this->display._set(DETOX_INTERFACE_INVENTORY, this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].width + this->display.interface_part[DETOX_INTERFACE_CAMERA_IDLE].width, this->display.interface_part[DETOX_INTERFACE_TOP].height, DETOX_INTERFACE_INVENTORY_WIDTH, DETOX_INTERFACE_INVENTORY_HEIGHT);

					this->display.interface_part[DETOX_INTERFACE_PLAYER]._padding(1, 0, 2, 1);
					this->display._set(DETOX_INTERFACE_PLAYER, 0, this->display.interface_part[DETOX_INTERFACE_TOP].height + this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].height, DETOX_INTERFACE_PLAYER_WIDTH, DETOX_INTERFACE_PLAYER_HEIGHT);

					break;
				case DETOX_MENU_OPTIONS_VIEW_WHOLE_VALUE:
					this->display.interface_part[DETOX_INTERFACE_MAP]._padding(0, 0, 3, 1);
					this->display._set(DETOX_INTERFACE_MAP, 0, this->display.interface_part[DETOX_INTERFACE_TOP].height, this->options.size.width, this->options.size.height);

					this->display.interface_part[DETOX_INTERFACE_INVENTORY]._padding(1, 0, 1, 1);
					this->display._set(DETOX_INTERFACE_INVENTORY, this->display.interface_part[DETOX_INTERFACE_MAP].width, this->display.interface_part[DETOX_INTERFACE_TOP].height, DETOX_INTERFACE_INVENTORY_WIDTH, DETOX_INTERFACE_INVENTORY_HEIGHT);

					this->display.interface_part[DETOX_INTERFACE_PLAYER]._padding(1, 0, 2, 1);
					this->display._set(DETOX_INTERFACE_PLAYER, 0, this->display.interface_part[DETOX_INTERFACE_TOP].height + this->display.interface_part[DETOX_INTERFACE_MAP].height, DETOX_INTERFACE_PLAYER_WIDTH, DETOX_INTERFACE_PLAYER_HEIGHT);

					break;
				}
				this->display.interface_part[DETOX_INTERFACE_LOG]._padding(1, 0, 1, 1);
				this->display._set(DETOX_INTERFACE_LOG, this->display.interface_part[DETOX_INTERFACE_TOP].width, 0, DETOX_INTERFACE_LOG_WIDTH, DETOX_INTERFACE_LOG_HEIGHT);

				this->display.interface_part[DETOX_INTERFACE_STATISTICS]._padding(1, 0, 1, 1);
				this->display._set(DETOX_INTERFACE_STATISTICS, this->display.interface_part[DETOX_INTERFACE_PLAYER].width, this->display.interface_part[DETOX_INTERFACE_LOG].height, DETOX_INTERFACE_STATISTICS_WIDTH, DETOX_INTERFACE_STATISTICS_HEIGHT);
				this->display.x = x;
				this->display.y = y + (this->exe.process.duplicates * 80);

				break;
			case DETOX_WINDOW_PIXELS:
				// To-do-test
				//SetWindowPos(this->console, HWND_TOP, x, y, width, height, SWP_DRAWFRAME);

				break;
			case DETOX_TEST:
				CONSOLE_SCREEN_BUFFER_INFO bInfo;
				GetConsoleScreenBufferInfo(this->exe.window.buffer.created.identifier, &bInfo);
				std::cout << bInfo.dwSize.X << " " << bInfo.dwSize.Y << std::endl;
				break;
			}
			if (this->display.height < DETOX_WINDOW_HEIGHT_MINIMUM) this->display.height = DETOX_WINDOW_HEIGHT_MINIMUM;
			
			this->exe.window._set(this->display.width, this->display.height, mode, this->display.x, this->display.y);
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
			DETOX_NUMBER large = DETOX_UNDEFINED, average = DETOX_UNDEFINED, minor = DETOX_UNDEFINED, outer = DETOX_UNDEFINED, counter = 0;
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
			RANGE() {
				this->position = {};
				this->length = DETOX_UNDEFINED;
			}
			~RANGE() {

			};
			DETOX_POSITION position;
			DETOX_NUMBER length;
		};
		struct LOCATION {
			LOCATION() {
				this->move = DETOX_UNDEFINED;
				this->range = {};
				this->from = {};
				this->current = {};
				this->to = {};
			};
			~LOCATION() {

			};
			DETOX_NUMBER move;
			RANGE range;
			DETOX_POSITION from, current, to;

			void _new(DETOX_SIZE size, DETOX_NUMBER mode = DETOX_UNDEFINED, DETOX_NUMBER x = -1, DETOX_NUMBER y = -1) {
				switch (mode) {
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
				*this = {};
			}
		};
		struct COLLISION {
			DETOX_NUMBER identifier = DETOX_UNDEFINED, type = DETOX_NO_COLLISION;
			LOCATION location;
			void _update(DETOX_NUMBER identifier = DETOX_UNDEFINED, DETOX_NUMBER type = DETOX_UNDEFINED) {
				this->identifier = identifier;
				this->type = type;

			}

		};
		struct TILE {
			TILE() {
				this->exist = DETOX_UNDEFINED;
				this->status = DETOX_UNDEFINED;
				this->identifier = DETOX_UNDEFINED;
				this->type = DETOX_UNDEFINED;
				this->count = 0;
				this->character = ' ';
				this->location = {};
			};
			~TILE() {

			}

			DETOX_NUMBER exist, status, identifier, type, count;
			LOCATION location;
			COLLISION collision;
			DETOX_TILE character;

			void _disappear() {
				this->status = DETOX_UNDEFINED;
				this->identifier = DETOX_UNDEFINED;
				this->type = DETOX_UNDEFINED;
				this->location._disappear();
				this->character = '.';
				*this = {};
				this->exist = DETOX_UNDEFINED;
			}
			void _generate(DETOX_NUMBER type, DETOX_SIZE size, DETOX_NUMBER identifier = DETOX_UNDEFINED, DETOX_NUMBER status = DETOX_STATUS_DEFAULT, DETOX_NUMBER mode = DETOX_MODE_RANDOM, DETOX_NUMBER x = DETOX_UNDEFINED, DETOX_NUMBER y = DETOX_UNDEFINED) {
				this->type = type;
				switch (this->type) {
				default:
					this->character = DETOX_CHARACTER_GROUND;
					break;
				case DETOX_TYPE_GROUND:
					this->character = DETOX_CHARACTER_GROUND;
					break;
				case DETOX_TYPE_CREATURE:
					this->character = DETOX_CHARACTER_CREATURE;
					break;
				case DETOX_TYPE_PLAYER:
					this->character = DETOX_CHARACTER_PLAYER;
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
					this->character = DETOX_CHARACTER_BUFF;
					break;
				}
				this->identifier = identifier;
				switch (mode) {
				case DETOX_MODE_RANDOM:
					this->location._new(size, DETOX_MODE_RANDOM);
					break;
				case DETOX_MODE_MANUAL:
					this->location._new(size, DETOX_MODE_MANUAL, x, y);
					break;
				}
				this->status = status;
				this->exist = DETOX_EXIST;
			}
			TILE _update() {

				// To-do
				return *this;
			}
		};
		struct PADDING {
			PADDING() {
				this->top = 0;
				this->bottom = 0;
				this->left = 0;
				this->right = 0;
			};
			~PADDING() {

			}
			DETOX_NUMBER top, bottom, left, right;
		};
		struct INTERFACE_PART {
			INTERFACE_PART() {
				this->x = DETOX_UNDEFINED;
				this->y = DETOX_UNDEFINED;
				this->width = 0;
				this->height = 0;
				this->identifier = DETOX_UNDEFINED;
				this->exist = DETOX_UNDEFINED;
				this->padding = {};
				this->begin = {};
			};
			~INTERFACE_PART() {

			};
			DETOX_NUMBER x, y, width, height, identifier, exist;
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
			DISPLAY() {
				this->x = 0;
				this->y = 0;
				this->width = 0;
				this->height = 0;
				this->evener = DETOX_EXIT;
				for (DETOX_NUMBER c = 0; c < DETOX_INTERFACE_PARTS; c++) this->interface_part[c] = {};
			};

			~DISPLAY() {
				
			};
			INTERFACE_PART interface_part[DETOX_INTERFACE_PARTS]; // menu ... ?
			DETOX_NUMBER x, y, width, height, evener;

			void _set(DETOX_NUMBER identifier, DETOX_NUMBER x, DETOX_NUMBER y, DETOX_NUMBER width, DETOX_NUMBER height, DETOX_NUMBER reset = DETOX_UNDEFINED) {
				if (reset == DETOX_EXIST) {
					this->~DISPLAY();
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
		struct SIGN {
			DETOX_NUMBER identifier = DETOX_UNDEFINED;
			char letter = ' ';

			void _set(DETOX_NUMBER identifier) {
				this->identifier = identifier;
				switch (this->identifier) {
				default:
					this->letter = 'x';
					break;
				case DETOX_TYPE_SEX_FEMALE:
					this->letter = 'f';
					break;
				case DETOX_TYPE_SEX_MALE:
					this->letter = 'm';
					break;
				case DETOX_TYPE_SEX_NONE:
					this->letter = 'n';
					break;
				case DETOX_TYPE_SEX_OTHER:
					this->letter = 'o';
					break;
				case DETOX_TYPE_SEX_SELF:
					this->letter = 's';
					break;
				case DETOX_TYPE_SEX_UNDECISIVE:
					this->letter = 'q';
					break;
				case DETOX_TYPE_SEX_BISEXUAL:
					this->letter = 'b';
					break;
				}
			}
		};
		struct SEX {
			SIGN has, towards; // likely to change
			DICE dice;
			void _decide(DETOX_NUMBER mode = DETOX_MODE_AUTO, DETOX_NUMBER identifier = DETOX_UNDEFINED, DETOX_NUMBER towards = DETOX_UNDEFINED) {
				switch (mode) {
				case DETOX_MODE_AUTO:
					this->dice._roll(DETOX_DICE_SEX_MIN, DETOX_DICE_SEX_MAX);
					this->has._set(this->dice.value);
					this->dice._roll(DETOX_DICE_SEX_MIN, DETOX_DICE_SEX_MAX);
					this->towards._set(this->dice.value);
					break;
				case DETOX_MODE_MANUAL:
					this->has._set(identifier);
					this->towards._set(towards);
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
		struct CONTRACT {
			CONTRACT(double identifier = 0.0, const char name[] = "") {
				this->identifier = identifier;
				this->name._write(name);

			};
			~CONTRACT() {

			};
			NAME name;
			double identifier; // time as such (?)
		};
		struct PERSONALITY {
			PERSONALITY() {
			};
			~PERSONALITY() {

			};
			RELIGION religion;
			CONTRACT contract;
			DICE dice;
			void _personalize() {
				if (DETOX_MODE_PRIVATE == DETOX_EXIST) {
					this->religion._decide(DETOX_MODE_PRIVATE_RELIGION);
					this->contract = DETOX_DATABASE_CONTRACT_BOSS;
				}
				else {
					this->religion._decide();
					this->dice._roll(0, 8);
					
					switch (this->dice.value) {
					case 0:
						this->contract = DETOX_DATABASE_CONTRACT_BOSS;
						break;
					case 1:
						this->contract = DETOX_DATABASE_CONTRACT_MERCHANT;
						break;
					case 2:
						this->contract = DETOX_DATABASE_CONTRACT_TAILOR;
						break;
					case 3:
						this->contract = DETOX_DATABASE_CONTRACT_TOURIST;
						break;
					case 4:
						this->contract = DETOX_DATABASE_CONTRACT_SCIENTIST;
						break;
					case 5:
						this->contract = DETOX_DATABASE_CONTRACT_PHILOSOPHER;
						break;
					case 6:
						this->contract = DETOX_DATABASE_CONTRACT_DEVELOPER;
						break;
					case 7:
						this->contract = DETOX_DATABASE_CONTRACT_REGULAR;
						break;
					case 8:
						this->contract = DETOX_DATABASE_CONTRACT_SURVIVALIST;
						break;
					}
					
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
		struct BUFF { // Subjective to change
			char name[DETOX_BUFF_NAME_LENGTH] = {}, character = '!';
			DETOX_NUMBER type = DETOX_UNDEFINED, status = DETOX_UNDEFINED, exist = DETOX_UNDEFINED, duration = DETOX_UNDEFINED, effect = DETOX_UNDEFINED;
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
				this->tile._generate(DETOX_TYPE_BUFF, size, identifier);
			}
			void _over() {
				this->tile._disappear(); // Leaves a black tile
				this->status = DETOX_UNDEFINED;
				this->type = DETOX_UNDEFINED;
				this->effect = DETOX_UNDEFINED;
				*this = {};
				this->exist = DETOX_UNDEFINED;
			}
			void _update(DETOX_NUMBER type = DETOX_UNDEFINED, DETOX_NUMBER duration = DETOX_UNDEFINED) {

				if (type != DETOX_UNDEFINED) {
					this->exist = DETOX_EXIST;
					this->type = type;
					this->duration = duration;
				}
				if (this->exist == DETOX_EXIST) {
					if (this->effect == DETOX_UNDEFINED) {
						if (this->status == DETOX_UNDEFINED) {
							switch (this->type) {
							default:
								break;
							case DETOX_TYPE_BUFF_VALJURIAN_WINGS:
								this->status = DETOX_TYPE_BUFF_VALJURIAN_WINGS_STATUS;
								break;
							case DETOX_TYPE_BUFF_WAVY_LENGTHS:
								this->status = DETOX_TYPE_BUFF_WAVY_LENGTHS_STATUS;
								break;
							}
							this->effect = DETOX_EXIST;
						}
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

			//template <typename DETOX_VALUE>
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
				this->length = 0;
				*this = {};
				this->exist = DETOX_UNDEFINED;

			}
		};
		struct LOG {
			MESSAGE messages[DETOX_INTERFACE_LOG_HEIGHT];
			DETOX_TIME time;
			void _new(const char msg[], DETOX_NUMBER identifier = DETOX_UNDEFINED, DETOX_NUMBER type = DETOX_UNDEFINED, DETOX_NUMBER target = DETOX_UNDEFINED) {
				this->_shift(DETOX_INTERFACE_LOG_DOWN);
				this->messages[0]._clear();
				this->messages[0].position.y = 0;
				this->messages[0].identifier[0] = identifier;
				this->messages[0].identifier[1] = target;
				this->messages[0].type = type;
				//this->time._clock();
				//this->messages[0]._add((char*)this->time.hours);
				//this->messages[0]._add(":");
				//this->messages[0]._add((char*)this->time.minutes);
				//this->messages[0]._add(":");
				//this->messages[0]._add((char*)this->time.seconds);
				//this->messages[0]._add(" ");
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
					for (DETOX_NUMBER m = DETOX_INTERFACE_LOG_HEIGHT - 1; m > 0; m--) {
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

				if (this->current >= this->required) {
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

			void _recover(DETOX_NUMBER amount = DETOX_UNDEFINED) {
				if (this->current < this->total) this->current += amount;
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
			void _result() {
				this->dice._roll(this->min, this->max);
			}
		};
		struct GROUND {
			GROUND(DETOX_DECIMAL identifier = DETOX_UNDEFINED, DETOX_NUMBER type = DETOX_UNDEFINED) {
				
				this->identifier = identifier;
				this->type = type;
				switch (this->type) {
				default:
					this->character = '.';
					break;
				}
				this->length = 0;
				this->max = DETOX_UNDEFINED;
				this->expansion = {};
				this->beginning = {};
				this->dummy = {};
			};
			~GROUND() {}
			DETOX_DECIMAL identifier;
			DETOX_NUMBER type, length, max;
			DETOX_TILE character;
			DICE dice;
			TILE beginning, dummy;
			TILE* expansion;
			GROUND _expand(DETOX_SIZE size, DETOX_NUMBER mode = DETOX_MODE_AUTO, DETOX_NUMBER x = DETOX_UNDEFINED, DETOX_NUMBER y = DETOX_UNDEFINED, DETOX_NUMBER view = DETOX_EXIT) {
				if (this->beginning.exist == DETOX_UNDEFINED) {
					this->length = 0;
					this->dice._roll(2, 5);
					this->max = this->dice.value;
					this->expansion = &this->expansion[this->max];
					TILE* exp = new TILE[this->max];
					// exp = new TILE[[this->max][this->radius]]
					std::cout << "creating ground (" << this->type << ", " << mode << ", " << this->max << "): " << size.width << " (" << x << ") / " << size.height << "(" << y << ")\n";
					//system("pause");
					this->expansion = exp;
					delete[] exp;

					this->beginning.status = this->type;
					this->beginning.character = '.';
					switch (mode) {
					case DETOX_MODE_AUTO:
						this->dice._roll(0, size.width);
						this->beginning.location.current.x = this->dice.value;
						this->dice._roll(0, size.height);
						this->beginning.location.current.y = this->dice.value;
						break;
					case DETOX_MODE_MANUAL:
						this->beginning.location.current.x = x;
						this->beginning.location.current.y = y;
						break;
					}
					this->beginning.exist = DETOX_EXIST;

					this->expansion[0] = this->beginning; 
					std::cout << "\n starting at (" << this->type << ", " << mode << "): " << this->expansion[0].location.current.x << ", " << this->expansion[0].location.current.y << "\n";
				}

				this->length++;
				do {
					if(view == DETOX_EXIST) std::cout << this->length << " -> ";
					this->expansion[this->length] = {};
					this->dice._roll(0, 8);
					switch (this->dice.value) {
					default:
						this->expansion[this->length] = this->expansion[this->length - 1];
						break;
					case 0:
						//up
						this->expansion[this->length].location.current.x = this->expansion[this->length - 1].location.current.x;
						if (this->expansion[this->length - 1].location.current.y > 0) {
							this->expansion[this->length].location.current.y = this->expansion[this->length - 1].location.current.y - 1;
						}
						else {
							this->expansion[this->length].location.current.y = this->expansion[this->length - 1].location.current.y;
						}
						break;
					case 1:
						//down
						this->expansion[this->length].location.current.x = this->expansion[this->length - 1].location.current.x;
						if (this->expansion[this->length - 1].location.current.y < size.height - 1) {
							this->expansion[this->length].location.current.y = this->expansion[this->length - 1].location.current.y + 1;
						}
						else {
							this->expansion[this->length].location.current.y = this->expansion[this->length - 1].location.current.y;
						}
						break;
					case 2:
						//left
						this->expansion[this->length].location.current.y = this->expansion[this->length - 1].location.current.y;
						if (this->expansion[this->length - 1].location.current.x > 0) {
							this->expansion[this->length].location.current.x = this->expansion[this->length - 1].location.current.x - 1;
						}
						else {
							this->expansion[this->length].location.current.x = this->expansion[this->length - 1].location.current.x;
						}
						break;
					case 3:
						//right
						this->expansion[this->length].location.current.y = this->expansion[this->length - 1].location.current.y;
						if (this->expansion[this->length - 1].location.current.x < size.width - 1) {
							this->expansion[this->length].location.current.x = this->expansion[this->length - 1].location.current.x + 1;
						}
						else {
							this->expansion[this->length].location.current.x = this->expansion[this->length - 1].location.current.x;
						}
						break;
					case 4:
						//top-left
						if (this->expansion[this->length - 1].location.current.y > 0) {
							this->expansion[this->length].location.current.y = this->expansion[this->length - 1].location.current.y - 1;
						}
						else {
							this->expansion[this->length].location.current.y = this->expansion[this->length - 1].location.current.y;
						}
						if (this->expansion[this->length - 1].location.current.x > 0) {
							this->expansion[this->length].location.current.x = this->expansion[this->length - 1].location.current.x - 1;
						}
						else {
							this->expansion[this->length].location.current.x = this->expansion[this->length - 1].location.current.x;
						}
						break;
					case 5:
						//top-right
						if (this->expansion[this->length - 1].location.current.y > 0) {
							this->expansion[this->length].location.current.y = this->expansion[this->length - 1].location.current.y - 1;
						}
						else {
							this->expansion[this->length].location.current.y = this->expansion[this->length - 1].location.current.y;
						}
						if (this->expansion[this->length - 1].location.current.x < size.width - 1) {
							this->expansion[this->length].location.current.x = this->expansion[this->length - 1].location.current.x + 1;
						}
						else {
							this->expansion[this->length].location.current.x = this->expansion[this->length - 1].location.current.x;
						}
						break;
					case 6:
						//bottom-left
						if (this->expansion[this->length - 1].location.current.y < size.height - 1) {
							this->expansion[this->length].location.current.y = this->expansion[this->length - 1].location.current.y + 1;
						}
						else {
							this->expansion[this->length].location.current.y = this->expansion[this->length - 1].location.current.y;
						}
						if (this->expansion[this->length - 1].location.current.x > 0) {
							this->expansion[this->length].location.current.x = this->expansion[this->length - 1].location.current.x - 1;
						}
						else {
							this->expansion[this->length].location.current.x = this->expansion[this->length - 1].location.current.x;
						}
						break;
					case 7:
						//bottom-right
						if (this->expansion[this->length - 1].location.current.y < size.height - 1) {
							this->expansion[this->length].location.current.y = this->expansion[this->length - 1].location.current.y + 1;
						}
						else {
							this->expansion[this->length].location.current.y = this->expansion[this->length - 1].location.current.y;
						}
						if (this->expansion[this->length - 1].location.current.x < size.width - 1) {
							this->expansion[this->length].location.current.x = this->expansion[this->length - 1].location.current.x + 1;
						}
						else {
							this->expansion[this->length].location.current.x = this->expansion[this->length - 1].location.current.x;
						}
						break;
					}
					this->expansion[this->length].status = this->type;
					this->expansion[this->length].character = '.';
					this->expansion[this->length].exist = DETOX_EXIST;
					
					if (view == DETOX_EXIST) {
						std::cout << "direction: " << this->dice.value;
						std::cout << " [" << this->expansion[this->length].status;
						std::cout << " (" << this->type << ")";
						std::cout << " " << this->expansion[this->length].character;
						std::cout << ": " << this->expansion[this->length].location.current.x;
						std::cout << ", " << this->expansion[this->length].location.current.y;
						std::cout << "]\n";
					}
					this->length++;
				} while (this->length < this->max);
				//std::cout << this->expansion[this->length].character << "(" << this->expansion[this->length].status << ") " << this->expansion[this->length].location.current.x << "/" << this->expansion[this->length].location.current.y << "\n";
				
				for (DETOX_NUMBER c = 0; c < this->length; c++) {
					std::cout << ">" << c << " -> ";
					std::cout << this->expansion[c].character << "(" << this->expansion[c].status << "): ";
					std::cout << this->expansion[c].location.current.x << ", " << this->expansion[c].location.current.y << "\n";
				}
				std::cout << "\n" << this->length << "\n";
				this->_values();
				return *this;
			}

			TILE _get(DETOX_NUMBER x, DETOX_NUMBER y, DETOX_NUMBER view = DETOX_EXIT) {
				TILE tile = {};
				if(view == DETOX_EXIST) std::cout << " (get: " << x << ", " << y << ", " << this->length << "): ";
				for (DETOX_NUMBER c = 0; c < this->length; c++) {
					std::cout << " [" << c << " " << this->expansion[c].character << "(" << this->expansion[c].status << "): " << this->expansion[c].location.current.x << ", " << this->expansion[c].location.current.y << "]";
					if (x == this->expansion[c].location.current.x) {
						if (y == this->expansion[c].location.current.y) {
							tile = this->expansion[c];
							break;
						}
					}
				}
				if (view == DETOX_EXIST) {
					std::cout << " {";
					std::cout << tile.status;
					std::cout << " " << tile.character;
					std::cout << ": " << tile.location.current.x;
					std::cout << ", " << tile.location.current.y;
					std::cout << "} -> ";
				}
				return tile;
			}

			void _values() {
				std::cout << "Ground: " << this->type << "(" << this->length << ", " << this->identifier << "): \n";
				for (DETOX_NUMBER c = 0; c < this->length; c++) {
					std::cout << c << " - " << this->expansion[c].character << "(" << this->expansion[c].status << ")" << this->expansion[c].location.current.x << ", " << this->expansion[c].location.current.y << "\n";
				}
				std::cout << "\n";
			}
		};
		struct ITEM {
			TILE tile;
			DICE dice;
			DETOX_NUMBER type = DETOX_UNDEFINED, amount = DETOX_UNDEFINED, visible = DETOX_UNDEFINED, exist = DETOX_UNDEFINED, status = DETOX_UNDEFINED;

			void _set(DETOX_NUMBER type = DETOX_UNDEFINED, DETOX_NUMBER amount = 0) {
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
				this->tile._generate(this->type, size, identifier);
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

			void _use(DETOX_NUMBER identifier, DETOX_NUMBER amount) {
				for (DETOX_NUMBER i = 0; i < DETOX_INVENTORY_SLOTS; i++) {
					if (this->resource[i].type == identifier) {
						this->resource[i].amount -= amount;
						break;
					}
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
					if (this->scale.mode == DETOX_UNDEFINED) this->scale.mode = DETOX_MODE_CAMERA_DEFAULT;
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
					if (position.x > this->map.width - this->scale.size.radius - 1) {
						this->position.x = this->map.width - (this->scale.size.radius * 2) - 1;
					}
					else {
						this->position.x = position.x - this->scale.size.radius; // render begins
					}
				}
				else {
					this->position.x = 0;
				}
				if (position.y > this->scale.size.radius) {
					if (position.y > this->map.height - this->scale.size.radius - 1) {
						this->position.y = this->map.height - (this->scale.size.radius * 2) - 1;
					}
					else {
						this->position.y = position.y - this->scale.size.radius;
					}
				}
				else {
					this->position.y = 0;
				}
			}

		};
		struct OPTIONS {
			OPTIONS() {
				this->test = DETOX_EXIT;
				this->view = DETOX_UNDEFINED;
				this->started = DETOX_EXIT;
				this->mode = DETOX_MODE_DEFAULT;
				this->creatures = DETOX_UNDEFINED;
				this->buffs = DETOX_UNDEFINED;
				this->resources = DETOX_UNDEFINED;
				this->counter = 0;
			};
			~OPTIONS() {

			}
			DETOX_DECIMAL loss;
			DETOX_NUMBER mode, creatures, buffs, resources, test, view, started, counter;
			SCALE player, creature;
			CAMERA camera[DETOX_CAMERAS_MAX];
			DETOX_SIZE size;
			char selection;
			char input;
			RATE rate;

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
				this->size.total = this->size.width * this->size.height;
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
					this->view = DETOX_MODE_TEST_CAMERA;
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
			DETOX_NUMBER exist = DETOX_UNDEFINED, identifier = DETOX_UNDEFINED, status = DETOX_UNDEFINED, attacking = DETOX_UNDEFINED, skills = 0, type = DETOX_UNDEFINED;
			DETOX_DECIMAL bumps = 0.0f;
			DICE dice;
			SKILL skill[DETOX_SKILLS_MAX];
			MESSAGE message;
			TILE tile;
			TARGET target;

			void _self(DETOX_NUMBER type, DETOX_NUMBER identifier = DETOX_UNDEFINED) {
				switch (type) {
				case DETOX_TYPE_PLAYER:
					this->type = DETOX_TYPE_PLAYER;
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
					this->dice._roll(0, 1000);
					this->identifier = this->dice.value;
					break;
				case DETOX_TYPE_CREATURE:
					this->type = DETOX_TYPE_CREATURE;
					this->skill[DETOX_SKILL_ENDURANCE]._self(DETOX_SKILL_ENDURANCE, "Endurance", "END");
					if (DETOX_MODE_PRIVATE == DETOX_EXIST) this->gender._decide(DETOX_MODE_MANUAL, DETOX_TYPE_SEX_FEMALE); else this->gender._decide();
					this->personality._personalize();
					this->experience._require(DETOX_TYPE_CREATURE);
					this->health._fresh(DETOX_TYPE_CREATURE);
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
					this->buff._update();
					if (this->buff.exist == DETOX_EXIST) {
						if (this->buff.duration > 0) {
							if (this->tile.status == DETOX_STATUS_DEFAULT) {
								this->tile.status = this->buff.status;
							}
						}
						else {
							this->tile.status = DETOX_STATUS_DEFAULT;
						}
					}
					else {
						this->tile.status = DETOX_STATUS_DEFAULT;
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
				this->status = DETOX_UNDEFINED;
				this->attacking = DETOX_UNDEFINED;
				*this = {};
				this->exist = DETOX_UNDEFINED;
				this->bumps = 0.0f;
				this->identifier = DETOX_UNDEFINED;
				//this->gender = {};
				//this->personality = {};
			}

			SKILL _lean(DETOX_NUMBER type, DETOX_NUMBER identifier) { // Likely to change
				switch (type) {
				case DETOX_TYPE_SKILL:
					for (DETOX_NUMBER s = 0; s < this->skills; s++) {
						if (this->skill[s].exist == DETOX_EXIST) {
							if (this->skill[s].identifier == identifier) {
								return this->skill[s];
							}
						}
					}
					break;
				}
				SKILL skill;
				skill.identifier = DETOX_UNDEFINED;
				return skill;
			}

		};
		struct PROJECTILE {
			ITEM item;
			DAMAGE damage;
			DETOX_NUMBER identifier = DETOX_UNDEFINED, speed = DETOX_UNDEFINED, range = DETOX_UNDEFINED, exist = DETOX_UNDEFINED;
			CREATURE target;
			void _throw(CREATURE target, DETOX_SIZE size, DETOX_POSITION position, DETOX_NUMBER type = DETOX_UNDEFINED) {
				this->item.type = type;
				this->target = target;
				this->item.status = DETOX_STATUS_ITEM_THROWN;
				this->item.amount = 1; // Multi-throw
				this->item.tile._generate(this->item.type, size, DETOX_UNDEFINED, DETOX_STATUS_ITEM_THROWN, DETOX_MODE_MANUAL, position.x, position.y);
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
				*this = {};
				this->exist = DETOX_UNDEFINED;
			}
		};
		struct MELEE {
			NAME name;
			DAMAGE damage;
		};
		struct ABILITY {
			NAME name;
			DETOX_NUMBER delay;
			DAMAGE damage;
			HEALTH health;
		};
		struct MAP {
			MAP() {
				this->area = {};
				this->soil = DETOX_DATABASE_GROUND_SOIL;
				this->mud = DETOX_DATABASE_GROUND_MUD;
				this->tiles = 0;
				this->resources = 0;
				this->gears = 0;
				this->creatures = 0;
				this->projectiles = 0;
				this->counter = 0;
			};
			~MAP() {

			}
			CREATURE player, creature[DETOX_CREATURES_MAX];
			OPTIONS options;
			LOG log;
			RESOURCE resource[DETOX_RESOURCES_MAX];
			GEAR gear[DETOX_GEARS_MAX];
			PROJECTILE projectile[DETOX_PROJECTILES_MAX];
			MESSAGE message;
			BUFF buff[DETOX_BUFFS_MAX];
			DICE dice;
			DETOX_NUMBER tiles, resources, gears, creatures, projectiles, counter;
			TILE* area;
			GROUND soil, mud;
			DETOX_SOUND sound;
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
				
				for (DETOX_NUMBER p = 0; p < this->projectiles; p++) {
					if (this->projectile[p].exist == DETOX_EXIST) {
						this->options.camera[DETOX_CAMERA_IDLE].target._acquire(p, DETOX_TYPE_PROJECTILE);
						this->options.camera[DETOX_CAMERA_IDLE]._center(this->projectile[p].item.tile.location.current);
						break;
					}
				}

				if (this->options.camera[DETOX_CAMERA_IDLE].target.exist == DETOX_UNDEFINED) {
					for (DETOX_NUMBER c = 0; c < this->creatures; c++) {
						if (this->creature[c].exist == DETOX_EXIST) {
							this->options.camera[DETOX_CAMERA_IDLE].target._acquire(c, DETOX_TYPE_CREATURE);
							this->options.camera[DETOX_CAMERA_IDLE]._center(this->creature[c].tile.location.current);
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

					if (DETOX_MODE_TEST_HEALTH_RECOVERY_PLAYER == DETOX_EXIST || DETOX_HEALTH_RECOVERY_PLAYER_ENABLED == DETOX_EXIST) {
						if (this->options.counter % DETOX_HEALTH_RECOVERY_SPIN_PLAYER == DETOX_EXIST) this->player.health._recover(DETOX_HEALTH_RECOVERY_BASE_PLAYER);
					}
					for (DETOX_NUMBER c = 0; c < this->options.creatures; c++) {
						if (this->creature[c].exist == DETOX_EXIST) {
							if (DETOX_MODE_TEST_HEALTH_RECOVERY_CREATURE == DETOX_EXIST || DETOX_HEALTH_RECOVERY_CREATURE_ENABLED == DETOX_EXIST) {
								if (this->options.counter % DETOX_HEALTH_RECOVERY_SPIN_CREATURE == DETOX_EXIST) {
									this->creature[c].health._recover(DETOX_HEALTH_RECOVERY_BASE_CREATURE);
								}
							}
						}
					}
					for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
						if (this->buff[b].exist == DETOX_EXIST) {
							this->buff[b]._update();
						}
					}
					for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
						if (this->resource[r].item.exist == DETOX_EXIST) {
							this->resource[r].item._removal();
						}
					}
					for (DETOX_NUMBER g = 0; g < DETOX_GEARS_MAX; g++) {
						if (this->gear[g].item.exist == DETOX_EXIST) {
							this->gear[g].item._removal();
						}
					}
					for (DETOX_NUMBER p = 0; p < DETOX_PROJECTILES_MAX; p++) {
						if (this->projectile[p].exist == DETOX_EXIST) {
							if (this->projectile[p].target.exist == DETOX_EXIST) {
								DETOX_NUMBER gress = this->_gress(this->projectile[p].target.identifier);
								if (gress != DETOX_UNDEFINED) {
									this->projectile[p]._update(this->creature[gress]);
									if (this->creature[gress].exist == DETOX_EXIST) {
										if (this->projectile[p].item.tile.location.range.length <= 1) {
											this->projectile[p].damage.dice._roll(this->projectile[p].damage.min, this->projectile[p].damage.max);
											if (this->projectile[p].damage.dice.value > 0) {
												this->creature[gress].health._loss(this->projectile[p].damage.dice.value);
												if (this->creature[gress].health.current <= 0) {
													this->creature[gress]._die();
													this->player.experience._gain(1, DETOX_TYPE_PLAYER);
													this->log._new(DETOX_MESSAGE_CREATURE_DEFEATED_BASE, this->projectile[p].damage.dice.value, DETOX_TYPE_ATTACK_PLAYER_PROJECTILE, this->projectile[p].target.identifier);
													this->projectile[p]._remove();
													this->creatures--;
													break;
												}
												else {
													this->log._new(DETOX_MESSAGE_ATTACK_PLAYER, this->projectile[p].damage.dice.value, DETOX_TYPE_ATTACK_PLAYER_PROJECTILE, this->projectile[p].target.identifier);
													this->projectile[p]._remove();
												}
											}
											else {
												this->log._new(DETOX_MESSAGE_DAMAGE_NONE, p, DETOX_TYPE_PLAYER_TO_CREATURE, this->projectile[p].target.identifier);
												this->projectile[p]._remove();
											}
										}
									}
									else {
										this->projectile[p]._remove();
									}
								}
								else {
									this->projectile[p]._remove();
								}
							}
							else {
								this->projectile[p]._remove();
							}
						}
					}
					this->counter++;
					break;
				}
			}
			CREATURE _sortee(DETOX_NUMBER mode = DETOX_SORT_HIGH, DETOX_NUMBER identifier = DETOX_UNDEFINED) {
				CREATURE creature;
				if (this->creatures > 1) {
					for (DETOX_NUMBER c = 0; c < this->creatures; c++) {
						if (this->creature[c].exist == DETOX_EXIST) {
							switch (mode) {
							default:
								break;
							case DETOX_SORT_LOW:
								if (this->creature[c].bumps < creature.bumps) creature = this->creature[c];
								break;
							case DETOX_SORT_HIGH:
								if (creature.bumps == 0) {
									creature = this->creature[c];
								}
								else {
									if (this->creature[c].bumps > creature.bumps) {
										creature = this->creature[c];
									}
								}
								break;
							case DETOX_SORT_NEXT:
								if (this->creature[c].exist == DETOX_EXIST) creature = this->creature[c];
								break;
							case DETOX_SORT_IDENTIFIER:
								if (this->creature[c].exist == DETOX_EXIST) {
									if (this->creature[c].identifier == identifier) {
										creature = this->creature[c];
									}
								}
								break;
							}
						}
						if (creature.exist) {
							if (mode == DETOX_SORT_IDENTIFIER || mode == DETOX_SORT_NEXT) break;
						}
					}
				}
				return creature;
			}
			DETOX_NUMBER _gress(DETOX_NUMBER identifier) {
				for (DETOX_NUMBER c = 0; c < this->creatures; c++) {
					if (this->creature[c].exist == DETOX_EXIST) {
						if (this->creature[c].identifier == identifier) return c;
					}
				}
				return DETOX_UNDEFINED;
			}
			DETOX_NUMBER _locate(DETOX_NUMBER x, DETOX_NUMBER y) {
				for (DETOX_NUMBER tile = 0; tile < this->tiles; tile++) {
					if (this->area[tile].location.current.x == x && this->area[tile].location.current.y == y) {
						return tile;
					}
				}
				return DETOX_UNDEFINED;
			}
			void _new(DETOX_NUMBER type, DETOX_NUMBER identifier = DETOX_UNDEFINED) {
				switch (type) {
				case DETOX_TYPE_PLAYER:
					if (this->options.mode == DETOX_MODE_MANUAL) this->player.controls.exist = DETOX_EXIST;
					this->player._self(DETOX_TYPE_PLAYER);
					this->player.tile._generate(DETOX_TYPE_PLAYER, this->options.size);
					break;
				case DETOX_TYPE_CREATURE:
					for (DETOX_NUMBER c = 0; c < this->options.creatures; c++) {
						if (this->creature[c].exist != DETOX_EXIST) {
							this->dice._roll(DETOX_DICE_CREATURE_IDENTIFIER_MIN, DETOX_DICE_CREATURE_IDENTIFIER_MAX);
							this->creature[c].identifier = this->dice.value;
							if (this->options.started == DETOX_UNDEFINED) std::cout << "Identifying creature (" << c << ")... ";
							for (DETOX_NUMBER d = 0; d < this->creatures; d++) {
								if (this->options.started == DETOX_UNDEFINED && d == 0) std::cout << "Checking for duplicates ";
								if (this->creature[d].identifier == this->creature[c].identifier) {
									if (this->options.started == DETOX_UNDEFINED) std::cout << ", duplicate " << d << ": " << this->creature[d].identifier;
									do {
										this->dice._roll(DETOX_DICE_CREATURE_IDENTIFIER_MIN, DETOX_DICE_CREATURE_IDENTIFIER_MAX);
										this->creature[c].identifier = this->dice.value;
										if (this->options.started == DETOX_UNDEFINED) std::cout << ", " << this->dice.value;
									} while (this->creature[d].identifier == this->creature[c].identifier);
								}
							}
							if (this->options.started == DETOX_UNDEFINED) {
								std::cout << std::endl;
							}
							this->creature[c]._self(DETOX_TYPE_CREATURE, c);
							this->creature[c].tile._generate(DETOX_TYPE_CREATURE, this->options.size);
							this->creatures++;
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
								if (this->buff[b].exist == DETOX_EXIST) {
									this->player.tile.location._towards(this->buff[b].tile.location);
									this->player._message(DETOX_MESSAGE_BUFF_AVAILABLE);
									break;
								}
							}
							break;
						case 21:
							if (this->player.target.exist == DETOX_UNDEFINED) {
								for (DETOX_NUMBER c = 0; c < this->options.creatures; c++) {
									if (this->creature[c].exist == DETOX_EXIST) {
										this->creature[c].tile.location._distance(this->player.tile.location.current);
										if (this->creature[c].tile.location.range.length < DETOX_PLAYER_OFFENSIVE_RANGE) {
											this->player.target._acquire(this->creature[c].identifier, DETOX_TYPE_CREATURE); // To-do a proper 
											this->sound._wave(350, 352, DETOX_SOUND_LENGTH_DEFAULT);
											this->log._new(DETOX_MESSAGE_PLAYER_TARGETING, DETOX_TYPE_PLAYER, DETOX_TYPE_PLAYER_TO_CREATURE, c);
											break;
										}
									}
								}
							}

							break;
						case 24:
							if (this->player.target.exist == DETOX_EXIST) {
								this->player.tile.location._towards(this->creature[this->_gress(this->player.target.identifier)].tile.location);
								this->player._message(DETOX_MESSAGE_PLAYER_ATTACKING);
							}
						case 25:
							for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
								if (this->resource[r].item.exist == DETOX_EXIST) {
									this->player.tile.location._towards(this->resource[r].item.tile.location);
									this->player._message(DETOX_MESSAGE_RESOURCE_AVAILABLE);
									break;
								}
							}
							break;
						case 30:
							for (DETOX_NUMBER g = 0; g < DETOX_GEARS_MAX; g++) {
								if (this->gear[g].item.exist == DETOX_EXIST) {
									this->player.tile.location._towards(this->gear[g].item.tile.location);
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
						if (this->creature[c].exist == DETOX_EXIST) {
							if (this->creature[c].tile.collision.type != DETOX_NO_COLLISION) this->creature[c].tile.collision.type = DETOX_NO_COLLISION;
							if (this->creature[c].tile.location.move != DETOX_TYPE_MOVE) this->creature[c].tile.location.move = DETOX_TYPE_MOVE;
							this->dice._roll(0, DETOX_CREATURE_SPEED);
							switch (this->dice.value) {
							case 1:
								if (this->creature[c].tile.location.current.y > 0) {
									this->creature[c].tile.location._up();
								}
								break;
							case 2:
								if (this->creature[c].tile.location.current.y < this->options.size.height - 1) {
									this->creature[c].tile.location._down();
								}
								break;
							case 3:
								if (this->creature[c].tile.location.current.x > 0) {
									this->creature[c].tile.location._left();
								}
								break;
							case 4:
								if (this->creature[c].tile.location.current.x < this->options.size.width - 1) {
									this->creature[c].tile.location._right();
								}
								break;
							}
							if (this->creature[c].tile.location.to.x == this->player.tile.location.current.x && this->creature[c].tile.location.to.y == this->player.tile.location.current.y) {
								// Creature collided with player
								this->creature[c].tile.collision._update(DETOX_TYPE_PLAYER, DETOX_COLLISION_PLAYER);
								this->creature[c].tile.location._halt();
								this->creature[c].bumps += 1;
								if (this->creature[c].bumps >= DETOX_SKILL_ADAPTING_CHANCE) {
									this->dice._roll(0, DETOX_SKILL_ADAPTING_CHANCE);
									switch (this->dice.value) {
									default:
										this->log._new(DETOX_MESSAGE_ADAPTING_CREATURE, c, DETOX_TYPE_CREATURE);
										break;
									case 4:
										this->creature[c].tile.status = DETOX_SKILL_ADAPTING_FRIENDLY;
										this->log._new(DETOX_MESSAGE_CREATURE_FRIENDLY, c, DETOX_TYPE_CREATURE);
										break;
									case 10:
										this->creature[c].tile.status = DETOX_SKILL_ADAPTING_UNDECISIVE;
										this->log._new(DETOX_MESSAGE_CREATURE_UNDECISIVE, c, DETOX_TYPE_CREATURE);
										break;
									case 20:
										this->creature[c].tile.status = DETOX_SKILL_ADAPTING_UNFRIENDLY;
										this->log._new(DETOX_MESSAGE_CREATURE_UNFRIENDLY, c, DETOX_TYPE_CREATURE);
										break;
									}
								}
								else {
									this->log._new(DETOX_MESSAGE_CREATURE_COLLIDED, c, DETOX_TYPE_CREATURE);
								}

							}
							else {
								this->creature[c].bumps -= this->options.loss; // To-do a complexity
								if (this->creature[c].bumps < 5 && this->creature[c].tile.status != DETOX_SKILL_ADAPTING_NEUTRAL) this->creature[c].tile.status = DETOX_SKILL_ADAPTING_NEUTRAL;


								for (DETOX_NUMBER d = 0; d < this->options.creatures; d++) {
									if (this->creature[d].exist == DETOX_EXIST && c != d) {
										if (this->creature[c].tile.location.to.x == this->creature[d].tile.location.current.x && this->creature[c].tile.location.to.y == this->creature[d].tile.location.current.y) {
											this->log._new(DETOX_MESSAGE_CREATURE_TO_CREATURE_BUMP, c, DETOX_TYPE_CREATURE_TO_CREATURE, d);
											this->creature[c].tile.location.move = DETOX_TYPE_MOVE_HALTED;
											this->creature[c].tile.collision._update(d, DETOX_COLLISION_CREATURE);
											break;
										}
									}
								}
								switch (this->creature[c].tile.location.move) {
								case DETOX_TYPE_MOVE:
									this->creature[c].tile.location._advance();
									break;
								case DETOX_TYPE_MOVE_HALTED:
									this->creature[c].tile.location._halt();
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
							if (this->creature[c].exist != DETOX_EXIST) {
								if (DETOX_TEST == DETOX_EXIST) {
									this->dice._roll(24, 26);
								}
								else {
									this->dice._roll(0, DETOX_DICE_CREATURE_APPEARANCE);
								}
								if (this->dice.value == DETOX_CREATURE_APPEARANCE) {
									this->_new(DETOX_TYPE_CREATURE, c);
									this->log._new(DETOX_MESSAGE_CREATURE_APPEARANCE, c, DETOX_TYPE_CREATURE);
									this->sound._wave(DETOX_SOUND_GROUNDY, DETOX_SOUND_GROUNDY + 2, DETOX_SOUND_LENGTH_DEFAULT);
								}
								break;
							}
						}
						break;
					case 8:
						for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
							if (this->resource[r].item.exist != DETOX_EXIST) {
								this->dice._roll(0, DETOX_DICE_RESOURCE_APPEARANCE);
								switch (this->dice.value) {
								default:
									this->_message(DETOX_MESSAGE_SENSED);
									break;
								case 1:
									this->resource[r].item._appear(DETOX_TYPE_ITEM_RESOURCE_PLANT, r, this->options.size);
									this->_message(DETOX_MESSAGE_RESOURCE_PLANT_NOTICE);
									break;
								case 3:
									this->resource[r].item._appear(DETOX_TYPE_ITEM_RESOURCE_CURRENCY, r, this->options.size);
									this->_message(DETOX_MESSAGE_RESOURCE_CURRENCY_NOTICE);
									this->sound._wave(DETOX_SOUND_CASHY, DETOX_SOUND_CASHY + 2, DETOX_SOUND_LENGTH_DEFAULT);
									break;
								case 7:
									this->resource[r].item._appear(DETOX_TYPE_ITEM_RESOURCE_PREPAREMENT, r, this->options.size);
									this->_message(DETOX_MESSAGE_RESOURCE_PREPAREMENT_NOTICE);
									break;
								case 10:
									this->resource[r].item._appear(DETOX_TYPE_ITEM_RESOURCE_REFRESHMENT, r, this->options.size);
									this->_message(DETOX_MESSAGE_RESOURCE_REFRESHMENT_NOTICE);
									break;
								}
								break;
							}

						}
						break;

					case 23:
						for (DETOX_NUMBER g = 0; g < DETOX_GEARS_MAX; g++) {
							if (this->gear[g].item.exist != DETOX_EXIST) {
								this->dice._roll(0, DETOX_DICE_GEAR_APPEARANCE);
								switch (this->dice.value) {
								default:
									this->_message(DETOX_MESSAGE_SENSED);
									break;
								case 3:
									this->gear[g].item._appear(DETOX_TYPE_ITEM_GEAR_SHURIKEN, g, this->options.size);
									this->message._new(DETOX_MESSAGE_GEAR_SHURIKEN_NOTICE);
									break;
								}
							}
						}
						break;
					case 25:
						for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
							if (this->buff[b].exist != DETOX_EXIST) {
								this->dice._roll(DETOX_DICE_BUFF_APPEARANCE_MIN, DETOX_DICE_BUFF_APPEARANCE_MAX);
								switch (this->dice.value) {
								default:
									this->_message(DETOX_MESSAGE_SENSED);
									break;
								case DETOX_TYPE_BUFF_VALJURIAN_WINGS:
									this->buff[b].exist = DETOX_EXIST;
									this->buff[b].tile._generate(DETOX_TYPE_BUFF, this->options.size, b, DETOX_TYPE_BUFF_VALJURIAN_WINGS_STATUS);
									this->buff[b].duration = DETOX_BUFF_BASE_DURATION_APPEARANCE;
									this->_message(DETOX_MESSAGE_NOTICE_DISTANCE);
									break;
								case DETOX_TYPE_BUFF_WAVY_LENGTHS:
									this->buff[b].exist = DETOX_EXIST;
									this->buff[b].tile._generate(DETOX_TYPE_BUFF, this->options.size, b, DETOX_TYPE_BUFF_WAVY_LENGTHS_STATUS);
									this->buff[b].duration = DETOX_BUFF_BASE_DURATION_APPEARANCE;
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
						if (this->creature[c].exist == DETOX_EXIST) {
							for (DETOX_NUMBER d = 0; d < this->options.creatures; d++) {
								if (this->creature[d].exist == DETOX_EXIST) {
									if (c != d) {
										this->creature[c].tile.location._distance(this->creature[d].tile.location.current);
										if (this->creature[c].tile.location.range.length <= 1) {
											this->dice._roll(0, DETOX_DICE_CREATURE_TO_CREATURE);
											switch (this->dice.value) {
											default:
												break;
											case 3:
												this->creature[c].attacking = DETOX_EXIST;
												this->creature[c].target._acquire(d, DETOX_TYPE_CREATURE);
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
			void _collision(DETOX_NUMBER collider = DETOX_UNDEFINED, DETOX_NUMBER type = DETOX_UNDEFINED) {
				switch (collider) {
				case DETOX_TYPE_PLAYER:
					switch (type) {
					case DETOX_COLLISION_SWEEP:
						this->player.tile.collision.type = DETOX_NO_COLLISION;
						for (DETOX_NUMBER c = 0; c < DETOX_CREATURES_MAX; c++) {
							if (this->creature[c].exist == DETOX_EXIST) {
								if (this->player.tile.location.to.x == this->creature[c].tile.location.current.x && this->player.tile.location.to.y == this->creature[c].tile.location.current.y) {
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
								if (this->buff[b].exist == DETOX_EXIST) {
									if (this->player.tile.location.to.x == this->buff[b].tile.location.current.x && this->player.tile.location.to.y == this->buff[b].tile.location.current.y) {
										this->player._gain(DETOX_TYPE_BUFF, this->buff[b].tile.status, DETOX_BUFF_BASE_DURATION);
										this->buff[b]._over();
										this->player.tile.collision.type = DETOX_COLLISION_BUFF;
										break;
									}
								}
							}
						}
						if (this->player.tile.collision.type == DETOX_NO_COLLISION) {
							for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
								if (this->resource[r].item.exist == DETOX_EXIST) {
									if (this->player.tile.location.to.x == this->resource[r].item.tile.location.current.x && this->player.tile.location.to.y == this->resource[r].item.tile.location.current.y) {
										switch (this->resource[r].item.tile.type) {
										default:
											break;
										case DETOX_TYPE_ITEM_RESOURCE_PLANT:
											this->dice._roll(0, DETOX_DICE_MINOR);
											switch (this->dice.value) {
											case 3:
												this->player._gain(DETOX_TYPE_ITEM_RESOURCE, this->resource[r].item.type, this->resource[r].item.amount);
												this->player._skill(DETOX_SKILL_GAIN, DETOX_SKILL_FARMING, DETOX_SKILL_GAIN_MODIFIER, DETOX_MESSAGE_FARMING_PICKUP);
												this->resource[r].item._removal(DETOX_EXIST);
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
															this->player.inventory._use(DETOX_TYPE_ITEM_RESOURCE_REFRESHMENT, 1);
														}
													}
												}

											}
											break;
										case DETOX_TYPE_ITEM_RESOURCE_CURRENCY:
											this->player._gain(DETOX_TYPE_ITEM_RESOURCE, this->resource[r].item.type, this->resource[r].item.amount);
											this->player._message(DETOX_MESSAGE_TRADING_CURRENCY_PICKUP);
											this->resource[r].item._removal(DETOX_EXIST);
											this->player.tile.collision.type = DETOX_COLLISION_RESOURCE_CURRENCY;
											break;
										case DETOX_TYPE_ITEM_RESOURCE_PREPAREMENT:
											this->player._gain(DETOX_TYPE_ITEM_RESOURCE, this->resource[r].item.type, this->resource[r].item.amount);
											this->player._message(DETOX_MESSAGE_ENDURANCE_PICKUP);
											this->resource[r].item._removal(DETOX_EXIST);
											this->player.tile.collision.type = DETOX_COLLISION_RESOURCE_PREPAREMENT;
											break;
										case DETOX_TYPE_ITEM_RESOURCE_REFRESHMENT:
											this->player._gain(DETOX_TYPE_ITEM_RESOURCE, this->resource[r].item.type, this->resource[r].item.amount);
											this->player._message(DETOX_MESSAGE_REFRESHMENT_PICKUP);
											this->resource[r].item._removal(DETOX_EXIST);
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
								if (this->gear[g].item.exist == DETOX_EXIST) {
									if (this->player.tile.location.to.x == this->gear[g].item.tile.location.current.x && this->player.tile.location.to.y == this->gear[g].item.tile.location.current.y) {
										switch (this->gear[g].item.type) {
										default:
											break;
										case DETOX_TYPE_ITEM_GEAR_SHURIKEN:
											this->player._gain(DETOX_TYPE_ITEM_GEAR, this->gear[g].item.type, this->gear[g].item.amount);
											this->player._message(DETOX_MESSAGE_SHURIKEN_PICKUP);
											this->gear[g].item._removal(DETOX_EXIST);
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
											this->sound._wave(DETOX_SOUND_CASHY + 4, DETOX_SOUND_CASHY, 50, DETOX_SOUND_DOWN);
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
						DETOX_NUMBER gress = this->_gress(this->player.target.identifier);
						this->player.tile.location._distance(this->creature[gress].tile.location.current);
						if (this->player.inventory.weapon.damage.range >= this->player.tile.location.range.length) {
							if (this->player.inventory.weapon.thrown == DETOX_EXIST) {
								for (DETOX_NUMBER p = 0; p < DETOX_PROJECTILES_MAX; p++) {
									if (this->projectile[p].exist == DETOX_UNDEFINED) {
										this->projectile[p]._throw(this->creature[gress], this->options.size, this->player.tile.location.current, this->player.inventory.weapon.type);
										//this->log._new("You throw a shuriken", p, DETOX_TYPE_ATTACK_PLAYER_PROJECTILE, this->player.target.identifier);
										for (DETOX_NUMBER t = 0; t < this->player.inventory.gears; t++) {
											if (this->player.inventory.gear[t].type == this->projectile[p].item.type) {
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
									this->creature[gress].health._loss(this->player.inventory.weapon.damage.dice.value);
									if (this->creature[gress].health.current <= 0) {
										this->log._new(DETOX_MESSAGE_CREATURE_DEFEATED_BASE, DETOX_TYPE_PLAYER, DETOX_TYPE_ATTACK_PLAYER, this->creature[gress].identifier);
										this->creature[gress]._die();
										this->player.target._untarget();
										this->player.experience._gain(1, DETOX_TYPE_PLAYER);
										this->creatures--;
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
					else {
						this->player.attacking = DETOX_UNDEFINED;
					}
					break;
				case DETOX_TYPE_CREATURE:
					for (DETOX_NUMBER c = 0; c < this->options.creatures; c++) {
						if (this->creature[c].exist == DETOX_EXIST) {
							if (this->creature[c].target.exist == DETOX_EXIST) {
								if (this->creature[c].attacking == DETOX_EXIST) {
									this->creature[c].tile.location._distance(this->creature[this->creature[c].target.identifier].tile.location.current);
									if (this->creature[c].tile.location.range.length <= 1) {
										this->creature[c].inventory._prepare(DETOX_TYPE_MELEE);
										this->creature[c].damage.dice._roll(this->creature[c].damage.min, this->creature[c].damage.max);
										//this->log._new(this->creature[c].dice.value, c, DETOX_TYPE_MESSAGE_DEBUG, this->creature[c].target.identifier);
										if (this->creature[c].damage.dice.value > 0) {
											this->creature[this->creature[c].target.identifier].health._loss(this->creature[c].damage.dice.value);
											if (this->creature[this->creature[c].target.identifier].health.current <= 0) {
												this->log._new(DETOX_MESSAGE_CREATURE_DEFEATED_BASE, c, DETOX_TYPE_ATTACK_CREATURE, this->creature[c].target.identifier);
												this->creature[this->creature[c].target.identifier]._die();
												this->creature[c].target._untarget();
												this->creature[c].experience._gain(1, DETOX_TYPE_CREATURE);
												this->creatures--;
											}
											else {
												this->log._new(DETOX_MESSAGE_ATTACK_CREATURE, c, DETOX_TYPE_ATTACK_CREATURE, this->creature[c].target.identifier);
											}
										}
										else {
											this->log._new(DETOX_MESSAGE_DAMAGE_NONE, c, DETOX_TYPE_CREATURE_TO_CREATURE, this->creature[c].target.identifier);
										}
										this->creature[c].attacking = DETOX_UNDEFINED;
									}
									// break; // One creature / spin (?), attack chain (...?)
								}
							}
						}
					}
					break;
				}
			}
			void _create() {
				this->tiles = 0;
				this->area = &this->area[this->options.size.total];
				//this->soil._expand(this->options.size, DETOX_MODE_MANUAL, 0, 0, DETOX_EXIST);
				
				//GROUND soil;
				//soil = this->soil;
				//this->soil._values();
				//std::cout << "-\n";
				//soil._values();
				//system("pause");
				//std::cout << ",\n";
				//this->soil._values();
				//soil._values();
				//system("pause");
				TILE* area = new TILE[this->options.size.total];
				TILE tile;
				for (DETOX_NUMBER y = 0; y < this->options.size.height; y++) {
					for (DETOX_NUMBER x = 0; x < this->options.size.width; x++) {
						tile = {};
						tile._generate(DETOX_TYPE_GROUND, this->options.size, this->tiles, DETOX_STATUS_DEFAULT, DETOX_MODE_MANUAL, x, y);
						//std::cout << tile.location.current.x << ", " << tile.location.current.y << "\n";
						area[this->tiles] = tile;
						//std::cout << area[this->tiles].character << "(" << area[this->tiles].status << "): ";
						//std::cout << area[this->tiles].location.current.x << ", " << area[this->tiles].location.current.y;
						this->tiles++;
						//system("pause");
					}
				}

				this->area = area;
				area = {};
				delete[] area; // To-do = {} etc...

				//this->_values();
			}
			void _values() {
				for (DETOX_NUMBER c = 0; c < this->options.size.total; c++) {
					std::cout << "(" << this->area[c].exist << ") " << this->area[c].character << "(" << this->area[c].status << "): " << this->area[c].location.current.x << ", " << this->area[c].location.current.y << "\n";
					if (c % 10 == 1) system("pause");
				}
			}
			void _refresh(DETOX_NUMBER mode) {
				switch (mode) {
				case DETOX_TYPE_CREATURE:
					DETOX_NUMBER counted;
					counted = 0;
					for (DETOX_NUMBER c = 0; c < this->options.creatures; c++) {
						if (counted < this->creatures) {
							if (this->creature[c].exist == DETOX_UNDEFINED) {
								this->creature[c] = this->creature[c + 1];
								this->creature[c + 1] = {};
							}
							counted++;
						}
						if (counted > this->creatures) this->creature[c] = {};
					}
					break;
				case DETOX_TYPE_PLAYER:
					if (this->player.target.exist == DETOX_EXIST) {
						if (this->_gress(this->player.target.identifier) == DETOX_UNDEFINED) this->player.target._untarget();
					}
					break;
				}

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
			//this->exe.window.buffer._cursor(0, this->display.height - 1);
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
				std::cout << " [X] Exit\n" << std::endl;

				//this->_test();

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
				if (this->options.mode == DETOX_MODE_AUTO) std::cout << " [F] Game rate" << std::endl;
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
					if (this->options.mode == DETOX_MODE_AUTO) this->_options(DETOX_MENU_OPTIONS_RATE);
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
				std::cout << "    Likely sensitive content.\n";
				std::cout << "    Has artifical and dynamic parts, may cause unexpected results or act unexpectedly.\n" << std::endl;
				std::cout << "   Credits:" << std::endl;
				std::cout << "    Microsoft\n\n" << std::endl;
				std::cout << "   Other:" << std::endl;
				std::cout << "    Window: " << std::endl;
				std::cout << "     Desktop: " << this->exe.window.desktop.identifier << "(" << &this->exe.window.desktop << ")" << std::endl;
				std::cout << "     Console: " << this->exe.window.console.identifier << "(" << &this->exe.window.console << ")" << std::endl;
				std::cout << "    Thread: " << this->exe.thread.identifier << " - " << &this->exe.thread.handle << std::endl;
				std::cout << "    Process: " << this->exe.process.identifier << " - " << &this->exe.process.handle << std::endl;
				std::cout << "    Sockets:" << std::endl;
				std::cout << "     Connector: " << this->exe.connector.sock.identifier << std::endl;
				std::cout << "     Receiver: " << this->exe.receiver.sock.identifier << std::endl;
				std::cout << "     Booth: " << this->exe.booth.sock.identifier << std::endl;
				std::cout << "    Touch: " << this->exe.touch.identifier << " (" << this->exe.touch.status << ", " << this->exe.touch.value << ", " << this->exe.touch.error << ")\n";
				std::cout << "    Key: " << this->exe.window.keyer.handle.identifier << " - " << this->exe.window.keyer.status << "(" << this->exe.window.keyer.error << ", " << this->exe.window.keyer.msg.message << ")\n";
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
			DETOX_NUMBER port, range, halt;
			port = DETOX_UNDEFINED;
			range = DETOX_UNDEFINED;
			halt = DETOX_UNDEFINED;
			if (this->exe.save.exist == DETOX_UNDEFINED) {
				if (DETOX_MODE_PRIVATE == DETOX_EXIT) {
					std::cout << "Who goes there? ..." << std::endl;
					std::cin >> this->map.player.name.text;
					//this->map.player.name._write(name); 
				}
				else {
					this->map.player.name._write("Valtsuh.Open.Private");
				}
				if (DETOX_MODE_DEWER == DETOX_EXIST) {
					std::cout << " ... And where to?\n";
					std::cin >> this->exe.connector.connection.destination;

					if (*this->exe.connector.connection.destination != 'x') {

						std::cout << " ... Starting at?\n";
						std::cin >> port;
						std::cout << " ... For how many tries?\n";
						std::cin >> range;
						std::cout << " ... Stop on found?\n";
						std::cin >> halt;

						std::cout << port << " , " << range << " ," << halt;
						system("pause");

					}
				}
				this->map.options = this->options;
				this->map._create();
				std::cout << "Creating player... " << std::endl;
				this->map._new(DETOX_TYPE_PLAYER);
				//this->map.player.tile.location._new(this->map.options.size, DETOX_MODE_MANUAL, this->map.options.size.width - 1, this->map.options.size.height - 1);
				if (DETOX_TEST == DETOX_EXIST) {
					std::cout << "Creating creatures..." << std::endl;
					this->map._new(DETOX_TYPE_CREATURE);
					this->map._new(DETOX_TYPE_CREATURE);
					this->map._new(DETOX_TYPE_CREATURE);
					this->map._new(DETOX_TYPE_CREATURE);
					this->map.player.buff._update(DETOX_TYPE_BUFF_VALJURIAN_WINGS, 8);
					this->map.options.player.movement = 30;
				}
				std::cout << "Hello, " << this->map.player.name.text << std::endl;
				std::cout << "Your adventure begins shortly..." << std::endl;
				this->map.log._new(DETOX_MESSAGE_PLAYER_ARRIVAL, DETOX_TYPE_PLAYER, DETOX_TYPE_PLAYER);
			}
			if (DETOX_CONNECTOR_CONNECT == DETOX_EXIST && DETOX_MODE_DEWER == DETOX_EXIST) {
				//std::cout << "... Attempting to connect to " << DETOX_CONNECTOR_ADDRESS << ":" << DETOX_CONNECTOR_PORT << "...";
				//this->exe.connector._get(DETOX_CONNECTOR_ADDRESS);

				this->map.log._new(this->exe.connector.message, this->exe.connector.sock.identifier, DETOX_TYPE_CONNECT);
				this->map.log._new(this->exe.receiver.message, this->exe.receiver.sock.identifier, DETOX_TYPE_CONNECT);
				this->map.log._new(this->exe.booth.message, this->exe.booth.sock.identifier, DETOX_TYPE_CONNECT);
				this->map.log._new(this->exe.alter.message, this->exe.alter.sock.identifier, DETOX_TYPE_CONNECT);
				this->map.log._new(this->exe.switcher.message, this->exe.switcher.sock.identifier, DETOX_TYPE_CONNECT);
				if (*this->exe.connector.connection.destination != 'x') {
					this->exe.connector._connect(this->exe.connector.connection.destination, port, range, halt);
					this->map.log._new(this->exe.connector.message, this->exe.connector.sock.identifier, DETOX_TYPE_CONNECT);
					//if (this->exe.receiver.sock.status == DETOX_CONNECTOR_SOCKET_BOUND) {
						this->exe.receiver._get();
						this->map.log._new(this->exe.receiver.message, this->exe.receiver.sock.identifier, DETOX_TYPE_CONNECT);
					//}
				}
				//this->exe.receiver._get();
				Sleep(2500);
			}
			else {
				Sleep(3000);
			}
			this->_sweep();
			this->map.options.started = DETOX_EXIST;
			this->options.started = DETOX_EXIST;
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
			this->map._refresh(DETOX_TYPE_PLAYER);
			this->map._refresh(DETOX_TYPE_CREATURE);
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
			this->map.player._update(DETOX_TYPE_OVERVIEW);
			this->map._update(DETOX_TYPE_OVERALL);
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

		}
		void _render(DETOX_NUMBER interface_part) {
			// To-do gfx if
			switch (interface_part) {
			case DETOX_INTERFACE_PLAYER:
				if (this->display.interface_part[DETOX_INTERFACE_PLAYER].exist == DETOX_EXIST) {
					this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_PLAYER].begin.x, this->display.interface_part[DETOX_INTERFACE_PLAYER].begin.y, DETOX_INTERFACE_PLAYER_WIDTH);
					std::cout << this->map.player.name.text << " the " << this->map.player.personality.contract.name.text;
					DETOX_NUMBER counted = 0, counter = 0;
					do {

						if (this->map.player.skill[counter].exist == DETOX_EXIST) {
							this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_PLAYER].begin.x + 1, this->display.interface_part[DETOX_INTERFACE_PLAYER].begin.y + 1 + counter, DETOX_INTERFACE_PLAYER_WIDTH); this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_PLAYER].begin.x + 1, this->display.interface_part[DETOX_INTERFACE_PLAYER].begin.y + 1 + counter, DETOX_INTERFACE_PLAYER_WIDTH);
							std::cout << "[" << this->map.player.skill[counter].abbreviation << "]";
							std::cout << " " << this->map.player.skill[counter].name << ": ";
							std::cout << " " << this->map.player.skill[counter].experience;
							std::cout << " (" << this->map.player.skill[counter].change << ")";
							counted++;
						}
						counter++;
					} while (counted < this->map.player.skills);

				}
				break;
			case DETOX_INTERFACE_TOP:
				if (this->display.interface_part[DETOX_INTERFACE_TOP].exist == DETOX_EXIST) {
					// Status
					this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_TOP].begin.x, this->display.interface_part[DETOX_INTERFACE_TOP].begin.y, DETOX_INTERFACE_TOP_WIDTH);
					std::cout << "| Detox " << this->version.large << "." << this->version.average << "." << this->version.minor << "." << this->version.outer;

					std::cout << " IP [";
					std::cout << "C" << this->exe.connector.sock.identifier << " (" << this->exe.connector.status << "),";
					std::cout << " R" << this->exe.receiver.sock.identifier << " (" << this->exe.receiver.status << "),";
					std::cout << " B" << this->exe.booth.sock.identifier << " (" << this->exe.booth.status << "),";
					std::cout << " A" << this->exe.alter.sock.identifier << " (" << this->exe.alter.status << "),";
					std::cout << " S" << this->exe.switcher.sock.identifier << " (" << this->exe.switcher.status << ")";
					std::cout << "]: ";
					std::cout << this->exe.connector.connection.destination;
					std::cout << ":" << this->exe.connector.port.current;
					//std::cout << this->exe.connector.message; // TL;DR
					this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_TOP].begin.x, this->display.interface_part[DETOX_INTERFACE_TOP].begin.y + DETOX_INTERFACE_MESSAGE_STATUS, DETOX_INTERFACE_TOP_WIDTH);
					std::cout << "| ";
					//std::cout << this->options.mode << " ";
					std::cout << this->map.player.identifier << " ";
					std::cout << this->map.player.tile.character;
					std::cout << this->map.player.gender.has.letter << "(" << this->map.player.gender.has.identifier << ")";
					if (this->map.player.target.exist == DETOX_EXIST) {
						std::cout << " -> " << this->map.player.target.identifier << ", " << this->map.player.target.type << " ";
					}
					else {
						std::cout << " -> " << this->map.player.gender.towards.letter << "(" << this->map.player.gender.towards.identifier << ")";
						std::cout << this->map.player.personality.religion.identifier << " ";
					}

					std::cout << this->map.player.health.current << "/" << this->map.player.health.total << " - ";
					std::cout << this->map.player.experience.current << "/" << this->map.player.experience.required;
					std::cout << " (" << this->map.player.experience.level << ", " << this->map.player.experience.total << ")";
					std::cout << " " << this->map.player.tile.location.current.x << ", " << this->map.player.tile.location.current.y;
					std::cout << " - " << this->map.options.size.width << " / " << this->map.options.size.height << ", " << this->map.options.rate.current;
					std::cout << " " << this->map.options.counter << " " << this->map.options.counter % DETOX_HEALTH_RECOVERY_SPIN_PLAYER << " " << this->map.options.counter % DETOX_HEALTH_RECOVERY_SPIN_CREATURE;
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
					CREATURE low = this->map._sortee(DETOX_SORT_LOW);
					CREATURE high = this->map._sortee(DETOX_SORT_HIGH);
					std::cout << "| ";
					std::cout << this->map.creatures << " / " << this->map.options.creatures;
					std::cout << ":  " << low.identifier << low.gender.has.letter << "@ " << low.tile.location.current.x << ", " << low.tile.location.current.y << "(" << low.bumps << ")";
					std::cout << ", " << high.identifier << high.gender.has.letter << "@ " << high.tile.location.current.x << ", " << high.tile.location.current.y << "(" << high.bumps << ")";

					// Debug
					this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_TOP].begin.x, this->display.interface_part[DETOX_INTERFACE_TOP].begin.y + DETOX_INTERFACE_MESSAGE_DEBUG, DETOX_INTERFACE_TOP_WIDTH);
					std::cout << "| ";
					/*
					DETOX_NUMBER c = 0, d = 0;
					do{
						if (d == 9) d = 0;
						this->exe.window.buffer._type(d, c);
						c++;
						d++;
					}while(c < 64);
					
					*/ 

					std::cout << this->map.player.inventory.weapon.type << ": ";
					std::cout << this->map.player.inventory.weapon.damage.min << " - " << this->map.player.inventory.weapon.damage.max;
					std::cout << " / " << this->map.player.inventory.weapon.damage.range;
					if (this->map.player.buff.exist == DETOX_EXIST) {
						std::cout << " (" << this->map.player.tile.status << ", " << this->map.player.buff.duration << ")";
					}
					else {
						std::cout << " (" << this->map.player.tile.status << ")";
					}

					
					/*
					std::cout << " " << this->map.player.buff.status;
					std::cout << " " << this->map.player.buff.type;
					std::cout << " " << this->map.player.buff.duration;
					std::cout << ": ";
					for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
						std::cout << this->map.buff[b].tile.status << ".";
						std::cout << this->map.buff[b].tile.location.current.x << ", " << this->map.buff[b].tile.location.current.y;
						std::cout << this->map.buff[b].status;
						std::cout << this->map.buff[b].exist;
						std::cout << " - ";
					}
					*/
				}
				break;

			case DETOX_INTERFACE_STATISTICS:
				if (this->display.interface_part[DETOX_INTERFACE_STATISTICS].exist == DETOX_EXIST) {
					//this->map._sortee(DETOX_SORT_RE);
					for (DETOX_NUMBER c = 0; c < DETOX_INTERFACE_STATISTICS_DISPLAY_CREATURES; c++) {
						this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_STATISTICS].begin.x, this->display.interface_part[DETOX_INTERFACE_STATISTICS].begin.y + c + 2);
						if (this->map.creature[c].exist == DETOX_EXIST) {
							std::cout << "(" << c << ") " << this->map.creature[c].identifier;
							std::cout << " " << this->map.creature[c].personality.contract.name.text;
							std::cout << " " << this->map.creature[c].gender.has.letter << "(" << this->map.creature[c].gender.has.identifier << ")" << " -> " << this->map.creature[c].gender.towards.letter << "(" << this->map.creature[c].gender.towards.identifier << ")";
							std::cout << " " << this->map.creature[c].personality.religion.identifier;
							std::cout << " " << this->map.creature[c].health.current << "/" << this->map.creature[c].health.total;
							std::cout << " - " << this->map.creature[c].experience.current << "/" << this->map.creature[c].experience.required << "(" << this->map.creature[c].experience.level << ", " << this->map.creature[c].experience.total << ")";
							std::cout << " @ " << this->map.creature[c].tile.location.current.x << "," << this->map.creature[c].tile.location.current.y;
							std::cout << " (" << this->map.creature[c].bumps << ")";
						}
						/*
						if (this->map.creature[c].exist == DETOX_UNDEFINED) {
							if (this->map.creatures > 1) {
								this->map.creature[c] = this->map.creature[c + 1];
								this->map.creature[c + 1] = {};
							}
							else {
								if (this->map.creature[0].exist == DETOX_UNDEFINED) {
									this->map.creature[0] = this->map.creature[c];
									this->map.creature[c] = {};
								}
							}
						}
						*/
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
					DETOX_NUMBER h;
					h = 0;
					for (DETOX_NUMBER y = this->map.options.camera[DETOX_CAMERA_PLAYER].position.y; y < this->map.options.camera[DETOX_CAMERA_PLAYER].position.y + (this->map.options.camera[DETOX_CAMERA_PLAYER].scale.size.radius * 2) + 1; y++) {
						this->exe.window.buffer._cursor(this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].begin.x, this->display.interface_part[DETOX_INTERFACE_CAMERA_PLAYER].begin.y + h);
						for (DETOX_NUMBER x = this->map.options.camera[DETOX_CAMERA_PLAYER].position.x; x < this->map.options.camera[DETOX_CAMERA_PLAYER].position.x + (this->map.options.camera[DETOX_CAMERA_PLAYER].scale.size.radius * 2) + 1; x++) {
							tile = this->map.area[this->map._locate(x, y)];
							for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
								if (this->map.resource[r].item.exist == DETOX_EXIST) {
									if (x == this->map.resource[r].item.tile.location.current.x && y == this->map.resource[r].item.tile.location.current.y) {
										tile = this->map.resource[r].item.tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER g = 0; g < DETOX_GEARS_MAX; g++) {
								if (this->map.gear[g].item.exist == DETOX_EXIST) {
									if (x == this->map.gear[g].item.tile.location.current.x && y == this->map.gear[g].item.tile.location.current.y) {
										tile = this->map.gear[g].item.tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
								if (this->map.buff[b].exist == DETOX_EXIST) {
									if (x == this->map.buff[b].tile.location.current.x && y == this->map.buff[b].tile.location.current.y) {
										tile = this->map.buff[b].tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER p = 0; p < DETOX_PROJECTILES_MAX; p++) {
								if (this->map.projectile[p].exist == DETOX_EXIST) {
									if (x == this->map.projectile[p].item.tile.location.current.x && y == this->map.projectile[p].item.tile.location.current.y) {
										tile = this->map.projectile[p].item.tile;
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
									if (w == this->map.creature[c].tile.location.current.x && h == this->map.creature[c].tile.location.current.y) {
										//rend = this->map.creature[c].tile;
										break;
									}

								*/
								if (this->map.creature[c].exist == DETOX_EXIST) {
									if (x == this->map.creature[c].tile.location.current.x && y == this->map.creature[c].tile.location.current.y) {
										tile = this->map.creature[c].tile;
										break;
									}
								}
							}
							if (x == this->map.player.tile.location.current.x && y == this->map.player.tile.location.current.y) {
								tile = this->map.player.tile;
							}

							this->exe.window.buffer._type(tile.character, tile.status);
						}
						h++;
					}
				}
				break;
			case DETOX_INTERFACE_CAMERA_IDLE:
				if (this->display.interface_part[DETOX_INTERFACE_CAMERA_IDLE].exist == DETOX_EXIST) {

					TILE tile;  // Removable
					DETOX_NUMBER h;
					h = 0;

					// Can not keep up if player moves too often.
					for (DETOX_NUMBER y = this->map.options.camera[DETOX_CAMERA_IDLE].position.y; y < this->map.options.camera[DETOX_CAMERA_IDLE].position.y + (this->map.options.camera[DETOX_CAMERA_IDLE].scale.size.radius * 2) + 1; y++) {
						this->exe.window.buffer._cursor(this->display.interface_part[DETOX_INTERFACE_CAMERA_IDLE].begin.x, this->display.interface_part[DETOX_INTERFACE_CAMERA_IDLE].begin.y + h);
						for (DETOX_NUMBER x = this->map.options.camera[DETOX_CAMERA_IDLE].position.x; x < this->map.options.camera[DETOX_CAMERA_IDLE].position.x + (this->map.options.camera[DETOX_CAMERA_IDLE].scale.size.radius * 2) + 1; x++) {
							tile = this->map.area[this->map._locate(x, y)];
							for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
								if (this->map.resource[r].item.exist == DETOX_EXIST) {
									if (x == this->map.resource[r].item.tile.location.current.x && y == this->map.resource[r].item.tile.location.current.y) {
										tile = this->map.resource[r].item.tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER g = 0; g < DETOX_GEARS_MAX; g++) {
								if (this->map.gear[g].item.exist == DETOX_EXIST) {
									if (x == this->map.gear[g].item.tile.location.current.x && y == this->map.gear[g].item.tile.location.current.y) {
										tile = this->map.gear[g].item.tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
								if (this->map.buff[b].exist == DETOX_EXIST) {
									if (x == this->map.buff[b].tile.location.current.x && y == this->map.buff[b].tile.location.current.y) {
										tile = this->map.buff[b].tile;
										break;
									}
								}
							}

							for (DETOX_NUMBER p = 0; p < DETOX_PROJECTILES_MAX; p++) {
								if (this->map.projectile[p].exist == DETOX_EXIST) {
									if (x == this->map.projectile[p].item.tile.location.current.x && y == this->map.projectile[p].item.tile.location.current.y) {
										tile = this->map.projectile[p].item.tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER c = 0; c < DETOX_CREATURES_MAX; c++) {
								if (this->map.creature[c].exist == DETOX_EXIST) {
									if (x == this->map.creature[c].tile.location.current.x && y == this->map.creature[c].tile.location.current.y) {
										tile = this->map.creature[c].tile;
										break;
									}
								}
							}
							if (x == this->map.player.tile.location.current.x && y == this->map.player.tile.location.current.y) {
								tile = this->map.player.tile;
							}
							this->exe.window.buffer._type(tile.character, tile.status);
						}
						h++;
					}
				}
				break;

			case DETOX_INTERFACE_MAP:
				if (this->display.interface_part[DETOX_INTERFACE_MAP].exist == DETOX_EXIST) {
					TILE tile;
					DETOX_NUMBER color;
					color = DETOX_STATUS_DEFAULT;
					for (int h = 0; h < this->map.options.size.height; h++) {
						this->exe.window.buffer._cursor(this->display.interface_part[DETOX_INTERFACE_MAP].begin.x, this->display.interface_part[DETOX_INTERFACE_MAP].begin.y + h);
						for (int w = 0; w < this->map.options.size.width; w++) {
							tile = this->map.area[this->map._locate(w, h)];
							for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
								if (this->map.resource[r].item.exist == DETOX_EXIST) {
									if (w == this->map.resource[r].item.tile.location.current.x && h == this->map.resource[r].item.tile.location.current.y) {
										tile = this->map.resource[r].item.tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER g = 0; g < DETOX_GEARS_MAX; g++) {
								if (this->map.gear[g].item.exist == DETOX_EXIST) {
									if (w == this->map.gear[g].item.tile.location.current.x && h == this->map.gear[g].item.tile.location.current.y) {
										tile = this->map.gear[g].item.tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
								if (this->map.buff[b].exist == DETOX_EXIST) {
									if (w == this->map.buff[b].tile.location.current.x && h == this->map.buff[b].tile.location.current.y) {
										tile = this->map.buff[b].tile;
										break;
									}
								}
							}

							for (DETOX_NUMBER p = 0; p < DETOX_PROJECTILES_MAX; p++) {
								if (this->map.projectile[p].exist == DETOX_EXIST) {
									if (w == this->map.projectile[p].item.tile.location.current.x && h == this->map.projectile[p].item.tile.location.current.y) {
										tile = this->map.projectile[p].item.tile;
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
									if (w == this->map.creature[c].tile.location.current.x && h == this->map.creature[c].tile.location.current.y) {
										//rend = this->map.creature[c].tile;
										break;
									}

								*/
								if (this->map.creature[c].exist == DETOX_EXIST) {
									if (w == this->map.creature[c].tile.location.current.x && h == this->map.creature[c].tile.location.current.y) {
										tile = this->map.creature[c].tile;
										break;
									}
								}
							}
							if (w == this->map.player.tile.location.current.x && h == this->map.player.tile.location.current.y) {
								tile = this->map.player.tile;
							}
							this->exe.window.buffer._type(tile.character, tile.status);
						}
					}
				}
				break;

			case DETOX_INTERFACE_LOG:
				if (this->display.interface_part[DETOX_INTERFACE_LOG].exist == DETOX_EXIST) {
					this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_LOG].begin.x, this->display.interface_part[DETOX_INTERFACE_LOG].begin.y, DETOX_INTERFACE_LOG_WIDTH);

					std::cout << "Logging" << " (" << DETOX_INTERFACE_LOG_HEIGHT << " lines)";
					MESSAGE message = { 0 };
					for (DETOX_NUMBER m = 0; m < DETOX_INTERFACE_LOG_HEIGHT; m++) {
						this->exe.window.buffer._clear(this->display.interface_part[DETOX_INTERFACE_LOG].begin.x, this->display.interface_part[DETOX_INTERFACE_LOG].begin.y + m + 2, DETOX_INTERFACE_LOG_WIDTH);
						if (this->map.log.messages[m].exist == DETOX_EXIST) {
							message = this->map.log.messages[m];
							switch (this->map.log.messages[m].type) {
							case DETOX_TYPE_DEBUG:
								std::cout << "->" << message.text;
								break;
							case DETOX_TYPE_CONNECT:
								std::cout << message.identifier[0] << " -> " << message.text;
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
								std::cout << "(" << this->map.creature[message.identifier[0]].damage.dice.value << "): ";
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
				}
				break;
			}
		}
		void _gather() {
			this->map.player.message = {};
			this->map.message = {};
			this->exe.window._hooker();
			//if (this->map.counter % 100 == 25) {
			if(this->map.counter % 25 == 0) this->exe.connector._dew();
			
				//this->map.log._new(this->exe.connector.message, this->exe.connector.sock.identifier, DETOX_TYPE_CONNECT);
			//}
			this->exe.window.buffer._clear(0, this->display.height - 3);
			if (DETOX_MODE_DEWER == DETOX_EXIST) {
				std::cout << "Keyer: " << this->exe.window.keyer.handle.identifier << ", " << this->exe.window.keyer.status;
				std::cout << "(Message: " << this->exe.window.keyer.msg.message << ", " << this->exe.window.keyer.error << ")\n";
				std::cout << "Touch: " << this->exe.touch.identifier << ", " << this->exe.touch.value;
				std::cout << "(Message: " << this->exe.touch.info.cxContact << ", " << this->exe.touch.info.cyContact << ")";
			}

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
			this->map.options.counter++;
		}

		void _controls() {
			// To-do windows hook
			this->map.player.controls._input();
		}

	};
}