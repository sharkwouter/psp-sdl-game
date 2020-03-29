#ifdef PSP
#include <pspkernel.h>
#endif
#include "main.h"
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

#ifdef PSP
PSP_MODULE_INFO("Wouter SDL", 0, 1, 1);
#endif

SDL_Surface* background;
SDL_Surface* screen;
int running = 1;

int main(int argc, char* args[]) {
	Init();

	while (running) {
		Update();
		Draw();
	}

	return Quit();
}

void Init() {
	SDL_Init(SDL_INIT_EVERYTHING);
	screen = SDL_SetVideoMode(480, 272, 32, SDL_SWSURFACE);
	background = SDL_LoadBMP("image.bmp");
}

void Update () {
	ProcessInput();
}

void Draw() {
	SDL_BlitSurface(background, NULL, screen, NULL);
	SDL_Flip(screen);
}

void ProcessInput() {
	return;
}

int Quit() {
	SDL_FreeSurface(background);
	SDL_Quit();
	#ifdef PSP
		sceKernelExitGame();
	#endif
	return 0;
}
