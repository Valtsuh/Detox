
#define DETOX_DATABASE														0

#define DETOX_DATABASE_UNDEFINED											-1
// #define ONE 1 | 49 | '1' / {1, 49, '1'} Mmmh.
#define DETOX_DATABASE_BUTTONS												{49 | '1', 50 | '2', 51 | '3', 52 | '4', 97 | 'a', 98 | 'b', 99 | 'c', 100 | 'd', 102 | 'f', 109 | 'm', 113 | 'q', 117 | 'u', 118 | 'v', 120 | 'x'}
#define DETOX_DATABASE_NUMERICS												{-1, {0, 48, '0', 1}, {1, 49, '1', 1}, {2, 50, '2', 1}, {3, 51, '3', 1}, {4, 52, '4', 1}, {5, 53, '5', 1}, {6, 54, '6', 1}, {7, 55, '7', 1}, {8, 56, '8', 1}, {9, 57, '9', 1}}

#define DETOX_DATABASE_EMPTY
#define DETOX_DATABASE_WINDOW												{0.01}
#define DETOX_DATABASE_WINDOW_DESKTOP										{0.011}
#define DETOX_DATABASE_WINDOW_CONSOLE										{0.012}

#define DETOX_DATABASE_DEFAULT_LENGTH_MESSAGE								64
#define DETOX_DATABASE_DEFAULT_LENGTH_TIME									16
#define DETOX_DATABASE_DEFAULT_LENGTH_BASIS									16 // Message line



#define DETOX_DATABASE_STATUS												{0.1}
#define DETOX_DATABASE_STATUS_RESULT										{0.11, 0}
#define DETOX_DATABASE_STATUS_FETCH											{0.12, 0.05}
#define DETOX_DATABASE_STATUS_COMPLETE										{0.13, 0.1}

#define DETOX_DATABASE_OPTIONS												{0.2, DETOX_DATABASE_UNDEFINED}
#define DETOX_DATABASE_OPTIONS_SIZE											{0.21, 117} // id, button
#define DETOX_DATABASE_OPTIONS_SIZE_TINY									{0.211, 49, 1, 16, 8} // id, button, w, h, value
#define DETOX_DATABASE_OPTIONS_SIZE_SMALL									{0.212, 50, 2, 32, 16}
#define DETOX_DATABASE_OPTIONS_SIZE_AVERAGE									{0.213, 51, 3, 48, 24}
#define DETOX_DATABASE_OPTIONS_SIZE_LARGE									{0.214, 52, 4, 64, 32}
#define DETOX_DATABASE_OPTIONS_SIZE_DEFAULT									DETOX_DATABASE_OPTIONS_SIZE_SMALL

#define DETOX_DATABASE_OPTIONS_VIEW											{0.22, 99}
#define DETOX_DATABASE_OPTIONS_VIEW_WHOLE									{0.221, 49, 1} // id, button, value
#define DETOX_DATABASE_OPTIONS_VIEW_CAMERA									{0.222, 50, 2}
//#define DETOX_DATABASE_OPTIONS_VIEW_CAMERA_SIZE

#define DETOX_DATABASE_OPTIONS_MODE											{0.23, 109}
#define DETOX_DATABASE_OPTIONS_MODE_AUTO									{0.231, 49}
#define DETOX_DATABASE_OPTIONS_MODE_MANUAL									{0.232, 50}
#define DETOX_DATABASE_OPTIONS_MODE_NOMINAL									{0.233, 51}

#define DETOX_DATABASE_OPTIONS_CREATURES									{0.24, 100}
#define DETOX_DATABASE_OPTIONS_CREATURES_VERY_FEW							{0.241, 49, 4}
#define DETOX_DATABASE_OPTIONS_CREATURES_FEW								{0.242, 50, 8}
#define DETOX_DATABASE_OPTIONS_CREATURES_MODERATELY							{0.243, 51, 12}
#define DETOX_DATABASE_OPTIONS_CREATURES_MUCH								{0.244, 52, 16}
#define DETOX_DATABASE_OPTIONS_CREATURES_VERY_MUCH							{0.245, 53, 20}

