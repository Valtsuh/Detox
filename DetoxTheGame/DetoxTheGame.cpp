/*
	// Detox
		// Created by Valtsu
		// Copyright © 2021 Jussi Männistö
		// Credits: Microsoft
		// Note to myself: Thread -> process's -> 0,1,2,3,4,5,6,7... (?)
*/

#include <engine.h>
DETOX_MAIN() {
	detox::DETOX game;
	game._self(32, 8, DETOX_WINDOW_CHARACTERS, 5, 5, 250);
	//game._self();
	while (game.played) {
		game._status();
		game._events();
		game._render();
		game._gather();
	}
	throw 1;
	return 0;
}


//#include <windows.h>
//#include <iostream>

//using namespace std;
int cW = 11;
int cH = 24;
int charactersWide = 22;
int charactersHigh = 10;
//int width = (charactersWide * cW);// - GetSystemMetrics(SM_CXSIZE);// - GetSystemMetrics(SM_CXVSCROLL) - GetSystemMetrics(SM_CXSIZE);
//int height = (charactersHigh * cH) + cH; // -GetSystemMetrics(SM_CYSIZE);// - GetSystemMetrics(SM_CXHSCROLL) - GetSystemMetrics(SM_CYSIZE);


/*
int main() {
	int areaWidthToRender = 16;
	int areaHeightToRender = 8;
	int counter = 0;
	engine.player = engine.player._self(areaWidthToRender, areaHeightToRender);
	while (engine.running == DETOX_RUN) {
		counter++;
		system("cls");
		cout << "detox.bat ... -> detox.cpp" << ": " << counter << endl;
		//engine._draw(200, 100);
		engine._events();
		engine._render(areaWidthToRender, areaHeightToRender);
		
		//engine.controller.move()
	}
	return 0;
}
*/