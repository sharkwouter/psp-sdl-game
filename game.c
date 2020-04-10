#include "game.h"
#include <stdio.h>

char running = 0;

SDL_Surface* background;
SDL_Surface* screen;

void init(){
    #ifdef PSP
        pspInit(&running);
    #endif
    SDL_Init(SDL_INIT_EVERYTHING);
	screen = SDL_SetVideoMode(480, 272, 32, SDL_HWSURFACE);
	background = SDL_LoadBMP("image.bmp");
    running = 1;
}

void handleEvents(){}
void update(){}

void render(){
    SDL_BlitSurface(background, NULL, screen, NULL);
	SDL_Flip(screen);
}

int quit() {
    SDL_FreeSurface(background);
	SDL_Quit();
	return 0;
}