#define DETOX_DATABASE_OPTIONS_RATE											{0.25, 102}
#define DETOX_DATABASE_OPTIONS_RATE_VERY_SLOW								{0.251, 49, 10000.0000f}
#define DETOX_DATABASE_OPTIONS_RATE_SLOW									{0.252, 50, 5000.0000f}
#define DETOX_DATABASE_OPTIONS_RATE_AVERAGE									{0.253, 51, 2500.0000f}
#define DETOX_DATABASE_OPTIONS_RATE_FAST									{0.254, 52, 1000.0000f}
#define DETOX_DATABASE_OPTIONS_RATE_VERY_FAST								{0.255, 53, 500.0000f}

#define DETOX_DATABASE_INTERFACE											{0.3, }
#define DETOX_DATABASE_INTERFACE_CONFIG										{0.31, {0,0,0,0}}
#define DETOX_DATABASE_INTERFACE_TOP										{0.32, DETOX_DATABASE_DEFAULT_LENGTH_MESSAGE, 6} // identifier, width, height (lines)
#define DETOX_DATABASE_INTERFACE_MAP										{0.33, DETOX_DATABASE_OPTIONS_SIZE_DEFAULT}
#define DETOX_DATABASE_INTERFACE_STATISTICS									{0.34, DETOX_DATABASE_DEFAULT_LENGTH_MESSAGE, 8, 5} // identifier, width, height, creatures to display
#define DETOX_DATABASE_INTERFACE_INVENTORY									{0.35, 8, 5} // identifier, width, height (item, amount, space, item, amount in rows)
#define DETOX_DATABASE_INTERFACE_LOG										{0.36, 64 + 16 + 16, 16}
#define DETOX_DATABASE_INTERFACE_PLAYER										{0.37, 64 } // skill lines?
#define DETOX_DATABASE_INTERFACE_CAMERA										{0.38}
#define DETOX_DATABASE_INTERFACE_CAMERA_PLAYER								{0.381}
#define DETOX_DATABASE_INTERFACE_CAMERA_IDLE								{0.382}
#define DETOX_DATABASE_INTERFACE_CAMERA_RANDOM								{0.383}

#define DETOX_DATABASE_MENU													{0.4, DETOX_DATABASE_UNDEFINED}
#define DETOX_DATABASE_MENU_BEGIN											{0.41, 113}
#define DETOX_DATABASE_MENU_OPTIONS											{0.42, 99}
#define DETOX_DATABASE_MENU_OPTIONS_SIZE									DETOX_DATABASE_OPTIONS_SIZE
#define DETOX_DATABASE_MENU_OPTIONS_VIEW									DETOX_DATABASE_OPTIONS_VIEW
#define DETOX_DATABASE_MENU_OPTIONS_MODE									DETOX_DATABASE_OPTIONS_MODE
#define DETOX_DATABASE_MENU_OPTIONS_CREATURES								DETOX_DATABASE_OPTIONS_CREATURES
#define DETOX_DATABAES_MENU_CREATOR											{0.43, 118}
#define DETOX_DATABASE_MENU_EXIT											{0.44, 120}

