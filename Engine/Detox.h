// #define DETOX // To-do
#define DETOX_VAR
#define DETOX_OVERING_SPACE								"       "
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

#define DETOX_PLAYER_NAME_LENGTH						16
#define DETOX_PLAYER_IDENTIFIER							-1
#define DETOX_PLAYER_STATUS_DEFAULT						7
#define DETOX_PLAYER_SKILLS								8
#define DETOX_PLAYER_COLLISION							1
#define DETOX_PLAYER_CREATURE_COLLISION_MOVE_CHANCE		8
#define DETOX_PLAYER_SPEED								50

#define DETOX_CREATURES									20
#define DETOX_CREATURES_DEFAULT							8
#define DETOX_CREATURE_LOCATIONS						3
#define DETOX_CREATURE_NAME_LENGTH						8
#define DETOX_CREATURE_SKILLS							2
#define DETOX_CREATURE_COLLISION						1
#define DETOX_CREATURE_COLLISION_LOSS					0.00171f
#define DETOX_CREATURE_COLLISION_NORTH					2
#define DETOX_CREATURE_COLLISION_SOUTH					3
#define DETOX_CREATURE_COLLISION_WEST					4
#define DETOX_CREATURE_COLLISION_EAST					5
#define DETOX_CREATURE_SPEED							25

#define DETOX_SKILL_GAIN_MODIFIER						0.000001f
#define DETOX_SKILL_BASE_GAIN							0.000127f
#define DETOX_SKILL_BOOST								0.0003f
#define DETOX_SKILL_COLLIDED_SPEED						100
#define DETOX_SKILL_NON_COLLIDED_SPEED					600
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
#define DETOX_SKILL_
#define DETOX_SKILL_NAME_LENGTH							32

#define DETOX_BUFFS										2
#define DETOX_BUFF_APPEARANCE_CHANCE					100
#define DETOX_BUFF_COLLISION							2
#define DETOX_BUFF_NAME_LENGTH							32
#define DETOX_BUFF_BASE_DURATION						8
#define DETOX_BUFF_BASE_DURATION_APPEARANCE				25
#define DETOX_BUFF_VALJURIAN_WINGS						1 // Subjective to change
#define DETOX_BUFF_VALJURIAN_WINGS_EFFECT				0.1f

#define DETOX_NO_COLLISION								0

#define DETOX_MESSAGE_UP								"You try to move up."
#define DETOX_MESSAGE_DOWN								"You slide a bit down."
#define DETOX_MESSAGE_LEFT								"You attempt to the left."
#define DETOX_MESSAGE_RIGHT								"You move to the right."
#define DETOX_MESSAGE_BUFF_VALJURIAN_WINGS_GAINED		"Wings gained"
#define DETOX_MESSAGE_CREATURE_COLLISION				"You bumped into a creature."
#define DETOX_MESSAGE_CREATURE_COLLIDED					"Creature bumped into player.";
#define DETOX_MESSAGE_CREATURE_FRIENDLY					"Creatures lets you move close, seems friendly"
#define DETOX_MESSAGE_CREATURE_UNFRIENDLY				"Creature stares ominously at you"
#define DETOX_MESSAGE_CREATURE_UNDECISIVE				"Creature wonders around"
#define DETOX_MESSAGE_ENDURANCE_FELL					"Creature got to bit, Endurance fell"			//
#define DETOX_MESSAGE_ENDURANCE_GAINED					"Very sustainable, Endurance gained"			//
#define DETOX_MESSAGE_ENDURANCE_FLOW					"Current went through you, Endurance refreshed" // Max 32 width
#define DETOX_MESSAGE_ENDURANCE_SELF					"A moment to rest, Endurance recovered"			// Max 24 width
#define DETOX_MESSAGE_VELOCITY_FELL						"Creature spotted you, Velocity fell"			//
#define DETOX_MESSAGE_VELOCITY_GAINED					"Too quick, Velocity gained"					//
#define DETOX_MESSAGE_VELOCITY_FLOW						"Easy bits, Velocity refreshed"
#define DETOX_MESSAGE_TRADING_FELL						"Bit crumbled, Trading fell"					//
#define DETOX_MESSAGE_TRADING_GAINED					"Creature through, Trading gained"				//
#define DETOX_MESSAGE_TRADING_SELF						"Well gain, Trading recovered"					//
#define DETOX_MESSAGE_COOKING_FELL						"Food bit burned, Cooking fell"					//
#define DETOX_MESSAGE_COOKING_TRIP						"Food on the floor, TDG, CKG and END lost"		//
#define DETOX_MESSAGE_COOKING_GAINED					"Food cooked, Cooking gained"					// 
#define DETOX_MESSAGE_COOKING_BOOST						"Meat very tender, Cooking boosted"				// 
#define DETOX_MESSAGE_ADAPTING_SUCCESS					"You got a scent, Adapting succeeded"
#define DETOX_MESSAGE_ADAPTING_FAILED					"Creature murred ominously, Adapting failed"
#define DETOX_MESSAGE_ADAPTING_FELL						"Rarely bumped to any creatures, Adapting fell"
#define DETOX_MESSAGE_ADAPTING_CREATURE					"Creature attempted adapting"			
#define DETOX_MESSAGE_CKG_TDG_SELF						"Self sufficient, Cooking and Trading gained"	//
#define DETOX_MESSAGE_LENGTH							64

#define DETOX_INTERFACE_TITLE							0
#define DETOX_INTERFACE_MENU_START						2

#define DETOX_INTERFACE_STATUS							1
#define DETOX_INTERFACE_EVENTS							2
#define DETOX_INTERFACE_SKILLS							3
#define DETOX_INTERFACE_DEBUG							4
#define DETOX_INTERFACE_CREATURES						5
#define DETOX_INTERFACE_RENDER_START					6

