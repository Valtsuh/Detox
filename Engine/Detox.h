#define DETOX_EXIT							0
#define DETOX_EXIST							1
#define DETOX_WINDOW_CHARACTERS				8
#define DETOX_WINDOW_PIXELS					16
#define DETOX_TEST							7
#define DETOX_ATTEMPTS						4
#define DETOX_ERROR_EXIT					5
#define DETOX_RUN							DETOX_EXIST

#define DETOX_MENU							DETOX_EXIST
#define DETOX_MENU_BEGIN					113		// Q
#define DETOX_MENU_OPTIONS					99		// C
#define DETOX_MENU_OPTIONS_SIZE				117		// U

#define DETOX_MENU_OPTIONS_SIZE_SMALL		49		// 1
#define DETOX_OPTION_SMALL					1
#define DETOX_OPTION_SMALL_WIDTH			16
#define DETOX_OPTION_SMALL_HEIGHT			8

#define DETOX_MENU_OPTIONS_SIZE_AVERAGE		50		// 2
#define DETOX_OPTION_AVERAGE				2
#define DETOX_OPTION_AVERAGE_WIDTH			32
#define DETOX_OPTION_AVERAGE_HEIGHT			16

#define DETOX_MENU_OPTIONS_SIZE_LARGE		51		// 3
#define DETOX_OPTION_LARGE					3
#define DETOX_OPTION_LARGE_WIDTH			64
#define DETOX_OPTION_LARGE_HEIGHT			32

#define DETOX_MENU_OPTIONS_MODE				109		// M
#define DETOX_MENU_OPTIONS_MODE_AUTO		49
#define DETOX_MENU_OPTIONS_MODE_MANUAL		50
#define DETOX_MENU_BACK						98		// B
#define DETOX_MENU_CREATOR					118		// V
#define DETOX_MENU_EXIT						120		// X

#define DETOX_PLAYER_NAME_LENGTH			16
#define DETOX_PLAYER_SKILLS					4
#define DETOX_PLAYER_COLLISION				1
#define DETOX_PLAYER_SPEED					50
	
#define DETOX_CREATURES						5
#define DETOX_CREATURE_NAME_LENGTH			8
#define DETOX_CREATURE_SKILLS				2
#define DETOX_CREATURE_COLLISION			1
#define DETOX_CREATURE_SPEED				25

#define DETOX_SKILL_SPEED					100
#define DETOX_SKILL_VELOCITY				1
#define DETOX_SKILL_ENDURANCE				2
#define DETOX_SKILL_NAME_LENGTH				32

#define DETOX_MESSAGE_UP					"You try to move up."
#define DETOX_MESSAGE_DOWN					"You slide down."
#define DETOX_MESSAGE_LEFT					"You attempt to the left."
#define DETOX_MESSAGE_RIGHT					"You move to the right."
#define DETOX_MESSAGE_CREATURE_COLLISION	"You bumped into a creature."

#define DETOX_NO_COLLISION					0
#define DETOX_MESSAGE_LENGTH				32
	
#define DETOX_INTERFACE_TITLE				0
#define DETOX_INTERFACE_MENU_START			2
	
#define DETOX_INTERFACE_STATUS				1
#define DETOX_INTERFACE_EVENTS				2
#define DETOX_INTERFACE_SKILLS				3
#define DETOX_INTERFACE_DEBUG				4
#define DETOX_INTERFACE_CREATURES			5
#define DETOX_INTERFACE_RENDER_START		6
		
#define DETOX_INTERFACE_TOP					DETOX_INTERFACE_RENDER_START
#define DETOX_INTERFACE_BOTTOM				1
#define DETOX_INTERFACE_LEFT				2
#define DETOX_INTERFACE_RIGHT				2
#define DETOX_INTERFACE_STATISTICS_WIDTH	16
		
#define DETOX_MODE_AUTO						1
#define DETOX_MODE_MANUAL					2



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

typedef int DETOX_NUMBER;

