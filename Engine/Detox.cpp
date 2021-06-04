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
			type vars[] // for(type j : vars) 
			Consider copylefts
		//
*/
#define DETOX_DEBUGGING	0
#define DETOX_SLOW_MODE	0
#include <Detox.h>
DETOX_MAIN() {
	detox::DETOX game;
	game.version._self(0, 6, 5, 1);
	game._self(16, 8, DETOX_WINDOW_CHARACTERS, 5, 5, 2500.0);
	//game._sweep();
	while (game.played) {
		if (game.started) {
			game._play();
			game._gather();
		}
		else {
			game._menu();
		}
	}
	return 0;
}