#define DETOX_INTERFACE_TOP								DETOX_INTERFACE_RENDER_START
#define DETOX_INTERFACE_BOTTOM							3
#define DETOX_INTERFACE_LEFT							2
#define DETOX_INTERFACE_RIGHT							2
#define DETOX_INTERFACE_STATISTICS_WIDTH				16
#define DETOX_INTERFACE_ADDITIONAL_WIDTH				40
#define DETOX_INTERFACE_TITLE_SCREEN_HEIGHT				12

#define DETOX_MODE_AUTO									1
#define DETOX_MODE_MANUAL								2

#define DETOX_SORT_LOW									-1
#define DETOX_SORT_HIGH									1

#define COLOR_WHITE										7



#ifdef DETOX_RUN
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
	};
	class DETOX_VERSION {
		DETOX_VERSION _self(int, int, int, int) {
			return *this;
		}
	};
	struct DETOX_POSITION {
		DETOX_NUMBER x, y;
	};
	class DETOX {
		HANDLE inputBufferHandle, outputBufferHandle, createdBufferHandle, currentBufferHandle;
		HWND console, window, desktop;
		DETOX_DUAL bufferSize; // to-do-test ... (?)
		int counter;
	public:
		DETOX_VERSION version;
		struct RATE {
			DETOX_DECIMAL base, current;
			DETOX_DECIMAL _update(DETOX_DECIMAL modifier = -0.0) {
				DETOX_DECIMAL rate = 0.0;
				return rate;
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
				}
				else {
					this->currentHandle = GetStdHandle(-11); // Returns to default output buffer, after some attempts.
					return *this;
				}
			}
		};
		struct MAP {
			DETOX_NUMBER width, height, creatures = DETOX_CREATURES_DEFAULT;
			DETOX_TILE tile;
			MAP _self(DETOX_NUMBER size = DETOX_OPTION_SMALL, DETOX_TILE tile = '.') {
				this->tile = tile;
				switch (size) {
				case DETOX_OPTION_SMALL:
					this->width = DETOX_OPTION_SMALL_WIDTH;
					this->height = DETOX_OPTION_SMALL_HEIGHT;
					break;
				case DETOX_OPTION_AVERAGE:
					this->width = DETOX_OPTION_AVERAGE_WIDTH;
					this->height = DETOX_OPTION_AVERAGE_HEIGHT;
					break;
				case DETOX_OPTION_LARGE:
					this->width = DETOX_OPTION_LARGE_WIDTH;
					this->height = DETOX_OPTION_LARGE_HEIGHT;
					break;
				}
				return *this;
			}
			MAP _tile(DETOX_NUMBER type, DETOX_TILE tile) {
				
				return *this;
			}
		};
		struct LOCATION {
			DETOX_POSITION from, current, to;
			
			LOCATION _new(MAP map) {
				this->current.x = 1 + rand() % map.width - 1;
				this->current.y = 1 + rand() % map.height - 1;
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
		};
		struct INTERFACE {
			int top, bottom, left, right, width, height;
			DETOX_POSITION statistics;
			INTERFACE _self(int width, int height) {
				this->top = DETOX_INTERFACE_TOP;
				this->bottom = DETOX_INTERFACE_BOTTOM;
				this->left = DETOX_INTERFACE_LEFT;
				this->right = DETOX_INTERFACE_RIGHT;
				this->height = this->top + height + this->bottom;
				this->width = this->left + width + this->right + DETOX_INTERFACE_ADDITIONAL_WIDTH;
				this->statistics.x = this->left + this->right + width + 1;
				this->statistics.y = this->top - 1;
				return *this;
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
			SKILL _loss(DETOX_DECIMAL exp = 0,  const char msg[] = "") {
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
		struct BUFF { // Subjective to change
			char name[DETOX_BUFF_NAME_LENGTH], character = '!';
			DETOX_NUMBER type, exists = DETOX_EXIT, duration = 0;
			LOCATION location;
			BUFF _update(DETOX_NUMBER type = 0, DETOX_NUMBER duration = -1) {
				switch (type) {
				case DETOX_BUFF_VALJURIAN_WINGS:
					if (duration < 0) this->duration -= 1; else this->duration = duration;
					break;
				}

				this->type = type;

				return *this;
			}
		};
		struct DICE {
			int value;
			DICE _roll(int min = -1, int max = -1) {
				this->value = rand() % max + min;
				return *this;
			}
		};
		struct COLLISION {
			DETOX_NUMBER collided = DETOX_NO_COLLISION;
			DETOX_NUMBER identifier;
			LOCATION location;
			COLLISION _update(DETOX_POSITION position, DETOX_NUMBER collision, DETOX_NUMBER identifier) {
				this->collided = collision;
				this->identifier = identifier; // -1 player, >= 0 creature, >= 0 buffs
				this->location.current.x = position.x; // Position of collision
				this->location.current.y = position.y;
				return *this;
			}

		};

		struct CREATURE {
			char character;
			char name[DETOX_CREATURE_NAME_LENGTH];
			DETOX_NUMBER identifier, order, status = DETOX_SKILL_ADAPTING_NEUTRAL;
			DETOX_DECIMAL bumps = 0.0;
			DICE dice;
			LOCATION location;
			COLLISION collision;
			SKILL skills[DETOX_CREATURE_SKILLS];
			MAP map;
			INTERFACE interface;
			CREATURE _self() {
				return *this;
			}
			CREATURE _new(char character, MAP map) {
				this->character = character;
				this->map = map;

				this->location._new(this->map);
				//this->skills[DETOX_SKILL_ENDURANCE]._self("Endurance", DETOX_SKILL_ENDURANCE); // To-do, messes up map
				
				return *this;
			}
			CREATURE _move(LOCATION location, int mode = -1) {
				this->dice._roll(0, DETOX_CREATURE_SPEED);
				switch (this->dice.value) {
				case 1:
					if (this->location.current.y > 0) {
						this->location._up();
					}
					break;
				case 2:
					if (this->location.current.y < this->map.height - 1) {
						this->location._down();
					}
					break;
				case 3:
					if (this->location.current.x > 0) {
						this->location._left();
					}
					break;
				case 4:
					if (this->location.current.x < this->map.width - 1) {
						this->location._right();
					}
					break;
				}
				if (this->location.to.x == location.current.x && this->location.to.y == location.current.y) {
					// Creature collided with player
					this->collision._update(location.current, DETOX_PLAYER_COLLISION, DETOX_PLAYER_IDENTIFIER);
					this->location._halt();
					this->bumps += 1;
					if (this->bumps >= DETOX_SKILL_ADAPTING_CHANCE) {
						this->dice._roll(0, DETOX_SKILL_ADAPTING_CHANCE);
						switch (this->dice.value) {
						default:
							std::cout << DETOX_MESSAGE_ADAPTING_CREATURE;
							break;
						case 4:
							this->status = DETOX_SKILL_ADAPTING_FRIENDLY;
							std::cout << DETOX_MESSAGE_CREATURE_FRIENDLY;
							break;
						case 10:
							this->status = DETOX_SKILL_ADAPTING_UNDECISIVE;
							std::cout << DETOX_MESSAGE_CREATURE_UNDECISIVE;
							break;
						case 20:
							this->status = DETOX_SKILL_ADAPTING_UNFRIENDLY;
							std::cout << DETOX_MESSAGE_CREATURE_UNFRIENDLY;
							break;
						}
					}
					else {
						std::cout << DETOX_MESSAGE_CREATURE_COLLIDED;
					}

				}
				else {
					this->bumps -= DETOX_CREATURE_COLLISION_LOSS;
					if (this->bumps < 5 && this->status != DETOX_SKILL_ADAPTING_NEUTRAL) this->status = DETOX_SKILL_ADAPTING_NEUTRAL;
					this->location._advance();
					if (this->identifier == 0 && DETOX_DEBUGGING) {
						std::cout << "f:" << this->location.from.x << ", " << this->location.from.y << " ";
						std::cout << "c:" << this->location.current.x << ", " << this->location.current.y << " ";
						std::cout << "t:" << this->location.to.x << ", " << this->location.to.y << " ";
						std::cout << "m:" << this->map.width << ", " << this->map.height << std::endl;
					}
				}
				return *this;
			}
		};
		struct ENVIRONMENT {
			CREATURE creatures[DETOX_CREATURES];
			BUFF buffs[DETOX_BUFFS];
			char message[DETOX_MESSAGE_LENGTH];
			DICE dice;
			int init = DETOX_EXIT;
			COLLISION collision;
			DETOX_DUAL size;
			MAP map;
			ENVIRONMENT _self(MAP map) {
				this->map = map;
				for (int c = 0; c < this->map.creatures; c++) {
					this->creatures[c] = this->creatures[c]._new('u', this->map);
					this->creatures[c].identifier = c;
					this->creatures[c].order = c;

				}
				this->init = DETOX_EXIST;
				return *this;
			}
			CREATURE _sortee(DETOX_NUMBER mode = DETOX_SORT_HIGH) {
				CREATURE creature = this->creatures[0];
				for (DETOX_NUMBER c = 0; c < this->map.creatures; c++) {
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
			ENVIRONMENT _action() {
				return *this;
			}
		};
		struct PLAYER {

			char character = '@';
			char name[DETOX_PLAYER_NAME_LENGTH];
			char message[DETOX_MESSAGE_LENGTH];
			DETOX_NUMBER bumps, status = DETOX_PLAYER_STATUS_DEFAULT;
			COLLISION collision;
			DICE dice;
			BUFF buff;
			LOCATION location;
			SKILL skills[DETOX_PLAYER_SKILLS];
			MAP map;
			PLAYER _name(char name[]) {
				for (int i = 0; i < DETOX_PLAYER_NAME_LENGTH; i++) {
					this->name[i] = name[i];
				}
				return *this;
			}
			PLAYER _self(MAP map) {
				this->map = map;
				this->location._new(this->map);
				this->skills[DETOX_SKILL_VELOCITY]._self("Velocity", DETOX_SKILL_VELOCITY, "VEL");
				this->skills[DETOX_SKILL_ENDURANCE]._self("Endurance", DETOX_SKILL_ENDURANCE, "END");
				this->skills[DETOX_SKILL_TRADING]._self("Trading", DETOX_SKILL_TRADING, "TDG");
				this->skills[DETOX_SKILL_COOKING]._self("Cooking", DETOX_SKILL_COOKING, "CKG");
				this->skills[DETOX_SKILL_ADAPTING]._self("Adapting", DETOX_SKILL_ADAPTING, "ADT");
				return *this;
			}
			void _message(const char msg[]) {
				for (int i = 0; i < DETOX_MESSAGE_LENGTH; i++) {
					this->message[i] = msg[i];
				}
			}
			PLAYER _move(ENVIRONMENT environment, int mode = -1) {
				this->dice._roll(0, DETOX_PLAYER_SPEED);
				this->collision.collided = DETOX_NO_COLLISION;
				switch (this->dice.value) {
				default:
					this->_message("");
					break;
				case 1:
					if (this->location.current.y > 0) {
						this->location._up();
						this->_message(DETOX_MESSAGE_UP);
					}
					break;
				case 2:
					if (this->location.current.y < this->map.height - 1) {
						this->location._down();
						this->_message(DETOX_MESSAGE_DOWN);

					}
					break;
				case 3:
					if (this->location.current.x > 0) {
						this->location._left();
						this->_message(DETOX_MESSAGE_LEFT);
					}
					break;
				case 4:
					if (this->location.current.x < this->map.width - 1) {
						this->location._right();
						this->_message(DETOX_MESSAGE_RIGHT);
					}
					break;
				}
				for (int c = 0; c < this->map.creatures; c++) {
					if (environment.creatures[c].location.current.x == this->location.to.x && environment.creatures[c].location.current.y == this->location.to.y) {
						this->collision._update(environment.creatures[c].location.current, DETOX_CREATURE_COLLISION, c);
						this->_message(DETOX_MESSAGE_CREATURE_COLLISION);
						this->bumps += 1;
						break;
					}
				}
				for (DETOX_NUMBER b = 0; b < DETOX_BUFFS; b++) {
					if (environment.buffs[b].location.current.x == this->location.to.x && environment.buffs[b].location.current.y == this->location.to.y) {
						this->collision._update(environment.buffs[b].location.current, DETOX_BUFF_COLLISION, b);
						this->_message(DETOX_MESSAGE_BUFF_VALJURIAN_WINGS_GAINED);
						this->buff = this->buff._update(DETOX_BUFF_VALJURIAN_WINGS, DETOX_BUFF_BASE_DURATION);
						this->buff.location = this->location;
						this->status = DETOX_BUFF_VALJURIAN_WINGS;
						break;
					}
				}
				if (this->collision.collided == DETOX_NO_COLLISION) {
					this->location._advance();
				}
				else {
					// Collision happened, etc.
					this->location._halt();
				}

				return *this;
			}
			PLAYER _skills() {
				this->_message("");
				if (this->collision.collided == DETOX_CREATURE_COLLISION) {
					this->dice._roll(0, DETOX_SKILL_COLLIDED_SPEED);
					switch (this->dice.value) {
					default:
						break;
					case 1:
						this->_message(DETOX_MESSAGE_ENDURANCE_FELL);
						this->skills[DETOX_SKILL_ENDURANCE].experience -= DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_ENDURANCE].change -= DETOX_SKILL_BASE_GAIN;
						//this->skills[DETOX_SKILL_ENDURANCE]._loss(DETOX_SKILL_BASE_GAIN, DETOX_MESSAGE_ENDURANCE_FELL);
						break;
					case 2:
						this->_message(DETOX_MESSAGE_ENDURANCE_GAINED);
						this->skills[DETOX_SKILL_ENDURANCE].experience += DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_ENDURANCE].change += DETOX_SKILL_BASE_GAIN;
						break;
					case 11:
						this->_message(DETOX_MESSAGE_VELOCITY_FELL);
						this->skills[DETOX_SKILL_VELOCITY].experience -= DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_VELOCITY].change -= DETOX_SKILL_BASE_GAIN;
						break;
					case 12:
						this->_message(DETOX_MESSAGE_VELOCITY_GAINED);
						this->skills[DETOX_SKILL_VELOCITY].experience += DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_VELOCITY].change += DETOX_SKILL_BASE_GAIN;
						break;
					case 21:
						this->_message(DETOX_MESSAGE_TRADING_GAINED);
						this->skills[DETOX_SKILL_TRADING].experience += DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_TRADING].change += DETOX_SKILL_BASE_GAIN;
						break;
					case 22:
						this->_message(DETOX_MESSAGE_TRADING_FELL);
						this->skills[DETOX_SKILL_TRADING].experience -= DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_TRADING].change -= DETOX_SKILL_BASE_GAIN;
						break;
					case 31:
						this->_message(DETOX_MESSAGE_ADAPTING_SUCCESS);
						this->skills[DETOX_SKILL_ADAPTING].experience += DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_ADAPTING].change += DETOX_SKILL_BASE_GAIN;
						break;
					case 32:
						this->_message(DETOX_MESSAGE_ADAPTING_FAILED);
						this->skills[DETOX_SKILL_ADAPTING].experience -= DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_ADAPTING].change -= DETOX_SKILL_BASE_GAIN;
						break;
					}
				}
				if (this->collision.collided == DETOX_BUFF_COLLISION) {
					//this->buff._update(this->collision.identifier, DETOX_BUFF_BASE_DURATION);
					//this->buff.location = this->location;
				}
				if (this->collision.collided == DETOX_NO_COLLISION) {
					this->dice._roll(0, DETOX_SKILL_NON_COLLIDED_SPEED);
					switch (this->dice.value) {
					default:
						break;
					case 3:
						this->_message(DETOX_MESSAGE_COOKING_BOOST);
						this->skills[DETOX_SKILL_COOKING].experience += DETOX_SKILL_BOOST;
						this->skills[DETOX_SKILL_COOKING].change += DETOX_SKILL_BOOST;
						break;
					case 11:
						this->_message(DETOX_MESSAGE_COOKING_GAINED);
						this->skills[DETOX_SKILL_COOKING].experience += DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_COOKING].change += DETOX_SKILL_BASE_GAIN;
						break;
					case 18:
						this->_message(DETOX_MESSAGE_COOKING_FELL);
						this->skills[DETOX_SKILL_COOKING].experience -= DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_COOKING].change -= DETOX_SKILL_BASE_GAIN;
						break;
					case 24:
						this->_message(DETOX_MESSAGE_COOKING_TRIP);
						this->skills[DETOX_SKILL_COOKING].experience -= DETOX_SKILL_BOOST;
						this->skills[DETOX_SKILL_COOKING].change -= DETOX_SKILL_BOOST;
						this->skills[DETOX_SKILL_TRADING].experience -= DETOX_SKILL_BOOST;
						this->skills[DETOX_SKILL_TRADING].change -= DETOX_SKILL_BOOST;
						this->skills[DETOX_SKILL_ENDURANCE].experience -= DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_ENDURANCE].change -= DETOX_SKILL_BASE_GAIN;
						break;
					case 25:
						this->_message(DETOX_MESSAGE_ADAPTING_FELL);
						this->skills[DETOX_SKILL_ADAPTING].experience -= DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_ADAPTING].change -= DETOX_SKILL_BASE_GAIN;
						break;
					case 52:
						this->_message(DETOX_MESSAGE_CKG_TDG_SELF);
						this->skills[DETOX_SKILL_COOKING].experience += DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_COOKING].change += DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_TRADING].experience += DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_TRADING].change += DETOX_SKILL_BASE_GAIN;
						break;
					case 70:
						this->_message(DETOX_MESSAGE_ENDURANCE_SELF);
						this->skills[DETOX_SKILL_ENDURANCE].experience += DETOX_SKILL_BOOST;
						this->skills[DETOX_SKILL_ENDURANCE].change += DETOX_SKILL_BOOST;
						break;
					case 71:
						this->_message(DETOX_MESSAGE_TRADING_SELF);
						this->skills[DETOX_SKILL_TRADING].experience += DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_TRADING].change += DETOX_SKILL_BASE_GAIN;
						break;
					case 88:
						this->_message(DETOX_MESSAGE_ENDURANCE_FLOW);
						this->skills[DETOX_SKILL_ENDURANCE].experience += DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_ENDURANCE].change += DETOX_SKILL_BASE_GAIN;
						break;
					case 89:
						this->_message(DETOX_MESSAGE_VELOCITY_FLOW);
						this->skills[DETOX_SKILL_VELOCITY].experience += DETOX_SKILL_BASE_GAIN;
						this->skills[DETOX_SKILL_VELOCITY].change += DETOX_SKILL_BASE_GAIN;
						break;
					}
				}
				return *this;
			}
		};
		
		int played, started, save, initialized, mode, size;
		char input, selection;

		void _sweep() {
			//SwitchToThread();
			this->_clearText(0, 0, this->interface.height, this->interface.width);
		}
		DETOX _title() {
			this->currentBuffer._cursor(0, DETOX_INTERFACE_TITLE);
			std::cout << "   == Detox (" << this->mode << ", " << (int)this->selection << ") ==   " << std::endl;
			return *this;
		}
		DETOX _menu() {
			this->_clearText(0, DETOX_INTERFACE_MENU_START, DETOX_INTERFACE_TITLE_SCREEN_HEIGHT);
			switch ((int)this->selection) {
			case DETOX_MENU:
			case DETOX_MENU_BACK:
				std::cout << " [Q] Begin" << std::endl;
				std::cout << " [C] Options" << std::endl;
				std::cout << " [V] Creator" << std::endl;
				std::cout << " [X] Exit" << std::endl;

				std::cin >> this->selection;
				break;
			case DETOX_MENU_BEGIN:
				this->_begin();
				break;
			case DETOX_MENU_OPTIONS:
				std::cout << " [U] Change size" << std::endl;
				std::cout << " [M] Play mode" << std::endl;
				std::cout << " [D] Creatures" << std::endl;
				std::cout << " [F] Game rate (Applies to Auto-mode only)" << std::endl;
				std::cout << " [B] Go back" << std::endl;
				std::cin >> this->selection;
				switch (this->selection) {
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
				std::cin >> this->selection;
				break;
			case DETOX_MENU_EXIT:
				this->played = DETOX_EXIT;
				break;
			default:
				this->selection = DETOX_MENU;
				break;
			}
			return *this;
		}
		DETOX _begin() {
			this->_create();
			//this->_clearText(0, this->interface.width, 8);
			if (!this->save) {
				this->map._self();
				this->player._self(this->map);
				this->environment._self(this->map);
				if (!this->mode) this->mode = DETOX_MODE_AUTO;
			}
			this->started = DETOX_EXIST;
			return *this;
		}
		DETOX _create() {
			char name[DETOX_PLAYER_NAME_LENGTH];
			std::cout << "Who goes there? ..." << std::endl;
			std::cin >> name;
			this->player._name(name);
			std::cout << "Hello, " << name << std::endl;
			std::cout << "Your adventure begins shortly..." << std::endl;
			Sleep(3000);
			return *this;
		}
		DETOX _options(DETOX_NUMBER option = DETOX_MENU_OPTIONS) {
			this->_clearText(0, DETOX_INTERFACE_MENU_START, DETOX_INTERFACE_TITLE_SCREEN_HEIGHT);
			switch (option) {
			default:
				break;
			case DETOX_MENU_OPTIONS_MODE:
				this->currentBuffer._cursor(0, DETOX_INTERFACE_MENU_START);
				std::cout << "Play mode:" << std::endl;
				std::cout << " [1] Auto" << std::endl;
				std::cout << " [2] Manual" << std::endl;
				std::cout << " [B] Go back" << std::endl;
				std::cin >> this->selection;
				switch ((int)this->selection) {
				case DETOX_MENU_OPTIONS_MODE_AUTO:
					this->mode = DETOX_MODE_AUTO;
					break;
				case DETOX_MENU_OPTIONS_MODE_MANUAL:
					this->mode = DETOX_MODE_MANUAL;
					break;
				default:
					this->selection = DETOX_MENU;
					break;
				}
				break;
			case DETOX_MENU_OPTIONS_SIZE:
				this->currentBuffer._cursor(0, DETOX_INTERFACE_MENU_START);
				std::cout << "Change size:" << std::endl;
				std::cout << " [1] Small	(32,8)" << std::endl;
				std::cout << " [2] Average	(48,12)" << std::endl;
				std::cout << " [3] Large	(64,16)" << std::endl;
				std::cout << " [B] Go back" << std::endl;
				std::cin >> this->selection;
				this->selection = (char)this->selection;
				switch ((int)this->selection) {
				case DETOX_MENU_OPTIONS_SIZE_SMALL:
					this->_self(DETOX_OPTION_SMALL_WIDTH, DETOX_OPTION_SMALL_HEIGHT, DETOX_WINDOW_CHARACTERS, 5, 5, this->rate.base);
					this->map._self(DETOX_OPTION_SMALL);
					this->selection = DETOX_MENU_OPTIONS;
					break;
				case DETOX_MENU_OPTIONS_SIZE_AVERAGE:
					//SetWindowPos(this->console, HWND_TOP, 5, 5, 800, 640, SWP_SHOWWINDOW);
					this->_self(DETOX_OPTION_AVERAGE_WIDTH, DETOX_OPTION_AVERAGE_HEIGHT, DETOX_WINDOW_CHARACTERS, 5, 5, this->rate.base);
					this->map._self(DETOX_OPTION_AVERAGE);
					this->selection = DETOX_MENU_OPTIONS;
					break;
				case DETOX_MENU_OPTIONS_SIZE_LARGE:
					//SetWindowPos(this->console, HWND_TOP, 5, 5, 800, 640, SWP_SHOWWINDOW);
					this->_self(DETOX_OPTION_LARGE_WIDTH, DETOX_OPTION_LARGE_HEIGHT, DETOX_WINDOW_CHARACTERS, 5, 5, this->rate.base);
					this->map._self(DETOX_OPTION_LARGE);
					this->selection = DETOX_MENU_OPTIONS;
					break;
				case DETOX_MENU_BACK:
				default:
					this->selection = DETOX_MENU;
					break;
				}
				break;
			case DETOX_MENU_OPTIONS_CREATURE:
				std::cout << "Amount of creatures:" << std::endl;
				std::cout << " [1] 4 Creatures" << std::endl;
				std::cout << " [2] 8 Creatures" << std::endl;
				std::cout << " [3] 12 Creatures" << std::endl;
				std::cout << " [4] 16 Creatures" << std::endl;
				std::cout << " [5] 20 Creatures" << std::endl;
				std::cout << " [B] Go back" << std::endl;
				std::cin >> this->selection;
				switch (this->selection) {
				case DETOX_MENU_OPTIONS_CREATURES_VERY_FEW:
					this->map.creatures = 4;
					break;
				case DETOX_MENU_OPTIONS_CREATURES_FEW:
					this->map.creatures = 8;
					break;
				case DETOX_MENU_OPTIONS_CREATURES_MODERATELY:
					this->map.creatures = 12;
					break;
				case DETOX_MENU_OPTIONS_CREATURES_MUCH:
					this->map.creatures = 16;
					break;
				case DETOX_MENU_OPTIONS_CREATURES_VERY_MUCH:
					this->map.creatures = 20;
					break;
				default:
					this->selection = DETOX_MENU;
				}
				break;
			case DETOX_MENU_OPTIONS_RATE:
				std::cout << "Base rate for a game spin: " << std::endl; // Subjective to change, other examples: Round, tick, loop... 
				std::cout << " [1] Very slow (10.0 seconds)" << std::endl;
				std::cout << " [2] Slow (5.0 seconds)" << std::endl;
				std::cout << " [3] Average (2.5 seconds)" << std::endl;
				std::cout << " [4] Fast (1.0 second)" << std::endl;
				std::cout << " [5] Very fast (0.5 seconds)" << std::endl;
				std::cin >> this->selection;
				switch (this->selection) {
				case DETOX_MENU_OPTIONS_RATE_VERY_SLOW:
					this->rate.base = 10000.0f;
					break;
				case DETOX_MENU_OPTIONS_RATE_SLOW:
					this->rate.base = 5000.0f;
					break;
				case DETOX_MENU_OPTIONS_RATE_AVERAGE:
					this->rate.base = 2500.0f;
					break;
				case DETOX_MENU_OPTIONS_RATE_FAST:
					this->rate.base = 1000.0f;
					break;
				case DETOX_MENU_OPTIONS_RATE_VERY_FAST:
					this->rate.base = 500.0f;
					break;
				}
				this->rate.current = this->rate.base;
				break;
			}
			return *this;
		}
		DETOX _status() {
			SwitchToThread(); // To-do
			this->_clearText(0, DETOX_INTERFACE_STATUS);
			for (int i = 0; i < this->interface.left; i++) std::cout << " ";
			std::cout << "| " << this->player.character << " (" << this->player.location.current.x << ", " << this->player.location.current.y << ", " << this->rate.current << ") - " << this->map.width << " / " << this->map.height << " " << this->counter << DETOX_OVERING_SPACE << std::endl;

			if (this->input == 'x') {
				//this->played = DETOX_EXIT;
				//system("taskkill /f /im detoxthegame.exe");
			}
			return *this;
		}

		DETOX _events() {
			for (int b = 0; b < DETOX_BUFFS; b++) {
				if (this->player.collision.collided == DETOX_BUFF_COLLISION && this->player.collision.identifier == b) {
					this->environment.buffs[b].exists = DETOX_EXIT;
				}
				if (this->environment.buffs[b].exists == DETOX_EXIT) {
					this->environment.dice._roll(0, DETOX_BUFF_APPEARANCE_CHANCE);
					switch (this->environment.dice.value) {
					default:
						break;
					case DETOX_BUFF_VALJURIAN_WINGS:
						this->environment.buffs[b].location._new(this->map);
						this->environment.buffs[b]._update(DETOX_BUFF_VALJURIAN_WINGS, DETOX_BUFF_BASE_DURATION_APPEARANCE);
						this->environment.buffs[b].exists = DETOX_EXIST;
						break;
					}
				}
				if (this->environment.buffs[b].exists == DETOX_EXIST) {
					if (this->environment.buffs[b].duration == 0) {
						this->environment.buffs[b].exists = DETOX_EXIT;
						this->environment.buffs[b].location.current.x = -1;
						this->environment.buffs[b].location.current.y = -1;
					}
				}
			}

			this->_clearText(0, DETOX_INTERFACE_EVENTS);
			for (int i = 0; i < this->interface.left; i++) std::cout << " ";
			std::cout << "| ";
			if (this->mode == DETOX_MODE_AUTO) {
				this->player._move(this->environment);
			} else {

			}
			std::cout << this->player.message << std::endl;

			this->_clearText(0, DETOX_INTERFACE_SKILLS);
			for (int i = 0; i < this->interface.left; i++) std::cout << " ";
			std::cout << "| ";
			this->player._skills();
			std::cout << this->player.message << std::endl;


			this->_clearText(0, DETOX_INTERFACE_CREATURES);
			for (int i = 0; i < this->interface.left; i++) std::cout << " ";
			std::cout << "| ";
			for (int c = 0; c < this->map.creatures; c++) {
				this->environment.creatures[c]._move(this->player.location);
			}
			std::cout << std::endl;

			return *this;
		}

		void _debug() {
			this->_clearText(0, DETOX_INTERFACE_DEBUG);
			for (int i = 0; i < this->interface.left; i++) std::cout << " ";
			CREATURE low = this->environment._sortee(DETOX_SORT_LOW);
			CREATURE high = this->environment._sortee(DETOX_SORT_HIGH);
			std::cout << "| ";
			std::cout << low.identifier << ": " << low.bumps << " - " << high.identifier << ": " << high.bumps;
			//std::cout << this->rate.current << " " << DETOX_BUFF_VALJURIAN_WINGS_EFFECT << " " << this->rate.current - DETOX_BUFF_VALJURIAN_WINGS_EFFECT;
			for (DETOX_NUMBER b = 0; b < DETOX_BUFFS; b++) {
				BUFF buff = this->environment.buffs[b];
				if (buff.exists == DETOX_EXIST) std::cout << " " << buff.type << ": " << buff.location.current.x << ", " << buff.location.current.y;
			}
			std::cout << DETOX_OVERING_SPACE << std::endl;
		}
		DETOX _render(int width = 16, int height = 8) {

			this->_clearText(0, DETOX_INTERFACE_RENDER_START);
			int totalWidth = this->interface.left + this->map.width + this->interface.right + DETOX_INTERFACE_STATISTICS_WIDTH;

			switch (this->size) {
			case DETOX_OPTION_SMALL:
				//char small[DETOX_OPTION_SMALL_WIDTH];
				break;
			case DETOX_OPTION_AVERAGE:
				//char average[DETOX_OPTION_AVERAGE_WIDTH];
				break;
			case DETOX_OPTION_LARGE:
				//char large[DETOX_OPTION_LARGE_WIDTH];
				break;
			}
			//char* rend = new char[this->environment.map.width];
			//for(int l = 0; l < this->environment.map.width) rend[l] = ' ';
			char rend = ' ';
			DETOX_NUMBER color = COLOR_WHITE;
			for (int h = 0; h < this->environment.map.height; h++) {
				for (int il = 0; il < this->interface.left; il++) std::cout << ' ';
				for (int w = 0; w <= this->environment.map.width; w++) {
					if(color >= 0) color = COLOR_WHITE;
					rend = this->environment.map.tile;
					for (DETOX_NUMBER b = 0; b < DETOX_BUFFS; b++) {
						BUFF buff = this->environment.buffs[b];
						if (buff.exists == DETOX_EXIST && w == buff.location.current.x && h == buff.location.current.y) {
							color = buff.type;
							rend = buff.character;
						}
					}
					for (int c = 0; c < this->map.creatures; c++) {
						CREATURE creature = this->environment.creatures[c];
						if (creature.location.to.x == w && creature.location.to.y == h) {
							color = creature.status;
							rend = creature.character;
						}
					}
					if (w == this->player.location.to.x && h == this->player.location.to.y) {
						rend = this->player.character;
						color = this->player.status;
					}
					if (w == this->environment.map.width) {
						rend = '\0';
						color = COLOR_WHITE;
					}
					if (color >= 0) SetConsoleTextAttribute(this->currentBuffer.currentHandle, color);
					std::cout << rend;
					if(color != COLOR_WHITE) SetConsoleTextAttribute(this->currentBuffer.currentHandle, COLOR_WHITE);
				}
				//std::cout << rend;
				for (int ir = 0; ir < this->interface.right; ir++) std::cout << ' ';
				std::cout << std::endl;

			}

			return *this;
		}
		DETOX _gather() { // To-do, clean-up, etc...
			this->_statistics();

			for (DETOX_NUMBER b = 0; b < DETOX_BUFFS; b++) {
				if (this->environment.buffs[b].exists == DETOX_EXIST) {
					this->environment.buffs[b].duration -= 1;
				}

			}
			this->player.buff.duration -= 1;
			if (this->player.buff.duration == 0) {
				this->player.buff.exists = DETOX_EXIT;
				this->player.status = DETOX_PLAYER_STATUS_DEFAULT;
			}
			if (this->player.status == DETOX_BUFF_VALJURIAN_WINGS) {
				this->rate.current = this->rate.base - this->player.skills[DETOX_SKILL_VELOCITY].experience - DETOX_BUFF_VALJURIAN_WINGS_EFFECT;
			}
			else {
				this->rate.current = this->rate.base - this->player.skills[DETOX_SKILL_VELOCITY].experience;
			}

			this->currentBuffer._cursor(0, this->interface.height);
			//std::cout << this->interface.top << " " << this->map.height << std::endl;
			if (this->mode == DETOX_MODE_AUTO) {
				Sleep(this->rate.current);
			}
			else {
				std::cin >> this->input;
				this->_controls(this->input);
			}
			//this->_clearText(0, this->interface.top + this->map.width + 1);
			//this->_sweep();
			for (DETOX_NUMBER s = 0; s < DETOX_PLAYER_SKILLS; s++) {
				this->player.skills[s].change = 0;
			}
			this->counter++;
			return *this;
		}

		void _controls(char button) {
			switch (button) {
			default:
				break;
			case 'w':
				if (this->player.location.current.y > 0) this->player.location._up();
				break;
			case 's':
				if (this->player.location.current.y < this->map.height - 1) this->player.location._down();
				break;
			case 'a':
				if (this->player.location.current.x > 0) this->player.location._left();
				break;
			case 'd':
				if (this->player.location.current.x < this->map.width - 1) this->player.location._right();
				break;
			case 'x':
				this->started = DETOX_EXIT;
				this->selection = DETOX_MENU;
				break;
			}
		}
		BUFFER _statistics() { // To-do, overlapping
			int x = this->interface.left + this->map.width + this->interface.right;
			int y = this->interface.top;
			int h = 1;
			int w = DETOX_INTERFACE_STATISTICS_WIDTH;
			this->_clearText(x, y, this->map.height, w);
			this->currentBuffer._cursor(x, y);
			std::cout << this->player.name << std::endl; // To-do cursor -> clear text -> titles(ish)?
			DETOX_NUMBER l = 0;
			for (DETOX_NUMBER s = 0; s < DETOX_PLAYER_SKILLS; s++) {
				if (this->player.skills[s].identifier) {
					this->_clearText(x, y + 1 + l, h, w);
					std::cout << " [" << this->player.skills[s].abbreviation << "] " << this->player.skills[s].name << ": " << this->player.skills[s].experience << " (" << this->player.skills[s].change << ")" << "        " << std::endl;
					l++;
				}
			}
			this->_clearText(x, y + l + 2, h, w);
			std::cout << " " << this->player.bumps << " @ " << this->map.creatures << std::endl;

			for (DETOX_NUMBER c = 0; c < DETOX_CREATURE_LOCATIONS; c++) {
				CREATURE creature = this->environment.creatures[c];
				this->_clearText(x, y + l + 3 + c, h, w);
				std::cout << " - " << creature.location.current.x << ", " << creature.location.current.y << " " << creature.status << "@" << creature.bumps << "       " << std::endl;
			}
			return this->currentBuffer;
		}
		DETOX _self(int width = 640, int height = 400, int mode = DETOX_WINDOW_PIXELS, int x = 900, int y = 10, DETOX_DECIMAL rate = 1000.0) {

			//SwitchToThread(); 
			// To-do: SetWindowsHook
			if (!this->initialized) {
				SetConsoleTitle(L"Detoxing"); // To-do
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
				this->size = DETOX_OPTION_SMALL;
			}
			this->interface._self(width, height);
			RECT desktop;
			GetWindowRect(this->desktop, &desktop);
			SetWindowPos(this->window, HWND_TOP, 0, 0, desktop.right, desktop.bottom, SWP_HIDEWINDOW);
			SetWindowPos(this->console, HWND_TOP, 5, 5, desktop.right - 5, desktop.bottom - 5, SWP_HIDEWINDOW);
			//this->currentBuffer._set(inputBufferHandle);
			switch (mode) {
			case DETOX_WINDOW_CHARACTERS:
				//this->currentBuffer.info.srWindow.Top = y;
				this->currentBuffer.info.srWindow.Bottom = height + this->interface.bottom + this->interface.top;
				//this->currentBuffer.info.srWindow.Left = x;
				this->currentBuffer.info.srWindow.Right = width + this->interface.right + this->interface.left + DETOX_INTERFACE_ADDITIONAL_WIDTH;
				this->currentBuffer.info.dwSize.X = width + this->interface.left + this->interface.right + DETOX_INTERFACE_ADDITIONAL_WIDTH + 1;
				this->currentBuffer.info.dwSize.Y = height + this->interface.top + this->interface.bottom + 1;
				this->currentBuffer.info.dwMaximumWindowSize.X = width + this->interface.left + this->interface.right + DETOX_INTERFACE_ADDITIONAL_WIDTH;
				this->currentBuffer.info.dwMaximumWindowSize.Y = height + this->interface.top + this->interface.bottom;
				BOOL winfo;
				winfo = SetConsoleWindowInfo(this->currentBuffer.currentHandle, TRUE, &this->currentBuffer.info.srWindow);
				BOOL binfo;
				binfo = SetConsoleScreenBufferSize(this->currentBuffer.currentHandle, this->currentBuffer.info.dwSize);
				this->currentBuffer.gsSuccess += winfo + binfo;
				if (this->currentBuffer.gsSuccess < 2) { // Either failed.
					std::cout << "Failed at [DETOX]: " << std::endl;
					std::cout << "Left, top, right, bottom" << std::endl;
					std::cout << x << ", " << y << ", " << width << ", " << height << std::endl;
					std::cout << "Window info: " << winfo << std::endl;
					std::cout << this->currentBuffer.info.srWindow.Left << ", ";
					std::cout << this->currentBuffer.info.srWindow.Top << ", ";
					std::cout << this->currentBuffer.info.srWindow.Right << ", ";
					std::cout << this->currentBuffer.info.srWindow.Bottom << std::endl;

					std::cout << "Buffer info: " << binfo << std::endl;
					std::cout << "x, y" << std::endl;
					std::cout << this->currentBuffer.info.dwSize.X << ", ";
					std::cout << this->currentBuffer.info.dwSize.Y << std::endl;


					this->played = DETOX_EXIT;
					throw 0;
				}
				SetWindowPos(this->console, HWND_TOP, x, y, width, height, SWP_NOSIZE | SWP_NOZORDER | SWP_SHOWWINDOW);

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
			this->rate.base = rate;
			this->rate.current = this->rate.base;
			this->played = DETOX_EXIST;
			this->selection = DETOX_EXIST;
			if (!this->initialized) this->initialized = DETOX_EXIST;
			return *this;
		}

		BUFFER _clearText(int x = 0, int y = 0, int h = 1, int w = -1) {
			if (w < 0) {
				w = this->interface.width;
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
					if(DETOX_DEBUGGING && DETOX_SLOW_MODE) Sleep(1);
				}
				std::cout << '\0';
				//Sleep(0.0001);
				//Sleep(0.2);
			}
			this->currentBuffer._cursor(x, y);
			return this->currentBuffer;
		}
		//void _text() { new char ... } // To-do
		
		void _message(char msg[]) {
			std::cout << "| ";
			std::cout << msg;
			std::cout << std::endl;
		}
		RATE rate;
		BUFFER currentBuffer;
		INTERFACE interface;
		ENVIRONMENT environment;
		MAP map;
		PLAYER player;
	};
}

