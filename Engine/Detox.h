// #define DETOX // To-do
#define DETOX_VAR
#define DETOX_OVERING_SPACE								"       "
#define DETOX_DEFAULT_TITLE								L"Detoxing"
#define DETOX_UNDEFINED									-1
#define DETOX_EXIT										0
#define DETOX_EXIST										1
#define DETOX_WINDOW_CHARACTERS							8
#define DETOX_WINDOW_PIXELS								16
#define DETOX_TEST										7
#define DETOX_ATTEMPTS									4
#define DETOX_ERROR_EXIT								5
#define DETOX_RUN										DETOX_EXIST

#define DETOX_MENU										DETOX_EXIST
#define DETOX_MENU_BEGIN								113		// Q
#define DETOX_MENU_OPTIONS								99		// C

#define DETOX_MENU_OPTIONS_SIZE							117		// U
#define DETOX_MENU_OPTIONS_SIZE_SMALL					49		// 1
#define DETOX_OPTION_SMALL								1
#define DETOX_OPTION_SMALL_WIDTH						16
#define DETOX_OPTION_SMALL_HEIGHT						8

#define DETOX_MENU_OPTIONS_SIZE_AVERAGE					50		// 2
#define DETOX_OPTION_AVERAGE							2
#define DETOX_OPTION_AVERAGE_WIDTH						32
#define DETOX_OPTION_AVERAGE_HEIGHT						16

#define DETOX_MENU_OPTIONS_SIZE_LARGE					51		// 3
#define DETOX_OPTION_LARGE								3
#define DETOX_OPTION_LARGE_WIDTH						64
#define DETOX_OPTION_LARGE_HEIGHT						32

#define DETOX_OPTIONS_SIZE_DEFAULT						DETOX_OPTION_SMALL

#define DETOX_MENU_OPTIONS_MODE							109		// M
#define DETOX_MENU_OPTIONS_MODE_AUTO					49
#define DETOX_MENU_OPTIONS_MODE_MANUAL					50
#define DETOX_MENU_BACK									98		// B
#define DETOX_MENU_CREATOR								118		// V
#define DETOX_MENU_EXIT									120		// X

#define DETOX_MENU_OPTIONS_CREATURE						100		// D
#define DETOX_MENU_OPTIONS_CREATURES_VERY_FEW			49
#define DETOX_MENU_OPTIONS_CREATURES_FEW				50
#define DETOX_MENU_OPTIONS_CREATURES_MODERATELY			51
#define DETOX_MENU_OPTIONS_CREATURES_MUCH				52
#define DETOX_MENU_OPTIONS_CREATURES_VERY_MUCH			53

#define DETOX_MENU_OPTIONS_RATE							102		// F
#define DETOX_MENU_OPTIONS_RATE_VERY_SLOW				49
#define DETOX_MENU_OPTIONS_RATE_SLOW					50
#define DETOX_MENU_OPTIONS_RATE_AVERAGE					51
#define DETOX_MENU_OPTIONS_RATE_FAST					52
#define DETOX_MENU_OPTIONS_RATE_VERY_FAST				53

#define DETOX_PLAYER_NAME_LENGTH						24
#define DETOX_PLAYER_IDENTIFIER							-1
#define DETOX_PLAYER_STATUS_DEFAULT						7
#define DETOX_PLAYER_SKILLS								8
#define DETOX_PLAYER_CREATURE_COLLISION_MOVE_CHANCE		8
#define DETOX_PLAYER_SPEED								50

#define DETOX_CREATURES									20
#define DETOX_CREATURES_MAX								8
#define DETOX_CREATURE_APPEARANCE_CHANCE				100
#define DETOX_CREATURES_DEFAULT							0
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

#define DETOX_BUFFS										2
#define DETOX_BUFFS_MAX									2
#define DETOX_BUFF_APPEARANCE_CHANCE					100
#define DETOX_BUFF_NAME_LENGTH							32
#define DETOX_BUFF_BASE_DURATION						8
#define DETOX_BUFF_BASE_DURATION_APPEARANCE				25
#define DETOX_BUFF_VALJURIAN_WINGS						1 // Subjective to change
#define DETOX_BUFF_VALJURIAN_WINGS_EFFECT				0.1f
#define DETOX_BUFF_WAVY_LENGTHS							2
#define DETOX_BUFF_WAVY_LENGTHS_EFFECT					0.000075f

#define DETOX_RESOURCES_MAX								8

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
#define DETOX_COLLISION_CREATURE_LOSS					0.000751f // 0.00171f
#define DETOX_COLLISION_CREATURE_NORTH					2
#define DETOX_COLLISION_CREAUTRE_SOUTH					3
#define DETOX_COLLISION_CREATURE_WEST					4
#define DETOX_COLLISION_CREATURE_EAST					5
#define DETOX_COLLISION_RESOURCE						4
#define DETOX_COLLISION_RESOURCE_PLANT					40
#define DETOX_COLLISION_RESOURCE_CURRENCY				41
#define DETOX_COLLISION_OVER							-1
#define DETOX_COLLISION_SWEEP							-2

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
#define DETOX_MESSAGE_RESOURCE_PLANT_NOTICE				"You notice a little plant growing"
#define DETOX_MESSAGE_RESOURCE_CURRENCY_NOTICE			"Something glaring at the distance" // Likely to change
#define DETOX_MESSAGE_RESOURCE_PREPAREMENT_NOTICE		"A helpful looking sight" // Likely to change
#define DETOX_MESSAGE_RESOURCE_AVAILABLE				"You vale towards something"
#define DETOX_MESSAGE_CREATURE_APPEARANCE				"A mysterious creature has appeared"
#define DETOX_MESSAGE_CREATURE_COLLISION				"You bumped into a creature."
#define DETOX_MESSAGE_CREATURE_COLLIDED					"Creature bumped into player."
#define DETOX_MESSAGE_CREATURE_FRIENDLY					"Creatures lets you move close, seems friendly"
#define DETOX_MESSAGE_CREATURE_UNFRIENDLY				"Creature stares ominously at you"
#define DETOX_MESSAGE_CREATURE_UNDECISIVE				"Creature wonders around"
#define DETOX_MESSAGE_ENDURANCE_FELL					"Creature got to bit, Endurance fell"			//
#define DETOX_MESSAGE_ENDURANCE_GAINED					"Very sustainable, Endurance gained"			//
#define DETOX_MESSAGE_ENDURANCE_FLOW					"Current went through you, Endurance refreshed" // Max 32 width
#define DETOX_MESSAGE_ENDURANCE_SELF					"A moment to rest, Endurance recovered"			// Max 24 width
#define DETOX_MESSAGE_ENDURANCE_PICKUP					""
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
#define DETOX_MESSAGE_ADAPTING_SUCCESS					"You got a scent, Adapting succeeded"
#define DETOX_MESSAGE_ADAPTING_FAILED					"Creature murred ominously, Adapting failed"
#define DETOX_MESSAGE_ADAPTING_FELL						"Rarely bumped to any creatures, Adapting fell"
#define DETOX_MESSAGE_ADAPTING_CREATURE					"Creature attempted adapting"			
#define DETOX_MESSAGE_CKG_TDG_SELF						"Self sufficient, Cooking and Trading gained"	//
#define DETOX_MESSAGE_FARMING_SUCCEEDED					"Handled some plants, Farming rose"
#define DETOX_MESSAGE_FARMING_FAILED					"Plant got damaged, Farming fell"
#define DETOX_MESSAGE_FARMING_PICKUP					"Picked up some plants, Farming grewth"
#define DETOX_MESSAGE_LENGTH							64

#define DETOX_INTERFACE									0
#define DETOX_INTERFACE_PADDING							2
#define DETOX_INTERFACE_GAME							0

#define DETOX_INTERFACE_MESSAGE_STATUS					1
#define DETOX_INTERFACE_MESSAGE_PLAYER					2
#define DETOX_INTERFACE_MESSAGE_MAP						3
#define DETOX_INTERFACE_MESSAGE_CREATURE				4
#define DETOX_INTERFACE_MESSAGE_DEBUG					5
#define DETOX_INTERFACE_MESSAGE_LINES					5

#define DETOX_INTERFACE_DEBUG							-1

#define DETOX_INTERFACE_TOP								1
#define DETOX_INTERFACE_TOP_WIDTH						64
#define DETOX_INTERFACE_TOP_HEIGHT						DETOX_INTERFACE_MESSAGE_LINES + 1

#define DETOX_INTERFACE_MAP								2
#define DETOX_INTERFACE_MAP_DEFAULT_WIDTH				16
#define DETOX_INTERFACE_MAP_DEFAULT_HEIGHT				8

#define DETOX_INTERFACE_STATISTICS						3
#define DETOX_INTERFACE_STATISTICS_WIDTH				64
#define DETOX_INTERFACE_STATISTICS_HEIGHT				8
#define DETOX_INTERFACE_STATISTICS_DISPLAY_CREATURES	5

#define DETOX_INTERFACE_INVENTORY						4
#define DETOX_INTERFACE_INVENTORY_WIDTH					8
#define DETOX_INTERFACE_INVENTORY_HEIGHT				4

#define DETOX_INTERFACE_LOG								5
#define DETOX_INTERFACE_LOG_WIDTH						64
#define DETOX_INTERFACE_LOG_HEIGHT						16
#define DETOX_INTERFACE_LOG_UP							-1
#define DETOX_INTERFACE_LOG_DOWN						1

#define DETOX_INTERFACE_PLAYER							6
#define DETOX_INTERFACE_PLAYER_WIDTH					64
#define DETOX_INTERFACE_PLAYER_HEIGHT					8

#define DETOX_INTERFACE_PARTS							7
#define DETOX_INTERFACE_ADDITIONAL_WIDTH				8
#define DETOX_INTERFACE_ADDITIONAL_HEIGHT				8


#define DETOX_MAP_TILE_GROUND							0
#define DETOX_MAP_TILE_PLAYER							1
#define DETOX_MAP_TILE_CREATURE							2
#define DETOX_MAP_TILE_PLANT							3
#define DETOX_MAP_TILE_BUFF								4