#define DETOX_DATABSAE_MESSAGE												{}
#define DETOX_DATABASE_MESSAGE_PLAYER										{}
#define DETOX_DATABASE_MESSAGE_PLAYER_UP									{, "You try to move up."}
#define DETOX_DATABASE_MESSAGE_PLAYER_DOWN									{, "You slide a bit down."}
#define DETOX_DATABASE_MESSAGE_PLAYER_LEFT									{, "You attempt to the left."}
#define DETOX_DATABASE_MESSAGE_PLAYER_RIGHT									{, "You move to the right."}
#define DETOX_DATABASE_MESSAGE_PLAYER_COLLISION								{}
#define DETOX_DATABASE_MESSAGE_PLAYER_COLLISION_CREATURE					{, "You bumped into a creature."}
#define DETOX_DATABASE_MESSAGE_PLAYER_ATTACK								{, "You damaged the creature for "}
#define DETOX_DATABASE_MESSAGE_PLAYER_DEFEATED								{, "You defeated the creature."}
#define DETOX_DATABASE_MESSAGE_CREATURE										{}
#define DETOX_DATABASE_MESSAGE_CREATURE_COLLISION							{}
#define DETOX_DATABASE_MESSAGE_CREATURE_COLLISION_PLAYER					{, "Creature bumped into you."}
#define DETOX_DATABASE_MESSAGE_CREATURE_COLLISION_CREATURE					{, "Creatures bumped into each other."}
#define DETOX_DATABASE_MESSAGE_CREATURE_APPEARANCE							{, "A mysterious creature has appeared."}
#define DETOX_DATABASE_MESSAGE_CREATURE_FRIENDLY							{, "Creature lets you move close, seems friendly."}
#define DETOX_DATABASE_MESSAGE_CREATURE_UNFRIENDLY							{, "Creature stares ominously at you."}
#define DETOX_DATABASE_MESSAGE_CREATURE_UNDECISIVE							{, "Creature wonders around."}
#define DETOX_DATABASE_MESSAGE_CREATURE_ATTACK								{, "Creature damaged for "}
#define DETOX_DATABASE_MESSAGE_CREATURE_DEFEATED							{, "Creature defeated."}
#define DETOX_DATABASE_MESSAGE_NOTICE										{}
#define DETOX_DATABASE_MESSAGE_NOTICE_DISTANCE								{, "You notice something at the distance."}
#define DETOX_DATABASE_MESSAGE_RESOURCE										{}
#define DETOX_DATABASE_MESSAGE_RESOURCE_PLANT								{}
#define DETOX_DATABASE_MESSAGE_RESOURCE_PLANT_NOTICE						{, "You notice a little plant growing."}
#define DETOX_DATABASE_MESSAGE_RESOURCE_PREPAREMENT							{}
#define DETOX_DATABASE_MESSAGE_RESOURCE_PREPAREMENT_NOTICE					{, "A helpful looking sight."}
#define DETOX_DATABASE_MESSAGE_RESOURCE_REFRESHMENT							{}
#define DETOX_DATABASE_MESSAGE_RESOURCE_REFRESHMENT_NOTICE					{, "A delight at a distance."}
#define DETOX_DATABASE_MESSAGE_GEAR											{}
#define DETOX_DATABASE_MESSAGE_GEAR_OFFENSIVE								{}
#define DETOX_DATABASE_MESSAGE_GEAR_DEFENSIVE								{}
#define DETOX_DATABASE_MESSAGE_BUFF											{}
#define DETOX_DATABASE_MESSAGE_BUFF_AVAILABLE								{, "You devel towards a buff"}
#define DETOX_DATABASE_MESSAGE_BUFF_VALJURIAN_WINGS							{, "Wings gained."}
#define DETOX_DATABASE_MESSAGE_BUFF_WAVY_LENGTHS							{, "Gains increased."}
#define DETOX_DATABASE_MESSAGE_SKILL										{}
#define DETOX_DATABASE_MESSAGE_BATTLE										{}
#define DETOX_DATABASE_MESSAGE_OTHER										{}
#define DETOX_DATABASE_MESSAGE_OTHER_POOR									{, "Very poorly treated, -ADT -END +TDG"}
#define DETOX_DATABASE_MESSAGE_OTHER_SENSE									{, "You sensed something."}
#define DETOX_DATABASE_MESSAGE_ERROR										{}
#define DETOX_DATABASE_MESSAGE_CONNECTION									{}

