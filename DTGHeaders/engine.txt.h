
#define DETOX_NUMBER_TYPE			unsigned char	// 0-255(8) - signed: -127-127(8)
#define DETOX_LAUNCH				1
#define DETOX_MAIN					2
#define DETOX_CHARACTER_CREATION	4
#define DETOX_OPTIONS				8
#define DETOX_MAP					16

typedef DETOX_NUMBER_TYPE BITX;
struct DETOX_ENGINE {
	HWND windowHandle;
	HANDLE outputHandle;
	CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
	COORD cursor;
	COORD window;
	BITX renderType;
	int rendering;

	class DITX { // Note to myself: No idea, what so ever.
		BITX status;
		DITX _self() {
			switch (this->status) {
			default:
				this->status = DETOX_MAIN;
				break;
			case DETOX_MAIN:
				break;
			}
			return *this;
		}
	};
	struct PLAYER {
		int x, y;
		char name;
		char pClass;

	};
	struct MAP {
		char player;
		char tile;
		MAP _self() {
			this->player = '@';
			this->tile = '.';
			return *this;
		}
	};
	class ENVIRONMENT {

	};
	void _render() {
		cout << this->renderType << endl;
		switch (this->renderType) {
		default:
			this->renderType = DETOX_MAP;
			break;
		case DETOX_MAIN:
			break;
		case DETOX_OPTIONS:
			break;
		case DETOX_CHARACTER_CREATION:
			break;
		case DETOX_MAP:
			const int height = 8;
			const int width = 16;
			char line[width];
			this->player.x = rand() % height + 1;
			this->player.y = rand() % width + 1;
			for (int y = 0; y < height; y++) {
				for (int x = 0; x < width; x++) {
					if (x == this->player.x && y == this->player.y) {
						line[x] = this->map.player;
					}
					else {
						line[x] = this->map.tile;
					}
				}
			}

			break;

		}
	}
	DETOX_ENGINE _setWindow(int width, int height, int x, int y) {
		this->windowHandle = GetConsoleWindow();
		SetWindowPos(this->windowHandle, HWND_TOP, x, y, width, height, SWP_SHOWWINDOW);
		this->bufferInfo.dwCursorPosition.X = 0;
		this->bufferInfo.dwCursorPosition.Y = 0;
		SetConsoleScreenBufferSize(this->outputHandle, this->bufferInfo.dwCursorPosition);
		/*
		SMALL_RECT window;
		window.Bottom = height;
		window.Top = y;
		window.Left = x;
		window.Right = width;
		COORD buffer;
		buffer.X = width;
		buffer.Y = height;
		//SetConsoleScreenBufferSize(this->outputHandle, buffer);
		//SetConsoleWindowInfo(this->outputHandle, TRUE, &window);
		//MoveWindow(this->windowHandle, x, y, width + GetSystemMetrics(SM_CYHSCROLL), height + GetSystemMetrics(SM_CXSIZE), FALSE);
		*/
		return *this;
	}
	DETOX_ENGINE _self() {
		this->rendering = 1;

		return *this;
	}
	PLAYER player;
	MAP map;
};
