/*
	// Detox
		// Created by Valtsu
		// Copyright © 2021 Jussi Männistö
		// Credits: Microsoft

		// Note to myself

			Thread -> process's -> 0,1,2,3,4,5,6,7... (?)
			Version notes by numbers: [].[].[].[] To-do-think

		//
*/

#include <Detox.h>
DETOX_MAIN() {
	detox::DETOX game;
	//game.version._self(0, 0, 0, 1);
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