#define DETOX_DATABASE_DICE													{0.00001}
#define DETOX_DATABASE_DICE_MOVEMENT										{0.000011}
#define DETOX_DATABASE_DICE_MOVEMENT_PLAYER									{0.0000111}
#define DETOX_DATABASE_DICE_MOVEMENT_PLAYER_TINY							{0.00001111, 0, 54}
#define DETOX_DATABASE_DICE_MOVEMENT_PLAYER_SMALL							{0.00001111, 0, 46}
#define DETOX_DATABASE_DICE_MOVEMENT_PLAYER_AVERAGE							{0.00001111, 0, 38}
#define DETOX_DATABASE_DICE_MOVEMENT_PLAYER_LARGE							{0.00001111, 0, 30}
#define DETOX_DATABASE_DICE_ATTACK											{0.000012}
#define DETOX_DATABASE_DICE_ATTACK_PLAYER									{0.0000121, 0, 35}
#define DETOX_DATABASE_DICE_EVENT											{0.000013}
#define DETOX_DATABASE_DICE_EVENT_PLAYER									{0.0000131, 0, 75}
#define DETOX_DATABASE_DICE_EVENT_CREATURE									{0.0000132, 0, 100}
#define DETOX_DATABASE_DICE_APPEARANCE										{0.000014}
#define DETOX_DATABASE_DICE_APPEARANCE_RESOURCE								{0.0000141, 0, 10}
#define DETOX_DATABASE_DICE_APPEARANCE_CREATURE								{0.0000142, 0, 50}
#define DETOX_DATABASE_DICE_APPEARANCE_BUFF									{0.0000143, 0, 100}

#define DETOX_DATABASE_TERRAIN												{0.0001}
#define DETOX_DATABASE_TERRAIN_GROUND										{0.00011, 7, '.'}
#define DETOX_DATABASE_TERRAIN_SOIL											{0.00012, 8, '.' }
#define DETOX_DATABASE_TERRAIN_MUD											{0.00013, 6, '.'}
#define DETOX_DATABASE_TERRAIN_GRASS										{0.00014, 2, ','}
#define DETOX_DATABASE_TERRAIN_WATER										{0.00015, 9, '.'}

#define DETOX_DATABASE_ITEM													{0.0002}
#define DETOX_DATABASE_ITEM_RESOURCE										{0.00021}
#define DETOX_DATABASE_ITEM_RESOURCE_SOIL									{0.000211, DETOX_DATABASE_TERRAIN_SOIL};
#define DETOX_DATABASE_ITEM_RESOURCE_PLANT									{0.000212, DETOX_DATABASE_TERRAIN_PLANT}
#define DETOX_DATABASE_ITEM_RESOURCE_REFRESHMENT							{0.000213, '*'}
#define DETOX_DATABASE_ITEM_RESOURCE_PREPAREMENT							{0.000214, '='}
#define DETOX_DATABASE_ITEM_RESOURCE_CURRENCY								{0.000215, '+'}
#define DETOX_DATABASE_ITEM_MATERIAL										{0.00022}
#define DETOX_DATABASE_ITEM_MATERIAL_CLOTH									{0.000221, '-'}
#define DETOX_DATABASE_ITEM_GEAR											{0.00023}
#define DETOX_DATABASE_ITEM_GEAR_OFFENSIVE									{0.000231}
//#define DETOX_DATABASE_ITEM_GEAR_OFFENSIVE_
#define DETOX_DATABASE_ITEM_GEAR_OFFENSIVE_SHURIKEN							{0.0002311, 'x', 5, 1} // ranged, single, finite use
#define DETOX_DATABASE_ITEM_GEAR_OFFENSIVE_BOOMERANG						{0.0002312, 'c', 5, 1} // ranged, single, infinite use
#define DETOX_DATABASE_ITEM_GEAR_OFFENSIVE_DOMERANG							{0.0002313, 'C', 5, 2} // ranged, aoe, infinite use
#define DETOX_DATABASE_ITEM_GEAR_DEFENSIVE									{0.000232}

