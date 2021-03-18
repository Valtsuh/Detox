
#define DETOX_EXIT					0
#define DETOX_EXIST					1
#define DETOX_WINDOW_CHARACTERS		8
#define DETOX_WINDOW_PIXELS			16
#define DETOX_TEST					7
#define DETOX_ATTEMPTS				4
#define DETOX_ERROR_EXIT			5
#define DETOX_RUN					DETOX_EXIST

#define DETOX_MENU					DETOX_EXIST
#define DETOX_MENU_BEGIN			113		// Q
#define DETOX_MENU_OPTIONS			99		// C
#define DETOX_MENU_OPTIONS_SIZE		117		// U
#define DETOX_MENU_OPTIONS_SIZE_SMALL	49	// 1
#define DETOX_MENU_OPTIONS_SIZE_AVERAGE	50	// 2
#define DETOX_MENU_OPTIONS_SIZE_LARGE	51	// 3
#define DETOX_MENU_BACK				98		// B
#define DETOX_MENU_CREATOR			118		// V
#define DETOX_MENU_EXIT				120		// X


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
		struct PLAYER {
			char character = '@';
			int x, y;
			PLAYER _self() {
				return *this;
			}
			PLAYER _move() {
				//this->x = rand() % 
				return *this;
			}
		};
		struct ENVIRONMENT {
			DETOX_DUAL size;
			char way = '-';
			ENVIRONMENT _action() {
				return *this;
			}
		};
		struct INTERFACE {
			int top, bottom, left, right;
			INTERFACE _self() {
				this->top = 4;
				this->bottom = 1;
				this->left = 1;
				this->right = 1;
				return *this;
			}
		};
		struct MAP {
			int width = 16;
			int height = 8;
			char tile = '.';
			ENVIRONMENT environment;
		};
		int played, started, save, initialized;
		char input, selection;

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
				this->currentBuffer._self();
				this->interface._self();
			}
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
					std::cout << "Failed at [DETOX]" << std::endl;
					std::cout << winfo << " " << binfo << std::endl;
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
			if (!this->save) {
				this->player.x = 1 + rand() % this->map.width - 1;
				this->player.y = 1 + rand() % this->map.height - 1;
			}
			if(!this->initialized) this->initialized = DETOX_EXIST;
			return *this;
		}

		DETOX _menu() {
			this->currentBuffer._cursor(0, 0);
			std::cout << "   == Detox  ==   " << std::endl;
			this->currentBuffer._cursor(0, 2);
			for (int i = 0; i < 8; i++) this->_clearText();
			this->currentBuffer._cursor(0, 2);
			switch ((int)this->selection) {
			case DETOX_MENU:
			case DETOX_MENU_BACK:
				std::cout << " [Q] Begin" << std::endl;
				std::cout << " [C] Options" << std::endl;
				std::cout << " [V] Creator" << std::endl;
				std::cout << " [X] Exit" << std::endl;

				std::cin >> this->selection;
				//std::cout << (int)this->selection << std::endl;
				break;
			case DETOX_MENU_BEGIN:
				this->started = DETOX_EXIST;
				break;
			case DETOX_MENU_OPTIONS:
				std::cout << " [U] Change size" << std::endl;
				std::cout << " [B] Go back" << std::endl;
				std::cin >> this->selection;
				break;
			case DETOX_MENU_OPTIONS_SIZE:
				this->_size();
				break;
			case DETOX_MENU_CREATOR:
				std::cout << "Created by Valtsu" << std::endl;
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

		DETOX _size(int size = -1) {
			this->currentBuffer._cursor(0, 2);
			std::cout << "Change size:" << std::endl;
			std::cout << " [1] Small	(32,8)" << std::endl;
			std::cout << " [2] Average	(48,12)" << std::endl;
			std::cout << " [3] Large	(64,16)" << std::endl;
			std::cout << " [B] Go back" << std::endl;
			std::cin >> this->selection;
			this->selection = (char)this->selection;
			std::cout << this->selection << std::endl;
			switch ((int)this->selection) {
			case DETOX_MENU_OPTIONS_SIZE_SMALL:
				this->_self(32, 8, DETOX_WINDOW_CHARACTERS, 5, 5, 1000);
				this->selection = DETOX_MENU_OPTIONS;
				break;
			case DETOX_MENU_OPTIONS_SIZE_AVERAGE:
				this->_self(48, 12, DETOX_WINDOW_CHARACTERS, 5, 5, 1000);
				this->selection = DETOX_MENU_OPTIONS;
				break;
			case DETOX_MENU_OPTIONS_SIZE_LARGE:
				this->_self(64, 16, DETOX_WINDOW_CHARACTERS, 5, 5, 1000);
				this->selection = DETOX_MENU_OPTIONS;
				break;
			case DETOX_MENU_BACK:
			default:
				this->selection = DETOX_MENU;
				break;
			}
			system("pause");
			return *this;
		}


		void _clearText() {
			switch (this->map.width) {
			case 32:
				std::cout << "                               " << std::endl;
				break;
			case 48:
				std::cout << "                                               " << std::endl;
				break;
			case 64:
				std::cout << "                                                               " << std::endl;
				break;
			}
		}
		DETOX _status() {
			SwitchToThread();
			this->currentBuffer._cursor(0, 1);
			std::cout << this->player.character << " (" << this->player.x << ", " << this->player.y << ") - " << this->map.width << " / " << this->map.height << " " << this->counter << std::endl;

			if (this->input == 'x') {
				this->played = DETOX_EXIT;
				//system("taskkill /f /im detoxthegame.exe");
			}
			return *this;
		}

		int button() {
			return 0;
		}

		DETOX_DATA _input() {
			DETOX_DATA input;
			input._self();
			return input;
		}

		DWORD _wait(int countX) {
			DWORD count = SuspendThread(GetCurrentThread());
			return count;
		}
		void _message(const char message[]) {
			int length = 0;
			char* msg = new char[this->map.width];
			for (int i = 0; i < this->map.width; i++) msg[i] = ' ';
			do {
				msg[length] = message[length];
				if (message[length] == '\0') {
					break;
				}
				length++;
			} while (length < this->map.width);
			std::cout << msg << std::endl;
		}
		DETOX _events() {
			this->currentBuffer._cursor(0, 2);
			int dice = rand() % 50;
			switch (dice) {
			default:
				this->_message("                               "); // 32
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
			}
			return *this;
		}
		DETOX _render(int width = 16, int height = 8) {
			DETOX_DATA input;
			this->currentBuffer._cursor(0, 4);
			char* rend = new char[this->map.width];
			for (int h = 0; h < this->map.height; h++) {
				for (int w = 0; w <= this->map.width; w++) {
					if (w == this->map.width) {
						rend[w] = '\0';
						break;
					}
					if (w == this->player.x && h == this->player.y) {
						rend[w] = player.character;
					}
					else {
						rend[w] = map.tile;
					}
				}
				std::cout << rend << std::endl;
			}
			this->counter++;
			return *this;
		}
		DETOX _gather() { // To-do, clean-up, etc...
			Sleep(this->rate);
			return *this;
		}
		BUFFER currentBuffer;
		PLAYER player;
		INTERFACE interface;
		MAP map;
	};
}