#define DETOX_RESOURCE_DEFAULT							7

#define DETOX_TYPE_OVERALL								-2
#define DETOX_TYPE_EVENT								-1
#define DETOX_TYPE_PLAYER								0
#define DETOX_TYPE_CREATURE								1
#define DETOX_TYPE_RESOURCE								2
#define DETOX_TYPE_RESOURCE_PLANT						20
#define DETOX_TYPE_RESOURCE_PLANT_CHARACTER				','
#define DETOX_TYPE_RESOURCE_CURRENCY					21
#define DETOX_TYPE_RESOURCE_CURRENCY_CHARACTER			'+'
#define DETOX_TYPE_RESOURCE_PREPAREMENT					22
#define DETOX_TYPE_RESOURCE_PREPAREMENT_CHARACTER		'='
#define DETOX_TYPE_GROUND								3
#define DETOX_TYPE_BUFF									4
#define DETOX_TYPE_SKILL								5
#define DETOX_TYPE_SEX									6
#define DETOX_TYPE_SEX_FEMALE							61
#define DETOX_TYPE_SEX_MALE								62
#define DETOX_TYPE_SEX_NONE								63
#define DETOX_TYPE_SEX_OTHER							64
#define DETOX_TYPE_RELIGION								7
#define DETOX_TYPE_RELIGION_NONE						71
#define DETOX_TYPE_RELIGION_SELF						72
#define DETOX_TYPE_RELIGION_OTHER						73
#define DETOX_TYPE_RELIGION_JEWISH						74
#define DETOX_TYPE_RELIGION_ATHEIST						75
#define DETOX_TYPE_RELIGION_BUDDHIST					76
#define DETOX_TYPE_RELIGION_CHRISTIAN					77
#define DETOX_TYPE_RELIGION_ORTHODOX					78
#define DETOX_TYPE_RELIGION_HINDUIST					79
#define DETOX_TYPE_


#define DETOX_INVENTORY_SLOTS							4

#define DETOX_MODE_DEFAULT								0
#define DETOX_MODE_AUTO									1
#define DETOX_MODE_MANUAL								2
#define DETOX_MODE_RANDOM								3
#define DETOX_MODE_UNDEFINED							4


#define DETOX_STATUS_DEFAULT							7
#define DETOX_STATUS_INVENTORY_UNVISIBLE				8

#define DETOX_SORT_LOW									-1
#define DETOX_SORT_HIGH									1

#define DETOX_DICE_DEFAULT								100
#define DETOX_DICE_BUFF									25
#define DETOX_DICE_PLAYER_MOVEMENT						50
#define DETOX_DICE_COLLIDED								100
#define DETOX_DICE_NON_COLLIDED							600

#define DETOX_TITLE_LENGTH								32
#define DETOX_NAME_LENGTH								8
#define DETOX_LOG_MESSAGE_LENGTH						DETOX_INTERFACE_LOG_WIDTH
#define DETOX_LETTERS									"ABCDEFGHIJKLMNOPQRSTUVWXYZ"

#define DETOX_MODE_PRIVATE								DETOX_EXIT

#ifdef DETOX_RUN // To-do, #define *_*
#define _X86_
// Development increments
#include <iostream>
#include <processenv.h>
#include <consoleapi3.h>
#include <consoleapi2.h>
#include <winuser.h>
#include <processthreadsapi.h>
#include <synchapi.h>
#include <errhandlingapi.h>
#define DETOX_MAIN int main
#else
#include <windows.h>
#define DETOX_MAIN int __stdcall WinMain
#endif