#define DETOX_DATABASE_BUFF													{0.0003}
#define DETOX_DATABASE_BUFF_VALJURIAN_WINGS								/	{0.00031, '!', 8, 1, "Wavy Lengths", "Wings gained"}
#define DETOX_DATABASE_BUFF_WAVY_LENGTHS									{0.00032, '!', 8, 2, "Valjurian Wings", "Gains increased"}

#define DETOX_DATABASE_DEBUFF												{0.0004}


#define DETOX_DATABASE_SKILL												{, 0.000127f, 0.0003f, 0.000001f} // identifier, gain, boost, modifier
#define DETOX_DATABASE_SKILL_VELOCITY										{}
#define DETOX_DATABASE_SKILL_ENDURANCE										{}
#define DETOX_DATABASE_SKILL_TRADING										{}
#define DETOX_DATABASE_SKILL_COOKING										{}
#define DETOX_DATABASE_SKILL_ADAPTING										{, 25, {7,4,6,9}} // identifier, chance, statuses
#define DETOX_DATABASE_SKILL_FARMING										{, 25}
#define DETOX_DATABASE_SKILL_SALVAGING										{} // wreckages
#define DETOX_DATABASE_SKILL_SCRAPPING										{}

#define DETOX_DATABASE_ABILITY												{ }

#define DETOX_DATABASE_SEX													{}
#define DETOX_DATABASE_RELIGION												{}
#define DETOX_DATABASE_RACE													{}
#define DETOX_DATABASE_CONTRACT												{0.0004}
#define DETOX_DATABASE_CONTRACT_BOSS										{0.000401 , "Boss"}
#define DETOX_DATABASE_CONTRACT_MERCHANT									{0.000402 , "Merchant"}
#define DETOX_DATABASE_CONTRACT_TAILOR										{0.000403 , "Tailor"}
#define DETOX_DATABASE_CONTRACT_TOURIST										{0.000404 , "Tourist"}
#define DETOX_DATABASE_CONTRACT_SCIENTIST									{0.000405 , "Scientist"}
#define DETOX_DATABASE_CONTRACT_PHILOSOPHER									{0.000406 , "Philosopher"}
#define DETOX_DATABASE_CONTRACT_DEVELOPER									{0.000407 , "Developer"}
#define DETOX_DATABASE_CONTRACT_REGULAR										{0.000408 , "Regular"}
#define DETOX_DATABASE_CONTRACT_SURVIVALIST									{0.000409 , "Survivalist"}

#define DETOX_DATABASE_ERROR												{}

#define DETOX_DATABASE_GROUND												{0.001, 7}
#define DETOX_DATABASE_GROUND_SOIL											{0.0011f, 3}
#define DETOX_DATABASE_GROUND_MUD											{0.0012f, 4}

#define DETOX_DATABASE_FREQUENCY
#define DETOX_DATABASE_FREQUENCY_BOOTH										250
#define DETOX_DATABASE_FREQUENCY_RECEIVER									123
#define DETOX_DATABASE_FREQUENCY_CONNECTOR									125
#define DETOX_DATABASE_FREQUENCY_ALTER										333
#define DETOX_DATABASE_FREQUENCY_SWITCHER									325

#define DETOX_DATABASE_CONNECTION_LOCALHOST									{0.005, "127.0.0.1", 135};
#define DETOX_DATABASE_CONNECTION_BLUETOOTH_TEMP							{0.006, "41:42:dd:94:d5:00", -1}

#define DETOX_TEST										DETOX_EXIT

/*
*	*constructora = {0, {0,0,0,0}}
	template <typename TYPE>
	COSNTRUCTORA(TYPE a, CONSTRUCTORB){
		template <typename TYPE>
		COSNTRUCTORB(TYPE a, TYPE b, TYPE c, TYPE d){
		}
	}

*/