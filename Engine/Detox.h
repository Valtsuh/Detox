#define DETOX_EXIT						0
#define DETOX_EXIST						1
#define DETOX_WINDOW_CHARACTERS			8
#define DETOX_WINDOW_PIXELS				16
#define DETOX_TEST						7
#define DETOX_ATTEMPTS					4
#define DETOX_ERROR_EXIT				5
#define DETOX_RUN						DETOX_EXIST

#define DETOX_MENU						DETOX_EXIST
#define DETOX_MENU_BEGIN				113		// Q
#define DETOX_MENU_OPTIONS				99		// C
#define DETOX_MENU_OPTIONS_SIZE			117		// U
#define DETOX_MENU_OPTIONS_SIZE_SMALL	49		// 1
#define DETOX_MENU_OPTIONS_SIZE_AVERAGE	50		// 2
#define DETOX_MENU_OPTIONS_SIZE_LARGE	51		// 3
#define DETOX_MENU_OPTIONS_MODE			109		// M
#define DETOX_MENU_OPTIONS_MODE_AUTO	49
#define DETOX_MENU_OPTIONS_MODE_MANUAL	50
#define DETOX_MENU_BACK					98		// B
#define DETOX_MENU_CREATOR				118		// V
#define DETOX_MENU_EXIT					120		// X

#define DETOX_PLAYER_SKILLS				2

#define DETOX_CREATURES					4
#define DETOX_CREATURE_SKILLS			2

#define DETOX_INTERFACE_TITLE			0
#define DETOX_INTERFACE_MENU_START		2
#define DETOX_INTERFACE_STATUS			1
#define DETOX_INTERFACE_EVENTS			2
#define DETOX_INTERFACE_DEBUG			3
#define DETOX_INTERFACE_CREATURES		4
#define DETOX_INTERFACE_RENDER_START	5

#define DETOX_INTERFACE_TOP				6
#define DETOX_INTERFACE_BOTTOM			1
#define DETOX_INTERFACE_LEFT			2
#define DETOX_INTERFACE_RIGHT			16