typedef int DETOX_NUMBER; // dbr / DBR, essentially would represent a number and behave similarly to int
typedef char DETOX_TILE;
typedef float DETOX_DECIMAL;
namespace detox {
	class DBR { // To-do, proper value handling
		template <typename DETOX_VALUE>
		DETOX_VALUE _value(DBR value) {
			return this;
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
	class DETOX_DUAL { // To-do
	public:
		int width;
		int height;
	};
	class DETOX_RANDOM {
	public:
		int value;
		DETOX_RANDOM _init() {
			srand((unsigned int)time(NULL));// Note to myself: Makes sense
			return *this;
		}
		DETOX_RANDOM _self() {
			DETOX_RANDOM rdx = { 0 };
			this->value = rand();
			std::cout << this->value << " " << rdx.value << std::endl;
			if (this->value != rdx.value) {
				this->value = rdx.value;
				return *this;
			}
			else {
				this->_self();
			}
		}
	};;
	struct DETOX_POSITION {
		DETOX_NUMBER x, y;
	};
	struct DETOX_TITLE {
		DETOX_NUMBER length = 0;
		wchar_t value[DETOX_TITLE_LENGTH];
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
		DETOX_NUMBER identifier, priority;
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
	struct DETOX_EXECUTABLE {
		DETOX_PROCESS process;
		DETOX_THREAD thread;
		DETOX_NUMBER exist, debugging;
		DETOX_TITLE title;

		void _write(const wchar_t text[]) {
			do {
				this->title.value[this->title.length] = text[this->title.length];
				this->title.length++;
				if (this->title.length > DETOX_TITLE_LENGTH) {
					std::cout << "Failed at [DETOX_TITLE], title length too long." << std::endl;
					throw 0;
				}
			} while (text[this->title.length] != '\0');
		}

		DETOX_EXECUTABLE _get() {
			this->thread._needle();
			this->process._puzzle();
			this->exist = DETOX_EXIST;
			this->debugging = DETOX_DEBUGGING;
			return *this;
		}
	};
	class DETOX {
		HANDLE inputBufferHandle, outputBufferHandle, createdBufferHandle, currentBufferHandle;
		HWND console, window, desktop;
		DETOX_DUAL bufferSize; // to-do-test ... (?)
		int counter;
	public:
		struct VERSION {
			DETOX_NUMBER large, average, small, outer;
			DETOX_TITLE title;
			VERSION _self(DETOX_NUMBER large, DETOX_NUMBER average, DETOX_NUMBER small, DETOX_NUMBER outer) {
				this->large = large;
				this->average = average;
				this->small = small;
				this->outer = outer;
				return *this;
			}
		};
		struct BUFFER { // To-do
			int length;
			char value[8];
			CONSOLE_SCREEN_BUFFER_INFO info;
			BOOL gsSuccess;

			COORD cursor;
			HANDLE currentHandle;
			BUFFER _cursor(int x = -1, int y = -1) {
				if (x >= 0) this->cursor.X = x;
				if (y >= 0) this->cursor.Y = y;

				SetConsoleCursorPosition(this->currentHandle, this->cursor);
				return *this;
			}
			BUFFER _self() {
				this->length = 0;
				this->currentHandle = GetStdHandle(-11);
				this->cursor.X = 0;
				this->cursor.Y = 0;
				SetConsoleActiveScreenBuffer(this->currentHandle);
				this->gsSuccess = GetConsoleScreenBufferInfo(this->currentHandle, &this->info);
				if (this->gsSuccess == 0) {
					std::cout << "Failed at [BUFFER]" << std::endl;
					throw 0;
				}
				return *this;
			}
			BUFFER _set(HANDLE newHandle) {
				if (!this->length) this->_self();
				this->currentHandle = newHandle;
				BOOL setHandle;
				setHandle = SetConsoleActiveScreenBuffer(newHandle);
				if (setHandle != 0) {
					return *this;
				}
				else if (setHandle == 0 && this->length < DETOX_ATTEMPTS) {
					this->length++;
					this->_set(newHandle);
					return *this;
				}
				else {
					this->currentHandle = GetStdHandle(-11); // Returns to default output buffer, after some attempts.
					return *this;
				}
			}
		};
		struct SIZE {
			DETOX_NUMBER mode, width, height;
			void _set(DETOX_NUMBER option = DETOX_OPTIONS_SIZE_DEFAULT) {
				switch (option) {
				default:
					this->width = DETOX_OPTION_SMALL_WIDTH;
					this->height = DETOX_OPTION_SMALL_HEIGHT;
					this->mode = DETOX_OPTION_SMALL;
					break;
				case DETOX_OPTION_SMALL:
					this->width = DETOX_OPTION_SMALL_WIDTH;
					this->height = DETOX_OPTION_SMALL_HEIGHT;
					this->mode = DETOX_OPTION_SMALL;
					break;
				case DETOX_OPTION_AVERAGE:
					this->width = DETOX_OPTION_AVERAGE_WIDTH;
					this->height = DETOX_OPTION_AVERAGE_HEIGHT;
					this->mode = DETOX_OPTION_AVERAGE;
					break;
				case DETOX_OPTION_LARGE:
					this->width = DETOX_OPTION_LARGE_WIDTH;
					this->height = DETOX_OPTION_LARGE_HEIGHT;
					this->mode = DETOX_OPTION_LARGE;
					break;
				}
			}
		};
		struct LOCATION {
			DETOX_POSITION from, current, to;

			LOCATION _new(SIZE size, DETOX_NUMBER mode = DETOX_UNDEFINED, DETOX_NUMBER x = -1, DETOX_NUMBER y = -1) {
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
				return *this;
			}
			LOCATION _halt() {
				this->current.x = this->from.x;
				this->current.y = this->from.y;
				this->to.x = this->from.x;
				this->to.y = this->from.y;
				return *this;
			}
			LOCATION _advance() {
				this->from.x = this->current.x;
				this->from.y = this->current.y;
				this->current.x = this->to.x;
				this->current.y = this->to.y;
				return *this;
			}
			LOCATION _towards(LOCATION to) {
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
				return *this;
			}
			LOCATION _up() {
				this->from.y = this->current.y;
				this->to.y = this->current.y - 1;
				return *this;
			}
			LOCATION _down() {
				this->from.y = this->current.y;
				this->to.y = this->current.y + 1;
				return *this;
			}
			LOCATION _left() {
				this->from.x = this->current.x;
				this->to.x = this->current.x - 1;
				return *this;
			}
			LOCATION _right() {
				this->from.x = this->current.x;
				this->to.x = this->current.x + 1;
				return *this;
			}
			LOCATION _disappear() {
				this->from.x = this->current.x;
				this->from.y = this->current.y;
				this->current.x = -1;
				this->current.y = -1;
				this->to.x = this->current.x;
				this->to.y = this->current.y;
				return *this;
			}
		};
		struct TILE {
			DETOX_NUMBER exist, status, identifier, type;
			LOCATION location;
			DETOX_TILE character;

			void _disappear() {
				this->exist = DETOX_EXIT;
				this->status = DETOX_UNDEFINED;
				this->identifier = DETOX_UNDEFINED;
				this->type = DETOX_UNDEFINED;
				this->location = this->location._disappear();
				this->character = '.';
			}
			TILE _init(SIZE size) {
				this->exist = DETOX_EXIST;
				this->status = DETOX_STATUS_DEFAULT;
				this->identifier = DETOX_UNDEFINED;
				this->location = this->location._new(size, DETOX_UNDEFINED);
				this->type = DETOX_UNDEFINED;
				this->character = '.';
			}
			TILE _new(DETOX_NUMBER type, DETOX_NUMBER identifier, SIZE size, DETOX_NUMBER status = DETOX_STATUS_DEFAULT) {
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
				case DETOX_TYPE_RESOURCE_PLANT:
					this->character = DETOX_TYPE_RESOURCE_PLANT_CHARACTER;
					break;
				case DETOX_TYPE_RESOURCE_CURRENCY:
					this->character = DETOX_TYPE_RESOURCE_CURRENCY_CHARACTER;
					break;
				case DETOX_TYPE_BUFF:
					this->character = '!';
					break;
				}
				this->identifier = identifier;
				this->location = this->location._new(size, DETOX_MODE_RANDOM); // To-do, redundant
				this->type = type;
				this->status = status;

				if (this->exist != DETOX_EXIST) this->exist = DETOX_EXIST;
				return *this;
			}
			TILE _update() {
				return *this;
			}
		};
		struct PADDING {
			DETOX_NUMBER top = 0, bottom = 0, left = 0, right = 0;
		};
		struct INTERFACE {
			DETOX_NUMBER x = 0, y = 0, width = 0, height = 0, identifier = DETOX_UNDEFINED, exist = DETOX_UNDEFINED;
			PADDING padding;
			void _position(DETOX_NUMBER identifier, DETOX_NUMBER x, DETOX_NUMBER y, DETOX_NUMBER width, DETOX_NUMBER height) {
				this->x = x;
				this->y = y;
				this->width = width + this->padding.left + this->padding.right;
				this->height = height + this->padding.top + this->padding.bottom;
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
			INTERFACE interface[DETOX_INTERFACE_PARTS]; // menu ... ?
			DETOX_NUMBER x = 0, y = 0, width = 0, height = 0;

			void _set(DETOX_NUMBER identifier, DETOX_NUMBER x, DETOX_NUMBER y, DETOX_NUMBER width, DETOX_NUMBER height) {
				this->interface[identifier]._position(identifier, x, y, width, height);
				if (y == 0) {
					if (this->width == 0 || this->width < width) {
						this->width = this->interface[identifier].width;
					}
					else {
						this->width += this->interface[identifier].width;
					}
				}
				else {
				}
				if (x == 0) {
					this->height += this->interface[identifier].height;
				}
			}
		};
		struct STYLE {// Interface to-do
			DETOX_NUMBER version;
		};
		struct RATE {
			DETOX_DECIMAL base, current;

			DETOX_DECIMAL _update(DETOX_DECIMAL modifier = -0.0) {
				DETOX_DECIMAL rate = 0.0;
				return rate;
			}
		};
		struct OPTIONS {
			DETOX_NUMBER mode, creatures, buffs, resources;
			char selection;
			char input;
			INTERFACE interface;
			RATE rate;

			void _select(char msg[]) {
				this->selection = msg[0];
			}
			void _default() {
				this->mode = DETOX_MODE_AUTO;
				this->creatures = 8;
				this->buffs = 0;
				this->resources = 0;
			}
		};
		struct DICE {
			int value;
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
			char value[DETOX_NAME_LENGTH];
			DICE dice;
			DETOX_NUMBER length = 0, letters = 0;
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
			DETOX_NUMBER identifier = DETOX_UNDEFINED;
			DICE dice;
			char sign = 'c';
			void _decide(DETOX_NUMBER mode = DETOX_MODE_AUTO, DETOX_NUMBER identifier = DETOX_UNDEFINED) {
				switch (mode) {
				case DETOX_MODE_AUTO:
					this->dice._roll(61,64);
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
				}
			}
		};
		struct RELIGION {
			DETOX_NUMBER identifier = DETOX_UNDEFINED;
			DICE dice;
			void _decide(DETOX_NUMBER identifier = DETOX_UNDEFINED) {
				switch (identifier) {
				case DETOX_UNDEFINED:
					this->dice._roll(71, 73);
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
		struct PERSONALITY {
			RELIGION religion;

			void _personalize() {
				if (DETOX_MODE_PRIVATE == DETOX_EXIST) {
					this->religion._decide(DETOX_TYPE_RELIGION_SELF);
				}
				else {
					this->religion._decide();
				}
			}
		};
		struct SKILL
		{
			char name[DETOX_SKILL_NAME_LENGTH];
			char abbreviation[3];
			int identifier, counter, exist;
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
			SKILL _self(const char name[], int identifier, const char abbreviation[]) {
				for (int i = 0; i < DETOX_SKILL_NAME_LENGTH; i++) {
					this->name[i] = name[i];
				}
				for (int i = 0; i < 3; i++) {
					this->abbreviation[i] = abbreviation[i];
				}
				this->identifier = identifier;
				this->experience = 0;
				this->exist = DETOX_EXIST;
				return *this;
			}
		};
		struct ABILITY {

		};
		struct BUFF { // Subjective to change
			char name[DETOX_BUFF_NAME_LENGTH], character = '!';
			DETOX_NUMBER type, status, exists = DETOX_EXIT, duration = 0;
			DICE dice;
			TILE tile;
			void _appear(SIZE size, DETOX_NUMBER identifier) {
				this->dice._roll(0, DETOX_DICE_DEFAULT);
				switch (this->dice.value) {
				case DETOX_BUFF_VALJURIAN_WINGS:
					this->type = DETOX_BUFF_VALJURIAN_WINGS;
					break;
				case DETOX_BUFF_WAVY_LENGTHS:
					this->type = DETOX_BUFF_WAVY_LENGTHS;
					break;
				}
				this->exists = DETOX_EXIST;
				this->duration = DETOX_BUFF_BASE_DURATION_APPEARANCE;
				this->tile._new(DETOX_TYPE_BUFF, identifier, size);
			}
			void _over() {
				this->tile._disappear();
				this->exists = DETOX_EXIT;
				this->status = DETOX_EXIT;
			}
			void _update(DETOX_NUMBER type = DETOX_UNDEFINED, DETOX_NUMBER duration = DETOX_UNDEFINED) {
				switch (type) {
				default:
					break;
				case DETOX_BUFF_VALJURIAN_WINGS:
					if (duration == DETOX_UNDEFINED) this->duration -= 1; else this->duration = duration;
					break;
				}
				if (this->duration == 0) {
					this->type = DETOX_UNDEFINED;
					this->exists = DETOX_EXIT;
				}
				this->type = type;
			}
		};
		struct MESSAGE {
			char text[DETOX_MESSAGE_LENGTH];
			DETOX_POSITION position;
			DETOX_NUMBER type, identifier, exist = DETOX_UNDEFINED;
		};
		struct LOG {
			MESSAGE messages[DETOX_INTERFACE_LOG_HEIGHT];
			void _message(const char msg[], DETOX_NUMBER identifier = DETOX_UNDEFINED, DETOX_NUMBER type = DETOX_UNDEFINED) {
				this->_shift(DETOX_INTERFACE_LOG_DOWN);
				for (DETOX_NUMBER m = 0; m < DETOX_INTERFACE_LOG_WIDTH; m++) {
					this->messages[0].text[m] = msg[m];
				}
				this->messages[0].position.y = 0;
				this->messages[0].identifier = identifier;
				this->messages[0].type = type;
				this->messages[0].exist = DETOX_EXIST;
			}
			
			void _shift(DETOX_NUMBER direction = DETOX_UNDEFINED) {
				switch (direction) {
				case DETOX_INTERFACE_LOG_UP:
					for (DETOX_NUMBER m = 0; m < DETOX_INTERFACE_LOG_HEIGHT; m++) {
						this->messages[m] = this->messages[m + 1]; // Untested
					}
					break;
				case DETOX_INTERFACE_LOG_DOWN:
					for (DETOX_NUMBER m = DETOX_INTERFACE_LOG_HEIGHT; m > 0; m--) {
						this->messages[m] = this->messages[m - 1];
					}
					break;
				}
			}


		};
		struct RESOURCE {
			TILE tile;
			DETOX_NUMBER visible, amount, status, exists, type;
			DICE dice;
			RESOURCE _new(DETOX_NUMBER type, DETOX_NUMBER identifier, SIZE size) {
				this->tile.location = this->tile.location._new(size, DETOX_MODE_RANDOM);
				this->dice._roll(1, 2);
				this->amount = this->dice.value;
				this->status = DETOX_RESOURCE_DEFAULT;
				this->exists = DETOX_EXIST;
				this->type = type;
				this->tile._new(this->type, identifier, size);
				return *this;
			}
			void _over() {
				this->tile._disappear();
				this->exists = DETOX_EXIT;
				this->status = DETOX_EXIT;
			}
			void _add(DETOX_NUMBER type, DETOX_NUMBER amount = 0) {
				this->amount = amount;
				this->status = DETOX_RESOURCE_DEFAULT;
				this->exists = DETOX_EXIST;
				this->type = type;
				switch (this->type) {
				case DETOX_TYPE_RESOURCE_PLANT:
					this->tile.character = DETOX_TYPE_RESOURCE_PLANT_CHARACTER;
					break;
				case DETOX_TYPE_RESOURCE_CURRENCY:
					this->tile.character = DETOX_TYPE_RESOURCE_CURRENCY_CHARACTER;
					break;
				case DETOX_TYPE_RESOURCE_PREPAREMENT:
					this->tile.character = DETOX_TYPE_RESOURCE_PREPAREMENT_CHARACTER;
					break;
				}
				this->tile.status = DETOX_RESOURCE_DEFAULT;
			}
		};
		struct INVENTORY {
			DETOX_NUMBER slots = 0;
			RESOURCE items[DETOX_INVENTORY_SLOTS];

			void _organize(DETOX_NUMBER item = DETOX_UNDEFINED) {
				this->slots += 1;
				if (item != DETOX_UNDEFINED) {
					this->items[this->slots]._add(item);
				}
			}

		};
		struct COLLISION {
			DETOX_NUMBER identifier = DETOX_UNDEFINED, collided = DETOX_NO_COLLISION, value = DETOX_UNDEFINED;
			LOCATION location;
			COLLISION _update(DETOX_POSITION position, DETOX_NUMBER collision, DETOX_NUMBER identifier, DETOX_NUMBER value = 0) {
				this->collided = collision;
				this->identifier = identifier; // -1 player, >= 0 creature, >= 0 buffs (?)
				this->location.current.x = position.x; // Position of collision
				this->location.current.y = position.y;
				this->value = value;
				return *this;
			}

		};
		struct CREATURE {
			TILE tile;
			RESOURCE currency;
			char name[DETOX_CREATURE_NAME_LENGTH];
			SEX gender;
			PERSONALITY personality;
			char message[DETOX_MESSAGE_LENGTH];
			DETOX_NUMBER exists, identifier, order, status = DETOX_SKILL_ADAPTING_NEUTRAL;
			DETOX_DECIMAL bumps = 0.0;
			COLLISION collision;
			DICE dice;
			SKILL skills[DETOX_CREATURE_SKILLS];
			INTERFACE interface;
			CREATURE _self() {
				return *this;
			}
			CREATURE _new(DETOX_NUMBER type, DETOX_NUMBER identifier, SIZE size) {
				this->tile = this->tile._new(type, identifier, size);
				this->dice._roll(0,3);
				if (DETOX_MODE_PRIVATE == DETOX_EXIST) {
					this->gender._decide(DETOX_MODE_MANUAL, DETOX_TYPE_SEX_FEMALE);
				}
				else {
					this->gender._decide();
				}
				this->personality._personalize();
				this->exists = DETOX_EXIST;

				//this->skills[DETOX_SKILL_ENDURANCE]._self("Endurance", DETOX_SKILL_ENDURANCE); // To-do, messes up map

				return *this;
			}
			void _message(const char msg[]) {
				for (int i = 0; i < DETOX_MESSAGE_LENGTH; i++) {
					if (msg[i] == '\0') break;
					this->message[i] = msg[i];
				}
			}
		};
		struct PLAYER {
			TILE tile;
			char name[DETOX_PLAYER_NAME_LENGTH];
			char message[DETOX_MESSAGE_LENGTH];
			SEX gender;
			PERSONALITY personality;
			INVENTORY inventory;
			DETOX_NUMBER bumps, status = DETOX_PLAYER_STATUS_DEFAULT;
			COLLISION collision;
			DICE dice;
			BUFF buff;
			SKILL skills[DETOX_PLAYER_SKILLS];
			PLAYER _name(char name[]) {
				for (int i = 0; i < DETOX_PLAYER_NAME_LENGTH; i++) {
					if (i > DETOX_PLAYER_NAME_LENGTH) {
						std::cout << "Given name too long" << std::endl;
						throw 0;
						break;
					}
					this->name[i] = name[i];
				}
				return *this;
			}
			PLAYER _self(SIZE size) {
				this->tile._new(DETOX_TYPE_PLAYER, DETOX_EXIST, size);
				this->skills[DETOX_SKILL_VELOCITY]._self("Velocity", DETOX_SKILL_VELOCITY, "VEL");
				this->skills[DETOX_SKILL_ENDURANCE]._self("Endurance", DETOX_SKILL_ENDURANCE, "END");
				this->skills[DETOX_SKILL_TRADING]._self("Trading", DETOX_SKILL_TRADING, "TDG");
				this->skills[DETOX_SKILL_COOKING]._self("Cooking", DETOX_SKILL_COOKING, "CKG");
				this->skills[DETOX_SKILL_ADAPTING]._self("Adapting", DETOX_SKILL_ADAPTING, "ADT");
				this->skills[DETOX_SKILL_FARMING]._self("Farming", DETOX_SKILL_FARMING, "FMG");
				if (DETOX_MODE_PRIVATE == DETOX_EXIST) this->gender._decide(DETOX_MODE_MANUAL, DETOX_TYPE_SEX_NONE); else this->gender._decide();
				this->inventory._organize(DETOX_TYPE_RESOURCE_CURRENCY);
				this->inventory._organize(DETOX_TYPE_RESOURCE_PLANT);
				this->inventory._organize(DETOX_TYPE_RESOURCE_PREPAREMENT);
				this->personality._personalize();
				
				return *this;
			}
			void _message(const char msg[]) {
				for (int i = 0; i < DETOX_MESSAGE_LENGTH; i++) this->message[i] = msg[i];
			}
			PLAYER _skill(DETOX_NUMBER type, DETOX_NUMBER skill, DETOX_DECIMAL amount, const char message[]) {
				switch (type) {
				default:
					break;
				case DETOX_SKILL_GAIN:
					if (this->status == DETOX_BUFF_WAVY_LENGTHS) amount += DETOX_BUFF_WAVY_LENGTHS_EFFECT;
					this->skills[skill].experience += amount;
					this->skills[skill].change += amount;
					break;
				case DETOX_SKILL_LOSS:
					this->skills[skill].experience -= amount;
					this->skills[skill].change -= amount;
					break;
				}
				this->_message(message);
				return *this;
			}
			void _gain(DETOX_NUMBER type = DETOX_UNDEFINED, DETOX_NUMBER sub = DETOX_UNDEFINED, DETOX_NUMBER value = DETOX_UNDEFINED) {
				switch (type) {
				case DETOX_TYPE_BUFF:
					this->buff._update(sub, value);
					switch (sub) {
					case DETOX_BUFF_VALJURIAN_WINGS:
						this->_message(DETOX_MESSAGE_BUFF_VALJURIAN_WINGS_GAINED);
						break;
					case DETOX_BUFF_WAVY_LENGTHS:
						this->_message(DETOX_MESSAGE_BUFF_WAVY_LENGTHS_GAINED);
						break;
					}
					break;
				case DETOX_TYPE_RESOURCE:
					for (DETOX_NUMBER i = 0; i < DETOX_INVENTORY_SLOTS; i++) {
						if (this->inventory.items[i].exists == DETOX_EXIST) {
							if (this->inventory.items[i].type == sub) {
								this->inventory.items[i].amount += value;
								if (this->inventory.items[i].amount > 9) {
									this->inventory.items[i].visible = 9;
									this->inventory.items[i].status = DETOX_STATUS_INVENTORY_UNVISIBLE;
								}
								else {
									this->inventory.items[i].visible = this->inventory.items[i].amount;
									this->inventory.items[i].status = DETOX_STATUS_DEFAULT;
								}
								switch (this->inventory.items[i].type) {
								case DETOX_TYPE_RESOURCE_PLANT:
									this->_message(DETOX_MESSAGE_FARMING_PICKUP);
									break;
								case DETOX_TYPE_RESOURCE_CURRENCY:
									this->_message(DETOX_MESSAGE_TRADING_CURRENCY_PICKUP);
									break;
								//case DETOX_TYPE_RESOURCE_
								}
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
					//this->buff._update(type, )
					break;
				}
			}
			void _update() {
				if (this->buff.exists == DETOX_EXIST) {
					this->buff.duration -= 1;
					if (this->buff.duration == 0) {
						this->buff.type = DETOX_UNDEFINED;
						this->buff.exists = DETOX_EXIT;
						this->tile.status = DETOX_STATUS_DEFAULT;
					}
				}
				if (this->tile.status == DETOX_BUFF_WAVY_LENGTHS) {
					for (DETOX_NUMBER s = 0; s < DETOX_PLAYER_SKILLS; s++) {
						if (this->skills[s].identifier > 0) {
							if (this->skills[s].change > 0) {
								this->skills[s].experience += DETOX_BUFF_WAVY_LENGTHS_EFFECT;
								this->skills[s].change += DETOX_BUFF_WAVY_LENGTHS_EFFECT;
							}
						}
					}
				}
			}
		};
		struct MAP {
			PLAYER player;
			CREATURE creatures[DETOX_CREATURES_MAX];
			LOG log;
			RESOURCE resources[DETOX_RESOURCES_MAX];
			char message[DETOX_MESSAGE_LENGTH];
			BUFF buffs[DETOX_BUFFS_MAX];
			DICE dice;
			SIZE size;
			DETOX_NUMBER tiles = 0;
			TILE* area[];

			void _update(DETOX_NUMBER type = DETOX_TYPE_OVERALL) {
				switch (type) {
				default:
					break;
				case DETOX_TYPE_OVERALL:
					for (DETOX_NUMBER s = 0; s <= DETOX_PLAYER_SKILLS; s++) {
						if (this->player.skills[s].exist == DETOX_EXIST) {
							if (this->player.skills[s].change != 0) this->player.skills[s].change = 0;
						}
					}
					for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
						if (this->buffs[b].exists == DETOX_EXIST) {
							this->buffs[b].duration -= 1;
							if (this->buffs[b].duration == 0) {
								this->buffs[b].tile._disappear();
								this->buffs[b].exists = DETOX_EXIT;
							}
						}
					}
					for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
						if (this->resources[r].exists == DETOX_EXIST) {
							// To- do
						}
					}
					break;
				}
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
					}
				}
				return creature;
			}
			void _message(const char msg[]) {
				for (DETOX_NUMBER m = 0; m < DETOX_MESSAGE_LENGTH; m++) {
					this->message[m] = msg[m];
					
				}
			}
			void _movement(DETOX_NUMBER type, DETOX_NUMBER option = DETOX_MODE_AUTO) {
				switch (type) {
				default:
					break;
				case DETOX_TYPE_PLAYER:
					switch (option) {
					case DETOX_MODE_AUTO:
						this->player.dice._roll(0, DETOX_DICE_PLAYER_MOVEMENT);
						this->player._message("");
						switch (this->player.dice.value) {
						default:
							this->player._message("");
							break;
						case 1:
							if (this->player.tile.location.current.y > 0) {
								this->player.tile.location._up();
								this->player._message(DETOX_MESSAGE_UP);
							}
							break;
						case 2:
							if (this->player.tile.location.current.y < this->size.height - 1) {
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
							if (this->player.tile.location.current.x < this->size.width - 1) {
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
								if (this->buffs[b].exists == DETOX_EXIST) {
									this->player.tile.location._towards(this->buffs[b].tile.location);
									this->player._message(DETOX_MESSAGE_BUFF_AVAILABLE);
									break;
								}
							}
							break;
						case 25:
							for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
								if (this->resources[r].exists == DETOX_EXIST) {
									this->player.tile.location._towards(this->resources[r].tile.location);
									this->player._message(DETOX_MESSAGE_RESOURCE_AVAILABLE);
									break;
								}
							}
						}
					case DETOX_MODE_MANUAL:
						break;
					}
					break;
				case DETOX_TYPE_CREATURE:
					for (DETOX_NUMBER c = 0; c < DETOX_CREATURES_MAX; c++) {
						if (this->creatures[c].exists == DETOX_EXIST) {
							this->dice._roll(0, DETOX_CREATURE_SPEED);
							switch (this->dice.value) {
							case 1:
								if (this->creatures[c].tile.location.current.y > 0) {
									this->creatures[c].tile.location._up();
								}
								break;
							case 2:
								if (this->creatures[c].tile.location.current.y < this->size.height - 1) {
									this->creatures[c].tile.location._down();
								}
								break;
							case 3:
								if (this->creatures[c].tile.location.current.x > 0) {
									this->creatures[c].tile.location._left();
								}
								break;
							case 4:
								if (this->creatures[c].tile.location.current.x < this->size.width - 1) {
									this->creatures[c].tile.location._right();
								}
								break;
							}
							if (this->creatures[c].tile.location.to.x == this->player.tile.location.current.x && this->creatures[c].tile.location.to.y == this->player.tile.location.current.y) {
								// Creature collided with player
								this->creatures[c].collision._update(this->player.tile.location.current, DETOX_COLLISION_CREATURE, c);
								this->creatures[c].tile.location._halt();
								this->creatures[c].bumps += 1;
								if (this->creatures[c].bumps >= DETOX_SKILL_ADAPTING_CHANCE) {
									this->dice._roll(0, DETOX_SKILL_ADAPTING_CHANCE);
									switch (this->dice.value) {
									default:
										this->log._message(DETOX_MESSAGE_ADAPTING_CREATURE, c, DETOX_TYPE_CREATURE);
										break;
									case 4:
										this->creatures[c].tile.status = DETOX_SKILL_ADAPTING_FRIENDLY;
										this->log._message(DETOX_MESSAGE_CREATURE_FRIENDLY, c, DETOX_TYPE_CREATURE);
										break;
									case 10:
										this->creatures[c].tile.status = DETOX_SKILL_ADAPTING_UNDECISIVE;
										this->log._message(DETOX_MESSAGE_CREATURE_UNDECISIVE, c, DETOX_TYPE_CREATURE);
										break;
									case 20:
										this->creatures[c].tile.status = DETOX_SKILL_ADAPTING_UNFRIENDLY;
										this->log._message(DETOX_MESSAGE_CREATURE_UNFRIENDLY, c, DETOX_TYPE_CREATURE);
										break;
									}
								}
								else {
									this->log._message(DETOX_MESSAGE_CREATURE_COLLIDED, c, DETOX_TYPE_CREATURE);
								}

							}
							else {
								this->creatures[c].bumps -= DETOX_COLLISION_CREATURE_LOSS; // To-do a complexity
								if (this->creatures[c].bumps < 5 && this->creatures[c].status != DETOX_SKILL_ADAPTING_NEUTRAL) this->creatures[c].tile.status = DETOX_SKILL_ADAPTING_NEUTRAL;
								this->creatures[c].tile.location._advance();
							}
						}
					}
					break;
				}
			}
			void _events(DETOX_NUMBER type = DETOX_TYPE_EVENT) {
				switch (type) {
				case DETOX_TYPE_EVENT:
					this->dice._roll(0, DETOX_DICE_DEFAULT);
					switch (this->dice.value) {
					default:
						//std::cout << "-" << this->dice.value << "-";
						this->_message("");
						break;
					case 3:
						for (DETOX_NUMBER c = 0; c < DETOX_CREATURES_MAX; c++) {
							if (!this->creatures[c].exists) {
								this->creatures[c]._new(DETOX_TYPE_CREATURE, c, this->size);
								this->_message(DETOX_MESSAGE_CREATURE_APPEARANCE);
								break;
							}
						}
						break;
					case 8:
						for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
							if (!this->resources[r].exists) {
								this->dice._roll(0,10);
								switch (this->dice.value) {
								default:
									this->_message(DETOX_MESSAGE_SENSED);
									break;
								case 1:
									this->resources[r]._new(DETOX_TYPE_RESOURCE_PLANT, r, this->size);
									this->_message(DETOX_MESSAGE_RESOURCE_PLANT_NOTICE);
									break;
								case 3:
									this->resources[r]._new(DETOX_TYPE_RESOURCE_CURRENCY, r, this->size);
									this->_message(DETOX_MESSAGE_RESOURCE_CURRENCY_NOTICE);
									break;
								case 7:
									this->resources[r]._new(DETOX_TYPE_RESOURCE_PREPAREMENT, r, this->size);
									this->_message(DETOX_MESSAGE_RESOURCE_PREPAREMENT_NOTICE);
								}
								break;
							}

						}
						break;
					case 25:
						for(DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++){
							if (!this->buffs[b].exists) {
								this->dice._roll(0, DETOX_DICE_BUFF);
								switch (this->dice.value) {
								default:
									this->_message(DETOX_MESSAGE_SENSED);
									break;
								case DETOX_BUFF_VALJURIAN_WINGS:
									this->buffs[b].exists = DETOX_EXIST;
									this->buffs[b].tile.status = DETOX_BUFF_VALJURIAN_WINGS;
									this->buffs[b].type = DETOX_BUFF_VALJURIAN_WINGS;
									break;
								case DETOX_BUFF_WAVY_LENGTHS:
									this->buffs[b].exists = DETOX_EXIST;
									this->buffs[b].tile.status = DETOX_BUFF_WAVY_LENGTHS;
									this->buffs[b].type = DETOX_BUFF_WAVY_LENGTHS;
									break;

								}
								if (this->buffs[b].exists == DETOX_EXIST) {
									this->buffs[b].tile = this->buffs[b].tile._new(DETOX_TYPE_BUFF, b, this->size, this->buffs[b].tile.status);
									this->buffs[b].duration = DETOX_BUFF_BASE_DURATION_APPEARANCE;
									this->_message(DETOX_MESSAGE_NOTICE_DISTANCE);
								}
								break; // <- Note to self
							}
							this->_message(""); // ->
						}
					}

					break;
				case DETOX_TYPE_PLAYER:
					break;
				case DETOX_TYPE_CREATURE:
					break;
				}
			}
			void _collision(DETOX_NUMBER collider = DETOX_UNDEFINED,  DETOX_NUMBER type = DETOX_UNDEFINED) {
				switch (collider) {
				case DETOX_TYPE_PLAYER:
					switch (type) {
					case DETOX_COLLISION_SWEEP:
						this->player.collision.collided = DETOX_NO_COLLISION;
						for (DETOX_NUMBER c = 0; c < DETOX_CREATURES_MAX; c++) {
							if (this->creatures[c].exists == DETOX_EXIST) {
								if (this->player.tile.location.to.x == this->creatures[c].tile.location.current.x && this->player.tile.location.to.y == this->creatures[c].tile.location.current.y) {
									this->player.collision.collided = DETOX_COLLISION_CREATURE;
									this->dice._roll(0, DETOX_DICE_DEFAULT);
									switch (this->dice.value) {
									default:
										this->_message("");
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
										this->player.skills[DETOX_SKILL_ADAPTING].experience -= DETOX_SKILL_BASE_GAIN;
										this->player.skills[DETOX_SKILL_ADAPTING].change -= DETOX_SKILL_BASE_GAIN;
										this->player.skills[DETOX_SKILL_ENDURANCE].experience -= DETOX_SKILL_BASE_GAIN;
										this->player.skills[DETOX_SKILL_ENDURANCE].change -= DETOX_SKILL_BASE_GAIN;
										this->player.skills[DETOX_SKILL_TRADING].experience += DETOX_SKILL_BASE_GAIN;
										this->player.skills[DETOX_SKILL_TRADING].change += DETOX_SKILL_BASE_GAIN;
										break;
									}
									break;
								}
							}
						}

						for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
							if(this->buffs[b].exists == DETOX_EXIST){
								if (this->player.tile.location.to.x == this->buffs[b].tile.location.current.x && this->player.tile.location.to.y == this->buffs[b].tile.location.current.y) {
									this->player._gain(DETOX_TYPE_BUFF, this->buffs[b].type, DETOX_BUFF_BASE_DURATION);
									this->buffs[b].tile._disappear();
									this->buffs[b].exists = DETOX_EXIT;
									this->player.collision.collided = DETOX_COLLISION_BUFF;
									break;
								}
							}
						}

						for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
							if (this->resources[r].exists == DETOX_EXIST) {
								if (this->player.tile.location.to.x == this->resources[r].tile.location.current.x && this->player.tile.location.to.y == this->resources[r].tile.location.current.y) {
									this->player._gain(DETOX_TYPE_RESOURCE, this->resources[r].type, this->resources[r].amount);
									this->resources[r].tile._disappear();
									this->resources[r].exists = DETOX_EXIT;
									this->player.collision.collided = DETOX_COLLISION_RESOURCE;
									break;
								}
							}
						}
						if (this->player.collision.collided == DETOX_NO_COLLISION) {
							this->dice._roll(0, DETOX_DICE_NON_COLLIDED);
							switch (this->dice.value) {
							default:
								this->_message("");
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
								this->player.skills[DETOX_SKILL_COOKING].experience -= DETOX_SKILL_BOOST;
								this->player.skills[DETOX_SKILL_COOKING].change -= DETOX_SKILL_BOOST;
								this->player.skills[DETOX_SKILL_TRADING].experience -= DETOX_SKILL_BOOST;
								this->player.skills[DETOX_SKILL_TRADING].change -= DETOX_SKILL_BOOST;
								this->player.skills[DETOX_SKILL_ENDURANCE].experience -= DETOX_SKILL_BASE_GAIN;
								this->player.skills[DETOX_SKILL_ENDURANCE].change -= DETOX_SKILL_BASE_GAIN;
								break;
							case 25:
								this->player._skill(DETOX_SKILL_LOSS, DETOX_SKILL_ADAPTING, DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_ADAPTING_FELL);
								break;
							case 52:
								this->_message(DETOX_MESSAGE_CKG_TDG_SELF);
								this->player.skills[DETOX_SKILL_COOKING].experience += DETOX_SKILL_BASE_GAIN;
								this->player.skills[DETOX_SKILL_COOKING].change += DETOX_SKILL_BASE_GAIN;
								this->player.skills[DETOX_SKILL_TRADING].experience += DETOX_SKILL_BASE_GAIN;
								this->player.skills[DETOX_SKILL_TRADING].change += DETOX_SKILL_BASE_GAIN;
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
									if (this->player.inventory.items[i].type == DETOX_TYPE_RESOURCE_CURRENCY) {
										if (this->player.inventory.items[i].amount > 0) {
											this->player._skill(DETOX_SKILL_LOSS, DETOX_SKILL_TRADING, DETOX_SKILL_GAIN_MODIFIER, DETOX_MESSAGE_TRADING_CURRENCY_LOST);
											break;
										}
									}
								}
								break;
							}
						}

						if (this->player.collision.collided == DETOX_COLLISION_CREATURE) {
							this->player.tile.location._halt();
						}
						else {
							this->player.tile.location._advance();
						}
						break;
					}
				}
			}

			void _collisions() {

			}
			void _init() {
				for (DETOX_NUMBER y = 0; y < this->size.height; y++) {
					for (DETOX_NUMBER x = 0; x < this->size.width; x++) {
						this->area[tiles] = new TILE;
						this->area[tiles]->_new(DETOX_TYPE_GROUND, tiles, this->size, DETOX_STATUS_DEFAULT);
						this->area[tiles]->location._new(this->size, DETOX_MODE_MANUAL, x, y);
						//std::cout << " " << this->tiles << ": "  << this->area[tiles]->character << this->area[tiles]->location.current.x << " / " << this->area[tiles]->location.current.y;
						this->tiles++;
					}
				}
				//std::cout << std::endl;
				//system("pause");
			}
		};
		struct CONTROLS {
			DETOX_NUMBER button;
		};

		int played, started, save, initialized;

		void _sweep() {
			//SwitchToThread();
			this->_clearText(0, 0, this->display.height, this->display.width);
		}
		void _menu() {
			this->_clearText(0, 0, this->display.height);
			this->currentBuffer._cursor(0, 2);
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
				std::cout << " [ ] Play mode" << std::endl; // M
				std::cout << " [ ] Creatures" << std::endl; // D
				std::cout << " [F] Game rate (Applies to Auto-mode only)" << std::endl;
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
				case DETOX_MENU_OPTIONS_RATE:
					this->_options(DETOX_MENU_OPTIONS_RATE);
					break;
				}
				break;
			case DETOX_MENU_CREATOR:
				std::cout << "Created by Valtsu" << std::endl;
				std::cout << "Email: valtsu@pelihuuma.fi\n" << std::endl;
				std::cout << "  Warning: " << std::endl;
				std::cout << "   May cause eye-straining, if looked at and or played for\n";
				std::cout << "   longer periods of time. If possible, consider lowering\n";
				std::cout << "   your screens brightness.\n" << std::endl;
				std::cout << "  Credits:" << std::endl;
				std::cout << "   Microsoft\n" << std::endl;
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
			//this->_clearText(0, this->interface.width, 8);
			if (!this->save) {
				char name[DETOX_PLAYER_NAME_LENGTH];
				std::cout << "Who goes there? ..." << std::endl;
				std::cin >> name;
				this->map.size._set(this->map.size.mode);
				this->map.player._self(this->map.size);
				this->map.player._name(name);
				this->map._init();
				std::cout << "Hello, " << name << std::endl;
				std::cout << "Your adventure begins shortly..." << std::endl;
			}
			Sleep(3000);
			this->started = DETOX_EXIST;
		}
		void _options(DETOX_NUMBER option = DETOX_MENU_OPTIONS) {
			this->_clearText(0, 0, this->display.height, this->display.width);
			switch (option) {
			default:
				break;
			case DETOX_MENU_OPTIONS_MODE:
				this->currentBuffer._cursor(0, 1);
				std::cout << "Play mode:" << std::endl;
				std::cout << " [1] Auto" << std::endl;
				std::cout << " [ ] Manual" << std::endl;
				std::cout << " [B] Go back" << std::endl;
				std::cin >> this->options.selection;
				switch (this->options.selection) {
				case DETOX_MENU_OPTIONS_MODE_AUTO:
					this->options.mode = DETOX_MODE_AUTO;
					break;
				case DETOX_MENU_OPTIONS_MODE_MANUAL:
					this->options.mode = DETOX_MODE_MANUAL;
					break;
				case DETOX_MENU_BACK:
					this->options.selection = DETOX_MENU_OPTIONS;
					break;
				default:
					this->options.selection = DETOX_MENU;
					break;
				}
				break;
			case DETOX_MENU_OPTIONS_SIZE:							// To-do
				this->currentBuffer._cursor(0, 1);
				std::cout << "Change size:" << std::endl;
				//std::cout << " [0] Default	(16, 8)" << std::endl;
				std::cout << " [1] Small	(32,8)" << std::endl;
				std::cout << " [2] Average	(48,12)" << std::endl;
				std::cout << " [3] Large	(64,16)" << std::endl;
				std::cout << " [B] Go back" << std::endl;
				std::cin >> this->options.selection;
				switch (this->options.selection) {
				case DETOX_MENU_OPTIONS_SIZE_SMALL:
					this->_self(DETOX_OPTION_SMALL_WIDTH, DETOX_OPTION_SMALL_HEIGHT, DETOX_WINDOW_CHARACTERS, 5, 5, this->options.rate.base);
					this->display.interface[DETOX_INTERFACE_MAP].width = DETOX_OPTION_SMALL_WIDTH;
					this->display.interface[DETOX_INTERFACE_MAP].height = DETOX_OPTION_SMALL_HEIGHT;
					this->map.size._set(DETOX_OPTION_SMALL);
					this->options.selection = DETOX_MENU_OPTIONS;
					break;
				case DETOX_MENU_OPTIONS_SIZE_AVERAGE:
					//SetWindowPos(this->console, HWND_TOP, 5, 5, 800, 640, SWP_SHOWWINDOW);
					this->_self(DETOX_OPTION_AVERAGE_WIDTH, DETOX_OPTION_AVERAGE_HEIGHT, DETOX_WINDOW_CHARACTERS, 5, 5, this->options.rate.base);
					this->display.interface[DETOX_INTERFACE_MAP].width = DETOX_OPTION_AVERAGE_WIDTH;
					this->display.interface[DETOX_INTERFACE_MAP].height = DETOX_OPTION_AVERAGE_HEIGHT;
					this->map.size._set(DETOX_OPTION_AVERAGE);
					this->options.selection = DETOX_MENU_OPTIONS;
					break;
				case DETOX_MENU_OPTIONS_SIZE_LARGE:
					//SetWindowPos(this->console, HWND_TOP, 5, 5, 800, 640, SWP_SHOWWINDOW);
					this->_self(DETOX_OPTION_LARGE_WIDTH, DETOX_OPTION_LARGE_HEIGHT, DETOX_WINDOW_CHARACTERS, 5, 5, this->options.rate.base);
					this->display.interface[DETOX_INTERFACE_MAP].width = DETOX_OPTION_LARGE_WIDTH;
					this->display.interface[DETOX_INTERFACE_MAP].height = DETOX_OPTION_LARGE_HEIGHT;
					this->map.size._set(DETOX_OPTION_LARGE);
					this->options.selection = DETOX_MENU_OPTIONS;
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
					this->options.creatures = 4;
					break;
				case DETOX_MENU_OPTIONS_CREATURES_FEW:
					this->options.creatures = 8;
					break;
				case DETOX_MENU_OPTIONS_CREATURES_MODERATELY:
					this->options.creatures = 12;
					break;
				case DETOX_MENU_OPTIONS_CREATURES_MUCH:
					this->options.creatures = 16;
					break;
				case DETOX_MENU_OPTIONS_CREATURES_VERY_MUCH:
					this->options.creatures = 20;
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
					this->options.rate.base = 10000.0f;
					break;
				case DETOX_MENU_OPTIONS_RATE_SLOW:
					this->options.rate.base = 5000.0f;
					break;
				case DETOX_MENU_OPTIONS_RATE_AVERAGE:
					this->options.rate.base = 2500.0f;
					break;
				case DETOX_MENU_OPTIONS_RATE_FAST:
					this->options.rate.base = 1000.0f;
					break;
				case DETOX_MENU_OPTIONS_RATE_VERY_FAST:
					this->options.rate.base = 500.0f;
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
			this->map._events();
			if (this->options.mode == DETOX_MODE_AUTO) this->map._movement(DETOX_TYPE_PLAYER);
			this->map._collision(DETOX_TYPE_PLAYER, DETOX_COLLISION_SWEEP);
			this->map._movement(DETOX_TYPE_CREATURE);
			this->map.player._update();

			// Apparently rendering should be ordered from top to bottom, otherwise causes blinking of lines ...Note to self(after thought).
			this->_render(DETOX_INTERFACE_TOP);
			this->_render(DETOX_INTERFACE_LOG);
			this->_render(DETOX_INTERFACE_MAP);	
			this->_render(DETOX_INTERFACE_INVENTORY);
			this->_render(DETOX_INTERFACE_PLAYER);
			this->_render(DETOX_INTERFACE_STATISTICS);
			this->map._update(DETOX_TYPE_OVERALL);
		}
		void _render(DETOX_NUMBER interface){
			// To-do gfx if
			switch (interface) {
			case DETOX_INTERFACE_PLAYER:
				if (this->display.interface[DETOX_INTERFACE_PLAYER].exist == DETOX_EXIST) {
					this->_clearText(this->display.interface[DETOX_INTERFACE_PLAYER].x, this->display.interface[DETOX_INTERFACE_PLAYER].y, 1, DETOX_INTERFACE_PLAYER_WIDTH);
					std::cout << " " << this->map.player.name;
					for (DETOX_NUMBER s = 0; s < DETOX_PLAYER_SKILLS; s++) {
						if (this->map.player.skills[s].exist == DETOX_EXIST) {
							this->_clearText(this->display.interface[DETOX_INTERFACE_PLAYER].x + 2, this->display.interface[DETOX_INTERFACE_PLAYER].y + s, 1, DETOX_INTERFACE_PLAYER_WIDTH);
							std::cout << "[" << this->map.player.skills[s].abbreviation << "]";
							std::cout << " " << this->map.player.skills[s].experience;
							std::cout << " (" << this->map.player.skills[s].change << ")";
							std::cout << DETOX_OVERING_SPACE;
						}
					}

				}
				break;
			case DETOX_INTERFACE_TOP:
				if (this->display.interface[DETOX_INTERFACE_TOP].exist == DETOX_EXIST) {
					// Status
					this->_clearText(0, 0);
					for (DETOX_NUMBER pl = 0; pl < this->display.interface[DETOX_INTERFACE_TOP].padding.left; pl++) std::cout << " ";
					std::cout << "| Detox " << this->version.large << "." << this->version.average << "." << this->version.small << "." << this->version.outer << std::endl;
					this->_clearText(0, DETOX_INTERFACE_MESSAGE_STATUS);
					for (DETOX_NUMBER pl = 0; pl < this->display.interface[DETOX_INTERFACE_TOP].padding.left; pl++) std::cout << " ";
					std::cout << "| ";
					//std::cout << this->options.mode << " ";
					std::cout << this->map.player.tile.character << this->map.player.gender.sign << this->map.player.personality.religion.identifier << " (" << this->map.player.tile.location.current.x << ", " << this->map.player.tile.location.current.y << ", " << this->options.rate.current << ")";
					std::cout << " - " << this->map.size.width << " / " << this->map.size.height << " " << this->counter;
					std::cout << DETOX_OVERING_SPACE << std::endl;

					// Player event
					this->_clearText(0, DETOX_INTERFACE_MESSAGE_PLAYER);
					for (DETOX_NUMBER pl = 0; pl < this->display.interface[DETOX_INTERFACE_TOP].padding.left; pl++) std::cout << " ";
					std::cout << "| ";
					std::cout << this->map.player.message;
					std::cout << DETOX_OVERING_SPACE << std::endl;

					// Map event
					this->_clearText(0, DETOX_INTERFACE_MESSAGE_MAP);
					for (DETOX_NUMBER pl = 0; pl < this->display.interface[DETOX_INTERFACE_TOP].padding.left; pl++) std::cout << " ";
					std::cout << "| ";
					std::cout << this->map.message;
					std::cout << DETOX_OVERING_SPACE << std::endl;

					// Creature
					this->_clearText(0, DETOX_INTERFACE_MESSAGE_CREATURE);
					for (DETOX_NUMBER pl = 0; pl < this->display.interface[DETOX_INTERFACE_TOP].padding.left; pl++) std::cout << " ";
					std::cout << "| ";
					for (DETOX_NUMBER c = 0; c < this->options.creatures; c++) {
						if (this->map.creatures[c].exists == DETOX_EXIST) {
							//std::cout << this->map.creatures[c].message;
						}
					}

					// Debug
					this->_clearText(0, DETOX_INTERFACE_MESSAGE_DEBUG);
					for (DETOX_NUMBER pl = 0; pl < this->display.interface[DETOX_INTERFACE_TOP].padding.left; pl++) std::cout << " ";
					std::cout << "| ";
					/*
					for (DETOX_NUMBER c = 0; c < 24; c++) {
						SetConsoleTextAttribute(this->currentBuffer.currentHandle, c);
						std::cout << c;
					}
					SetConsoleTextAttribute(this->currentBuffer.currentHandle, DETOX_STATUS_DEFAULT);
					*/

					std::cout << this->map._sortee(DETOX_SORT_LOW).bumps;
					std::cout << " - " << this->map._sortee(DETOX_SORT_HIGH).bumps << " ";
					std::cout << this->map.dice.value << "/";
					std::cout << this->map.player.dice.value;
					std::cout << this->display.interface[DETOX_INTERFACE_STATISTICS].x << " " << this->display.interface[DETOX_INTERFACE_STATISTICS].y;
					std::cout << DETOX_OVERING_SPACE << std::endl;

					for (DETOX_NUMBER pb = 0; pb < this->display.interface[DETOX_INTERFACE_TOP].padding.bottom; pb++) {
						//this->_clearText(0, DETOX_INTERFACE_MESSAGE_LINES + 1 + pb);
					}
				}
				break;

			case DETOX_INTERFACE_STATISTICS:
				if (this->display.interface[DETOX_INTERFACE_STATISTICS].exist == DETOX_EXIST) {
					for (DETOX_NUMBER c = 0; c < DETOX_INTERFACE_STATISTICS_DISPLAY_CREATURES; c++) {
						if (this->map.creatures[c].exists == DETOX_EXIST) {
							this->_clearText(this->display.interface[DETOX_INTERFACE_STATISTICS].x, this->display.interface[DETOX_INTERFACE_STATISTICS].y + c + 2);
							std::cout << c << this->map.creatures[c].gender.sign << this->map.creatures[c].personality.religion.identifier;
							std::cout << " @ " << this->map.creatures[c].tile.location.current.x << "," << this->map.creatures[c].tile.location.current.y;
							std::cout << " (" << this->map.creatures[c].bumps << ")";
						}
					}
				}
				break;

			case DETOX_INTERFACE_INVENTORY:
				if (this->display.interface[DETOX_INTERFACE_INVENTORY].exist == DETOX_EXIST) {
					for (DETOX_NUMBER i = 0; i < DETOX_INVENTORY_SLOTS; i++) {
						if (this->map.player.inventory.items[i].exists == DETOX_EXIST) {
							this->_clearText(this->display.interface[DETOX_INTERFACE_INVENTORY].x + i, this->display.interface[DETOX_INTERFACE_INVENTORY].y, 1, DETOX_INTERFACE_INVENTORY_WIDTH);
							std::cout << this->map.player.inventory.items[i].tile.character;
							this->_clearText(this->display.interface[DETOX_INTERFACE_INVENTORY].x + i, this->display.interface[DETOX_INTERFACE_INVENTORY].y + 1, 1, DETOX_INTERFACE_INVENTORY_WIDTH);
							SetConsoleTextAttribute(this->currentBuffer.currentHandle, this->map.player.inventory.items[i].status);
							std::cout << this->map.player.inventory.items[i].visible;
							SetConsoleTextAttribute(this->currentBuffer.currentHandle, DETOX_STATUS_DEFAULT);
						}
					}
				}
				break;

			case DETOX_INTERFACE_MAP:
				if (this->display.interface[DETOX_INTERFACE_MAP].exist == DETOX_EXIST) {
					TILE rend;
					DETOX_NUMBER tile;
					DETOX_NUMBER color;
					tile = 0;
					color = DETOX_STATUS_DEFAULT;
					for (int h = 0; h < this->map.size.height; h++) {
						this->currentBuffer._cursor(0, h + this->display.interface[DETOX_INTERFACE_MAP].y);

						for (int il = 0; il < this->display.interface[DETOX_INTERFACE_MAP].padding.left; il++) std::cout << ' ';
						for (int w = 0; w < this->map.size.width; w++) {
							rend = *this->map.area[tile];

							//std::cout << rend.character << " " << rend.location.current.x << "/" << rend.location.current.y;
							//system("pause");
							for (DETOX_NUMBER r = 0; r < DETOX_RESOURCES_MAX; r++) {
								if (this->map.resources[r].exists == DETOX_EXIST) {
									if (w == this->map.resources[r].tile.location.current.x && h == this->map.resources[r].tile.location.current.y) {
										rend = this->map.resources[r].tile;
										break;
									}
								}
							}
							for (DETOX_NUMBER b = 0; b < DETOX_BUFFS_MAX; b++) {
								if (this->map.buffs[b].exists == DETOX_EXIST) {
									if (w == this->map.buffs[b].tile.location.current.x && h == this->map.buffs[b].tile.location.current.y) {
										rend = this->map.buffs[b].tile;
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
								if (this->map.creatures[c].exists == DETOX_EXIST) {
									if (w == this->map.creatures[c].tile.location.current.x && h == this->map.creatures[c].tile.location.current.y) {
										rend = this->map.creatures[c].tile;
										break;
									}
								}
							}
							if (w == this->map.player.tile.location.current.x && h == this->map.player.tile.location.current.y) {
								rend = this->map.player.tile;
							}
							if (rend.status != DETOX_STATUS_DEFAULT) SetConsoleTextAttribute(this->currentBuffer.currentHandle, rend.status);
							std::cout << rend.character;
							if (rend.status != DETOX_STATUS_DEFAULT) SetConsoleTextAttribute(this->currentBuffer.currentHandle, DETOX_STATUS_DEFAULT);
							tile++;
						}
						//std::cout << "-";
						for (int ir = 0; ir < this->display.interface[DETOX_INTERFACE_MAP].padding.right; ir++) std::cout << ' ';
						std::cout << std::endl;
					}
				}

				break;
			case DETOX_INTERFACE_LOG:
				if (this->display.interface[DETOX_INTERFACE_LOG].exist == DETOX_EXIST) {
					this->_clearText(this->display.interface[DETOX_INTERFACE_LOG].x, this->display.interface[DETOX_INTERFACE_LOG].y + 1);
					std::cout << "Logging" << " (" << DETOX_INTERFACE_LOG_HEIGHT << " lines)";
					for (DETOX_NUMBER m = 0; m < DETOX_INTERFACE_LOG_HEIGHT; m++) {
						if (this->map.log.messages[m].exist == DETOX_EXIST) {
							this->_clearText(this->display.interface[DETOX_INTERFACE_LOG].x, this->display.interface[DETOX_INTERFACE_LOG].y + m + 3);
							std::cout << this->map.log.messages[m].identifier << ": " << this->map.log.messages[m].text;
							std::cout << DETOX_OVERING_SPACE << std::endl;
						}
					}
				}
				break;
			}
		}
		void _gather() {

			if (this->options.mode == DETOX_MODE_AUTO) {
				if (this->map.player.tile.status == DETOX_BUFF_VALJURIAN_WINGS) {
					this->options.rate.current = this->options.rate.base - this->map.player.skills[DETOX_SKILL_VELOCITY].experience - DETOX_BUFF_VALJURIAN_WINGS_EFFECT;
				}
				else {
					this->options.rate.current = this->options.rate.base - this->map.player.skills[DETOX_SKILL_VELOCITY].experience;
				}
				Sleep(this->options.rate.current);
			}
			else {
				system("pause");
				this->_controls();
			}
			//this->_clearText(0, this->display.interface[DETOX_INTERFACE_GAME].height); // Causes odd double buffering, to-do
			this->counter++;
		}

		void _controls() {
			// To-do windows hook
			std::cin >> this->controls.button;
			std::cout << this->controls.button;
		}
		void _self(int width = 640, int height = 400, int mode = DETOX_WINDOW_PIXELS, int x = 900, int y = 10, DETOX_DECIMAL rate = 1000.0) {

			//SwitchToThread(); 
			// To-do: SetWindowsHook
			if (!this->initialized) {
				this->exe._get();
				this->exe._write(DETOX_DEFAULT_TITLE);
				SetConsoleTitle(this->exe.title.value); // To-do
				this->createdBufferHandle = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, 1, NULL);

				DETOX_RANDOM drx;
				drx._init();
				this->counter = 0;
				this->console = GetConsoleWindow();
				this->window = GetWindow(this->console, GW_OWNER);
				this->desktop = GetDesktopWindow();
				this->inputBufferHandle = GetStdHandle(-10);
				this->outputBufferHandle = GetStdHandle(-11);
				//this->currentBuffer.currentHandle = this->createdBufferHandle;
				this->currentBuffer._self();
			}

			this->display.interface[DETOX_INTERFACE_MAP]._padding(0, 1, 2, 2);
			this->display.interface[DETOX_INTERFACE_STATISTICS]._padding(1, 1, 2, 2);
			this->display.interface[DETOX_INTERFACE_TOP]._padding(0, 1, 2, 2);
			this->display.interface[DETOX_INTERFACE_INVENTORY]._padding(0, 0, 1, 1);
			this->display.interface[DETOX_INTERFACE_LOG]._padding(1, 1, 1, 1);
			this->display.interface[DETOX_INTERFACE_PLAYER]._padding(1, 1, 1, 1);

			this->display._set(DETOX_INTERFACE_TOP, 0, 0, DETOX_INTERFACE_TOP_WIDTH , DETOX_INTERFACE_TOP_HEIGHT);
			this->display._set(DETOX_INTERFACE_MAP, 0, this->display.interface[DETOX_INTERFACE_TOP].height, width, height);
			this->display._set(DETOX_INTERFACE_INVENTORY, this->display.interface[DETOX_INTERFACE_MAP].width, this->display.interface[DETOX_INTERFACE_TOP].height, DETOX_INTERFACE_INVENTORY_WIDTH, DETOX_INTERFACE_INVENTORY_HEIGHT);
			this->display._set(DETOX_INTERFACE_PLAYER, 0, this->display.interface[DETOX_INTERFACE_TOP].height + this->display.interface[DETOX_INTERFACE_MAP].height, DETOX_INTERFACE_PLAYER_WIDTH, DETOX_INTERFACE_PLAYER_HEIGHT);
			this->display._set(DETOX_INTERFACE_LOG, this->display.interface[DETOX_INTERFACE_TOP].width, 0, DETOX_INTERFACE_LOG_WIDTH, DETOX_INTERFACE_LOG_HEIGHT);
			this->display._set(DETOX_INTERFACE_STATISTICS, this->display.interface[DETOX_INTERFACE_PLAYER].width, this->display.interface[DETOX_INTERFACE_LOG].height, DETOX_INTERFACE_STATISTICS_WIDTH, DETOX_INTERFACE_STATISTICS_HEIGHT);
			this->display.x = x;
			this->display.y = y;
			RECT desktop;
			GetWindowRect(this->desktop, &desktop);
			SetWindowPos(this->window, HWND_TOP, 0, 0, desktop.right, desktop.bottom, SWP_HIDEWINDOW);
			SetWindowPos(this->console, HWND_TOP, 5, 5, desktop.right - 5, desktop.bottom - 5, SWP_HIDEWINDOW);
			this->currentBuffer._set(inputBufferHandle);
			switch (mode) {
			case DETOX_WINDOW_CHARACTERS:
				//this->currentBuffer.info.srWindow.Top = y;
				this->currentBuffer.info.srWindow.Bottom = this->display.height;
				//this->currentBuffer.info.srWindow.Left = x;
				this->currentBuffer.info.srWindow.Right = this->display.width; // 0
				this->currentBuffer.info.dwSize.X = this->display.width + 1; // + 1
				this->currentBuffer.info.dwSize.Y = this->display.height + 1; // +1
				this->currentBuffer.info.dwMaximumWindowSize.X = this->display.width; // 0
				this->currentBuffer.info.dwMaximumWindowSize.Y = this->display.height; // 0
				BOOL winfo;
				winfo = SetConsoleWindowInfo(this->currentBuffer.currentHandle, TRUE, &this->currentBuffer.info.srWindow);
				BOOL binfo;
				binfo = SetConsoleScreenBufferSize(this->currentBuffer.currentHandle, this->currentBuffer.info.dwSize);
				this->currentBuffer.gsSuccess += winfo + binfo; // - 2
				if (this->currentBuffer.gsSuccess < 2) { // Either failed.
					std::cout << "Failed at [DETOX]: " << std::endl;
					std::cout << "Left, top, right, bottom" << std::endl;
					std::cout << x << ", " << y << ", " << width << ", " << height << std::endl; // Map arguments
					std::cout << "Window info: " << winfo << std::endl;
					std::cout << this->currentBuffer.info.srWindow.Left << ", ";
					std::cout << this->currentBuffer.info.srWindow.Top << ", ";
					std::cout << this->currentBuffer.info.srWindow.Right << ", ";
					std::cout << this->currentBuffer.info.srWindow.Bottom << std::endl;

					std::cout << "Buffer info: " << binfo << std::endl;
					std::cout << "x, y" << std::endl;
					std::cout << this->currentBuffer.info.dwSize.X << ", ";
					std::cout << this->currentBuffer.info.dwSize.Y << std::endl;

					//system("pause");
					this->played = DETOX_EXIT;
					throw 0;
				}
				SetWindowPos(this->console, HWND_TOP, x, y, this->display.width, this->display.height, SWP_NOSIZE | SWP_NOZORDER | SWP_SHOWWINDOW);
				break;
			case DETOX_WINDOW_PIXELS:
				// To-do-test
				SetWindowPos(this->console, HWND_TOP, x, y, width, height, SWP_DRAWFRAME);

				break;
			case DETOX_TEST:
				CONSOLE_SCREEN_BUFFER_INFO bInfo;
				GetConsoleScreenBufferInfo(this->createdBufferHandle, &bInfo);
				std::cout << bInfo.dwSize.X << " " << bInfo.dwSize.Y << std::endl;
				break;
			}
			this->options.rate.base = rate;
			this->options.rate.current = this->options.rate.base;
			this->played = DETOX_EXIST;
			this->options.selection = DETOX_EXIST;
			this->options._default();
			if (!this->initialized) this->initialized = DETOX_EXIST;
		}

		void _clearText(int x = 0, int y = 0, int h = 1, int w = -1) {
			if (w < 0) {
				w = this->display.width;
			}
			for (int i = y; i < h + y; i++) {
				this->currentBuffer._cursor(x, i);
				for (int j = x; j < w; j++) {
					if (DETOX_DEBUGGING) {
						std::cout << ',';
					}
					else {
						std::cout << ' ';
					}
					if (DETOX_DEBUGGING && DETOX_SLOW_MODE) Sleep(1);
				}
				std::cout << '\0';
				//Sleep(0.0001);
				//Sleep(0.2);
			}
			this->currentBuffer._cursor(x, y);
		}
		//void _text() { new char ... } // To-do

		DETOX_EXECUTABLE exe;
		VERSION version;
		BUFFER currentBuffer;
		DISPLAY display;
		OPTIONS options;
		CONTROLS controls;
		MAP map;
	};
}

