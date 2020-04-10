#ifdef PSP
#include "psp.h"
PSP_MODULE_INFO("Wouter SDL", 0, 1, 1);
#endif
#include "game.h"

int main(int argc, char* args[]) {
	init();

	while (running) {
		handleEvents();
		update();
		render();
	}

	return quit();
}