#define DETOX_MODE_AUTO					1
#define DETOX_MODE_MANUAL				2



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

		struct INTERFACE {
			int top, bottom, left, right;
			INTERFACE _self() {
				this->top = DETOX_INTERFACE_TOP;
				this->bottom = DETOX_INTERFACE_BOTTOM;
				this->left = DETOX_INTERFACE_LEFT;
				this->right = DETOX_INTERFACE_RIGHT;
				return *this;
			}
		};
		struct MAP {
			int width = 16;
			int height = 8;
			char tile = '.';
		};
		struct SKILL {
			char name;
			int experience;
			SKILL _update(int exp = -1) {
				if (exp > 0) {
					this->experience += exp;
				}
				return *this;
			}
		};
		struct PLAYER {
			char character = '@';
			int x, y;
			SKILL skills[DETOX_PLAYER_SKILLS];
			PLAYER _self() {
				return *this;
			}
			PLAYER _move() {
				//this->x = rand() % 
				return *this;
			}
		};


		struct CREATURE {
			char character;
			int x, y;
			SKILL skills[DETOX_CREATURE_SKILLS];
			MAP map;
			INTERFACE interface;
			CREATURE _self() {
				return *this;
			}
			CREATURE _new(char character, int x = -1, int y = - 1) {
				this->character = character;
				if (x > 0) {
					this->x = x;
				}
				else {
					this->x = 1 + rand() % this->map.width - 1;
				}
				if (y > 0) {
					this->y = y;
				}
				else {
					this->y = 1 + rand() % this->map.height - 1;
				}

				return *this;
			}
		};
		struct ENVIRONMENT {
			CREATURE creatures[DETOX_CREATURES];
			int init = DETOX_EXIT;
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
		int played, started, save, initialized, mode;
		char input, selection;

		DETOX _title() {
			this->currentBuffer._cursor(0, DETOX_INTERFACE_TITLE);
			std::cout << "   == Detox (" << this->mode << ", " << (int)this->selection << ") ==   " << std::endl;
			return *this;
		}
		DETOX _menu() {
			for (int i = 0; i < 8; i++) this->_clearText(0, DETOX_INTERFACE_MENU_START, DETOX_INTERFACE_TOP);
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
				if (!this->save) {
					this->player.x = 1 + rand() % this->map.width - 1;
					this->player.y = 1 + rand() % this->map.height - 1;
					if (!this->mode) this->mode = DETOX_MODE_AUTO;
				}
				this->environment._self();
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
				this->_self(32, 8, DETOX_WINDOW_CHARACTERS, 5, 5, this->rate);
				this->selection = DETOX_MENU_OPTIONS;
				break;
			case DETOX_MENU_OPTIONS_SIZE_AVERAGE:
				//SetWindowPos(this->console, HWND_TOP, 5, 5, 800, 640, SWP_SHOWWINDOW);
				this->_self(48, 12, DETOX_WINDOW_CHARACTERS, 5, 5, this->rate);
				this->selection = DETOX_MENU_OPTIONS;
				break;
			case DETOX_MENU_OPTIONS_SIZE_LARGE:
				//SetWindowPos(this->console, HWND_TOP, 5, 5, 800, 640, SWP_SHOWWINDOW);
				this->_self(64, 16, DETOX_WINDOW_CHARACTERS, 5, 5, this->rate);
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
			std::cout << "| " << this->player.character << " (" << this->player.x << ", " << this->player.y << ") - " << this->map.width << " / " << this->map.height << " " << this->counter << std::endl;

			if (this->input == 'x') {
				//this->played = DETOX_EXIT;
				//system("taskkill /f /im detoxthegame.exe");
			}
			return *this;
		}

		DETOX _events() {
			this->_clearText(0, DETOX_INTERFACE_EVENTS);
			int dice = rand() % 50;
			if (this->mode == DETOX_MODE_AUTO) {
				switch (dice) {
				default:
					this->_message("");
					break;
				case 1:
					if (this->player.y > 0) this->player.y -= 1;
					this->_message("You try to move up.");
					break;
				case 2:
					if (this->player.y < this->map.height - 1) this->player.y += 1;
					this->_message("You slide down.");
					break;
				case 3:
					if (this->player.x > 0) this->player.x -= 1;
					this->_message("You move to the left.");
					break;
				case 4:
					if (this->player.x < this->map.width - 1) this->player.x += 1;
					this->_message("You move to the right.");
					break;
				case 5:
					this->_message("");
					break;
				}
			} else {

			}
			int cDice = 0;
			this->_clearText(0, DETOX_INTERFACE_CREATURES);
			for (int i = 0; i < this->interface.left; i++) std::cout << " ";
			std::cout << "| ";
			for (int c = 0; c < DETOX_CREATURES; c++) {
				cDice = rand() % 25;
				switch (cDice) {
				case 1:
					if (this->environment.creatures[c].y > 0) this->environment.creatures[c].y -= 1;
					std::cout << this->environment.creatures[c].y << "/" << this->environment.creatures[c].x << std::endl;
					break;
				case 2:
					if (this->environment.creatures[c].y < this->map.height - 1) this->environment.creatures[c].y += 1;
					std::cout << this->environment.creatures[c].y << "/" << this->environment.creatures[c].x << std::endl;
					break;
				case 3:
					if (this->environment.creatures[c].x > 0) this->environment.creatures[c].x -= 1;
					std::cout << this->environment.creatures[c].y << "/" << this->environment.creatures[c].x << std::endl;
					break;
				case 4:
					if (this->environment.creatures[c].x < this->map.width - 1) this->environment.creatures[c].x += 1;
					std::cout << this->environment.creatures[c].y << "/" << this->environment.creatures[c].x << std::endl;
					break;
				}
			}
			return *this;
		}

		void _debug() {
			this->_clearText(0, DETOX_INTERFACE_DEBUG);
			CREATURE c = this->environment.creatures[0];
			for (int i = 0; i < this->interface.left; i++) std::cout << " ";
			std::cout << "| ";

			std::cout << std::endl;
		}
		DETOX _render(int width = 16, int height = 8) {

			this->_clearText(0, DETOX_INTERFACE_RENDER_START);
			char* rend = new char[this->map.width];
			for (int h = 0; h < this->map.height; h++) {
				//this->_clearText(0, h + this->interface.top);
				for (int i = 0; i < this->interface.left; i++)std::cout << ' ';
				for (int w = 0; w <= this->map.width; w++) {
					rend[w] = this->map.tile;
					for (int c = 0; c < DETOX_CREATURES; c++) {
						if (this->environment.creatures[c].x == w && this->environment.creatures[c].y == h) rend[w] = this->environment.creatures[c].character;
					}
					if (w == this->player.x && h == this->player.y) rend[w] = this->player.character;
					if (w == this->map.width) rend[w] = '\0';
				}
				//std::cout << rend[this->interface.left] << std::endl;
				std::cout << rend << std::endl;
			}
			return *this;
		}
		DETOX _gather() { // To-do, clean-up, etc...
			if (this->mode == DETOX_MODE_AUTO) {
				Sleep(this->rate);
			}
			else {
				std::cin >> this->input;
				this->_controls(this->input);
			}
			this->counter++;
			return *this;
		}

		void _controls(char button) {
			switch (button) {
			default:
				break;
			case 'w':
				if(this->player.y > 0) this->player.y -= 1;
				break;
			case 's':
				if (this->player.y < this->map.height - 1) this->player.y += 1;
				break;
			case 'a':
				if (this->player.x > 0) this->player.x -= 1;
				break;
			case 'd':
				if (this->player.x < this->map.width - 1) this->player.x += 1;
				break;
			case 'x':
				this->started = DETOX_EXIT;
				this->selection = DETOX_MENU;
				break;
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
				this->interface._self();
			}
			RECT desktop;
			GetWindowRect(this->desktop, &desktop);
			SetWindowPos(this->window, HWND_TOP, 0, 0, desktop.right, desktop.bottom, SWP_HIDEWINDOW);
			SetWindowPos(this->console, HWND_TOP, 5, 5, desktop.right - 5, desktop.bottom - 5, SWP_HIDEWINDOW);
			//this->currentBuffer._set(inputBufferHandle);
			switch (mode) {
			case DETOX_WINDOW_CHARACTERS:
				//this->currentBuffer.info.srWindow.Top = y;
				this->currentBuffer.info.srWindow.Bottom = height + this->interface.bottom + this->interface.top - 1;
				//this->currentBuffer.info.srWindow.Left = x;
				this->currentBuffer.info.srWindow.Right = width + this->interface.right + this->interface.left - 1;
				this->currentBuffer.info.dwSize.X = width + this->interface.left + this->interface.right;
				this->currentBuffer.info.dwSize.Y = height + this->interface.top + this->interface.bottom;
				this->currentBuffer.info.dwMaximumWindowSize.X = width + this->interface.left + this->interface.right + 1;
				this->currentBuffer.info.dwMaximumWindowSize.Y = height + this->interface.top + this->interface.bottom + 1;
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

			this->rate = rate;
			this->played = DETOX_EXIST;
			this->selection = DETOX_EXIST;
			if (!this->initialized) this->initialized = DETOX_EXIST;
			return *this;
		}

		void _clearText(int x = 0, int y = 0, int h = 1) {

			for (int i = 0; i < h; i++) {
				this->currentBuffer._cursor(x, y + i);
				for (int j = 0; j < this->map.width + this->interface.left + this->interface.right; j++) std::cout << " ";
				std::cout << std::endl;
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

