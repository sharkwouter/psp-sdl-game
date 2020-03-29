#ifdef PSP
#include <pspkernel.h>
#endif
#include <SDL/SDL.h>

#ifdef PSP
PSP_MODULE_INFO("Wouter SDL", 0, 1, 1);
#endif
int main(int argc, char* args[]) {
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Surface* screen = NULL;
	SDL_Surface* image = NULL;

	screen = SDL_SetVideoMode(480, 272, 32, SDL_SWSURFACE);
	image = SDL_LoadBMP("image.bmp");
	SDL_BlitSurface(image, NULL, screen, NULL);

	SDL_Flip(screen);
	SDL_Delay(2000);
	SDL_Quit();
	return 0;
}
