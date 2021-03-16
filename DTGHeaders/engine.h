
#define DETOX_EXIT					0
#define DETOX_EXIST					1
#define DETOX_WINDOW_CHARACTERS		8
#define DETOX_WINDOW_PIXELS			16
#define DETOX_TEST					7
#define DETOX_ATTEMPTS				4
#define DETOX_ERROR_EXIT			5
#define DETOX_RUN DETOX_EXIST

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
	class DETOX {
		HANDLE inputBufferHandle, outputBufferHandle, createdBufferHandle, currentBufferHandle;
		HWND console, window, desktop;
		DETOX_DUAL bufferSize; // to-do-test ... (?)
		int counter;
		int rate;
	public:
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
				} else if(setHandle == 0 && this->length < DETOX_ATTEMPTS) {
					this->length++;
					this->_set(newHandle);
				} else {
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
		int played;
		char input;

		DETOX _self(int width = 640, int height = 400, int mode = DETOX_WINDOW_PIXELS, int x = 900, int y = 10, int rate = 1000) {

			//SwitchToThread(); 
			// To-do: SetWindowsHook
			this->createdBufferHandle = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, 1, NULL);

			SetConsoleTitle(L"Detoxing");

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
			//this->currentBuffer._set(inputBufferHandle);
			switch (mode) {
			case DETOX_WINDOW_CHARACTERS:
				//std::cout << "X: " << x << " / " << this->currentBuffer.info.srWindow.Left << std::endl;
				//std::cout << "Y: " << y << " / " << this->currentBuffer.info.srWindow.Top << std::endl;
				//std::cout << "W: " << width << " / " << this->currentBuffer.info.srWindow.Right << std::endl;
				//std::cout << "H: " << height << " / " << this->currentBuffer.info.srWindow.Bottom << std::endl;
				//this->currentBuffer.info.srWindow.Top = y;
				this->currentBuffer.info.srWindow.Bottom = height + this->interface.bottom + this->interface.top - 1;
				//this->currentBuffer.info.srWindow.Left = x;
				this->currentBuffer.info.srWindow.Right = width + this->interface.right + this->interface.left - 1;
				this->currentBuffer.info.dwSize.X = width + this->interface.left + this->interface.right;
				this->currentBuffer.info.dwSize.Y = height + this->interface.top + this->interface.bottom;
				this->currentBuffer.info.dwMaximumWindowSize.X = width + this->interface.left + this->interface.right + 1;
				this->currentBuffer.info.dwMaximumWindowSize.Y = height + this->interface.top + this->interface.bottom + 1;
				//std::cout << "---" << std::endl;
				//std::cout << "M: " << this->currentBuffer.info.dwMaximumWindowSize.X << " / " << this->currentBuffer.info.dwMaximumWindowSize.Y << std::endl;
				//std::cout << "X: " << x << " / " << this->currentBuffer.info.srWindow.Left << std::endl;
				//std::cout << "Y: " << y << " / " << this->currentBuffer.info.srWindow.Top << std::endl;
				//std::cout << "W: " << width << " / " << this->currentBuffer.info.srWindow.Right << std::endl;
				//std::cout << "H: " << height << " / " << this->currentBuffer.info.srWindow.Bottom << std::endl;

				BOOL winfo;
				winfo = SetConsoleWindowInfo(this->currentBuffer.currentHandle, TRUE, &this->currentBuffer.info.srWindow);
				BOOL binfo;
				binfo = SetConsoleScreenBufferSize(this->currentBuffer.currentHandle, this->currentBuffer.info.dwSize);
				this->currentBuffer.gsSuccess += winfo + binfo;
				if (this->currentBuffer.gsSuccess < 2) { // Either failed.
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
			this->player.x = 1 + rand() % this->map.width - 1;
			this->player.y = 1 + rand() % this->map.height  - 1;
			return *this;
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
				if (this->player.x < this->map.width -1) this->player.x += 1;
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
					} else {
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


/*
	Pasting

				CONSOLE_FONT_INFO fInfo;
				GetCurrentConsoleFont(this->outputHandle, FALSE, &fInfo); // ... ?
				consoleWidth = (width * fInfo.dwFontSize.X) + GetSystemMetrics(SM_CXSIZE) + GetSystemMetrics(SM_CXBORDER);
				consoleHeight = (height * fInfo.dwFontSize.Y) + GetSystemMetrics(SM_CYSIZE) + GetSystemMetrics(SM_CYBORDER) + 1;
				
	CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
	COORD characterSpace;
	HANDLE outputHandle;
	COORD cursor;
	COORD bufferSize;
	RECT area;
	HDC deviceContextHandle;
	int width;
	int height;
public:

	struct CONTROLS {
		int button;
		int status;
		CONTROLS _buttonPushed(char button) {

			switch (button) {
			case 'w':
				//engine.player.y -= 1;
				break;
			case 's':
				//engine.player.y += 1;
				break;
			case 'a':
				//engine.player.x -= 1;
				break;
			case 'd':
				//engine.player.x += 1;
				break;
			case 'x':
				//engine.running = 0;
				break;
			}
			return *this;
		}
	};
	struct PLAYER {
		char character;
		int generated;
		int x,y;
		CONTROLS controller;
		PLAYER _move(char button) {
			//this->controller._buttonPushed(button);
		}
		PLAYER _self(int w, int h) {
			this->character = '@';
			this->_generatePosition(w, h);
			return *this;
		}
		PLAYER _generatePosition(int w, int h) {
			this->x = rand() % w;
			this->y = rand() % h;
			return *this;
		}
	};
	struct MAP {
		int width, height;
		char tile;
		//PLAYER player;
		MAP _self(int w, int h) {
			this->width = w;
			this->height = h;
			this->tile = '.';
			return *this;
		}
	};
	struct COLOR {
		int r, g, b;
	};
	DETOX_ENGINE _self(int type) {
		switch (type) {
		case 0:

		case 1:

			this->window = GetWindow(GetDesktopWindow(), GW_OWNER);
			this->console = GetConsoleWindow();
			this->outputHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			this->cursor.X = 0;
			this->cursor.Y = 0;
			SetConsoleCursorPosition(this->outputHandle, this->cursor);
			return *this;
			break;
		}
	}
	DETOX_ENGINE _setWindow(int width, int height, int x, int y) {
		//this->width = width;
		//this->height = height;
		this->area.left = x;
		this->area.right = width;
		this->area.top = y;
		this->area.bottom = height;
		this->_self();
		SetWindowPos(this->console, HWND_TOP, x, y, width, height,SWP_SHOWWINDOW); // In pixels
		this->running = 1;
		return *this;
	}

	DETOX_ENGINE _update() {

		return *this;
	}

	DETOX_ENGINE _close(HWND handle) {
		DestroyWindow(handle);
		return *this;
	}
	DETOX_ENGINE _draw(int width, int height) {
		this->window = GetWindow(this->console, GW_OWNER);
		this->deviceContextHandle = GetDC(this->window);
		WINDOWINFO winf = {};
		GetWindowInfo(this->console, &winf);
		system("cls");
		cout << "Dimensions: "  << this->width << " /" << this->height << endl;
		cout << "Window: left: " << winf.rcWindow.left << " / right: " << winf.rcWindow.right << endl;
		cout << "Client: left: " << winf.rcClient.left << " / right: " << winf.rcClient.right << endl;

		RECT area;
		area.left = winf.rcClient.left;
		area.top = winf.rcClient.top;
		area.right = winf.rcClient.right;
		area.bottom = winf.rcClient.bottom;

		cout << area.right << endl;
		FillRect(this->deviceContextHandle, &area, (HBRUSH)(COLOR_WINDOW));

		//RedrawWindow(this->window, NULL, NULL, RDW_INTERNALPAINT);
		return *this;
	}
	DETOX_ENGINE _debug() {
		this->_draw(this->width, this->height);
		cout << this->console << " / " << this->window << endl;
		return *this;
	}
	DETOX_ENGINE _events() {
		int digit = rand() % 50 + 1;
		cout << this->width << " / " << this->height << endl;
		switch (digit) {
		case 1:
			if(this->player.x > 1) this->player.x -= 1;
			break;
		case 2:
			if(this->player.x < this->width - 1) this->player.x += 1;
			break;
		case 3:
			if(this->player.y > 1) this->player.y -= 1;
			break;
		case 4:
			if(this->player.y < this->height - 1) this->player.y += 1;
			break;
		case 25:
			break;

		}
		return *this;
	}
	DETOX_ENGINE _render(int width, int height) {
		MAP map;
		map._self(width, height);
		if (this->width == 0) this->width = width;
		if (this->height == 0) this->height = height;
		int rate = 50;
		//map.player._generatePosition(width, height);
		cout << map.width << ", " << map.height << ": " << map.tile << " / " << player.character << ": " << player.x << " / " << player.y << " - " << 1000 / rate << endl;

		//char mapBuffer[16];

		char* line = new char[width];
		for (int h = 0; h < height; h++) {
			for (int w = 0; w <= width; w++) {
				if (w == width) {
					line[w] = '\0';
				}
				else {
					if (w == player.x && h == player.y) {
						line[w] = player.character;
					}
					else {
						line[w] = map.tile;
					}
				}
			}
			cout << line << endl;
		}
		Sleep(rate);
		return *this;
	}

	HWND window;
	HWND console;
	PLAYER player;
	CONTROLS controller;
	int running;

*/