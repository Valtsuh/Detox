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

			"Swift as a shuriken", said no one ever.
		//

		// Note to self: 
			// File structure change
			// Array lengths	
				// E: 10047, not supported (AF)
				// E: 10049, invalid address
				// E: 10060, timeout
				// E: 11003, severe error
				// E: 10014, bad address (size)
				// E: 87, parameters
				// E: 10035, (non-blocking) non-fatal, retry
				// E: 10037, already connecting (calling connection on connection)
				// E: 10014, bad address (invalid pointer)
				// E: 10038, socket -> nonsocket ((select)fd-set invalid)
				// E: 10048, address already used (the other)

				// TCP: 22 Shell login
				// TCP: 80 HTTP
				// TCP: 135 Remote access
				// TCP: 143 IMAP (traffic)
			// struct : class -> inheritance
*/


#define DETOX_DEBUGGING	0
#define DETOX_SLOW_MODE	0
//#include "Detox.database.h"
#include "Detox.h"
DETOX_MAIN() {

	detox::DETOX game;
	//b._get(DETOX_DATABASE_GROUND);
	//game._sweep();
	game.version._self(0, 9, 5, 3);
	game._self(DETOX_WINDOW_MODE, DETOX_MENU_OPTIONS_RATE_AVERAGE_VALUE);

	while (game.played) {
		if (game.started) {
			game._play();
			game._gather();
		}
		else {
			game._menu();

		}
	}
	return DETOX_EXIT;
}