namespace detox {
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
		int rate;
	public:
		DETOX_VERSION version;
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
			int width = 16;
			int height = 8;
			char tile = '.';
		};
		struct LOCATION {
			int x, y;
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
				this->width = this->left + width + this->right + DETOX_INTERFACE_STATISTICS_WIDTH;
				this->statistics.x = this->left + this->right + width + 1;
				this->statistics.y = this->top - 1;
				return *this;
			}
		};
		struct SKILL {
			char name[DETOX_SKILL_NAME_LENGTH];
			int experience, identifier, counter;
			SKILL _update(int exp = -1) {
				if (exp > 0) {
					this->experience += exp;
				}
				return *this;
			}
			SKILL _self(const char name[], int identifier) {
				for (int i = 0; i < DETOX_SKILL_NAME_LENGTH; i++) {
					this->name[i] = name[i];
				}
				this->identifier = identifier;
				this->experience = 0;
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

		struct CREATURE {
			char character;
			char name[DETOX_CREATURE_NAME_LENGTH];
			DICE dice;
			LOCATION location, to;
			int collision;
			SKILL skills[DETOX_CREATURE_SKILLS];
			MAP map;
			INTERFACE interface;
			CREATURE _self() {
				return *this;
			}
			CREATURE _new(char character, int x = -1, int y = -1) {
				this->character = character;
				if (x > 0) {
					this->location.x = x;
				}
				else {
					this->location.x = 1 + rand() % this->map.width - 1;
				}
				if (y > 0) {
					this->location.y = y;
				}
				else {
					this->location.y = 1 + rand() % this->map.height - 1;
				}
				this->to.x = this->location.x;
				this->to.y = this->location.y;
				return *this;
			}
			CREATURE _move(LOCATION location, int mode = -1) {
				this->dice._roll(0, DETOX_CREATURE_SPEED);
				switch (this->dice.value) {
				case 1:
					if (this->location.y > 0) {
						this->to.y -= 1;
					}
					break;
				case 2:
					if (this->location.y < this->map.height - 1) {
						this->to.y += 1;
					}
					break;
				case 3:
					if (this->location.x > 0) {
						this->to.x -= 1;
					}
					break;
				case 4:
					if (this->location.x < this->map.width - 1) {
						this->to.x += 1;
					}
					break;
				}
				if (this->to.x == location.x && this->to.y == location.y) {
					// Creature collided with player
					this->to.x = this->location.x;
					this->to.y = this->location.y;
					std::cout << "Creature bumped into player.";
				}
				else {
					this->location.x = this->to.x;
					this->location.y = this->to.y;
				}
				return *this;
			}
		};
		struct ENVIRONMENT {
			CREATURE creatures[DETOX_CREATURES];
			char message[DETOX_MESSAGE_LENGTH];
			DICE dice;
			int init = DETOX_EXIT;
			int collision;
			DETOX_DUAL size;
			char way = '-';
			ENVIRONMENT _self() {
				for (int i = 0; i < DETOX_CREATURES; i++) {
					this->creatures[i] = this->creatures[i]._new('u');
				}
				this->init = DETOX_EXIST;
				return *this;
			}
			ENVIRONMENT _action() {
				return *this;
			}
		};
		struct PLAYER {

			char character = '@';
			char name[DETOX_PLAYER_NAME_LENGTH];
			int collision, bumps;
			char message[DETOX_MESSAGE_LENGTH];
			DICE dice;
			LOCATION location, to;
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
				this->location.x = 1 + rand() % this->map.width - 1;
				this->location.y = 1 + rand() % this->map.height - 1;
				this->to.x = this->location.x;
				this->to.y = this->location.y;
				this->skills[0]._self("Velocity", DETOX_SKILL_VELOCITY);
				this->skills[1]._self("Endurance", DETOX_SKILL_ENDURANCE);
				return *this;
			}
			void _message(const char msg[]) {
				for (int i = 0; i < DETOX_MESSAGE_LENGTH; i++) {
					this->message[i] = msg[i];
				}
			}
			PLAYER _move(ENVIRONMENT environment, int mode = -1) {
				this->dice._roll(0, DETOX_PLAYER_SPEED);
				this->collision = DETOX_NO_COLLISION;
				switch (this->dice.value) {
				default:
					this->_message("");
					break;
				case 1:
					if (this->location.y > 0) {
						this->to.y = this->location.y - 1;
						this->to.x = this->location.x;
						this->_message(DETOX_MESSAGE_UP);
						//this->message = *DETOX_MESSAGE_UP;
						//std::cout << DETOX_MESSAGE_UP << std::endl;
					}
					break;
				case 2:
					if (this->location.y < this->map.height - 1) {
						this->to.y = this->location.y + 1;
						this->to.x = this->location.x;
						this->_message(DETOX_MESSAGE_DOWN);
						//this->message = DETOX_MESSAGE_DOWN;
						//std::cout << "You slide down." << std::endl;

					}
					break;
				case 3:
					if (this->location.x > 0) {
						this->to.x = this->location.x - 1;
						this->to.y = this->location.y;
						this->_message(DETOX_MESSAGE_LEFT);
						//this->message = DETOX_MESSAGE_LEFT;
						//std::cout << "You attempt to the left." << std::endl;
					}
					break;
				case 4:
					if (this->location.x < this->map.width - 1) {
						this->to.x = this->location.x + 1;
						this->to.y = this->location.y;
						this->_message(DETOX_MESSAGE_RIGHT);
						//this->message = DETOX_MESSAGE_RIGHT;
						//std::cout << "You move to the right." << std::endl;
					}
					break;
				}
				//std::cout << this->location.x << ">" << this->to.x << "," << this->location.y << ">" << this->to.y << " @ ";
				for (int c = 0; c < DETOX_CREATURES; c++) {
					//std::cout << environment.creatures[c].location.x << "," << environment.creatures[c].location.y << " ";
					if (environment.creatures[c].location.x == this->to.x && environment.creatures[c].location.y == this->to.y) {
						this->collision = DETOX_CREATURE_COLLISION;
						this->_message(DETOX_MESSAGE_CREATURE_COLLISION);
						this->bumps += 1;
						break;
					}
				}
				if (this->collision == DETOX_NO_COLLISION) {
					this->location.y = this->to.y;
					this->location.x = this->to.x;
				}
				else {
					// Collision happened, etc.
					this->to.y = this->location.y;
					this->to.x = this->location.x;
				}

				return *this;
			}
			PLAYER _skills() {
				this->_message("");
				if (this->collision == DETOX_CREATURE_COLLISION) {
					this->dice._roll(0, DETOX_SKILL_SPEED);
					switch (this->dice.value) {
					default:
						break;
					case 1:
						this->_message("Creature bit, Endurance fell.");
						this->skills[DETOX_SKILL_ENDURANCE].experience -= 1;
						break;
					case 21:
						this->_message("Creature spotted, Velocity fell.");
						this->skills[DETOX_SKILL_VELOCITY].experience -= 1;
						break;
					case 25:
						this->_message("Too quick, Velocity gained.");
						this->skills[DETOX_SKILL_VELOCITY].experience += 1;
						break;
					case 30:
						this->_message("Very sustainable, Endurance gained.");
						this->skills[DETOX_SKILL_ENDURANCE].experience += 1;
						break;
					}
				}
				return *this;
			}
		};
		
		int played, started, save, initialized, mode, size;
		char input, selection;

		void _sweep() {
			this->_clearText(0, 0, this->interface.height, this->interface.width);
		}
		DETOX _title() {
			this->currentBuffer._cursor(0, DETOX_INTERFACE_TITLE);
			std::cout << "   == Detox (" << this->mode << ", " << (int)this->selection << ") ==   " << std::endl;
			return *this;
		}
		DETOX _menu() {
			this->_clearText(0, DETOX_INTERFACE_MENU_START, DETOX_INTERFACE_TOP);
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
				this->_create();
				//this->_clearText(0, this->interface.width, 8);
				if (!this->save) {
					this->player._self(this->map);
					this->environment._self();
					if (!this->mode) this->mode = DETOX_MODE_AUTO;
				}
				this->started = DETOX_EXIST;
				break;
			case DETOX_MENU_OPTIONS:
				std::cout << " [U] Change size" << std::endl;
				std::cout << " [M] Play mode" << std::endl;
				std::cout << " [B] Go back" << std::endl;
				std::cin >> this->selection;
				break;
			case DETOX_MENU_OPTIONS_SIZE:
				this->_size();
				break;
			case DETOX_MENU_OPTIONS_MODE:
				this->_mode();
				break;
			case DETOX_MENU_CREATOR:
				std::cout << "Created by Valtsu" << std::endl;
				//std::cout << ""
				std::cout << this->initialized << std::endl;
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
		DETOX _mode(int mode = -1) {
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
			return *this;
		}
		DETOX _size(int size = -1) {
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
				this->_self(DETOX_OPTION_SMALL_WIDTH, DETOX_OPTION_SMALL_HEIGHT, DETOX_WINDOW_CHARACTERS, 5, 5, this->rate);
				this->size = DETOX_OPTION_SMALL;
				this->selection = DETOX_MENU_OPTIONS;
				break;
			case DETOX_MENU_OPTIONS_SIZE_AVERAGE:
				//SetWindowPos(this->console, HWND_TOP, 5, 5, 800, 640, SWP_SHOWWINDOW);
				this->_self(DETOX_OPTION_AVERAGE_WIDTH, DETOX_OPTION_AVERAGE_HEIGHT, DETOX_WINDOW_CHARACTERS, 5, 5, this->rate);
				this->size = DETOX_OPTION_AVERAGE;
				this->selection = DETOX_MENU_OPTIONS;
				break;
			case DETOX_MENU_OPTIONS_SIZE_LARGE:
				//SetWindowPos(this->console, HWND_TOP, 5, 5, 800, 640, SWP_SHOWWINDOW);
				this->_self(DETOX_OPTION_LARGE_WIDTH, DETOX_OPTION_LARGE_HEIGHT, DETOX_WINDOW_CHARACTERS, 5, 5, this->rate);
				this->size = DETOX_OPTION_LARGE;
				this->selection = DETOX_MENU_OPTIONS;
				break;
			case DETOX_MENU_BACK:
			default:
				this->selection = DETOX_MENU;
				break;
			}
			return *this;
		}

		DETOX _status() {
			SwitchToThread();
			this->_clearText(0, DETOX_INTERFACE_STATUS);
			for (int i = 0; i < this->interface.left; i++) std::cout << " ";
			std::cout << "| " << this->player.character << " (" << this->player.location.x << ", " << this->player.location.y << ") - " << this->map.width << " / " << this->map.height << " " << this->counter << std::endl;

			if (this->input == 'x') {
				//this->played = DETOX_EXIT;
				//system("taskkill /f /im detoxthegame.exe");
			}
			return *this;
		}

		DETOX _events() {
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
			for (int c = 0; c < DETOX_CREATURES; c++) {
				this->environment.creatures[c]._move(this->player.location);
			}
			std::cout << std::endl;
			return *this;
		}

		void _debug() {
			this->_clearText(0, DETOX_INTERFACE_DEBUG);
			for (int i = 0; i < this->interface.left; i++) std::cout << " ";
			std::cout << "| ";
			//std::cout << "Velocity: " << this->player.skills[DETOX_SKILL_VELOCITY].experience << ", Endurance: " << this->player.skills[DETOX_SKILL_ENDURANCE].experience << " @ " << this->player.bumps;
			std::cout << std::endl;
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
			char* rend = new char[this->map.width];
			for (int h = 0; h < this->map.height; h++) {
				for (int il = 0; il < this->interface.left; il++) std::cout << ' ';
				for (int w = 0; w <= this->map.width; w++) {
					rend[w] = this->map.tile;
					for (int c = 0; c < DETOX_CREATURES; c++) {
						CREATURE creature = this->environment.creatures[c];
						if (creature.location.x == w && creature.location.y == h) rend[w] = creature.character;
					}
					if (w == this->player.location.x && h == this->player.location.y) rend[w] = this->player.character;
					if (w == this->map.width) rend[w] = '\0';
				}
				std::cout << rend;
				for (int ir = 0; ir < this->interface.right; ir++) std::cout << ' ';
				std::cout << std::endl;
			}

			return *this;
		}
		DETOX _gather() { // To-do, clean-up, etc...
			this->_statistics();
			this->currentBuffer._cursor(0, this->interface.height);
			//std::cout << this->interface.top << " " << this->map.height << std::endl;
			if (this->mode == DETOX_MODE_AUTO) {
				Sleep(this->rate);
			}
			else {
				std::cin >> this->input;
				this->_controls(this->input);
			}
			//this->_clearText(0, this->interface.top + this->map.width + 1);
			this->counter++;
			return *this;
		}

		void _controls(char button) {
			switch (button) {
			default:
				break;
			case 'w':
				if(this->player.location.y > 0) this->player.location.y -= 1;
				break;
			case 's':
				if (this->player.location.y < this->map.height - 1) this->player.location.y += 1;
				break;
			case 'a':
				if (this->player.location.x > 0) this->player.location.x -= 1;
				break;
			case 'd':
				if (this->player.location.x < this->map.width - 1) this->player.location.x += 1;
				break;
			case 'x':
				this->started = DETOX_EXIT;
				this->selection = DETOX_MENU;
				break;
			}
		}
		void _statistics() {
			int x = this->interface.left + this->map.width + this->interface.right;
			int y = this->interface.top;
			int h = 1;
			int w = DETOX_INTERFACE_STATISTICS_WIDTH;

			this->currentBuffer._cursor(x, y);
			std::cout << this->player.name << std::endl; // To-do cursor -> clear text -> titles(ish)?
			this->_clearText(x, y + 1, h, w);
			std::cout << " Endurance: " << this->player.skills[DETOX_SKILL_ENDURANCE].experience << std::endl;
			this->_clearText(x, y + 2, h, w);
			std::cout << " Velocity: " << this->player.skills[DETOX_SKILL_VELOCITY].experience << std::endl;
			this->_clearText(x, y + 3, h, w);
			std::cout << " " << DETOX_CREATURES << " @ " << this->player.bumps << std::endl;
			for (DETOX_NUMBER c = 0; c < 3; c++) {
				this->_clearText(x, y + 5 + c, h, w);
				CREATURE creature = this->environment.creatures[c];
				std::cout << " - " << creature.location.x << ", " << creature.location.y << std::endl;
			}

		}
		DETOX _self(int width = 640, int height = 400, int mode = DETOX_WINDOW_PIXELS, int x = 900, int y = 10, int rate = 1000) {

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
				this->currentBuffer.info.srWindow.Right = width + this->interface.right + this->interface.left + DETOX_INTERFACE_STATISTICS_WIDTH;
				this->currentBuffer.info.dwSize.X = width + this->interface.left + this->interface.right + DETOX_INTERFACE_STATISTICS_WIDTH + 1;
				this->currentBuffer.info.dwSize.Y = height + this->interface.top + this->interface.bottom + 1;
				this->currentBuffer.info.dwMaximumWindowSize.X = width + this->interface.left + this->interface.right + DETOX_INTERFACE_STATISTICS_WIDTH;
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
			this->map.width = width;
			this->map.height = height;
			this->size = DETOX_OPTION_SMALL;
			this->rate = rate;
			this->played = DETOX_EXIST;
			this->selection = DETOX_EXIST;
			if (!this->initialized) this->initialized = DETOX_EXIST;
			return *this;
		}

		void _clearText(int x = 0, int y = 0, int h = 1, int w = -1) {
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
				}
				std::cout << '\0';
				Sleep(0.0001);
			}
			this->currentBuffer._cursor(x, y);
		}
		void _message(const char message[]) {
			for (int i = 0; i < this->interface.left; i++) std::cout << " ";
			std::cout << "| ";
			std::cout << message << std::endl;
		}
		BUFFER currentBuffer;
		PLAYER player;
		INTERFACE interface;
		MAP map;
		CREATURE creature;
		ENVIRONMENT environment;
	};
}

