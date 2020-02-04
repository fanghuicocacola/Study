#include "SDL.h"
#include <stdio.h>

int main(int argc, char* argv[]) {

	SDL_Init(SDL_INIT_VIDEO);
	// windows title , pos_x, pos_y, windows_size,windows mod.
	SDL_Window* window = SDL_CreateWindow("abc", 100, 100, 800, 600, SDL_WINDOW_SHOWN);
	SDL_Delay(1000);
	return 0;
}
