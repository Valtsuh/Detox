/*
	// Detox
		// Created by Valtsu
		// Copyright © 2021 Jussi Männistö
		// Credits: Microsoft

		// Note to myself
			Clean-up classes ...
			Thread -> process's -> 0,1,2,3,4,5,6,7... (?)
			Version notes by numbers: [].[].[].[] To-do-think
			Version format: v0.0.0.0 -> v1.0.0.0
			input ...

		//
*/
#define DETOX_DEBUGGING 0
#include <Detox.h>
DETOX_MAIN() {
	detox::DETOX game;
	//game.version._self(0, 0, 2, 0);
	game._self(16, 8, DETOX_WINDOW_CHARACTERS, 5, 5, 1000);
	game._sweep();
	while (game.played) {
		game._title();
		if (game.started) {
			game._status();
			game._events();
			game._debug();
			game._render();
			game._gather();
		}
		else {
			game._menu();
		}
	}
	return 0;
}